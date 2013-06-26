const int SONAR = 2;

char numStr[8], currStr[8];
long pulse, inches;

void setup() {
  Serial1.begin(9600);
  pinMode(SONAR, INPUT);
}

void loop() {
  pulse = pulseIn(SONAR, HIGH);
  inches = pulse/147;
  itoa(inches, numStr, 10);
  strcat(numStr, "\n");
  Serial1.write(numStr);
  delay(100);
}
