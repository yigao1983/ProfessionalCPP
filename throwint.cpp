#include <iostream>
#include <stdexcept>

using namespace std;

void throwInt()
{ throw 5; }

int main(int argc, char *argv[])
{
  try {
    throwInt();
  } catch (int &e) {
    cout << e << endl;
  }
  
  return 0;
}
