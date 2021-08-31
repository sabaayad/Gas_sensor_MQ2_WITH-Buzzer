int buzzer = D2;
int smokeA0 = D1;

// Your threshold value. You might need to change it.
int sensorThres = 600;

void setup() {
 pinMode(buzzer, OUTPUT);
 pinMode(smokeA0, INPUT);
 Serial.begin(115200);
}

void loop() {
 int gasSensor = digitalRead(smokeA0);

 Serial.print("Pin A0_gasSensor=:   ");
 Serial.println(gasSensor);
 // Checks if it has reached the threshold value
 if (gasSensor > sensorThres)
 {
   tone(buzzer, 1000, 200);
 }
 else
 {
   //noTone(buzzer);
    tone(buzzer, 1000, 200);
 }
 delay(1000);
}
