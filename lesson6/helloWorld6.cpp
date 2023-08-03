#include <iostream>

int main(){
  /* type conversion = conversion a value of one data type to another
          Implicit = automatic
          Explicit = Precede value with new data type (int) */

  // int x = 3.14;  when displayed shows 3 because it is stored into an integer
  // double x = 3.14; when displayed shows 3.14 because it is stored as a double
  double x = (int) 3.14; // when displayed shows 3 because 3.14 is made an integer then stored as a double

  std::cout << x;

  return 0;
}