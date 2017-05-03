
int ledpin1=5;
int ledpin2=6;
int ledpin3=7;
int pushButton1=8;
int pushButton2=9;
int pushButton3=10;
int b1=0, b2=0, b3=0;
int brightness = 255;
int fadevalue = 5;

String line, prline;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin1,OUTPUT);
  pinMode(ledpin2,OUTPUT);
  pinMode(ledpin3,OUTPUT);
  pinMode(pushButton1,INPUT);
  pinMode(pushButton2,INPUT);
  pinMode(pushButton3,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println("hello");

  b1=digitalRead(pushButton1);
  b2=digitalRead(pushButton2);
  b3=digitalRead(pushButton3);
  
  if(Serial.available())
    line = String(Serial.readString());

  if(line.equals("activate")){
    if(b1 == HIGH){
      Serial.println("here1 "+b1);
      digitalWrite(ledpin1, HIGH);
      delay(2000);
      Serial.println("1E");
      line = "";
    }
  
    if(b2 == HIGH){
      Serial.println("here2");
      digitalWrite(ledpin2, HIGH);
      delay(2000);
      Serial.println("2E");
      line = "";
    }
  
    if(b3 == HIGH){
      Serial.println("here3");
      //while(fadeLed(ledpin3) > 0){delay(20);}
      digitalWrite(ledpin3, HIGH);
      delay(2000);
      Serial.println("3E");
      line = "";
    }
    //analogWrite(ledpin3, 0);
    digitalWrite(ledpin1, LOW);
    digitalWrite(ledpin2, LOW);
    digitalWrite(ledpin3, LOW);
  }
  
}





