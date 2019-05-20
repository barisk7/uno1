
float f=500;
float T;
float Td;
void setup() {
  // put your setup code here, to run once:
pinMode (13, OUTPUT);
T=1/f;
Td=T/2;


}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (13, HIGH);
delayMicroseconds (500);
digitalWrite (13 , LOW );
delayMicroseconds (500);
}
