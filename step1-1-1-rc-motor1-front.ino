int A =2;
int B =3;
int C=11;

 void setup(){ 
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  analogWrite(C, 100);//모터속도를 정해준다.
 }
void loop(){
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  delay(1000);
}
