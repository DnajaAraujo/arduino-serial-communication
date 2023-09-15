#define tmp 2000

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.write("ON");
    delay(tmp);
    Serial.write("OFF");
    delay(tmp);
}
