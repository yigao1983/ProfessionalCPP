#include <iostream>
#include <stdexcept>

using namespace std;

double divideNumbers(double num, double denom)
{
  if (denom == 0) {
    throw invalid_argument("Denominator cannot be 0");
  }
  
  return num / denom;
}

int main()
{
  try {
    cout << divideNumbers(1, 0) << endl;
  } catch (exception &e) {
    cout << e.what() << endl;
  }
  
  return 0;
}
