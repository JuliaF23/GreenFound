# 🍃GreenFund

A **GreenFound** é uma iniciativa que conecta pessoas dispostas a contribuir com projetos sustentáveis, visando beneficiar tanto comunidades carentes quanto espaços públicos. A plataforma permite que indivíduos façam pequenas doações para financiar soluções de energia limpa, como a instalação de painéis solares em escolas, a modernização da iluminação pública com tecnologias eficientes e a implementação de sistemas de energia renovável em áreas com pouca infraestrutura.

Nosso objetivo é gerar um impacto positivo, não só no meio ambiente, mas também nas comunidades mais vulneráveis, melhorando a qualidade de vida e promovendo um futuro mais sustentável. A cada doação, os usuários podem acompanhar o progresso dos projetos, visualizar os resultados gerados e acumular pontos que podem ser trocados por recompensas simbólicas.

### **Principais funcionalidades:**

- **Doações Simples:** Contribuições rápidas para apoiar projetos de energia renovável em comunidades carentes e espaços públicos.
- **Acompanhamento de Metas:** Visualização do progresso e metas de cada projeto.
- **Sistema de Pontos e Recompensas:** Incentivos como certificados digitais e atualizações dos impactos gerados.
- **Impacto Sustentável:** Cada doação contribui para a redução de CO₂, economia de energia e benefícios sociais em áreas carentes e no espaço público.


## **Explicação da solução IoT**
O sistema IoT da GreenFound tem um ESP32 que utiliza um sensor PIR (sensor de movimento) e publica informações sobre a detecção de movimento em um tópico MQTT. Isso é útil, pois permite monitorar a presença de pessoas em um ambiente, o que é relevante para sistemas de iluminação pública eficiente e outras soluções de energia limpa.

- Monitoramento de Movimento: O sensor PIR detecta movimento em uma área monitorada e ativa uma saída (LED neste caso) quando o movimento é detectado. Em um contexto de iluminação pública sustentável, esse recurso é usado para acionar a iluminação apenas quando necessário, economizando energia e promovendo eficiência.

- Publicação de Dados em Servidor MQTT: O código conecta-se a um broker MQTT e publica uma mensagem a cada 15 segundos com o status de movimento. Esse sistema compartilha dados em tempo real com uma plataforma de gerenciamento, assim permitindo que a GreenFound monitore remotamente o uso e a necessidade de energia em diferentes locais.

- Conexão com Wi-Fi e MQTT: A conexão com Wi-Fi e a funcionalidade MQTT facilitam a integração do sistema a uma rede de sensores e dispositivos conectados. Isso permite que múltiplos sensores ou dispositivos sejam integrados para fornecer dados sobre consumo, uso de energia e presença em várias áreas.

- Dashboard:  Os dados dos sensores são exibidos em um painel que mostra em tempo real o impacto das iniciativas da GreenFound, além de os dados de detecção de movimento e uso de iluminação serem cruzados com informações de consumo de energia para otimizar o uso de energia. E há um controle remoto dos dispositivos conectados, para assim ajustar o sistema conforme as necessidades e condições locais.

Com isso, esse sistema é um ponto de partida para um projeto de cidade inteligente, no qual a GreenFound pode não apenas monitorar o uso de recursos, mas também ajustar a operação de forma a maximizar a eficiência energética.

Link do Wokwi: https://wokwi.com/projects/414481474335712257

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
