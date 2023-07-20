int echo_pin=10;//초음파센서 echo pin을 12번
int trig_pin=11;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(echo_pin,INPUT);//수신을 하기 때문에 INPUT으로 설정
pinMode(trig_pin,OUTPUT);
}
void loop(){
           float duration, distance;
           digitalWrite(trig_pin,HIGH);//high
           delay(10);//trigger핀이 10동안 발사됨
           digitalWrite(trig_pin,LOW);//low
           duration=pulseIn(echo_pin,HIGH);//duration값을 가지고 옴
           // pulsIn함수는 pulsIn(핀번호, 핀상태)의 형태로 이루어져 있으며 핀 상태가 바뀌면
           //그때까지 경과한 시간을 ms(마이크로 세컨드)단위로 반환시켜줍니다.
           //단위는 마이크로 초입니다.
           //d의 속도는 초당 340미터를 이동하거나, 29마이크로초 당 1센티를 이동합니다 duration=pulsIn(echo_pin,HIGH);

//초음파
//초음파 센서에서는 echo핀이 HIGH였다고 초음파를 받으면서 LOW로 바뀌기 때문에
//pulsIn 함수를 이용해서 초음파가 날아온 시간을 측정할 수 있습니다.
//high였을 때 시간(초음파가 보냈다 다시 들어온 시간)을 가지고 거리를 계산

    distance=(float(duration/20/29.1));//나누기를 하는 이유는 왕복을 하기 때문이다.
    Serial.print(distance);//시리얼 포트를 열어서 거리를 확인한다.
    Serial.print("mm");//cm로 하고 싶으면 '/100'을 해주면 된다.
    delay(3);
}
