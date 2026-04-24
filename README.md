🍷 Adega Inteligente com Arduino






📌 Descrição

Este projeto representa uma adega automatizada, utilizando Arduino para acompanhar a intensidade luminosa do ambiente.

A proposta principal é demonstrar como a automação pode ser utilizada para preservar a qualidade dos vinhos, evitando exposição excessiva à luz.

📖 Explicação do Projeto

O sistema faz uso de um sensor LDR (Light Dependent Resistor) para capturar a intensidade da luz no ambiente.

Com base nessa leitura, o Arduino classifica o nível de luminosidade e aciona LEDs indicadores para sinalizar a condição do ambiente:

🟢 Verde → ambiente ideal

🟡 Amarelo → atenção necessária

🔴 Vermelho → excesso de luz (prejudicial)

⚙️ Componentes Utilizados

🔌 1x Arduino Uno

🌗 1x LDR (sensor de luminosidade)

🔧 1x Resistor 10kΩ (divisor de tensão)

💡 3 LEDs:

🟢 Verde → condição adequada

🟡 Amarelo → alerta

🔴 Vermelho → alta luminosidade

🔩 3x Resistores 220Ω

🧩 Protoboard

🔗 Jumpers



🔌Funcionamento

O LDR altera sua resistência conforme a incidência de luz:

Mais luz → menor resistência
Menos luz → maior resistência

O Arduino interpreta esses valores e define o estado do ambiente:

Condição :                             
	                    
Baixa luz	                         
Luz intermediária	                 
Alta luminosidade	                 

Ação do Sistema :

LED verde
LED amarelo
LED vermelho


🧠 Lógica do Sistema

Leitura analógica do LDR (valores de 0 a 1023)
Processamento com estrutura if/else
Acionamento dos LEDs conforme o nível de luminosidade

🔍 Observação Técnica

Os valores de referência podem ser ajustados diretamente no código para melhorar a precisão, dependendo das condições de iluminação do ambiente.

🎯 Objetivos

Aplicar conceitos básicos de Arduino
Trabalhar com sensores analógicos
Desenvolver lógica condicional
Simular um sistema de automação real

🛠️ Tecnologias Utilizadas

Arduino
Tinkercad
Simulação de circuitos eletrônicos

🔗 Acesse o Projeto

👉 Tinkercad:
    https://www.tinkercad.com/things/e2SUgkQsDt8/editel?sharecode=yyLrS4rdO5L379FuQlKsg0uhaTbbBhY1qFs4p20VgPU


🎬 Vídeo no YouTube:
    https://www.youtube.com/watch?v=h7nl7mWaeWg

👨‍💻 Integrantes

.Rafael Taboada Sobral

.Guilherme Mazzini Nunes Canno

.Luan Schinello Garbin

.Beatriz de Araujo Périgo

🏫 Contexto Acadêmico

Projeto para o Cp1 de Edge Computing e Computer Systems, do professor Lucas Demetrius Augusto.

