void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);//parametros:porta,saida/entrada
  
}

void loop() {
  // put your main code here, to run repeatedly:
  //O codigo abaixo acende por dois segundos e apaga por dois segundos
  digitalWrite(13,HIGH);
  delay(2000);
  digitalWrite(13,LOW);
  delay(1000);
}
