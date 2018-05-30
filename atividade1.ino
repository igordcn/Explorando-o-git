void setup() {
  Serial.begin(9600);
}

void loop() {
  int valor = analogRead(A0);
  float valorNovo = (valor/1023.0)*5.0;
  Serial.println(valorNovo);
  delay(100);
}
