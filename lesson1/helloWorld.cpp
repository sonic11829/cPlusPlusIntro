#include <iostream>

int main(){
  
  int x = 5;
  int y = 6;
  int sum = x + y;

  //integer (whole number)
  int age = 30;
  int year = 2023;
  int days = 7.5; //number will only be displayed whole and will be trunkated and show 7 instead of 7.5
  int topSpeedMPH = 115;
  int topSpeedKPH = 185;

  //double (number including decimal)
  double price = 10.99;
  double gpa = 2.5;
  double temperature = 25.1;
  double maxMPG = 22.67;
  double maxKPG = 36.483828;

  // single character
  char grade = 'A';
  char initial = 'B';
  char currency = '$';
  char crashRating = '2';
  char performanceRating = '4';

  // boolean (true or false)
  bool student = false;
  bool power = true;
  bool forSale = true;
  bool fun = true;
  bool safe = false;

  // string (objects that represents a sequence of text)
  std::string name = "Seth";
  std::string day = "Friday";
  std::string food = "tacos";
  std::string address = "123 Fake St.";
  std::string car = "Mazda MX-5";

  std::cout << x << '\n';
  std::cout << y << '\n';
  std::cout << sum << '\n';
  std::cout << days << '\n';
  std::cout << price << '\n';
  std::cout << initial << '\n';
  std::cout << name << '\n';
  std::cout << "Hello! My name is " << name << ". I like " << food << ". " << '\n';
  std::cout << "I am " << age << " years old." << '\n';
  std::cout << "I drive a " << car << ". " << '\n';
  std::cout << "It has a top speed of " << topSpeedMPH << " mph and gets roughly " << maxMPG << " miles to the gallon." << '\n';
  std::cout << "Is the " << car << " fun? " << "It's true!" << '\n';

  return 0;
}