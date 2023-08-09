#include <iostream>
#include <cmath>

int main(){

  double x = 3.14;
  double y = 4;
  double z;

  // z = std::max(x, y); // max displays the highest value, in this case 4 because y = 4.
  // z = std::min(x, y); // min displays the lowest value, in this case 3 because x = 3.
  // z = pow(2, 4); // pow or power displays the hights power of the first number using the second number.
                 // In this case it's 2 * 2 * 2 * 2 or 2 to the power of 4 which is equal to 16.
  // z = sqrt(9); // sqrt or square-root displays the square root of the number passed into the parrenthesis.
  // z = abs(-3); // abs or absolute value, if you pass in a negative value you will be given the positive version of that number
  // z = round(x); // round round a number to the closest whole number, in this case it will be 3 because 3.14 is closes to 3.
  z = ceil(x); // ceil or ceiling rounds a number up to the closes whole number, in this case 4.

  std::cout << z;  

  return 0;
}