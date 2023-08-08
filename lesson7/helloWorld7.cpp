#include <iostream>
#include <string> /* needed for getline function that is used on line 15. */

/* cout << (insertion operator)
   cin >> (extraction operator) */

int main(){
  std::string name;
  int age;

  std::cout << "What's your age?: ";
  std::cin >> age; /* this is our character input line where we will input our "age" in terminal. */

  std::cout << "What's your full name?: ";
  std::getline(std::cin >> std::ws, name); /* this is our getline function that requires #include <string> 
                                              When lines 11 and 12 are below lines 14 and 15, you don't need std::ws
                                              std::ws is for white space endlines that now exist because age is in front of full name. */

  std::cout << "Hello " << name << '\n';
  std::cout << "You are " << age << " years old";

  return 0;
}