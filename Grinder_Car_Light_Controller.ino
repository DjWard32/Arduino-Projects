const int numBulbs = 8;
const int bulbPins[] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  for (int i = 0; i < numBulbs; i++) {
    pinMode(bulbPins[i], OUTPUT);
  }
}

void loop() {
  // Turn off all bulbs
  for (int i = 0; i < numBulbs; i++) {
    digitalWrite(bulbPins[i], LOW);
  }
  
  // Randomly select a bulb to turn on
  int randomBulb = random(numBulbs);
  digitalWrite(bulbPins[randomBulb], HIGH);
  
  // Wait for a random period of time
  int randomDelay = random(5, 10);  // Adjust the range as desired
  delay(randomDelay);
}
