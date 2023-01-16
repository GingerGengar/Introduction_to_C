#include <stdio.h>

int main(void){
    //This is a declaration of an integer 
    int soap;
    //initialization of integer "soap" so that it has value 1
    soap = 1;
    //This is a declaration of an integer pointer. Right now it points nowhere
    int* pointer_to_soap;
    //We are now setting the integer pointer to hold the value of the address of "soap"
    //The & operator can be used to get the address of a certain variable
    pointer_to_soap = &soap;

    //Let us print the value of "soap"
    printf("Soap's value: %d\n", soap);
    //Let us print the memory address of soap
    printf("Soap's Memory address: %d\n", &soap);
    //Let us print the value of "pointer to soap"
    printf("The value inside pointer_to_soap: %d\n", pointer_to_soap);
    //Let us print the value of what "pointer_to_soap" is referencing
    printf("What value pointer_to_soap is pointing at: %d\n", *pointer_to_soap);

    //So pointer_to_soap contains the address of where the variable "soap" is stored in memory
    //Printing pointer_to_soap literally gives the address of the variable "soap"
    //The * operator can be used to fetch the data that the pointer is referencing
    //So when we print *pointer_to_soap, we retrieved the value of whatever pointer_to_soap is
    //pointing at, which in this case is Soap's value, so printing *pointer_to_soap prints 2

return 0;}
