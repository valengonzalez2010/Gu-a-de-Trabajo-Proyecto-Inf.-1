//led

void setup()
{ 
  //rojo
  pinMode(3, OUTPUT); 
  //magenta
  pinMode(7, OUTPUT); 
  pinMode(8, OUTPUT);
  //cian
  pinMode(9, OUTPUT); 
  pinMode(10, OUTPUT);
  //buzzer
  pinMode(11, OUTPUT);
}

void loop()
{
  analogWrite(3, 255);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  analogWrite(9, 0);
  analogWrite(10, 0);
  delay(1000);
  analogWrite(3, 0);
  
  analogWrite(11, 255);
  delay(100);
  analogWrite(11, 0);
  
  analogWrite(3, 0);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  analogWrite(9, 0);
  analogWrite(10, 0);
  delay(1000);
  analogWrite(3, 0);
  
  analogWrite(11, 255);
  delay(1000);
  analogWrite(11, 0);
    
    
  analogWrite(3, 0);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  analogWrite(9, 100);
  analogWrite(10, 100);
  delay(1000);
  analogWrite(3, 0);
  
  analogWrite(11, 255);
  delay(100);
  analogWrite(11, 0);
}