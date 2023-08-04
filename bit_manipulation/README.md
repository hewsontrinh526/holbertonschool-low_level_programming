<h1>C - Bit Manipulation</h1>

## Bit manipulation in C involves performing various bitwise operations on individual bits or groups of bits within the data value 

### There are six bit operators. They are:
| Bit Operator | Description |
|--------------|-------------|
|`&`| **AND** Operator. Determines whether two bits are the same or not. Returns 1 at bit position if both corresponding bit is 1, else 0.|
|`|`| **OR** Operator. Determines whether two bits are different or not. Returns  1 at bit position if either of the corresponding bit is 1, else 0.|
|`^`| **XOR** Operator. Determines whether two bits are different. Returns 1 if only one of the corresponding bits is 1, else 0. Also known as Exclusive OR.|   
|`~`| **NOT** Operator. Takes a bit and switches to what it is not. 1's would be 0 and 0's would be 1's.|
|`<<` & `>>`|**LEFT** and **RIGHT** Shift Operators. Shifts the bits either left or right by the number of positions specificed after the operator.|

### The following projects demostrates these bitwise operators and their full functionality.

## 0. <a href="https://github.com/hewsontrinh526/holbertonschool-low_level_programming/blob/master/bit_manipulation/0-binary_to_uint.c">0</a>

A function that converts a binary number to an unsigned integer was created. The prototype was `unsigned int binary_to_uint(const char *b);` where `b` is pointing to a string of `0` and `1` chars. The function should return the converted number or `0` if either there was one or more chars in the string `b` that is not `0` or `1`; or if `b` is `NULL`. 

## 1. <a href="https://github.com/hewsontrinh526/holbertonschool-low_level_programming/blob/master/bit_manipulation/1-print_binary.c">1</a>

A function that prints a binary representation of a number. The prototype of this function was `void print_binary(unsigned long int n);` where `n` was the number that required  converting to binary. The function should return the binary representation without the use of arrays, `malloc` or the `%` and `/` operators. 

## 2. <a href="https://github.com/hewsontrinh526/holbertonschool-low_level_programming/blob/master/bit_manipulation/2-get_bit.c">2</a>

A function that returns the value of a bit at a given index. The prototype of this function was `int get_bit(unsigned long int n, unsigned int index);` where `n` was the given number and `index` was the position, starting from 0, of the bit that you wanted to return. The function should return the value of the bit at `index` position or `-1` if an error occured. 

## 3. <a href="https://github.com/hewsontrinh526/holbertonschool-low_level_programming/blob/master/bit_manipulation/3-set_bit.c">3</a>

A function that sets the value of a bit to `1` at a given index. The prototype of this function was `int set_bit(unsigned long int *n, unsigned int index);` where `n` was the given number and `index` was the position, starting from 0, of the bit that was to be changed. The function should return `1` if it worked, else will return `-1` if an error occured.

## 4. <a href="https://github.com/hewsontrinh526/holbertonschool-low_level_programming/blob/master/bit_manipulation/4-clear_bit.c">4</a>

A function that sets the value of a bit to `0` at a given index. The prototype of this function was `int clear_bit(unsigned long int *n, unsigned int index);` where `n` was the given number and `index` was the position, starting from 0, of the bit that was to be changed. The function should return `1` if it worked, else will return `-1` if an error occured.

## 5. <a href="https://github.com/hewsontrinh526/holbertonschool-low_level_programming/blob/master/bit_manipulation/5-flip_bits.c">5</a>

A function that returns the number of bits that was need to be flipped to get from one number to another. The prototype was `unsigned int flip_bits(unsigned long int n, unsigned long int m);` where `n` was one number and `m` was the other number. The function should return the number of flips it would take to convert one number to another without the use of the `%` or `/` operators. 
