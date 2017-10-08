#include <iostream>
#include <memory>
#include "spreadsheetcell.hpp"

using namespace std;

int main(int argc, char *argv[])
{
  shared_ptr<SpreadsheetCell> cellArray[3];
  
  cellArray[0] = shared_ptr<SpreadsheetCell>(new StringSpreadsheetCell());
  cellArray[1] = shared_ptr<SpreadsheetCell>(new StringSpreadsheetCell());
  cellArray[2] = shared_ptr<SpreadsheetCell>(new DoubleSpreadsheetCell());
  
  cellArray[0]->set("hello");
  cellArray[1]->set("10");
  cellArray[2]->set("18");
  
  cout << "Array values are ["
       << cellArray[0]->getString() << ","
       << cellArray[1]->getString() << ","
       << cellArray[2]->getString() << "]" << endl;
  
  return 0;
}
