#include <dht11.h>
int smokepin = A1;
int soilpin = A3;
int dht11pin = 2;
int smoke;
int soil;
int chk;
int temp;
int hum;
dht11 DHT11;
void setup() {
  pinMode(smokepin, INPUT);
  pinMode(soilpin, INPUT);
  pinMode(dht11pin, INPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  smoke = analogRead(smokepin);
  soil = analogRead(soilpin); 
  chk = DHT11.read(dht11pin);
  temp=DHT11.temperature;
  hum=DHT11.humidity;
  Serial.print(temp);
  Serial.print("|");
  Serial.print(hum);
  Serial.print("|");
  Serial.print(soil);
  Serial.print("|");
  Serial.println(smoke);
  delay(30000);
  // put your main code here, to run repeatedly:
}
