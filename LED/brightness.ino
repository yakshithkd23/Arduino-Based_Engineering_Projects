//brightness controll
//we are writing in analogally 

int led=12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 pinMode(led,OUTPUT);
}
int brightness=0;
void loop() {
  // put your main code here, to run repeatedly:

  brightness=brightness+1;
  
  Serial.println(brightness);
  analogWrite(led,brightness);
  delay(250);
  if(brightness > 255){
   brightness = 0;
  }
}
