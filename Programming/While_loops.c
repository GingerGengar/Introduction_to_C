#include <stdio.h>

int main(void){

//This is to indicate the start of the main function
printf("This is the start of the main function...\n");

//Here we are declaring-initializing an integer named var1 to 0
int var1 = 0;

//This is the head of a while loop statement
//As long as (var1<10) is true, which means for var1 is 1-9, the body of this while loop
//will keep on executing
while (var1 < 10)
    //This is the body of the while loop statement
    //Note the same as the previous if and else and else if statement cases,
    //the body is encased in curly brackets
    //The body of the loop prints the value of var1 and then adds 1 to var1
    {printf("The value of var1: %d\n", var1);
    var1 = var1 + 1;}

//This is to indicate the end of the main function
printf("This is the end of the main function...\n");

return 0;}
