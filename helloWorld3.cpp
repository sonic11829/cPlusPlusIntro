#include <iostream>

namespace first{
  int x = 1;
}
namespace second{
  int x = 2;
}

int main(){
  using namespace first; // while using this line of code you do not need to declare first when using x.
  using std::cout;
  using std::string;

  string name = "Bro";

  cout << x << '\n';
  // cout << first::x;  
  cout << second::x << '\n';
  cout << "Hello " << name << '\n';


  return 0;
}