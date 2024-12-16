# Makefile для динамической библиотеки
LIB_NAME = ComplexMath
SRC = complexmath.cpp
HEADER = complex_math.h
LIB_DIR = ../bin
INCLUDE_DIR = ../library
CXX = g++
CXXFLAGS = -shared -fPIC
TARGET = $(LIB_DIR)/$(LIB_NAME).dll 
all: compile
compile: $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)
	@echo "compiled $(TARGET)"

install:
	cp $(TARGET) $(LIB_DIR)
	cp $(HEADER) $(INCLUDE_DIR)
	@echo "installed to $(LIB_DIR)"

uninstall:
	rm -f $(LIB_DIR)/lib$(LIB_NAME).dll
	rm -f $(INCLUDE_DIR)/$(HEADER)
	@echo "uninstalled."
clean:
	rm -f $(TARGET)
	@echo "files cleaned."