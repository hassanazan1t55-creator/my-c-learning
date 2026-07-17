#include <stdio.h>

// Creating a Union for different types of sensor data
union SensorValue {
  int digital_count;  // 4 bytes
  float temperature;  // 4 bytes
};

int main() {
  union SensorValue sensor;

  // 0 means Digital Data is active, 1 means Temperature Data is active
  int data_type = 0;

  // Storing Digital Count
  sensor.digital_count = 4096;
  data_type = 0;  // Tracking the type

  // Safely printing based on our tracker
  if (data_type == 0) {
    printf("Reading Digital Count: %d\n", sensor.digital_count);
  } else {
    printf("Reading Temperature: %.2f\n", sensor.temperature);
  }

  // Now switching to Temperature
  sensor.temperature = 36.5f;
  data_type = 1;  // Updating the tracker

  if (data_type == 0) {
    printf("Reading Digital Count: %d\n", sensor.digital_count);
  } else {
    printf("Reading Temperature: %.2f\n", sensor.temperature);
  }

  return 0;
}
