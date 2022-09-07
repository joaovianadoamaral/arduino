#define D0 16
#define D1 5 // I2C Bus SCL (clock)
#define D2 4 // I2C Bus SDA (dados)
#define D3 0
#define D4 2 // "LED_BUILTIN", com lógica invertida
#define D5 14 // SPI Bus SCK (clock)
#define D6 12 // SPI Bus MISO
#define D7 13 // SPI Bus MOSI
#define D8 15 // SPI Bus SS (CS)
#define D9 3 // RX0 (Serial console)
#define D10 1 // TX0 (Serial console)

#define som 3
#define led 4
#define pino_tasmota 5

void setup() {
  // put your setup code here, to run once:
  pinMode(D5,INPUT);
  pinMode(D6,OUTPUT);
}

void loop() {
  if(digitalRead(D5)==HIGH)
    digitalWrite(D6,HIGH);
   else if(digitalRead(D5)==LOW)
    digitalWrite(D6,LOW);
}
