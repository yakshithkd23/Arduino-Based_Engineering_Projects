//ldr based smart lamp
/*realay module to run high voltage device with help of microcontroller we need 
 intermdiate device called realy*/
/* when a light is turn off in room ldr will detect the absence of light then it will
turn on the lamp help of relay module*/


int ldr=A0;
int value=0;
int relay1=12;
 
 void setup(){
  Serial.begin(9600);
  pinMode(relay1,OUTPUT);

 }

 void loop()
 {
  value=analogRead(ldr);
  Serial.println("LDR Value is :");
  Serial.println("value");
  if(value<100)
  {
    digitalWrite(relay1,LOW);

  }
  else
  {
    digitalWrite(relay1,HIGH);
  }
 }
