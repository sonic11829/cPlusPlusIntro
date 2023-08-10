#include <iostream>
#include <cmath>

int main(){

  double a;
  double b;
  double c;

  std::cout << "Enter side A: "; //These 4 lines of code are what allow the user to input a number into the equasion
  std::cin >> a;

  std::cout << "Enter side B: ";
  std::cin >> b;

  // a = pow(a, 2);
  // b = pow(b, 2);
  // c = sqrt(a + b);
  //for the samething but less lines of code...
  c = sqrt(pow(a, 2) + pow(b, 2));

  // std::cout << "side C: " << c;

  return 0;
}

/*                                                  _________
 the hypotenuse of a right angled triangle is c = \/a^2 + b^2   " 'c' = the squareroot of 'a' squared + 'b' squared"
 */