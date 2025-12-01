int sensorValue = 0;
int outputValue = 0;
void setup()
{
    pinMode(A0, INPUT);
    pinMode(9, OUTPUT);
    Serial.begin(9600);
}
void loop()
{
    sensorValue = analogRead(A0);
    outputValue = map(sensorValue, 0, 1023, 0, 255);
    analogWrite(9, outputValue);
    Serial.print(&quot; sensor = &quot;);
    Serial.print(sensorValue);
    Serial.print(&quot;\t output = &quot;);
    Serial.println(outputValue);
    delay(2);
}