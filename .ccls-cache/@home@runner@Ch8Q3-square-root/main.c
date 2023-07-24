// Function to calculate the Square root of a number

#include <stdio.h>

// Declare Functions
float absoluteValue (float); // Function to calculate the absolute value of a number
float squareRoot (float); // Function to calculate the square root of a number

int main(void) {

  // Calculate square roots
  printf ("squareRoot(2.0) = %f\n", squareRoot(2.0));
  printf ("squareRoot(144.0) = %f\n", squareRoot(144.0));
  printf ("squareRoot(17.5) = %f\n", squareRoot(17.5));

  return 0;
}

// Define Functions

float absoluteValue (float x) {
  if (x < 0)
    x *= -1;

  return x;
}

float squareRoot (float x) {
  const float epsilon = .00001;
  float guess = 1;

  while (absoluteValue (guess * guess - x) >= epsilon) 
    guess = (x / guess + guess) / 2.0;

  return guess;
}