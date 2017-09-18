#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
  vector<int> vec(10);
  
  for (unsigned int i = 0; i < vec.size(); ++i) {
    vec.at(i) = i;
  }
  
  for (const int &v : vec) {
    cout << v << endl;
  }
  
  return 0;
}
