# 🍃GreenFund

A **GreenFound** é uma iniciativa que conecta pessoas dispostas a contribuir com projetos sustentáveis, visando beneficiar tanto comunidades carentes quanto espaços públicos. A plataforma permite que indivíduos façam pequenas doações para financiar soluções de energia limpa, como a instalação de painéis solares em escolas, a modernização da iluminação pública com tecnologias eficientes e a implementação de sistemas de energia renovável em áreas com pouca infraestrutura.

Nosso objetivo é gerar um impacto positivo, não só no meio ambiente, mas também nas comunidades mais vulneráveis, melhorando a qualidade de vida e promovendo um futuro mais sustentável. A cada doação, os usuários podem acompanhar o progresso dos projetos, visualizar os resultados gerados e acumular pontos que podem ser trocados por recompensas simbólicas.

### **Principais funcionalidades:**

- **Doações Simples:** Contribuições rápidas para apoiar projetos de energia renovável em comunidades carentes e espaços públicos.
- **Acompanhamento de Metas:** Visualização do progresso e metas de cada projeto.
- **Sistema de Pontos e Recompensas:** Incentivos como certificados digitais e atualizações dos impactos gerados.
- **Impacto Sustentável:** Cada doação contribui para a redução de CO₂, economia de energia e benefícios sociais em áreas carentes e no espaço público.


## **Explicação da solução IoT**
O sistema IoT do GreenFound ajuda a monitorar e otimizar o uso de energia renovável e o controle da iluminação pública. Ele usa sensores e atuadores para coletar dados e ajustar dispositivos, integrando tudo em um dashboard para facilitar o monitoramento e o controle remoto.

- Monitoramento de Eficiência de Energia (Temperatura e Umidade): O sensor DHT22 mede a temperatura e umidade, valores que são publicados no tópico MQTT solar/temperature. Esses dados podem ser visualizados no dashboard, permitindo que administradores monitorem as condições que afetam os painéis solares.

- Controle de Iluminação Pública (LED): O LED simula o controle da iluminação pública. Com comandos MQTT pelo tópico lighting/control, o sistema pode ligar ou desligar a iluminação com base na disponibilidade de energia solar. Esse controle também pode ser visualizado e ajustado pelo dashboard.

- Ajuste Automático dos Painéis Solares (Servo Motor): O servo ajusta a posição dos painéis solares para melhorar a captação de energia com base em um valor simulado de eficiência solar. A posição do servo é atualizada automaticamente e pode ser visualizada no dashboard para verificar o ângulo ideal ao longo do dia.

- Notificações e Indicadores de Eficiência: O código calcula uma eficiência solar simples com base na temperatura (quanto mais próxima de 25 °C, maior a eficiência), e publica esses dados no tópico solar/efficiency. O status do painel solar (ON ou OFF) também é enviado ao dashboard através do tópico solar/status.

A GreenFound usa IoT para monitorar e controlar sistemas de energia solar e iluminação pública. Com a integração ao dashboard, administradores e doadores podem ver o impacto das ações sustentáveis e participar de forma ativa na criação de um ambiente mais sustentável.


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
