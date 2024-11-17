# 🍃GreenFund

A **GreenFound** é uma iniciativa que conecta pessoas dispostas a contribuir com projetos sustentáveis, visando beneficiar tanto comunidades carentes quanto espaços públicos. A plataforma permite que indivíduos façam pequenas doações para financiar soluções de energia limpa, como a instalação de painéis solares em escolas, a modernização da iluminação pública com tecnologias eficientes e a implementação de sistemas de energia renovável em áreas com pouca infraestrutura.

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

Link do Wokwi:  


## **Video da Apresentação:**
(...).


## **Integrantes:**
RM98163 - Júlia Martins Santana Figueiredo - 2TDSA <br>
RM550562 - Larissa Akemi Iwamoto - 2TDSA <br>
RM550858 - Murilo Ribeiro Valério da Silva - 2TDSA <br>
RM94679 - Vinicios Becker Prediger - 2TDSS <br>
RM98570 - Gabriel Souza de Queiroz - 2TDSS <br>

## 💚Expressões de Gratidão
Gostaríamos de expressar nossa sincera gratidão aos professores que contribuíram para o sucesso deste projeto. A dedicação de todos foi essencial para nosso aprendizado e crescimento. Agradecemos pelo apoio, orientação e esforço compartilhado, que foram fundamentais para superarmos desafios e alcançarmos nossos objetivos.
