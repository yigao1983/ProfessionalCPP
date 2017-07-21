#include <iostream>
#include <memory>
#include "employeestruct.hpp"

using namespace std;

int main()
{
  unique_ptr<Employee> anEmployee = make_unique<Employee>();
  
  // anEmployee->firstInitial = 'M';
  
  return 0;
}
