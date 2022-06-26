#define led 4
#define btn 3
//codigo refeito com sucesso
int ac=0;
int lib=0;

void clicado(void);
void mudaestado(void);

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(btn,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  clicado();
}
void clicado(){
  if(digitalRead(btn)==HIGH){
    ac=1;
    lib=0;
  }else{
    lib=1;
  }
  if((ac==1) and (lib==1)){
    mudaestado();
  }
}
void mudaestado(){
  if(digitalRead(led)==HIGH){
    digitalWrite(led,LOW);
    ac=0;
    lib=0;
  }
  else{
    digitalWrite(led,HIGH);
    ac=0;
    lib=0;
  }
}
