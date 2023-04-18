MagicCalc: driver.o CatGirl.o
	g++ -o magicCal driver.o CatGirl.o
driver.o: driver.cpp CatGirl.h
	g++ -c driver.cpp
CatGirl.o: CatGirl.cpp CatGirl.h
	g++ -c CatGirl.cpp
clean::
	rm *.o MagicCalc