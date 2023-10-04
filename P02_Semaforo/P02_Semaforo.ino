// Definir los pines para los LEDs
int pinRojo = 10;
int pinAmarillo = 11;
int pinVerde = 12;

void setup() {
  // Configurar pines como salida
  pinMode(pinRojo, OUTPUT);
  pinMode(pinAmarillo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
}

void loop() {
  // Encender luz roja
  digitalWrite(pinRojo, HIGH);
  delay(2000);  // Esperar 2 segundos

  // Apagar luz roja, encender luz amarilla
  digitalWrite(pinRojo, LOW);
  digitalWrite(pinAmarillo, HIGH);
  delay(1000);  // Esperar 1 segundo

  // Apagar luz amarilla, encender luz verde
  digitalWrite(pinAmarillo, LOW);
  digitalWrite(pinVerde, HIGH);
  delay(2000);  // Esperar 2 segundos

  // Apagar luz verde
  digitalWrite(pinVerde, LOW);
}
