#define led 4
#define btn 3

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(btn,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(btn)==HIGH){
    //se o botão está pressionado,está chegando 5 v na porta 3, ou seja HIGH.
    //vamos acender o led
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
}
