#include "TurnigyProgrammingCard.h"

TPC_settings_t mySettings;

void setup() {
  Serial.begin(115200);  
  Serial.println("TPC_read_init");
  TPC_read_init(&mySettings);
  mySettings.battType = TPC_battType_Li;
  Serial.println("TPC_send_config");
// TPC_send_config(&mySettings);
  Serial.println("Config sent?");
}

void loop() {
}
