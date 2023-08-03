#include <iostream>

int main(){
  /* type conversion = conversion a value of one data type to another
          Implicit = automatic
          Explicit = Precede value with new data type (int) */

  // int x = 3.14;  when displayed shows 3 because it is stored into an integer
  // double x = 3.14; when displayed shows 3.14 because it is stored as a double
  // double x = (int) 3.14; when displayed shows 3 because 3.14 is made an integer then stored as a double
  // std::cout << x;

  // char x = 100;

  // std::cout << x; // will show d from the ASCII Table
  // std::cout << (char)100;

  int correct = 8; // example of implicit cause I am Implicitly making correct an intiger
  int questions = 10; // example of implicit
  double score = correct/(double)questions * 100; // questions is being used "explicitly" as double because without 
  // double it would be 8 / 10 which is 0.8, so it would be trunkated to 0, then multiplied by 100 whit is 0

  std::cout << score << "%";

  return 0;
}