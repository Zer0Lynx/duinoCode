/*     ----------------
 *     |  Code by me  |
 *     |   Zer0Lynx   |
 *     ----------------
 */

// dec var
int temperaturePin = A0;
int buzzerPin = 9;

void setup()
{
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  pinMode(temperaturePin, INPUT);
}

void loop()
{
  float temp = ((analogRead(A0) * (5.0/1024))-0.5)/0.01;
  Serial.println(temp);
  delay(200);

  // stat buzz
  if(temperature > 29)
  {
    tone(buzzerPin, 1000, 200);
  }
  else
  {
    noTone(buzzerPin);
  }
}
