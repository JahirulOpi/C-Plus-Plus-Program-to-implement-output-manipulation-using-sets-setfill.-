#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  cout << "ten" << setw(10) << "" << "fourfour" << endl; //prints ten fourfour with a width of 10 in between
  cout << setfill('-') << setw(80) << "" << endl; //prints 80 dashes
  return 0;
}

