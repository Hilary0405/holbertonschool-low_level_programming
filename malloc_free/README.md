# malloc_free

This project is about memory allocation in C, using `malloc` and `free`.

We learned how to:
- Dynamically allocate memory
- Handle strings and multidimensional arrays using malloc
- Free memory correctly to avoid memory leaks

---

## Tasks

### 0. Float like a butterfly, sting like a bee
Function that creates an array of chars, and initializes it with a specific char.

### 1. The woman who has no imagination has no wings
Function that returns a pointer to a newly allocated space in memory, which contains a copy of the given string.

### 2. He who is not courageous enough to take risks will accomplish nothing in life
Function that concatenates two strings and returns a new allocated string with the result.

### 3. If you even dream of beating me you'd better wake up and apologize
Function that returns a pointer to a 2D array of integers, initialized to 0.

### 4. It's not bragging if you can back it up
Function that frees a 2D grid previously created by `alloc_grid`.

### 5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe
Function that concatenates all the arguments of your program into one string (each argument on a new line).


### 6. I will show you how great I am
Function that splits a string into words. Each word is stored in a new string, and all words are returned in an array of strings.


## Compilation

All files are compiled with:
bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
