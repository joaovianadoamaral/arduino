//exercicio led rgb e modulo


#define btn 7
#define ledr 3
#define ledg 5
#define ledb 10
#define maximo 7

int btnpress=0;
int btnliberado=0;
int ciclo=0;

//faz a definicoes das cores
void vermelho(){
  digitalWrite(ledr,HIGH);
  digitalWrite(ledg,LOW);
  digitalWrite(ledb,LOW);
}
void azul(){
  digitalWrite(ledr,LOW);
  digitalWrite(ledg,LOW);
  digitalWrite(ledb,HIGH);
}
void verde(){
  digitalWrite(ledr,LOW);
  digitalWrite(ledg,HIGH);
  digitalWrite(ledb,LOW);
}
void magenta(){
  digitalWrite(ledr,HIGH);
  digitalWrite(ledg,HIGH);
  digitalWrite(ledb,LOW);
}
void ciano(){
  digitalWrite(ledr,LOW);
  digitalWrite(ledg,HIGH);
  digitalWrite(ledb,HIGH);
}
void amarelo(){
  digitalWrite(ledr,HIGH);
  digitalWrite(ledg,LOW);
  digitalWrite(ledb,HIGH);
}
//3 high temos a cor branca., era pra ser preto

//muda a cor do led
void muda_estado(){
  if(ciclo==0){
    vermelho();
  }else if(ciclo==1){
    verde();
  }else if(ciclo==2){
    azul();
  }else if(ciclo==3){
    amarelo();
  }else if(ciclo==4){
    ciano();
  }else if(ciclo==5){
    magenta();
  }
  ciclo++;
  //se o ciclo chegou ao maximo ele volta para zero
  if(ciclo > maximo -1){
    ciclo=0;
  }
  
}

//define se o botao foi clicado
void clicado(){
  if(digitalRead(btn)==HIGH){
    btnpress=1;
    btnliberado=0;
  }
  else{
    btnliberado=1;
  }
  if(btnpress==1 && btnliberado==1){
    muda_estado();
    btnpress=0;
    btnliberado=0;
  }
 }


void setup() {
  pinMode(ledr,OUTPUT);
  pinMode(ledg,OUTPUT);
  pinMode(ledb,OUTPUT);
  pinMode(btn,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  clicado();
}
