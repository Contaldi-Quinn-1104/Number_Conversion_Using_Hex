MagicCalc: driver.o
	g++ -o magicCal driver.o
driver.o: driver.cpp
	g++ -c driver.cpp
clean::
	rm *.o MagicCalc