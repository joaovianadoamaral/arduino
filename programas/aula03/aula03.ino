//variaveis globais
int led=10;


void setup() {
  // put your setup code here, to run once:
  //vamos mandar um sinal de saida para um led na porta 10
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //fazer o led piscar
  digitalWrite(led,HIGH);
  delay(2000);
  digitalWrite(led,LOW);
  delay(2000);
}
