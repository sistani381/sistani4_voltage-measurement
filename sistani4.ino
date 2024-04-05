
void setup() {
  Serial.begin(9600);
}

void loop() {
 float voltage = analogRead(A0);// reads the value of A0 
float voltage1 =voltage*5/1023;//converts the value of voltage from 0-1023 to 0-5 volts
  
  Serial.print("voltage = ");//write "voltage =" in the serial monitor
  Serial.println(voltage1);// show the value of voltage 1 in the serial monitor
  delay(1000);// waits for 1 second

}
