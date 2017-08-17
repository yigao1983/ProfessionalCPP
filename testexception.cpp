#include <iostream>
#include <stdexcept>

using namespace std;

int divideSafely(int num, int den)
{
  if (den == 0) {
    throw invalid_argument("Divided by zero");
  }
  
  return num / den;
}

int main(int argc, char *argv[])
{
  try {
    cout << divideSafely(5, 2) << endl;
    cout << divideSafely(10, 0) << endl;
    cout << divideSafely(3, 3) << endl;
  } catch (invalid_argument &e) {
    
  }
  
  return 0;
}
