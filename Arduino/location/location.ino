#include <TinyGPSPlus.h>



#include <SoftwareSerial.h>


//RX-0 TX-1
SoftwareSerial ss(0, 1);


TinyGPSPlus gps;

void setup() {
  
  Serial.begin(9600);
  ss.begin(9600);

}

void loop() {
  
  while (ss.available() > 0) {
    gps.encode(ss.read());
    
      
      Serial.print("Latitude: ");
      Serial.println(gps.location.lat(), 6);
      Serial.print("Longitude: ");
      Serial.println(gps.location.lng(), 6);
      
    
  }
}
