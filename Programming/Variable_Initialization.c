#include <stdio.h>

int main(void){

//This is just a declaration that an integer would exist.
//Right now, the integer "a" still contains garbage from previous random memory
//It is still not ready to be used. This line here is called a declaration
int a;

//Let us see what happens if we try to use the variable "a" before we initialize it
printf("The value of A after declaration but before initialization: %d\n", a);

//This line is called an initialization. It sets the value of a to some initial value for the proram
//Now a contains 1 and is ready to be used.
a = 1;

//This will print the value contained in a and should print 1
printf("The value of A after initialization: %d\n", a);

//The above is a bit tedious. We can declare and initialize in the same line.
//That is what we are trying to achieve by the following,
//We declare an integer b and initialize its value to 1
int b = 3;

//After the line above, b is already ready to be used so we can print its value and it
//should print the value 3 correclty
printf("The value of B after declaration and initialization in  a single line: %d\n", b);

return 0;}
