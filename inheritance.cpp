#include <iostream>

using namespace std;

class Super
{
public:
  Super() {}
  virtual void someMethod()
  { cout << "This is Super's version of someMethod()." << endl; }
protected:
  int mProtectedInt;
private:
  int mPrivateInt;
};

class Sub : public Super
{
public:
  Sub() {}
  virtual void someMethod()
  { cout << "This is Sub's version of someMethod()." << endl; }
  void someOtherMethod()
  {
    cout << "I can access the superclass data member mProtectedInt." << endl;
    cout << "Its value is " << mProtectedInt << endl;
  }
};

int main()
{
  Super mySuper;
  
  mySuper.someMethod();
  
  Sub mySub;
  
  mySub.someMethod();
  
  Super &ref = mySub;
  
  ref.someMethod();
  
  return 0;
}
