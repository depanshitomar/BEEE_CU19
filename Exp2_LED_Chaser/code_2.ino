void setup() {
 for(int i=1 ;i<5;i++)
 {
  pinMode(i,OUTPUT);
 }

}
void ALO()
{
  for(int i=1 ;i<5 ;i++)
  {
    digitalWrite(i,LOW);
  }
}

void loop() {
  for(int i=1 ;i<5 ;i++)
  {
    if(i!=4)
    {
      digitalWrite(i,HIGH);
      digitalWrite(i+1,HIGH);
      delay(500);
      ALO();
      delay(500);
    }
    else
    {
      digitalWrite(i,HIGH);
      digitalWrite(i-3,HIGH);
      delay(500);
      ALO();
      delay(500);
    }
  }
 

}
