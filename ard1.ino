void setup() {
  pinMode(13, OUTPUT);//declaramos el pin 13 como salida

}

void loop() {
  digitalWrite(13,HIGH);//pin 13 (el cual posee un diodo led) encendido
  delay(2000);//retardo de 2000ms para hacer perceptible el parpadeo
  digitalWrite(13,LOW);//pin 13 apagado
  delay(2000);//retardo

}
