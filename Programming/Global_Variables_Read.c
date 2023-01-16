#include <stdio.h>

//This is a declaration-initialization of a global variable
//This global variable is an integer named kitty and contains the value of 3
//A global variable's value can be read by all functions in a program
int kitty = 3;

//Some arbitrary function that just prints out the value of kitty, a global variable
void function1 (){
    printf("The value of \"kitty\" inside function1: %d\n", kitty);
    return;}

//Some arbitrary function that just prints out the value of kitty, a global variable
void function2 (){
    printf("The value of \"kitty\" inside function2: %d\n", kitty);
    return;}

//Some arbitrary function that just prints out the value of kitty, a global variable
void function3 (){
    printf("The value of \"kitty\" inside function3: %d\n", kitty);
    return;}

int main(void){

//See whether Main can see the variable kitty and what main will see the value of kitty as
printf("The value of \"kitty\" inside main: %d\n", kitty);

//Call arbitrary function 1
function1();

//Call arbitrary function 2
function2();

//Call arbitrary function 3
function3();

return 0;}



