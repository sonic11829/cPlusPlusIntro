#include <iostream>

int main(){
  // arithmetic operators = return the result of a specific
  //                        arithmetic operation (+ - * /)
  // parenthisis
  // multiplication & division
  // addition & subtraction

  int students = 20; // if you divide students by 3 you will be given 6 as the decimal will be trunkated to a single integer.
  // double students = 20; // now that students is double, once divided by 3 it will retain the decimal numbers.

  // students = students + 2;
  // students+=2;
  // students++;

  // students = students - 2;
  // students-=2;
  // students--;

  // students = students * 2;
  // students*=2;

  // students = students / 2;
  // students/=2;

  int remainder = students % 3;


  std::cout << remainder;

  return 0;
}