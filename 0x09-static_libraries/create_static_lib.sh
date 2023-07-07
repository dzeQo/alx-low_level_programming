#!/bin/bash

# Compile each .c file into object files
for file in *.c; do
    gcc -c "$file"
done

# Create the static library and add the object files to it
ar rcs liball.a *.o

# Clean up the object files
rm *.o

echo "Static library liball.a created."

