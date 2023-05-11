char val;
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop()
{

 while( Serial.available() > 0)
   {
    val = Serial.read();
    Serial.println(val);
   }
 switch(val)
  {
    case 'F': moveForward(); break;
    case 'B': moveBackward(); break;
    case 'R': moveRightward(); break;
    case 'L': moveLeftward(); break;
    case 'S': stop(); break; 
  }
}

void moveForward()
{
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);  
  digitalWrite(4, HIGH);
}

void stop()
{
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);  
  digitalWrite(4, LOW);
}

void moveBackward()
{
  digitalWrite(7,HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);  
  digitalWrite(4, LOW);
}
void moveLeftward()
{
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);  
  digitalWrite(4, LOW);
}
void moveRightward()
{
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);  
  digitalWrite(4, HIGH);
}
