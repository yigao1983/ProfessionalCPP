#include <iostream>

using namespace std;

class Top
{
public:
  Top()
  { cout << "Top created." << endl; }
  virtual ~Top()
  {}
};

class Left : public virtual Top
{
public:
  Left()
  { cout << "Left created." << endl; }
  virtual ~Left()
  {}
};

class Right : public virtual Top
{
public:
  Right()
  { cout << "Right created." << endl; }
  virtual ~Right()
  {}
};

class LowerLeft : public Left
{
public:
  LowerLeft() : Left(), Top()
  { cout << "LowerLeft created." << endl; }
  virtual ~LowerLeft()
  {}
};

class LowerRight : public Right
{
public:
  LowerRight() : Right(), Top()
  { cout << "LowerRight created." << endl; }
  virtual ~LowerRight()
  {}
};

class Merge : public LowerLeft, public LowerRight
{
public:
  Merge() : LowerLeft(), LowerRight(), Top()
  { cout << "Merge created." << endl; }
};

int main()
{
  cout << "===" << endl;
  Merge myMerge;
  cout << "===" << endl;
  LowerLeft ll;
  cout << "===" << endl;
  return 0;
}
