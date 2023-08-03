#include <iostream>

int main(){
  // The const keyword specifies that a variable's value is constant
  // Tells the compiler to prevent anything from modifying it
  // (read-only)

  const double PI = 3.14159;
  // PI = 420.69; <- This will throw an error due to PI being constant above it. If const is removed then PI will then equal this number.
  double radius = 10;
  double circumference = 2 * PI * radius;
  const int LIGHT_SPEED = 299792458;
  const int WIDTH = 1920;
  const int HEIGHT = 1080;

  std::cout << circumference << "cm";

  return 0;
}