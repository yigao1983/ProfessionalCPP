#ifndef MUFFIN_HPP_
#define MUFFIN_HPP_

#include <iostream>
#include <string>

class Muffin
{
public:
  Muffin();
  std::string getDescription() const;
  void setDescription(const std::string &inDescription);
  int getSize() const;
  void setSize(int inSize);
  bool getHasChocolateChips() const;
  void setHasChocolateChips(bool inChips);
  
protected:
  std::string mDescription;
  int mSize;
  bool mHasChocolateChips;
};

Muffin::Muffin() : mSize(0), mDescription(""), mHasChocolateChips(false)
{}

std::string Muffin::getDescription() const
{ return mDescription; }

void Muffin::setDescription(const std::string &inDescription)
{ mDescription = inDescription; }

int Muffin::getSize() const
{ return mSize; }

void Muffin::setSize(int inSize)
{ mSize = inSize; }

bool Muffin::getHasChocolateChips() const
{ return mHasChocolateChips; }

void Muffin::setHasChocolateChips(bool inChips)
{ mHasChocolateChips = inChips; }

#endif
