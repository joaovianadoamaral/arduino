#define verde 10
#define amarelo 9
#define vermelho 8

void semaforo(void);
void setup() {
  // put your setup code here, to run once:
  pinMode(verde,OUTPUT);
  pinMode(amarelo,OUTPUT);
  pinMode(vermelho,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    semaforo();
}

void semaforo(void){
  digitalWrite(verde,HIGH);
  delay(2000);
  digitalWrite(verde,LOW);
  digitalWrite(amarelo,HIGH);
  delay(2000);
  digitalWrite(amarelo,LOW);
  digitalWrite(vermelho,HIGH);
  delay(2000);
  digitalWrite(vermelho,LOW);
}
