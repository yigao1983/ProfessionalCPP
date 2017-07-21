CXX=g++
CFLAGS=-g -lstdc++ -std=c++1y

.PHONY: clean

clean:
	rm -rf *.o *~ helloworld

%.o: %.cpp
	$(CXX) $(CFLAGS) -o $@ -c $<

helloworld: helloworld.o
	$(CXX) -O3 -o $@ $<
