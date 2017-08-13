INCPATH=$(PWD)
CXX=g++
CFLAGS=-g -std=c++1y
LIBS=-lstdc++

.PHONY: clean

clean:
	rm -rf *.o *~ helloworld \
              enumtypes \
              employee \
              stdarray \
              showmacro \
              uniqueptr \
              exceptionexample \
              constptr \
              constref \
              airlinetickettest \
              cstringstyle \
              strconcat \
              strconvert \
              rawstring \
              manip \
              readcin \
              inputstream

%.o: %.cpp
	$(CXX) $(CFLAGS) -o $@ -c $< -I$(INCPATH)

helloworld: helloworld.o
	$(CXX) -O3 -o $@ $< $(LIBS)

enumtypes: enumtypes.o
	$(CXX) $(CFLAGS) -O3 -o $@ $< $(LIBS)

employee: employee.o
	$(CXX) $(CFLAGS) -O3 -o $@ $< $(LIBS)

stdarray: stdarray.o
	$(CXX) $(CFLAGS) -O3 -o $@ $< $(LIBS)

showmacro: showmacro.o
	$(CXX) $(CFLAGS) -O3 -o $@ $< $(LIBS)

uniqueptr: uniqueptr.o
	$(CXX) $(CFLAGS) -O3 -o $@ $< $(LIBS)

exceptionexample: exceptionexample.o
	$(CXX) $(CFLAGS) -O3 -o $@ $< $(LIBS)

constptr: constptr.o
	$(CXX) $(CFLAGS) -O3 -o $@ $< $(LIBS)

constref: constref.o
	$(CXX) $(CFLAGS) -O3 -o $@ $< $(LIBS)

airlinetickettest: airlineticket.o airlinetickettest.o
	$(CXX) $(CFLAGS) -O3 -o $@ $^ $(LIBS)

cstringstyle: cstringstyle.o
	$(CXX) $(CFLAGS) -O3 -o $@ $< $(LIBS)

strconcat: strconcat.o
	$(CXX) $(CFLAGS) -O3 -o $@ $< $(LIBS)

strconvert: strconvert.o
	$(CXX) $(CFLAGS) -O3 -o $@ $< $(LIBS)

rawstring: rawstring.o
	$(CXX) $(CFLAGS) -O3 -o $@ $< $(LIBS)

manip: manip.o
	$(CXX) $(CFLAGS) -O3 -o $@ $< $(LIBS)

readcin: readcin.o
	$(CXX) $(CFLAGS) -O3 -o $@ $< $(LIBS)


inputstream: inputstream.o
	$(CXX) $(CFLAGS) -O3 -o $@ $< $(LIBS)
