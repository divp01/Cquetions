# The compiler to use
CC = gcc

# The name of the executable
TARGET = 002Pointer.exe

# The source file(s)
SRC = 002Pointer.c

# The build rule
$(TARGET): $(SRC)
	$(CC) $(SRC) -o $(TARGET)

# Rule to run the executable
run: $(TARGET)
	./$(TARGET)

# Optional: clean rule
clean:
	echo "Nothing to clean" 
    #del $(TARGET)