//Give us printing capabilities
#include <stdio.h>

//This is a pre-processed directive
//Each time the pre-processor sees Num, it will literally change it with "3"
//This Num keyword though, it needs to be known before you compile
//You cannot change the value of "Num" when the code is running
//For something that you can change its value whilst its running, you need variables
#define Num 3

//This is the entry point to our program
int main(void){

//Print the integer 3
printf("Printing an integer: %d\n", Num);

return 0;}
