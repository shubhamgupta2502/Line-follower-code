int Left_p=2;
int Left_n=3;
int Right_p=4;
int Right_n=5;

void setup()
{
  pinMode(Left_p,OUTPUT);
  pinMode(Left_n,OUTPUT);
  pinMode(Right_p,OUTPUT);
  pinMode(Right_n,OUTPUT);

pinMode(A0, INPUT);
pinMode(A1, INPUT);
pinMode(A2, INPUT);
pinMode(A3, INPUT);
pinMode(A4, INPUT);

}
  

void loop()

{
  int ex_right=analogRead(A0);
  int right=analogRead(A1);
  int centre=analogRead(A2);
  int left=analogRead(A3);
  int ex_left=analogRead(A4);

  if(ex_left<700 && ex_right<700)
  {
     digitalWrite(Left_p,HIGH);
     digitalWrite(Left_n,LOW);
     digitalWrite(Right_p,HIGH);
     digitalWrite(Right_n,LOW);
     
  }
  if(ex_left>700 && ex_right<700)
  {
     digitalWrite(Left_p,HIGH);
     digitalWrite(Left_n,LOW);
     digitalWrite(Right_p,LOW);
     digitalWrite(Right_n,LOW);
  }
  
if(ex_left<700 && ex_right>700)
{
     digitalWrite(Left_p,LOW);
     digitalWrite(Left_n,LOW);
     digitalWrite(Right_p,HIGH);
     digitalWrite(Right_n,LOW);    
}

}
