#include <iostream>
#include <string>

using namespace std;

class Book
{
public:
  virtual string getDescription() const
  { return "Book"; }
};

class Paperback : public Book
{
public:
  virtual string getDescription() const
  { return "Paperback " + Book::getDescription(); }
};

class Romance : public Paperback
{
public:
  virtual string getDescription() const
  { return "Romance " + Paperback::getDescription(); }
};

class Technical : public Book
{
public:
  virtual string getDescription() const
  { return "Technical " + Book::getDescription(); }
};

int main()
{
  Romance novel;
  Book book;
  cout << novel.getDescription() << endl;
  cout << book.getDescription() << endl;
  return 0;
}
