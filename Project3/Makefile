# The compiler to use
CC = gcc

# The name of the executable
TARGET = main.exe

# The source file(s)
SRC = main.c

# Preprocessed file (.i)
PREPROCESSED = $(SRC:.c=.i)

# Assembly file (.s)
ASSEMBLY = $(SRC:.c=.s)

# Object file (.o)
OBJECT = $(SRC:.c=.o)

# Build rule for the final executable
$(TARGET): $(OBJECT)
	$(CC) $(OBJECT) -o $(TARGET)

# Rule to generate the preprocessed file (.i)
$(PREPROCESSED): $(SRC)
	$(CC) -E $(SRC) -o $(PREPROCESSED)

# Rule to generate the assembly file (.s)
$(ASSEMBLY): $(PREPROCESSED)
	$(CC) -S $(PREPROCESSED) -o $(ASSEMBLY)

# Rule to generate the object file (.o)
$(OBJECT): $(ASSEMBLY)
	$(CC) -c $(ASSEMBLY) -o $(OBJECT)

# Rule to run the executable
run: $(TARGET)
	./$(TARGET)

# Optional: clean rule to remove intermediate files and executable
clean:
	rm -f $(PREPROCESSED) $(ASSEMBLY) $(OBJECT) $(TARGET)


# Explanation:
# PREPROCESSED = $(SRC:.c=.i): Creates the .i file name by replacing .c with .i.
# ASSEMBLY = $(SRC:.c=.s): Creates the .s file name by replacing .c with .s.
# OBJECT = $(SRC:.c=.o): Creates the .o file name by replacing .c with .o.
# Build Rule for .i File: The -E flag is used to generate the preprocessed file (.i).
# Build Rule for .s File: The -S flag is used to generate the assembly file (.s).
# Build Rule for .o File: The -c flag is used to generate the object file (.o).
# Final Executable: The final executable is created by linking the object file (.o).
# Clean Rule: The clean rule now removes all generated files (.i, .s, .o, .exe).
# Usage:
# To build everything: Simply run make.
# To run the executable: Run make run.
# To clean up: Run make clean.
# This makefile will generate all the required intermediate files (.i, .s, .o) and the final executable (.exe).
