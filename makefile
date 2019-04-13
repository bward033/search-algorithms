BASE = isSorted
# the first target ("all") is made by default.
# So, we list all targets that need to be made here.
all: $(BASE).x isPal.x gcd.x sequentialSearch.x binarySearch.x collatz.x
CFlag =  -ggdb -std=c++11
# dependencies for isSorted
isSorted.x: $(BASE).o $(BASE)_main.o
	g++ $(CFlag) -o isSorted.x isSorted.o isSorted_main.o

isSorted.o: isSorted.hpp isSorted.cpp
	g++ $(CFlag)-c -o isSorted.o isSorted.cpp

isSorted_main.o: isSorted.hpp isSorted_main.cpp
	g++ $(CFag) -c -o isSorted_main.o isSorted_main.cpp

# dependencies for isPal
isPal.x: isPal.o isPal_main.o
	g++ $(CFlag) -o isPal.x isPal.o isPal_main.o

isPal.o: isPal.hpp isPal.cpp
	g++ $(CFlag) -c -o isPal.o isPal.cpp

isPal_main.o: isPal.hpp isPal_main.cpp
	g++ $(CFlag) -c -o isPal_main.o isPal_main.cpp
# Greatest comon denomnator 
gcd.x: gcd.o gcd_main.o
	g++ $(CFlag) -o gcd.x gcd.o gcd_main.o
gcd.o: gcd.hpp gcd.cpp
	g++ $(CFlag) -c -o gcd.o gcd.cpp
gcd_main.o: gcd.hpp gcd_main.cpp
	g++ $(CFlag) -c -o gcd_main.o gcd_main.cpp 
#sequentialSearch 
sequentialSearch.x:isMemberSequentialSearch_main.o sequentialSearch.o
	g++ $(CFlag) -o sequentialSearch.x isMemberSequentialSearch.o isMemberSequentialSearch_main.o
sequentialSearch.o: isMemberSequentialSearch.hpp isMemberSequentialSearch.cpp
	g++ $(CFlag) -c -o  isMemberSequentialSearch.o isMemberSequentialSearch.cpp
isMemberSequentialSearch_main.o: isMemberSequentialSearch.hpp isMemberSequentialSearch_main.cpp
	g++ $(CFlag) -c -o isMemberSequentialSearch_main.o isMemberSequentialSearch_main.cpp 
#binarySearch 
binarySearch.x:isMemberBinarySearch_main.o isMemberBinarySearch.o
	g++ $(CFlag) -o binarySearch.x isMemberBinarySearch_main.o  isMemberBinarySearch.o
isMemberBinarySearch.o: isMemberBinarySearch.hpp isMemberBinarySearch.cpp
	g++ $(CFlag) -c -o isMemberBinarySearch.o isMemberBinarySearch.cpp
isMemberBinarySearch_main.o: isMemberBinarySearch.hpp isMemberBinarySearch_main.cpp
	g++ $(CFlag) -c -o isMemberBinarySearch_main.o isMemberBinarySearch_main.cpp
#collatz
collatz.x: collatz_main.o collatz.o
	g++ $(CFlag) -o collatz.x collatz_main.o collatz.o
collatz.o: collatz.hpp collatz.cpp
	g++ $(CFlag) -c -o collatz.o collatz.cpp
collatz_main: collatz.hpp collatz_main.cpp
	g++ $(CFlag) -c -o collatz_main.o collatz_main.cpp
# At the shell prompt, type: 
# make clean
# to remove the .o, .x and Emacs backup files.

clean:
	rm -f *.o *.x *~
