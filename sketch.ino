#include <WiFi.h>  
#include <PubSubClient.h>
#include <DHTesp.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

int led =13;            // LED está conectado ao pino D13 do ESP32
int pirdata =14 ;       // O sensor PIR está conectado ao pino D15
int pirstate =LOW ;     // Assumindo que não há movimento
int value =0;           // Variável para ler o status do pino

const int DHT_PIN = 15;  
DHTesp dht; 
const char* ssid = "Wokwi-GUEST"; // Nome da rede WiFi (SSID)
const char* password = "";        // Senha da rede WiFi
const char* mqtt_server = "test.mosquitto.org"; // URL do servidor MQTT Mosquitto

WiFiClient espClient;
PubSubClient client(espClient);
unsigned long lastMsg = 0;
float temp = 0;
float hum = 0;

void setup_wifi() { 
  delay(10);
  Serial.println();
  Serial.print("Conectando à ");
  Serial.println(ssid);

  WiFi.mode(WIFI_STA); 
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) { 
    delay(500);
    Serial.print(".");
  }

  randomSeed(micros());

  Serial.println("");
  Serial.println("WiFi conectado");
  Serial.println("Endereço IP: ");
  Serial.println(WiFi.localIP());
}
void callback(char* topic, byte* payload, unsigned int length) { 
  Serial.print("Mensagem recebida [");
  Serial.print(topic);
  Serial.print("] ");
  for (int i = 0; i < length; i++) { 
    Serial.print((char)payload[i]);
  }
}
void reconnect() { 
  while (!client.connected()) {
    Serial.print("Tentando conexão MQTT...");
    String clientId = "ESP32Client-";
    clientId += String(random(0xffff), HEX);
    if (client.connect(clientId.c_str())) {
      Serial.println("Conectado");
      client.publish("/ThinkIOT/Publish", "Bem-vindo");
      client.subscribe("/ThinkIOT/Subscribe"); 
    } else {
      Serial.print("Falha, código de erro=");
      Serial.print(client.state());
      Serial.println(" Tentando novamente em 5 segundos");
      delay(5000);
    }
  }
}

void setup() {
  pinMode(led, OUTPUT);      // Configurar o LED como saída
  pinMode(pirdata, INPUT);   // Configurar o sensor PIR como entrada
  lcd.init();
  pinMode(2, OUTPUT);     
  Serial.begin(115200);
  setup_wifi(); 
  client.setServer(mqtt_server, 1883);
  client.setCallback(callback); 
  dht.setup(DHT_PIN, DHTesp::DHT22);
}

void loop() {
  if (!client.connected()) {
    reconnect();
  }
  client.loop();

  value = digitalRead(pirdata);  
  if (value == HIGH) {           
    digitalWrite(led, HIGH);  
    if (pirstate == LOW) {
     
      Serial.println("Movimento detectado!");
      
      pirstate = HIGH;
    }
  } else {
    digitalWrite(led, LOW); 
    if (pirstate == HIGH) {
      
      Serial.println("Movimento encerrado!");
     
      pirstate = LOW;
    }
  }

  unsigned long now = millis();
  if (now - lastMsg > 2000) { // Publicar dados a cada 2 segundos
    lastMsg = now;
    TempAndHumidity  data = dht.getTempAndHumidity();
    lcd.clear();
    String temp = String(data.temperature, 2);
    client.publish("/Thinkitive/temp", temp.c_str()); // Publicar o tópico de temperatura /ThinkIOT/temp
    String hum = String(data.humidity, 1); 
    client.publish("/Thinkitive/hum", hum.c_str());   // Publicar o tópico de umidade /ThinkIOT/hum

    Serial.print("Temperatura: ");
    Serial.println(temp);
    lcd.print("Temperatura:");
    lcd.println(temp);
    Serial.print("Umidade: ");
    Serial.println(hum);
    lcd.setCursor(0,1);
    lcd.print("Umidade:");
    lcd.println(hum);
  }
}
