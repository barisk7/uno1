double y,ye,x;
double a=1.0;

void setup() {
  // put your setup code here, to run once:
Serial.begin (115200);
pinMode (A0,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
ye=y;
x=analogRead (A0)*(5.0/1023.0);
y=a*x+(1-a)*ye;
Serial.println (y);
delay(1);
}
