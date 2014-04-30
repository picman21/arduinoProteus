/*
 LED Yakma Ugulaması
 Version: Soru 1
 Yapan: Abbas Atabey
*/

int led=12;

void setup() {
  
  pinMode(led, OUTPUT);
  
}

void loop() {
  
  digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led,LOW);
  delay(500);

}
