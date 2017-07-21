INCPATH=$(PWD)
CXX=g++
CFLAGS=-g -lstdc++ -std=c++1y

.PHONY: clean

clean:
	rm -rf *.o *~ helloworld enumtypes employee stdarray

%.o: %.cpp
	$(CXX) $(CFLAGS) -o $@ -c $< -I$(INCPATH)

helloworld: helloworld.o
	$(CXX) -O3 -o $@ $<

enumtypes: enumtypes.o
	$(CXX) -O3 -o $@ $<

employee: employee.o
	$(CXX) -O3 -o $@ $<

stdarray: stdarray.o
	$(CXX) -O3 -o $@ $<
