void setup() {
  pinMode(12, OUTPUT);      // definir pin 12 como salida
}

void loop() {
  digitalWrite(12, HIGH);   // enviar estado alto (1) al pin 12 para encender el led
  delay(1000);              // esperar 1 seg
  digitalWrite(12, LOW);    // enviar estado bajo (0) al pin 12 para apagar el led
  delay(1000);              // esperar 1 seg
} 