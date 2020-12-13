CPPC=g++
DBG=-g
OBJ=-c
OUT=-o rsa

realize:
	$(CPPC) *.o $(OUT)

debug:
	$(CPPC) $(DBG) *.cpp $(OBJ)
	$(CPPC) $(DBG) *.o $(OUT)

or:
	$(CPPC) *.cpp $(OBJ)

od:
	$(CPPC) $(DBG) *.cpp $(OBJ)

clean:
	rm *.o

main.o: main.cpp
	$(CPPC) $(DBG) main.cpp $(OBJ)

rsa.o: rsa.cpp
	$(CPPC) $(DBG) rsa.cpp $(OBJ)
