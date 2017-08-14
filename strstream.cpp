#include <iostream>
#include <sstream>
#include "muffin.hpp"

using namespace std;

Muffin createMuffin(istringstream &inStream)
{
  Muffin muffin;
  
  string description;
  int size;
  bool hasChips;
  
  inStream >> description >> size >> boolalpha >> hasChips;
  muffin.setSize(size);
  muffin.setDescription(description);
  muffin.setHasChocolateChips(hasChips);
  
  return muffin;
}

int main(int argc, char *argv[])
{
  ostringstream outStream;
  
  while (cin.good()) {
    string nextToken;
    cout << "Next token: ";
    cin >> nextToken;
    
    if (nextToken == "done") break;
    outStream << nextToken << "\t";
  }
  
  cout << "The end result is " << outStream.str() << endl;
  
  return 0;
}
