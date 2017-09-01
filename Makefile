# Makefile

# Compiler
CC = g++
# Compiler flags
CFLAGS = -std=c++11 -Wall

# Source files directory
SRCDIR = src
# Executable files directory
BINDIR = bin

# Source files (automatically generated)
SOURCES = $(shell find $(SRCDIR) -name '*.cpp')
# Executables to be created (automatically generated)
BINS = $(patsubst $(SRCDIR)/%.cpp, $(BINDIR)/%.out, $(SOURCES))

all: $(SOURCES) $(BINS)

rebuild: clean all

$(BINDIR)/%.out: $(SRCDIR)/%.cpp
	$(CC) $(CFLAGS) -o $@ $<

clean:
	-rm -f $(BINDIR)/* 