This is a C code to dynamically Malloc memory for a 2D pointer and
free the full 2d Pointer memory with a single call to free();
Parameter #1 sets the max number of pointers
inside the 2d Array, while Parameter #2 sets the max memory bytes 
allocated to each of the 1D pointers.

NOTE: In param #1, 1 == 1 pointer size. In param #2, 1 == 1 char size. 
Exceeding the max row you have set (parameter #1) will cause your 
program to segfault. While exceeding the max strlen you set(parameter #2)
will cause your 1d pointer to overwrite data to memory blocks allocated to 
the next 1d pointer.
  
TESTED to work 100% with 2D char variable pointers. 
CODE STRICTLY ADHERES TO THE 42 NORME!
