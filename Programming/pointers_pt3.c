#include <stdio.h>

int main(void){

//Declaration and initialization of an array
int array[3] = {1,2,3};

//Arrays can be treated just like integer pointers. They are actually the same thing
//the variable "array" holds memory addresses, which is basically what a pointer does
printf("The value of the literal variable \"array\": %d\n", array);

//Just like integer pointers, the * operator can be used to show what the array is pointing at
printf("What the array is pointing at: %d\n", *array);

//We can accesss the elements of an array by using the * operator to access adjacent memory
printf("Second element of the array: %d\n", *(array+1));

return 0;}
