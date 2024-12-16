# Makefile для консольного приложения
APP_NAME = app
SRC = main.cpp
BIN_DIR = ../bin
LIB_DIR = ../bin
INCLUDE_DIR = ../library
CXX = g++
CXXFLAGS = -I$(INCLUDE_DIR)
LDFLAGS = -L$(LIB_DIR) -lComplexMath
TARGET = $(BIN_DIR)/$(APP_NAME)
all: compile
compile: $(SRC)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(SRC) -o $(TARGET) $(CXXFLAGS) $(LDFLAGS)
	@echo "compiled: $(TARGET)"

install:
	@mkdir -p $(BIN_DIR)
	cp $(TARGET) $(BIN_DIR)
	@echo "installed to $(BIN_DIR)"

uninstall:
	rm -f $(BIN_DIR)/$(APP_NAME)
	@echo "uninstalled."

clean:
	rm -f $(TARGET)
	@echo "files cleaned."