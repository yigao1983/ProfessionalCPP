#include <iostream>
#include <string>

using namespace std;

int main()
{
  string rstr = R"(Hello "World"\n)";
  
  cout << rstr << endl;
  
  return 0;
}
