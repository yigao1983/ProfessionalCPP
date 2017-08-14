#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
  // Boolean values
  bool myBool = true;
  cout << "This is the default: " << myBool << endl;
  cout << "This should be true: " << boolalpha << myBool << endl;
  cout << "This should be 1: " << noboolalpha << myBool << endl;
  
  // Simulate "%6d" with streams
  int i = 123;
  printf("This should be '   123': %6d\n", i);
  cout << "This should be '   123': " << setw(6) << i << endl;
  // Simulate "%06d" with streams
  printf("This should be '000123': %06d\n", i);
  cout << "This should be '000123': " << setfill('0') << setw(6) << i << endl;
  
  // Fill with *
  cout << "This should be '***123': " << setfill('*') << setw(6) << i << endl;
  // Reset fill character
  cout << setfill(' ');

  // Floating point values
  double dbl = 1.452;
  double dbl2 = 5;
  cout << "This should be ' 5': " << setw(2) << noshowpoint << dbl2 << endl;
  cout << "This should be @@1.452: " << setw(7) << setfill('@') << dbl << endl;
  // Reset fill character
  cout << setfill(' ');

  // Instructs cout to start formatting numbers according to your location.
  // Chapter 18 explains the details of the imbue call and the locale object.
  cout.imbue(locale(""));
  cout << "This is 1234567 formatted according to your location: " << 1234567 << endl;
  
  // Money amount
  cout << "This should be a money amount of 120000, "
       << "formatted according to your location: "
       << put_money(120000) << endl;
  
  time_t t_t = time(nullptr);
  tm *t = localtime(&t_t);

  cout << "This should be the current date and time "
       << "formatted according to your location: "
       << put_time(t, "%c") << endl;
  
  return 0;
}
