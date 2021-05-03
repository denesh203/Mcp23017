#include <MCP23017.h>
#define MCP23017_I2C_ADDRESS 0x20  // I2C address of the MCP23017 IC


const uint8_t led0 = 8;      
const uint8_t led1 = 0; 
MCP23017 mcp23017 = MCP23017(MCP23017_I2C_ADDRESS);
void setup() {
  // put your setup code here, to run once:
 Wire.begin(0x20); 
  mcp23017.init();
   // Configure output pins
   mcp23017.pinMode(led0, OUTPUT);
   mcp23017.pinMode(led1, OUTPUT);
}
void loop() {
mcp23017.digitalWrite(led0,HIGH);
delay(100);
mcp23017.digitalWrite(led0,LOW);
delay(100);
mcp23017.digitalWrite(led1,HIGH);
delay(100);
mcp23017.digitalWrite(led1,LOW);
delay(100);
}
