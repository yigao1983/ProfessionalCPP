#include "spreadsheet.hpp"

Spreadsheet::Spreadsheet(int inWidth, int inHeight) :
  mWidth(inWidth), mHeight(inHeight)
{
  mCells = new SpreadsheetCell *[mWidth];

  for (int i = 0; i < mWidth; ++i) {
    mCells[i] = new SpreadsheetCell[mHeight];
  }
}

Spreadsheet::Spreadsheet(const Spreadsheet &src)
{
  copyFrom(src);
}

Spreadsheet::~Spreadsheet()
{
  for (int i = 0; i < mWidth; ++i) {
    delete[] mCells[i];
  }
  
  delete[] mCells;
}

const Spreadsheet &Spreadsheet::operator=(const Spreadsheet &rhs)
{
  if (this == &rhs) {
    return *this;
  }
  
  for (int i = 0; i < mWidth; ++i) {
    delete[] mCells[i];
  }
  
  delete[] mCells;
  
  copyFrom(rhs);
  
  return *this;
}

void Spreadsheet::setCellAt(int x, int y, const SpreadsheetCell &cell)
{
  if (!inRange(x, mWidth) || !inRange(y, mHeight)) {
    return;
  }

  mCells[x][y] = cell;
}

SpreadsheetCell Spreadsheet::getCellAt(int x, int y)
{
  SpreadsheetCell empty;

  if (!inRange(x, mWidth) || !inRange(y, mHeight)) {
    return empty;
  }
  
  return mCells[x][y];
}

void Spreadsheet::copyFrom(const Spreadsheet &src)
{
  mWidth = src.mWidth;
  mHeight = src.mHeight;
  
  mCells = new SpreadsheetCell *[mWidth];
  
  for (int i = 0; i < mWidth; ++i) {
    mCells[i] = new SpreadsheetCell[mHeight];
    for (int j = 0; j < mHeight; ++j) {
      mCells[i][j] = src.mCells[i][j];
    }
  }
}

bool Spreadsheet::inRange(int val, int upper)
{
  return val < upper;
}
