const int led = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode (led, OUTPUT);
}

void on (){
  digitalWrite(led, HIGH);
}
void off(){
  digitalWrite(led,LOW);
}
void D1(){
  //Delay for a dot
  delay (500);
}
void D2(){
  //Delay for a dash
  delay (1000);
}
void loop() {
  // put your main code here, to run repeatedly:
  //J
  on();D1();off();D1();
  on();D2();off();D1();
  on();D2();off();D1();
  on();D2();off();D2();
  //E
  on();D1();off();D2();
  //R
  on();D1();off();D1();
  on();D2();off();D1();
  on();D1();off();D2();
  //E
  on();D1();off();D2();
  //M
  on();D2();off();D1();
  on();D2();off();D2();
  //I
  on();D1();off();D1();
  on();D1();off();D2();
  //A
  on();D1();off();D1();
  on();D2();off();D2();
  //H
  on();D1();off();D1();
  on();D1();off();D1();
  on();D1();off();D1();
  on();D1();off();D2();
}
