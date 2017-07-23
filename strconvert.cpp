#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str = "2009kasdjflk";
  size_t pos;
  
  int n = stoi(str, &pos, 10);
  
  cout << n << endl;
  cout << str.substr(pos) << endl;
  
  return 0;
}
