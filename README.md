# 🍃GreenFound

**GreenFound** was created with the goal of encouraging the participation of citizens and companies in sustainable renewable energy initiatives, promoting the transformation of underserved communities and public spaces through accessible donations. The platform offers a simple and transparent way for anyone to contribute to projects aimed at installing clean energy systems, such as solar panels and efficient public lighting, generating a positive impact on the environment and people’s quality of life.

Our mission is to generate a positive impact not only on the environment but also on vulnerable communities, improving quality of life and promoting a more sustainable future. With each donation, users can track the progress of projects, view the results achieved, and accumulate points that can be exchanged for symbolic rewards.

### **Key Features:**

- **Simple Donations:** Quick contributions to support renewable energy projects in underserved communities and public spaces.
- **Goal Tracking:** View the progress and objectives of each project.
- **Points and Rewards System:** Incentives such as digital certificates and updates on the impact generated.
- **Sustainable Impact:** Each donation contributes to CO₂ reduction, energy savings, and social benefits in underprivileged areas and public spaces.

## **IoT Solution Explanation**
GreenFound’s IoT system uses an ESP32 with temperature, humidity, and motion sensors, integrated with an MQTT platform. This system is designed to monitor the environment and optimize sustainable solutions such as efficient public lighting and renewable energy management.

- Environmental Monitoring: The DHT22 sensor collects temperature and humidity data and sends it to an MQTT topic. This information is crucial for understanding local weather conditions, which can affect the performance of solar energy systems.

- Motion Detection: The PIR sensor detects movement in monitored areas and activates an LED when presence is detected. In efficient public lighting systems, this helps activate lights only when necessary, significantly reducing energy consumption.

- Data Publishing via MQTT Server: The code connects to an MQTT broker, sending the following data: temperature and humidity to the topics /Thinkitive/temp and /Thinkitive/hum. This allows GreenFound to remotely monitor environmental conditions and activity in public areas and use that information to adjust systems accordingly.

- Wi-Fi and MQTT Connectivity: Integration with Wi-Fi and MQTT enables the system to operate as part of a broader IoT network, allowing real-time data collection and sharing. This is essential for remote monitoring and control.

- Dashboard: The data collected by the sensors is displayed on a dashboard, enabling: Real-time visualization of environmental conditions (temperature and humidity) Monitoring the impact of sustainable initiatives Remote control, allowing managers to adjust the system to meet community needs.

Through this, the system not only helps save energy and reduce operational costs but also engages the community by providing transparency and data on the impact of the initiatives.

Wokwi Link: https://wokwi.com/projects/414635178238867457

## **Presentation Video:**
https://youtu.be/aXj28I7L_TY

## 💚Words of Gratitude
I would like to express my sincere gratitude to the professors who contributed to the success of this project. Your dedication was essential to my learning and growth. I am thankful for the support, guidance, and shared efforts that were crucial in overcoming challenges and achieving our goals.




</br>
</br>
</br>

# 🍃GreenFound

A **GreenFound** foi criada com o objetivo de incentivar a participação de cidadãos e empresas em iniciativas sustentáveis de energia renovável, promovendo a transformação de comunidades carentes e espaços públicos através de doações acessíveis. A plataforma oferece uma maneira simples e transparente para que qualquer pessoa possa contribuir para projetos que visam a instalação de sistemas de energia limpa, como painéis solares e iluminação pública eficiente, gerando um impacto positivo no meio ambiente e na qualidade de vida das pessoas. 

Nosso objetivo é gerar um impacto positivo, não só no meio ambiente, mas também nas comunidades mais vulneráveis, melhorando a qualidade de vida e promovendo um futuro mais sustentável. A cada doação, os usuários podem acompanhar o progresso dos projetos, visualizar os resultados gerados e acumular pontos que podem ser trocados por recompensas simbólicas.

### **Principais funcionalidades:**

- **Doações Simples:** Contribuições rápidas para apoiar projetos de energia renovável em comunidades carentes e espaços públicos.
- **Acompanhamento de Metas:** Visualização do progresso e metas de cada projeto.
- **Sistema de Pontos e Recompensas:** Incentivos como certificados digitais e atualizações dos impactos gerados.
- **Impacto Sustentável:** Cada doação contribui para a redução de CO₂, economia de energia e benefícios sociais em áreas carentes e no espaço público.


## **Explicação da solução IoT**
O sistema IoT da GreenFound utiliza um ESP32 com sensores de temperatura, umidade e movimento, integrados a uma plataforma MQTT. Esse sistema serve para monitorar o ambiente e otimizar soluções sustentáveis, como iluminação pública eficiente e gestão de energia renovável.

- Monitoramento Ambiental: O sensor DHT22 coleta dados de temperatura e umidade, enviando essas informações para um tópico MQTT. Esses dados são essenciais para entender as condições climáticas locais, o que pode impactar o desempenho de sistemas de energia solar.

- Detecção de Movimento: O sensor PIR detecta movimento em áreas monitoradas, ativando um LED quando há presença detectada. Em sistemas de iluminação pública eficiente, isso é usado para acionar luzes apenas quando necessário, reduzindo significativamente o consumo de energia.

- Publicação de Dados em Servidor MQTT: O código conecta-se a um broker MQTT, enviando os seguintes dados: Temperatura e umidade do ambiente para os tópicos /Thinkitive/temp e /Thinkitive/hum. Isso permite que a GreenFound monitore remotamente as condições ambientais e a atividade em locais públicos, utilizando essas informações para ajustar os sistemas conforme necessário.

- Conexão com Wi-Fi e MQTT: A integração com Wi-Fi e MQTT possibilita que o sistema funcione como parte de uma rede IoT mais ampla, permitindo a coleta e o compartilhamento de dados em tempo real. Isso é essencial para o monitoramento e controle remoto.

- Dashboard: Os dados coletados pelos sensores são exibidos em um painel, possibilitando: Visualização em tempo real das condições ambientais (temperatura, umidade), acompanhamento do impacto das iniciativas sustentáveis e controle remoto, assim permitindo que gestores ajustem o sistema para atender às necessidades da comunidade.

Com isso, esse sistema não apenas ajuda a economizar energia e reduzir custos operacionais, mas também engaja a comunidade ao fornecer transparência e dados sobre o impacto das iniciativas.

Link do Wokwi: https://wokwi.com/projects/414635178238867457


## **Video da Apresentação:**
https://youtu.be/aXj28I7L_TY


## 💚Expressões de Gratidão
Gostaria de expressar sincera gratidão aos professores que contribuíram para o sucesso deste projeto. A dedicação de todos foi essencial para meu aprendizado e crescimento. Agradeço pelo apoio, orientação e esforço compartilhado, que foram fundamentais para superar desafios e alcançar objetivos.
