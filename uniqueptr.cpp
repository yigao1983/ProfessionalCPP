#include <iostream>
#include <memory>
#include "employeestruct.hpp"

using namespace std;

int main()
{
  unique_ptr<Employee[]> employees(new Employee[10]);
  
  employees[0].firstInitial = 'M';
  employees[1].firstInitial = 'L';
  
  return 0;
}
