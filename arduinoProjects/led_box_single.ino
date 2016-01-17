
int led1 = 9;

const int ledMin = 0;
const int ledMax = 255;
int i;
int j;
int k;

int speed1 = 1;
int speed2 = 20;
int speed3 = 50;
int speed4 = 100;
int speed5 = 200;

void setup() {
  
  pinMode (led1,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  
  off();
  fadeUp();
  fadeDown();
  off();
  fadeUp();
  fadeDown();
  fadeUp();
  fadeDown();
  off();
  strobe();
  strobe();
  strobe();
  

  
  

  
}

void fadeUp(void)  {
  for (i=ledMin; i<=ledMax; i++)  {
    analogWrite (led1, i);
    delay(speed3);
    Serial.print(i);
    Serial.print("\n");
  }
}

void fadeDown(void)  {
  for (i=ledMax; i>=ledMin; i--)  {
    analogWrite (led1, i);
    delay(speed3);
    Serial.print(i);
    Serial.print("\n");
  } 
}

void off(void)  {
  analogWrite(led1, 0);
  delay(7000);
}
  
void strobe(void)  {
    
    for(i=100; i>15; i--)
    {
      analogWrite (led1, 0);
      delay(i);
      analogWrite (led1, 255);
      delay(i);
    }
    for (j=0; j<=200; j++)  {
      analogWrite (led1, 0);
      delay(14);
      analogWrite (led1, 255);
      delay(14);
    }
    for(i=15; i<100; i++)
    {
      analogWrite (led1, 0);
      delay(i);
      analogWrite (led1, 255);
      delay(i);
    }   
  }

