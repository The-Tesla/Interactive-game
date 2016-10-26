#include "Arduino.h"


void json_message(int solar,int air,int water,int earth) {
  // Memory pool for JSON object tree.
  //
  // Inside the brackets, 200 is the size of the pool in bytes.
  // If the JSON object is more complex, you need to increase that value.
  StaticJsonBuffer<200> jsonBuffer;

  // Create the root of the object tree.
  //
  // It's a reference to the JsonObject, the actual bytes are inside the
  // JsonBuffer with all the other nodes of the object tree.
  // Memory is freed when jsonBuffer goes out of scope.
  JsonObject& element = jsonBuffer.createObject();

  // Add values in the object

  element["solar"] = solar;
  element["air"] = air;
  element["water"] = water;
  element["earth"] = earth;


  element.printTo(Serial);
  // This prints:
  // {"sensor":"gps","time":1351824120,"data":[48.756080,2.302038]}

  Serial.println();

  //root.prettyPrintTo(Serial);
  //// This prints:
  //// {
  ////   "sensor": "gps",
  ////   "time": 1351824120,
  ////   "data": [
  ////     48.756080,
  ////     2.302038
  ////   ]
  //// }
}
