#include <iostream>
#include <circuits.hpp>

using namespace std;

int main(int argc, char *argv[])
{
  AndGate gate_1("and");
  OrGate gate_2("or");
  
  Connector conn(&gate_1, &gate_2);
  
  cout << gate_2.getOutput() << endl;
  
  return 0;
}
