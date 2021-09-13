

// include the library code:

int pwm_out_pin = 6;
int pot_in_pin = A0;

int pot_value = 0;

void setup() {
  pinMode(pwm_out_pin, OUTPUT);
  pinMode(pot_in_pin, INPUT);
}

void loop() {
  pot_value = analogRead(pot_in_pin);
  analogWrite(pwm_out_pin, pot_value/5);
  delay(100);
}
