#include <Arduino.h>
#define LED_BUILTIN 13

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  Serial.println("End of loop");
  // put your main code here, to run repeatedly:
}

/**
 * @brief this function add two numbers and return the result
 *
 * @param x number to add
 * @param y number to add
 * @return int result of the addition
 */
int myFunction(int x, int y)
{
  return x + y;
}