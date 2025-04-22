// Program Purpose:Exercise 1, Template Function that takes 2 numeric value to
// see if they are equal Author: Last Modified:14/04/2025
//
//**********************************************************************************
// #include <cmath>
// #include <cstdlib>
#include <iostream>
// #include <string>
// #include <vector>
// #include <iomanip>
// #include <ctime>
// #include <fstream>
// #include <iostream>
using namespace std;
// Define function Template
template <class d_value>
// Define function
void any_data(d_value a) {
  cout << "The value of the data is: " << a << endl;
}
int main() {
  // test the template with different data types
  any_data(10);
  any_data(1.1);
  any_data(1.123456);
  any_data("char");
  any_data("a looooong string");
}
