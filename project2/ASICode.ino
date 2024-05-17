const int SensorPin = A0;
const int MotorPin = 7;
int SensorVal;

void setup()
{
    pinMode(SensorPin, INPUT);
    pinMode(MotorPin, OUTPUT);
}
void loop()
{
    SensorVal = analogRead(SensorPin);
    while(SensorVal <= 716)
    {
        digitalWrite(MotorPin, HIGH);
        delay(1000);
    }
    else
    {
        digitalWrite(MotorPin, LOW);
        delay(1000);
    }
}