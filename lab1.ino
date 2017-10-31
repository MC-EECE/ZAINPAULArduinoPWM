const int Pin = A0;
const int MAX_8_INT = 255;
int brightness;
int fade_amount;
int potValue;

void setup()
{
  brightness = 0;
  fade_amount = 1;
  pinMode(52, OUTPUT);
}

void loop()
{
  potValue = analogRead(A0) <<2;
  analogWrite(LED_BUILTIN, potValue);

  //analogWrite(LED_BUILTIN, brightness);
  //analogWrite(Pin, brightness);

  //if(brightness == 0 or brightness == MAX_8_INT)
    //fade_amount -= fade_amount;

  //delay(100);  
}

