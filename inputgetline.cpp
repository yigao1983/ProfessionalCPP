#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
  string line;
  fstream filestream;
  
  filestream.open("input.txt");
  
  while (getline(filestream, line)) {
    cout << line << endl;
  }
  
  filestream.close();
  
  return 0;
}
