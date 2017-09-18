#include <iostream>
#include "spreadsheetcell.hpp"

using namespace std;

int main(int argc, char *argv[])
{
  SpreadsheetCell myCell, anotherCell;
  myCell.setValue(6);
  anotherCell.setString("3.2");
  
  return 0;
}
