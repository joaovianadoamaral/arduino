#define led 3
#define maximo 255
#define minimo 0
#define  tmp 100

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
}

void acende(void);
void apaga(void);


void loop() {
  // put your main code here, to run repeatedly:
  //digitgalWrite(led,HIGH); apenas verdadeiro ou falso

  //vamos criar um programa que o led acenda progressivamente e apague progressivamente
  acende();
  apaga();
  
}
void acende(void){
  //acende, sem delay faz mt rapido
  for(int i=minimo;i<maximo;i++){
    analogWrite(led,i);//portas analogicas ou pwm
    delay(tmp);
  }
}
void apaga(void){
    //apaga, sem delay apaga mt rapido.
  for(int i=maximo;i>minimo;i--){
    analogWrite(led,i);//portas analogicas ou pwm
    delay(tmp);
  }
}
