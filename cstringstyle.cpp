#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
  const char text[] = "abcdef";
  
  cout << sizeof(text) << endl;
  cout << strlen(text) << endl;
  
  return 0;
}
