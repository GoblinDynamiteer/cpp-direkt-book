TARGET = cppd
LIBS =
CC = g++
CFLAGS = -std=gnu++11
SUBDIR = ch02/exercise02_15
SRC = $(wildcard *.cpp) $(wildcard $(SUBDIR)/*.cpp)

all:
	$(CC) $(SRC) -o $(TARGET) $(LIBS) $(CFLAGS)

clean:
	-rm -f *.o
	-rm -f $(TARGET).*
	
run:
	.\$(TARGET)