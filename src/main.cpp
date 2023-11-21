#include <Arduino.h>

int myFunction(int, int);

void setup()
{
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop()
{
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