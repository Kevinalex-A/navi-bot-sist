#include <DeneyapKartQRCodeReader.h>

DKQRCodeReader reader;

void onQrCodeTask(void *pvParameters) {
  struct QRCodeData qrCodeData;

  while (true) {
    if (reader.receiveQrCode(&qrCodeData, 100)) {
      Serial.println("Found QRCode");
      if (qrCodeData.valid) {
        Serial.print("Payload: ");
        Serial.println((const char *)qrCodeData.payload);
      }
      else {
        Serial.print("Invalid: ");
        Serial.println((const char *)qrCodeData.payload);
      }
    }
    vTaskDelay(100 / portTICK_PERIOD_MS);
  }
}

void setup() {
  Serial.begin(115200);
  delay(1000);  // Give serial time to initialize
  
  // Initialize the reader (void version)
  reader.begin(); 
  Serial.println("QRCode Reader Initialized");
  
  // Start QR code reading task
  xTaskCreate(
    onQrCodeTask, 
    "qrCodeTask", 
    4096,  // Stack size
    NULL, 
    4,     // Priority
    NULL
  );
}

void loop() {
  delay(100);
}