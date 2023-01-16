#include <stdio.h>

int main(void){

//This does the same thing as the while loop example. 
//A for loop allows you to be more concise when specifying a few types of while loops
//This is the structure of a for loop. A for loop has 3 things in its arguments ()
//arg1: the "int var1 = 0" is the declaration and initialization of a variable
//arg2: the "var1<0" is the condition that will be checked. If this condition false, stop loop
//arg3: "var1 = var+1" this is a loop update statement. It basically just incremenets var 
//      by 1 each iteration of the for loop
//In short, this while loop performs the same thing as the previous example
for (int var1 = 0; var1<10; var1 = var1+1)
    { printf("Value of var1: %d\n", var1);}

return 0;}
