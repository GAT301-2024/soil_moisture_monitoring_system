// Define the analog pin for the soil moisture sensor
const int sensor_pin = 13; // Replace with the actual GPIO pin number you are using

void setup() {
  Serial.begin(9600);

  // No need to set pinMode for analog input pins
}

void loop()
{
  // Read the sensor data
  int Sensor_Data = analogRead(sensor_pin);
  int percentageMoisture = map(Sensor_Data, 0, 4095, 0, 100);

  // Print the percentage moisture
  Serial.print("Moisture Percentage: ");
  Serial.print(percentageMoisture);
  Serial.println("%");

  // Check the sensor data and print the corresponding message
  if (percentageMoisture >= 75) 
  
  {
    Serial.println("There is moisture, soil is wet");
    
  }
  
  else if (percentageMoisture >= 50 && percentageMoisture <= 74)
  {
    Serial.println("Moisture is medium");
  }
  
  else if (percentageMoisture < 50) {
    Serial.println("No moisture, soil is dry");
  }

  // Delay for a short period before reading again
  delay(1000);
}
