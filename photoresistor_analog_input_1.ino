int sensorValue = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);

  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  // read the value from the sensor
  sensorValue = analogRead(A0);
  // print the sensor reading so you know its range
  Serial.println(sensorValue);
  // map the sensor reading to a range for the LED
  if(sensorValue >=650)
  {
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
  }
  else
  {
    digitalWrite(9,HIGH);
    delay(1000);
  }    
}