int LDRpin=A0;            // connect LDR to A0
int LEDpin=5;			  // Connect BULB to pin 5
void setup() {
  pinMode(LDRpin, INPUT);
  pinMode(LEDpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int LDRvalue = analogRead(LDRpin);
  Serial.print("LDR value: ");
  Serial.println(LDRvalue);
  if( LDRvalue >= 600){    
    digitalWrite(LEDpin, LOW);
    Serial.println("LIGHTING around, turning LED OFF");
  }
  else{
    digitalWrite(LEDpin, HIGH);
    Serial.println("DARKNESS around, turning LED ON");
  }
}
