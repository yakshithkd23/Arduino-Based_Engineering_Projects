//controlling of led or sensor wit  a  user input 

int led=12;
char input;  // 


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 pinMode(led,OUTPUT);
 Serial.print("enter the 'Y' for to turn on light and 'N' for off the light ");
}

void loop() {
  // put your main code here, to run repeatedly:
  input= Serial.read();
  if(input == 'Y'){

  digitalWrite(led,HIGH);
  }
  if(input == 'N')
  {
  digitalWrite(led,LOW);
}
}
