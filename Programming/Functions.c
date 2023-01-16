//Gives us printing capabilities
#include <stdio.h>

//the "int" keyword in the front specifices what dataype this function will output
//The "add" keyword is what the function is going to be called
//the "int num1" means that the function's first input is an integer named num1
//the "int num2" means that the function's second input is an integer named num2
int add (int num1, int num2){
    //Declare a local variable named ans
    //Set thte value of ans to num1 added to num2
    int ans = num1 + num2;
    //This function will quit and "give back" its caller 
    //the value inside local variable "ans"
    return ans;}

//This is the main function, entry point to the program
int main(void) {

//Declare an integer that has a value of 2
int a = 2;

//Declare an integer that has a value of 3
int b = 3;

//Decare an integer and initialize its value to 0
int c = 0;

//Show us the value of c which should be zero
printf("Value of C before add function: %d\n", c);

//Set the integer c to the output of a function named "add"
c = add(a,b);

//SHow us the value of c which should be 5
printf("Value of C after add function: %d\n", c);

return 0;}
