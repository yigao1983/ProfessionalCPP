CXX=g++

.PHONY: clean

clean:
	rm -rf *.o *~ helloworld

%.o: %.cpp
	$(CXX) -g -o $@ -c $<

helloworld: helloworld.o
	$(CXX) -o $@ $<
