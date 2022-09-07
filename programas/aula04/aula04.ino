#define verde 10
#define amarelo 9
#define vermelho 8

//deu erro pq coloquei o mesmo nome nos define,cuidado 
void f_vermelho(float tmp);
void f_amarelo(float tmp);
void f_verde(float tmp);

void setup() {
  // put your setup code here, to run once:
  pinMode(verde,OUTPUT);
  pinMode(amarelo,OUTPUT);
  pinMode(vermelho,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    f_vermelho(4);
    f_verde(4);
    f_amarelo(4);
}
void f_vermelho(float tmp){
  digitalWrite(vermelho,HIGH);
  digitalWrite(amarelo,LOW);
  digitalWrite(verde,LOW);
  delay(tmp*1000);
}
void f_amarelo(float tmp){
  digitalWrite(vermelho,LOW);
  digitalWrite(amarelo,HIGH);
  digitalWrite(verde,LOW);
  delay(tmp*1000);
}
void f_verde(float tmp){
  digitalWrite(vermelho,LOW);
  digitalWrite(amarelo,LOW);
  digitalWrite(verde,HIGH);
  delay(tmp*1000);
}
