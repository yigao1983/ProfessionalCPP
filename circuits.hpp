#ifndef CIRCUITS_HPP_
#define CIRCUITS_HPP_

#include <string>
#include <stdexcept>

using std::cout;
using std::cin;
using std::string;
using std::runtime_error;

class Connector;

class LogicalGate
{
public:
  LogicalGate(const string &label) : mLabel(label) {}
  
  virtual bool performGateLogic() const = 0;
  virtual void setNextPin(Connector *conn) = 0;
  
  const string &getLabel() const
  { return mLabel; }
  
  bool getOutput() const
  { return this->performGateLogic(); }
  
protected:
  string mLabel;
};

class Connector
{
public:
  Connector(LogicalGate *inGate, LogicalGate *outGate) :
    mInGate(inGate), mOutGate(outGate)
  { mOutGate->setNextPin(this); }
  
  LogicalGate *getInGate() const
  { return mInGate; }
  
  LogicalGate *getOutGate() const
  { return mOutGate; }
  
protected:
  LogicalGate *mInGate, *mOutGate;
};

class BinaryGate : public LogicalGate
{
public:
  BinaryGate(const string &label, Connector *pinA=nullptr, Connector *pinB=nullptr) :
    LogicalGate(label), mPinA(pinA), mPinB(pinB) {}
  
  bool getPinA() const
  {
    bool pinval;
    
    if (!mPinA) {
      cout << "Enter Pin A input for gate " << this->getLabel() << "--> ";
      cin >> pinval;
    } else {
      pinval = mPinA->getInGate()->getOutput();
    }
    
    return pinval;
  }
  
  bool getPinB() const
  {
    bool pinval;
    
    if (!mPinB) {
      cout << "Enter Pin B input for gate " << this->getLabel() << "--> ";
      cin >> pinval;
    } else {
      pinval = mPinB->getInGate()->getOutput();
    }
    
    return pinval;
  }
  
  void setNextPin(Connector *conn)
  {
    if (!mPinA) {
      mPinA = conn;
    } else if (!mPinB) {
      mPinB = conn;
    } else {
      throw runtime_error("Invalid connector");
    }
  }
  
protected:
  Connector *mPinA, *mPinB;
};

class UnaryGate : public LogicalGate
{
public:
  UnaryGate(const string &label, Connector *pin=nullptr) :
    LogicalGate(label), mPin(pin) {}
  
  bool getPin() const
  {
    bool pinval;
    
    if (!mPin) {
      cout << "Enter Pin input for gate " << this->getLabel() << "--> ";
      cin >> pinval;
    } else {
      pinval = mPin->getInGate()->getOutput();
    }
    
    return pinval;
  }
  
  void setNextPin(Connector *conn)
  {
    if (mPin) {
      mPin = conn;
    } else {
      throw runtime_error("Invalid connector");
    }
  }
  
protected:
  Connector *mPin;
};

class AndGate : public BinaryGate
{
public:
  AndGate(const string &label, Connector *pinA=nullptr, Connector *pinB=nullptr) :
    BinaryGate(label, pinA, pinB) {}
  
  bool performGateLogic() const
  {
    bool valA = this->getPinA();
    bool valB = this->getPinB();
    
    return (valA && valB);
  }
};

class OrGate : public BinaryGate
{
public:
  OrGate(const string &label, Connector *pinA=nullptr, Connector *pinB=nullptr) :
    BinaryGate(label, pinA, pinB) {}
  
  bool performGateLogic() const
  {
    bool valA = this->getPinA();
    bool valB = this->getPinB();
    
    return (valA || valB);
  }
};

class NotGate : public UnaryGate
{
public:
  NotGate(const string &label, Connector *pin=nullptr) :
    UnaryGate(label, pin) {}
  
  bool performGateLogic() const
  {
    bool val = this->getPin();
    
    return (!val);
  }
};

#endif
