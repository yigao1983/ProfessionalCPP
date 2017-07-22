#include <iostream>

using namespace std;

void mysteryFunction(const string &someString) {
  cout << someString << endl;
}

int main() {
  string myString = "The string";
  mysteryFunction(myString);
  return 0;
}
