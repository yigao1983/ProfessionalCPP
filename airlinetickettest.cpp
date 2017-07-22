#include <iostream>
#include <memory>
#include "airlineticket.hpp"

using namespace std;

int main(int argc, char *argv[])
{
  AirlineTicket myTicket;
  
  myTicket.setPassengerName("Sherman T. Socketwrench");
  myTicket.setNumberOfMiles(700);
  int cost = myTicket.calculatePriceInDollars();
  cout << "This ticket will cost $" << cost << endl;
  
  AirlineTicket *myTicket2 = new AirlineTicket();
  myTicket2->setPassengerName("Laudimore M. Hallidue");
  myTicket2->setNumberOfMiles(2000);
  myTicket2->setHasEliteSuperRewardsStatus(true);
  int cost2 = myTicket2->calculatePriceInDollars();
  cout << "This other ticket will cost $" << cost2 << endl;
  delete myTicket2;
  
  return 0;
}
