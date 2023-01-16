#include <stdio.h>

//This is a declaration-initialization of a global variable
//This global variable is an integer named kitty and contains the value of 3
//A global variable's value can be read by all functions in a program
int kitty = 3;

//Arbitrary function 1
void function1 (){
    //This is setting the global variable kitty to some value
    kitty = 2;
    printf("The value of \"kitty\" inside function1: %d\n", kitty);
    return;}

//Arbitrary function 2
void function2 (){
    //This is going to increment 2 to kitty and should be viewable to all functions
    kitty = kitty + 2;
    printf("The value of \"kitty\" inside function2: %d\n", kitty);
    return;}

//Arbitrary function 3
void function3 (){
    //Just dont modify kitty but read from it
    printf("The value of \"kitty\" inside function3: %d\n", kitty);
    return;}

int main(void){

//See whether Main can see the variable kitty and what main will see the value of kitty as
printf("The value of \"kitty\" inside main initially: %d\n", kitty);

//Call arbitrary function 1
function1();

//Print the value of kitty after  function 1 has finished executing
printf("The value of  \"kitty\" after arbitary function 1 has run inside main: %d\n", kitty);

//Call arbitrary function 2
function2();

//Print the value of kitty after function 2 has finished executing
printf("The value of  \"kitty\" after arbitary function 2 has run inside main: %d\n", kitty);

//Call arbitrary function 3
function3();

//Print the value of kitty after function 3 has finished executing
printf("The value of  \"kitty\" after arbitary function 3 has run inside main: %d\n", kitty);

return 0;}



