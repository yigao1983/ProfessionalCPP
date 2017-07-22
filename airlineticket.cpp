#include "airlineticket.hpp"

using namespace std;

AirlineTicket::AirlineTicket()
{
  mHasEliteSuperRewardsStatus = false;
  mPassengerName = "Unknown Passenger";
  mNumberOfMiles = 0;
}

AirlineTicket::~AirlineTicket()
{}

int AirlineTicket::calculatePriceInDollars() const
{
  if (mHasEliteSuperRewardsStatus) {
    return 0;
  }
  return static_cast<int>(getNumberOfMiles() * 0.1);
}

const string &AirlineTicket::getPassengerName() const
{ return mPassengerName; }

void AirlineTicket::setPassengerName(const string &name)
{ mPassengerName = name; }

int AirlineTicket::getNumberOfMiles() const
{ return mNumberOfMiles; }

void AirlineTicket::setNumberOfMiles(int miles)
{ mNumberOfMiles = miles; }

bool AirlineTicket::getHasEliteSuperRewardsStatus() const
{ return mHasEliteSuperRewardsStatus; }

void AirlineTicket::setHasEliteSuperRewardsStatus(bool status)
{ mHasEliteSuperRewardsStatus = status; }
