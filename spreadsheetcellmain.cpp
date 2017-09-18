#include <iostream>
#include <memory>
#include "spreadsheetcell.hpp"

using namespace std;

int main(int argc, char *argv[])
{
  SpreadsheetCell myCell, anotherCell;
  myCell.setValue(6);
  anotherCell.setString("3.2");
  
  unique_ptr<SpreadsheetCell> cellPtr(new SpreadsheetCell);
  
  cellPtr->setValue(3.7);
  
  return 0;
}
