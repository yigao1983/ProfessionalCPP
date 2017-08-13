#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
  bool myBool = true;
  cout << "This should be true: " << boolalpha << myBool << endl;
  cout << "This should be 1: " << noboolalpha << myBool << endl;
  double db1 = 1.452;
  cout << "This should be @@1.452: " << setw(7) << setfill('@') << db1 << endl;
  
  return 0;
}
