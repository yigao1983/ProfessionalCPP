#ifndef SPREADSHEETCELL_HPP_
#define SPREADSHEETCELL_HPP_

#include <string>

class SpreadsheetCell {
public:
  SpreadsheetCell() {}
  virtual ~SpreadsheetCell() {}
  
  virtual void set(const std::string &inString) = 0;
  virtual std::string getString() const = 0;
};

class StringSpreadsheetCell : public SpreadsheetCell
{
public:
  StringSpreadsheetCell();
  virtual void set(const std::string &inString);
  virtual std::string getString() const;
protected:
  std::string mValue;
};

class DoubleSpreadsheetCell : public SpreadsheetCell
{
public:
  DoubleSpreadsheetCell();
  virtual void set(double inDouble);
  virtual void set(const std::string &inString);
  virtual std::string getString() const;
protected:
  static std::string doubleToString(double inValue);
  static double stringToDouble(const std::string &inValue);
  double mValue;
};

#endif
