#include <iostream>
#include <memory>
#include "spreadsheetcell.hpp"

using namespace std;

int main(int argc, char *argv[])
{
  SpreadsheetCell myCell(6), anotherCell("3.2");
  
  unique_ptr<SpreadsheetCell> cellPtr(new SpreadsheetCell(3));
  
  cellPtr->setValue(3.7);
  
  SpreadsheetCell *cellArr = new SpreadsheetCell[10];
  
  delete[] cellArr;
  
  return 0;
}
