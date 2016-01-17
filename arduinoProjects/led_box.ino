int led1 = 4;
int led2 = 5;
int led3 = 6;
int led4 = 7;
int led5 = 8;
int led6 = 9;
int led7 = 10;
int led8 = 11;
int led9 = 12;

const int ledMin = 13;
const int ledMax = 255;
int i;
int speed1 = 50;
int speed2 = 5;
int speed3 = 150;
int speed4 = 5;
int speed5 = 200;

void setup() {
  
  pinMode (led1,OUTPUT);
  pinMode (led2,OUTPUT);
  pinMode (led3,OUTPUT);
  pinMode (led4,OUTPUT);
  pinMode (led5,OUTPUT);
  pinMode (led6,OUTPUT);
  pinMode (led7,OUTPUT);
  pinMode (led8,OUTPUT);
  pinMode (led9,OUTPUT);
  
}

void loop() {
  
  center();
  cross();
  x();
  x();
  x();
  xOut();
  centerLong();
  centerBlink();
  clock1();
  clock2();
  centerBlink();
  clock1();
  clock2();
  allFadeShort();
  allFadeShort();
  allFadeLong();
  allMax();
  

  
}

void center(void)  {
  
  for (i=ledMin; i<=ledMax; i++)  {
    analogWrite (led1, ledMin);
    analogWrite (led2, ledMin);
    analogWrite (led3, ledMin);
    analogWrite (led4, ledMin);
    analogWrite (led5, i);
    analogWrite (led6, ledMin);
    analogWrite (led7, ledMin);
    analogWrite (led8, ledMin);
    analogWrite (led9, ledMin);
    delay(speed1);
  }
}

void cross(void)  {
  
  for (i=ledMin; i<=ledMax; i++)  {
    analogWrite (led1, ledMin);
    analogWrite (led2, i);
    analogWrite (led3, ledMin);
    analogWrite (led4, i);
    analogWrite (led5, ledMax);
    analogWrite (led6, i);
    analogWrite (led7, ledMin);
    analogWrite (led8, i);
    analogWrite (led9, ledMin);
    delay(speed1);
  }
  
  for (i=ledMax-1; i>=ledMin; i--)  {
    analogWrite (led1, ledMin);
    analogWrite (led2, i);
    analogWrite (led3, ledMin);
    analogWrite (led4, i);
    analogWrite (led5, i);
    analogWrite (led6, i);
    analogWrite (led7, ledMin);
    analogWrite (led8, i);
    analogWrite (led9, ledMin);
    delay(speed1);
  }
}

void x(void)  {
  
  for (i=ledMin; i<=ledMax; i++)  {
    analogWrite (led1, i);
    analogWrite (led2, ledMin);
    analogWrite (led3, i);
    analogWrite (led4, ledMin);
    analogWrite (led5, i);
    analogWrite (led6, ledMin);
    analogWrite (led7, i);
    analogWrite (led8, ledMin);
    analogWrite (led9, i);
    delay(speed2);
  }
  
  for (i=ledMax-1; i>=ledMin; i--)  {
    analogWrite (led1, i);
    analogWrite (led2, ledMin);
    analogWrite (led3, i);
    analogWrite (led4, ledMin);
    analogWrite (led5, i);
    analogWrite (led6, ledMin);
    analogWrite (led7, i);
    analogWrite (led8, ledMin);
    analogWrite (led9, i);
    delay(speed2);
  }
}

void xOut(void)  {
  
  for (i=ledMin; i<=ledMax; i++)  {
    analogWrite (led1, i);
    analogWrite (led2, ledMin);
    analogWrite (led3, i);
    analogWrite (led4, ledMin);
    analogWrite (led5, i);
    analogWrite (led6, ledMin);
    analogWrite (led7, i);
    analogWrite (led8, ledMin);
    analogWrite (led9, i);
    delay(speed2);
  }
  
  for (i=ledMax-1; i>=ledMin; i--)  {
    analogWrite (led1, i);
    analogWrite (led2, ledMin);
    analogWrite (led3, i);
    analogWrite (led4, ledMin);
    analogWrite (led5, ledMax);
    analogWrite (led6, ledMin);
    analogWrite (led7, i);
    analogWrite (led8, ledMin);
    analogWrite (led9, i);
    delay(speed2);
  }
}

void centerLong(void)  {
  analogWrite (led1, i);
  analogWrite (led2, ledMin);
  analogWrite (led3, i);
  analogWrite (led4, ledMin);
  analogWrite (led5, ledMax);
  analogWrite (led6, ledMin);
  analogWrite (led7, i);
  analogWrite (led8, ledMin);
  analogWrite (led9, i);
  delay(5000);
}

void centerBlink(void)  {
  
  for (i=1; i<=8; i++)  {
    analogWrite (led1, ledMin);
    analogWrite (led2, ledMin);
    analogWrite (led3, ledMin);
    analogWrite (led4, ledMin);
    analogWrite (led5, ledMin);
    analogWrite (led6, ledMin);
    analogWrite (led7, ledMin);
    analogWrite (led8, ledMin);
    analogWrite (led9, ledMin);

    delay(speed3);

    analogWrite (led1, ledMin);
    analogWrite (led2, ledMin);
    analogWrite (led3, ledMin);
    analogWrite (led4, ledMin);
    analogWrite (led5, ledMax);
    analogWrite (led6, ledMin);
    analogWrite (led7, ledMin);
    analogWrite (led8, ledMin);
    analogWrite (led9, ledMin);
    delay(speed3);
  }
}
  
void clock1(void)  {
  
  for (i=1; i<=4; i++)  {
    analogWrite (led1, ledMin);
    analogWrite (led2, ledMax);
    analogWrite (led3, ledMin);
    analogWrite (led4, ledMin);
    analogWrite (led5, ledMax);
    analogWrite (led6, ledMin);
    analogWrite (led7, ledMin);
    analogWrite (led8, ledMin);
    analogWrite (led9, ledMin);

    delay(speed3);
    
    analogWrite (led1, ledMin);
    analogWrite (led2, ledMin);
    analogWrite (led3, ledMin);
    analogWrite (led4, ledMin);
    analogWrite (led5, ledMax);
    analogWrite (led6, ledMax);
    analogWrite (led7, ledMin);
    analogWrite (led8, ledMin);
    analogWrite (led9, ledMin);

    delay(speed3);
    
    analogWrite (led1, ledMin);
    analogWrite (led2, ledMin);
    analogWrite (led3, ledMin);
    analogWrite (led4, ledMin);
    analogWrite (led5, ledMax);
    analogWrite (led6, ledMin);
    analogWrite (led7, ledMin);
    analogWrite (led8, ledMax);
    analogWrite (led9, ledMin);

    delay(speed3);
    
    analogWrite (led1, ledMin);
    analogWrite (led2, ledMax);
    analogWrite (led3, ledMin);
    analogWrite (led4, ledMax);
    analogWrite (led5, ledMax);
    analogWrite (led6, ledMin);
    analogWrite (led7, ledMin);
    analogWrite (led8, ledMin);
    analogWrite (led9, ledMin);

    delay(speed3);

  }
}

void clock2(void)  {
  
  for (i=1; i<=4; i++)  {
    analogWrite (led1, ledMax);
    analogWrite (led2, ledMin);
    analogWrite (led3, ledMin);
    analogWrite (led4, ledMin);
    analogWrite (led5, ledMax);
    analogWrite (led6, ledMin);
    analogWrite (led7, ledMin);
    analogWrite (led8, ledMin);
    analogWrite (led9, ledMin);

    delay(speed3);
    
    analogWrite (led1, ledMin);
    analogWrite (led2, ledMin);
    analogWrite (led3, ledMin);
    analogWrite (led4, ledMin);
    analogWrite (led5, ledMax);
    analogWrite (led6, ledMin);
    analogWrite (led7, ledMax);
    analogWrite (led8, ledMin);
    analogWrite (led9, ledMin);

    delay(speed3);
    
    analogWrite (led1, ledMin);
    analogWrite (led2, ledMin);
    analogWrite (led3, ledMin);
    analogWrite (led4, ledMin);
    analogWrite (led5, ledMax);
    analogWrite (led6, ledMin);
    analogWrite (led7, ledMin);
    analogWrite (led8, ledMin);
    analogWrite (led9, ledMax);

    delay(speed3);
    
    analogWrite (led1, ledMin);
    analogWrite (led2, ledMin);
    analogWrite (led3, ledMax);
    analogWrite (led4, ledMin);
    analogWrite (led5, ledMax);
    analogWrite (led6, ledMin);
    analogWrite (led7, ledMin);
    analogWrite (led8, ledMin);
    analogWrite (led9, ledMin);

    delay(speed3);

  }
}

void allFadeShort(void)  {
  
  for (i=ledMin; i<=ledMax; i++)  {
    analogWrite (led1, i);
    analogWrite (led2, i);
    analogWrite (led3, i);
    analogWrite (led4, i);
    analogWrite (led5, i);
    analogWrite (led6, i);
    analogWrite (led7, i);
    analogWrite (led8, i);
    analogWrite (led9, i);
    delay(speed2);
  }
  
  for (i=ledMax; i>=ledMin; i--)  {
    analogWrite (led1, i);
    analogWrite (led2, i);
    analogWrite (led3, i);
    analogWrite (led4, i);
    analogWrite (led5, i);
    analogWrite (led6, i);
    analogWrite (led7, i);
    analogWrite (led8, i);
    analogWrite (led9, i);
    delay(speed2);
  }
}

void allFadeLong(void)  {
  
  for (i=ledMin; i<=ledMax; i++)  {
    analogWrite (led1, i);
    analogWrite (led2, i);
    analogWrite (led3, i);
    analogWrite (led4, i);
    analogWrite (led5, i);
    analogWrite (led6, i);
    analogWrite (led7, i);
    analogWrite (led8, i);
    analogWrite (led9, i);
    delay(speed1);
  }
}

  
void allMax(void)  {
  
    analogWrite (led1, ledMax);
    analogWrite (led2, ledMax);
    analogWrite (led3, ledMax);
    analogWrite (led4, ledMax);
    analogWrite (led5, ledMax);
    analogWrite (led6, ledMax);
    analogWrite (led7, ledMax);
    analogWrite (led8, ledMax);
    analogWrite (led9, ledMax);
    delay(15000);
}
  
  
