#include <iostream>
#include <memory>
#include "spreadsheetcell.hpp"

using namespace std;

int main(int argc, char *argv[])
{
  shared_ptr<SpreadsheetCell> cellArray[3];
  
  cellArray[0] = shared_ptr<SpreadsheetCell>(new StringSpreadsheetCell());
  cellArray[1] = shared_ptr<SpreadsheetCell>(new StringSpreadsheetCell());
  cellArray[2] = shared_ptr<SpreadsheetCell>(new StringSpreadsheetCell());
  /*
  delete cellArray[2];
  delete cellArray[1];
  delete cellArray[0];
  */
  return 0;
}
