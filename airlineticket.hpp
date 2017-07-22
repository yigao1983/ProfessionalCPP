#ifndef __AIRLINETICKET_HPP__
#define __AIRLINETICKET_HPP__

#include <string>

class AirlineTicket {
public:
  AirlineTicket();
  ~AirlineTicket();
  int calculatePriceInDollars() const;
  const std::string &getPassengerName() const;
  void setPassengerName(const std::string &name);
  int getNumberOfMiles() const;
  void setNumberOfMiles(int miles);
  bool getHasEliteSuperRewardsStatus() const;
  void setHasEliteSuperRewardsStatus(bool status);
private:
  std::string mPassengerName;
  int mNumberOfMiles;
  bool mHasEliteSuperRewardsStatus;
};

#endif
