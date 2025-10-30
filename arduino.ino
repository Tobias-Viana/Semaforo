// Definição dos pinos
int ledVermelho = 2;
int ledAmarelo  = 4;
int ledVerde    = 8;

// Ponteiros para os LEDs
int* ptrVermelho = &ledVermelho;
int* ptrAmarelo  = &ledAmarelo;
int* ptrVerde    = &ledVerde;

// Função genérica para acender um LED
void acendeLed(int* led, unsigned long tempo) {
  digitalWrite(*led, HIGH);
  delay(tempo);
  digitalWrite(*led, LOW);
}

// Função para piscar LED amarelo
void piscaAmarelo(int* led, int vezes, unsigned long intervalo) {
  for (int i = 0; i < vezes; i++) {
    digitalWrite(*led, HIGH);
    delay(intervalo);
    digitalWrite(*led, LOW);
    delay(intervalo);
  }
}

void setup() {
  pinMode(*ptrVermelho, OUTPUT);
  pinMode(*ptrAmarelo, OUTPUT);
  pinMode(*ptrVerde, OUTPUT);
}

void loop() {
  // Vermelho - 6 segundos
  acendeLed(ptrVermelho, 6000);

  // Verde - 4 segundos
  acendeLed(ptrVerde, 4000);

   // Amarelo permanece aceso por 2 segundos
  acendeLed(ptrAmarelo, 2000);

  // Amarelo - pisca 3 vezes (300 ms cada piscada)
  piscaAmarelo(ptrAmarelo, 3, 300);
}
