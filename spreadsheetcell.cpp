#include "spreadsheetcell.hpp"
#include <iostream>
#include <sstream>

using namespace std;

StringSpreadsheetCell::StringSpreadsheetCell() : mValue("#NOVALUE")
{}

void StringSpreadsheetCell::set(const string &inString)
{ mValue = inString; }

string StringSpreadsheetCell::getString() const
{ return mValue; }

DoubleSpreadsheetCell::DoubleSpreadsheetCell() : mValue(0)
{}

void DoubleSpreadsheetCell::set(double inDouble)
{ mValue = inDouble; }

void DoubleSpreadsheetCell::set(const string &inString)
{ mValue = stringToDouble(inString); }

string DoubleSpreadsheetCell::getString() const
{ return doubleToString(mValue); }

string DoubleSpreadsheetCell::doubleToString(double inDouble)
{
  ostringstream ostr;
  
  ostr << inDouble;
  
  return ostr.str();
}

double DoubleSpreadsheetCell::stringToDouble(const string &inString)
{
  double temp;
  istringstream istr(inString);
  
  istr >> temp;
  if (istr.fail() || !istr.eof()) {
    return 0;
  }
  
  return temp;
}
