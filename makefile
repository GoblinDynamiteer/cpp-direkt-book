TARGET = cppd
LIBS = lib
CC = g++
CFLAGS = -std=gnu++11
CHAPTER = 04
EXERCISE = 11
SUBDIR = ch$(CHAPTER)/exercise$(CHAPTER)_$(EXERCISE)
SRC = $(wildcard *.cpp) $(wildcard $(SUBDIR)/*.cpp)
SRCLIB = $(wildcard $(SUBDIR)/$(LIBS)/*.cpp)

all: clean compile run

compile:
	$(CC) $(SRC) $(SRCLIB) -o $(TARGET) $(CFLAGS)

clean:
	-rm -f *.o
	-rm -f $(TARGET).*

run:
	.\$(TARGET)
