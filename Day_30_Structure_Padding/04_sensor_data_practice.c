#include <stdio.h>

// 1. Normal Structure with zero optimization.
struct NormalSensor {
  char sensor_type;  // 1 byte.
  double reading;    // 8 bytes .
  int status_code;   // 4 bytes.
};

// 2. Fully Packed Structure.
#pragma pack(push, 1)
struct PackedSensor {
  char sensor_type;  // 1 byte.
  double reading;    // 8 bytes.
  int status_code;   // 4 bytes.
};
#pragma pack(pop)

int main() {
  printf("--- Smart Watch Sensor Analysis ---\n\n");

  // Math says total size should be: 1 + 8 + 4 = 13 bytes.

  printf("Size of Normal Sensor struct : %lu bytes\n",sizeof(struct NormalSensor));
  printf("Size of Packed Sensor struct : %lu bytes\n",sizeof(struct PackedSensor));

  return 0;
}
