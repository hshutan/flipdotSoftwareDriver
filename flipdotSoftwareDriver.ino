#include "Modbus_CoProcessor.h"

int statusLed = 13; // LED used for status

mcp mcp(19200); // Prepare object, set serial baud to 19200

void setup() {
  pinMode(statusLed, OUTPUT);

  delay(1000);
  digitalWrite(statusLed, HIGH);
  mcp.InitSign();
  digitalWrite(statusLed, LOW);

  delay(5000);
  digitalWrite(statusLed, HIGH);
  mcp.dotOn(0, 0);
  mcp.dotOn(1, 1);
  mcp.dotOn(2, 2);
  mcp.dotOn(3, 3);
  mcp.dotOn(4, 4);
  mcp.dotOn(5, 5);
  mcp.dotOn(6, 6);
  mcp.dotOn(7, 7);
  mcp.dotOn(8, 8);
  mcp.dotOn(9, 9);
  mcp.dotOn(10, 10);
  mcp.dotOn(11, 11);
  mcp.dotOn(12, 12);
  mcp.dotOn(13, 13);
  mcp.dotOn(14, 14);
  mcp.dotOn(15, 15);
  digitalWrite(statusLed, LOW);

  digitalWrite(statusLed, HIGH);
  mcp.UpdateSign();
  digitalWrite(statusLed, LOW);


  delay(5000);
  // mcp.CloseSign(); // The sign generally needs to be rebooted after this command.
  delay(100);

}// close for setup

void loop() {
  // Flash LED to indicate program is finished.
  digitalWrite(statusLed, HIGH);
  delay(50);
  digitalWrite(statusLed, LOW);
  delay(50);
}
