int ledPin = 3;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  Serial.println(“hello”);
  digitalWrite(ledPin, HIGH);  
  delay(1000);                      
  digitalWrite(ledPin, LOW);   
  delay(1000);                      
}