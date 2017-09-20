#ifndef SPREADSHEET_HPP_
#define SPREADSHEET_HPP_

#include "spreadsheetcell.hpp"

class Spreadsheet
{
public:
  Spreadsheet(int inWidth, int inHeight);
  Spreadsheet(const Spreadsheet &src);
  ~Spreadsheet();
  
  const Spreadsheet &operator=(const Spreadsheet &rhs);
  
  void setCellAt(int x, int y, const SpreadsheetCell &cell);
  SpreadsheetCell getCellAt(int x, int y);
  
protected:
  bool inRange(int val, int upper);
  void copyFrom(const Spreadsheet &src);
  
  int mWidth, mHeight;
  SpreadsheetCell **mCells;
};

#endif
