#include <IRremote.h>
int RECV_PIN = 5;
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
}


void loop() {
  if (irrecv.decode( & results)) {
Serial.println(results.value);
if(results.value == 22 or results.value == 2070){
  Serial.println("alevetkin");
}
    irrecv.resume();
  }
}
