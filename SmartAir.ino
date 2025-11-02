#include <DHT.h>

// Define pins
#define MQ135_PIN A0        // Gas sensor
#define DUST_SENSOR_PIN A1  // Dust sensor
#define DHT_PIN 2           // DHT11 sensor
#define FAN_PIN 3           // DC fan
#define RED_LED 4
#define GREEN_LED 5

#define DHTTYPE DHT11
DHT dht(DHT_PIN, DHTTYPE);

// Thresholds
int gasThreshold = 300;      // Adjust according to environment
int dustThreshold = 150;     // Adjust according to sensor
float tempThreshold = 30.0;  // Celsius

void setup() {
  Serial.begin(9600);
  pinMode(FAN_PIN, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  dht.begin();
  Serial.println("Smart Air Purifier Initialized");
}

void loop() {
  // Read sensors
  int gasValue = analogRead(MQ135_PIN);
  int dustValue = analogRead(DUST_SENSOR_PIN);
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();

  // Print sensor readings
  Serial.print("Gas: "); Serial.print(gasValue);
  Serial.print("  Dust: "); Serial.print(dustValue);
  Serial.print("  Temp: "); Serial.print(temp);
  Serial.print("  Humidity: "); Serial.println(hum);

  // Decision: turn on fan if any value exceeds threshold
  if (gasValue > gasThreshold || dustValue > dustThreshold || temp > tempThreshold) {
    digitalWrite(FAN_PIN, HIGH);
    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);
  } else {
    digitalWrite(FAN_PIN, LOW);
    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
  }

  delay(2000); // Update every 2 seconds
}
