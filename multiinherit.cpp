#include <iostream>
#include <typeinfo>

using namespace std;

class Dog
{
public:
  virtual void bark()
  { cout << "Woof!" << endl; }
  virtual void eat()
  { cout << "The dog has eaten." << endl; }
};

class Bird
{
public:
  virtual void chirp()
  { cout << "Chirp!" << endl; }
  virtual void eat()
  { cout << "The bird has eaten." << endl; }
};

class DogBird : public Dog, public Bird
{
public:
  virtual void eat()
  { Dog::eat(); }
};

int main()
{
  DogBird myConfusedAnimal;
  myConfusedAnimal.eat();
  cout << typeid(myConfusedAnimal).name() << endl;
  return 0;
}
