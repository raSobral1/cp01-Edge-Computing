// Vinheria Agnello - Sistema de Monitoramento de Luminosidade

const int LDR_PIN    = A0;
const int LED_VERDE  = 9;
const int LED_AMAREL = 10;
const int LED_VERM   = 11;
const int BUZZER     = 8;

// Ajuste esses limites conforme a luminosidade do seu ambiente
// Valores de 0 (escuro) a 1023 (muito claro)
const int LIMITE_OK      = 300;  // abaixo disso = OK (ambiente escuro, bom pro vinho)
const int LIMITE_ALERTA  = 600;  // entre 300-600 = alerta
                                  // acima de 600  = problema

unsigned long tempoBuzzer = 0;
bool buzzerAtivo = false;

void setup() {
  pinMode(LED_VERDE,  OUTPUT);
  pinMode(LED_AMAREL, OUTPUT);
  pinMode(LED_VERM,   OUTPUT);
  pinMode(BUZZER,     OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int leitura = analogRead(LDR_PIN);

  Serial.print("Luminosidade: ");
  Serial.println(leitura);

  // Apaga todos os LEDs antes de decidir
  digitalWrite(LED_VERDE,  LOW);
  digitalWrite(LED_AMAREL, LOW);
  digitalWrite(LED_VERM,   LOW);

  if (leitura < LIMITE_OK) {
    // Ambiente OK - luminosidade baixa, ideal para vinho
    digitalWrite(LED_VERDE, HIGH);
    buzzerAtivo = false;
    noTone(BUZZER);

  } else if (leitura < LIMITE_ALERTA) {
    // Nível de alerta
    digitalWrite(LED_AMAREL, HIGH);
    buzzerAtivo = false;
    noTone(BUZZER);

  } else {
    // Problema - luminosidade alta demais!
    digitalWrite(LED_VERM, HIGH);

    // Dispara buzzer por 3 segundos se não estiver ativo
    if (!buzzerAtivo) {
      buzzerAtivo = true;
      tempoBuzzer = millis();
      tone(BUZZER, 1000); // frequência 1000 Hz
    }

    // Para o buzzer após 3 segundos
    if (buzzerAtivo && (millis() - tempoBuzzer >= 3000)) {
      noTone(BUZZER);
      // Aguarda 2s e verifica de novo - se ainda estiver alto, toca novamente
      delay(2000);
      buzzerAtivo = false;
    }
  }

  delay(500); // lê a cada 500ms