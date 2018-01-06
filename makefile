UNTIY_HOME = unity
UNITY_SRC = $(UNTIY_HOME)/src

CHAPTER = 07
EXERCISE = 05
SRC_DIR = ch$(CHAPTER)/exercise$(CHAPTER)_$(EXERCISE)

CPP_EXT = cpp
C_EXT = c
OBJ_EXT = o
APP_EXT = exe
APP_PREFIX = cppd
EXECUTABLE = $(APP_PREFIX)_$(CHAPTER)_$(EXERCISE).$(APP_EXT)

MAIN_S = main.$(CPP_EXT)
TEST_S = test.$(CPP_EXT)

#Get cpp files
SRC_ALL = $(wildcard $(SRC_DIR)/*.$(CPP_EXT))

SRC_MAIN = $(filter-out $(SRC_DIR)/$(TEST_S), $(SRC_ALL))
SRC_TEST = $(filter-out $(SRC_DIR)/$(MAIN_S), $(SRC_ALL))
SRC_UNITY = $(wildcard $(UNITY_SRC)/*.$(C_EXT))

#Replace .cpp / .c with .o
OBJ_MAIN = $(SRC_MAIN:.$(CPP_EXT)=.$(OBJ_EXT))
OBJ_TEST = $(SRC_TEST:.$(CPP_EXT)=.$(OBJ_EXT))
OBJ_UNITY = $(SRC_UNITY:.$(C_EXT)=.$(OBJ_EXT))

CC = g++
CC_INC = -I$(UNITY_SRC)
CC_FLAGS = -std=gnu++11 $(CC_INC)

COMMAND_DELETE = -rm -f

.PHONY: clean_exec

all: main run

main: $(OBJ_MAIN)
	@echo "Building main"
	@$(CC) $(OBJ_MAIN) -o $(EXECUTABLE) $(CC_FLAGS)

test: $(OBJ_TEST) $(OBJ_UNITY)
	@echo "Building test"
	@$(CC) $(OBJ_TEST) $(OBJ_UNITY) -o test_$(EXECUTABLE) $(CC_FLAGS)

print:
	@echo $(CC_FLAGS)

#Compile source files to object files
%.$(OBJ_EXT): %.$(CPP_EXT)
	@echo "Compiling $< -> $@"
	@$(CC) $< -c -o $@ $(CC_FLAGS)

#Compile source files to object files
%.$(OBJ_EXT): %.$(C_EXT)
	@echo "Compiling $< -> $@"
	@$(CC) $< -c -o $@ $(CC_FLAGS)

#Remove object files and executable
clean: clean_exec
	@echo "Cleaning files"
	@$(COMMAND_DELETE) $(OBJ_MAIN)
	@$(COMMAND_DELETE) $(OBJ_TEST)
	@$(COMMAND_DELETE) $(OBJ_UNITY)

#Remove executable
clean_exec:
	@echo "Cleaning target"
	@$(COMMAND_DELETE) *.$(APP_EXT)

#Run executable
run: $(EXECUTABLE)
	@.\$(EXECUTABLE)
