TARGET = cppd
LIBS =
CC = g++
CFLAGS = -g -Wall
SUBDIR = ch02/exercise02_01
SRC = $(wildcard *.cpp) $(wildcard $(SUBDIR)/*.cpp)

ex:
	$(CC) $(SRC) -o $(TARGET) $(LIBS)

clean:
	-rm -f *.o
	-rm -f $(TARGET).*
	
run:
	.\$(TARGET)