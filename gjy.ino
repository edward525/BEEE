const int buttonPin=2;



int buttonPushCounter=0;
int buttonState=0;
int lastButtonState=0;

void setup() 
{
 pinMode(buttonPin,INPUT);
 pinMode(13,OUTPUT);pinMode(12,OUTPUT);pinMode(11,OUTPUT);
 pinMode(9,OUTPUT);pinMode(10,OUTPUT);
 Serial.begin(9600);// put your setup code here, to run once:
 digitalWrite(13,LOW);
 digitalWrite(12,LOW);digitalWrite(11,LOW);
 digitalWrite(10,LOW);digitalWrite(9,LOW);
}

void loop() 
{
 buttonState=digitalRead(buttonPin);
 if(buttonState!= lastButtonState)
 {
  if(buttonState==HIGH)
  {
    buttonPushCounter++;
    //Serial.println("on");
    //Serial.print("number of button pushes:");// put your main code here, to run repeatedly:
  Serial.println(buttonPushCounter);
  }
  else{
   // Serial.println("off");
  }
  delay(5);
 }
lastButtonState=buttonState;

if(buttonPushCounter>=15)
{
  digitalWrite(9,HIGH);
}

if(buttonPushCounter>=30)
{
  digitalWrite(10,HIGH);
}
if(buttonPushCounter>=45)
{
  digitalWrite(11,HIGH);
}
if(buttonPushCounter>=60)
{
  digitalWrite(12,HIGH);
}
if(buttonPushCounter>=75)
{
  digitalWrite(13,HIGH);
}
}
