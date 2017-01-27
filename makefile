TARGET = cppd
LIBS =
CC = g++
CFLAGS = -std=gnu++11
SUBDIR = ch03/exercise03_01
SRC = $(wildcard *.cpp) $(wildcard $(SUBDIR)/*.cpp)

all: clean compile run

compile:
	$(CC) $(SRC) -o $(TARGET) $(LIBS) $(CFLAGS)

clean:
	-rm -f *.o
	-rm -f $(TARGET).*

run:
	.\$(TARGET)
