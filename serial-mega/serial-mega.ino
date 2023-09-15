#define led 13

void setup()
{
    Serial.begin(9600);
    pinMode(led, OUTPUT);
    digitalWrite(led, LOW);
}

void loop()
{
    if (Serial.available() > 0)
    {
        String status = Serial.readString();
        (status == "ON")
            ? digitalWrite(led, HIGH)
            : digitalWrite(led, LOW);
    }
}
