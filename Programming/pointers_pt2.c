#include <stdio.h>

//This function accepts an integer pointer and does not return anything
//Since an integer pointer contains a memory address of an integer variable,
//This function will accept memory addresses.
void add1(int* integer_pointer){
    //Whatver integer_pointer is pointing at is incremented by 1
    *integer_pointer = *integer_pointer+1;
    //Go back to this function's caller, which is main
    return;}

int main(void){
    //This is a declaration of an integer. initialization of integer "soap" so that it has value 1 
    int soap = 1;
    
    //This should be printing 1
    printf("Value of Soap before \"add1\" is called: %d\n", soap);
    
    //We are calling the function add 1 here
    //We are passing the input to add1 as the address of the integer soap
    add1(&soap);
   
    //This should be printing 2
    printf("Value of Soap after \"add1\" is called: %d\n", soap);

return 0;}
