byte enable_pin = 10;
byte step_pin = 11;
byte direction_pin = 13;

void setup()
{
  pinMode(enable_pin, OUTPUT);
  pinMode(step_pin, OUTPUT);
  pinMode(direction_pin, OUTPUT);
}

void loop()
{
  turn_using_delay(LOW, 2000);
}

void turn_using_delay(bool direction, int step_time) // Direction: CW = LOW, CCW = HIGH.
{
  digitalWrite(enable_pin, LOW);
  digitalWrite(direction_pin, direction);
  digitalWrite(step_pin, HIGH);
  delayMicroseconds(step_time);
  digitalWrite(step_pin, LOW);
  delayMicroseconds(step_time);
  digitalWrite(enable_pin, HIGH);
}
