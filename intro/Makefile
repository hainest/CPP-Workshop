WFLAGS	:= -Wall -Wextra
CXXSTD	:= -std=c++11
OPT		:= -O3

.DEFAULT_GOAL := all
all: hello name

%.o : %.cpp Makefile
	@ echo Compiling $@...
	@ $(CXX) $(CXXSTD) $(WFLAGS) $(OPT) $(CXXFLAGS) -c -o $@ $<

name: name.o
	@ echo Building $@...
	@ $(CXX) -o $@ $<

hello: hello.o
	@ echo Building $@...
	@ $(CXX) -o $@ $<

clean:
	@ rm -f *.o name hello
