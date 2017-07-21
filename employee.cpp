#include <iostream>
#include "employeestruct.hpp"

using namespace std;

int main()
{
  Employee anEmployee;
  anEmployee.firstInitial = 'M';
  anEmployee.lastInitial = 'G';
  anEmployee.employeeNumber = 42;
  anEmployee.salary = 80000;
  
  cout << "Employee: "
       << anEmployee.firstInitial
       << anEmployee.lastInitial << endl;
  cout << "Number: " << anEmployee.employeeNumber << endl;
  cout << "Salary: " << anEmployee.salary << endl;
  
  return 0;
}
