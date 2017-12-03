CC = g++
LIBS = lib
CFLAGS = -std=gnu++11

CHAPTER = 05
EXERCISE = 05

SRC_EXT = cpp
EXECUTABLE = cppd_$(CHAPTER)_$(EXERCISE)

SUBDIR = ch$(CHAPTER)/exercise$(CHAPTER)_$(EXERCISE)
SRC = $(wildcard *.$(SRC_EXT)) $(wildcard $(SUBDIR)/*.$(SRC_EXT))
SRCLIB = $(wildcard $(SUBDIR)/$(LIBS)/*.$(SRC_EXT))

.PHONY: clean_exec

all: clean compile run

compile:
	$(CC) $(SRC) $(SRCLIB) -o $(EXECUTABLE) $(CFLAGS)

clean: clean_exec
	-rm -f *.o

clean_exec:
	-rm -f $(EXECUTABLE).exe

run:
	.\$(EXECUTABLE)
