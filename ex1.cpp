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
template <class numero>
// Define function
void check_if_equal(numero &a, numero &b) {
  if (a == b) {
    cout << "Equal" << endl;
  } else {
    cout << "Not Equal" << endl;
  }
}
int main() {
  // define variables
  int x, y;
  float p, q;
  //
  cout << "This program uses a generic template to compare 2 int/float numbers"
       << endl;
  //
  cout << "Type two integer numbers: ";
  cin >> x >> y;
  cout << "The typed integers are: " << "\n";
  check_if_equal(x, y);
  cout << "Type two float numbers: ";
  cin >> p >> q;
  cout << "The typed float are: " << "\n";
  check_if_equal(p, q);
}
