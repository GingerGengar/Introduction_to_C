#include <stdio.h>

void PrintArr (int* arr){
    printf("What integer pointer is pointing at: %d\n", *arr);
    printf("What is right next to what integer pointer is pointing at: %d\n", *(arr+1));
    printf("What is right next 2 time to what integer pointer is pointing at: %d\n", *(arr+2));
    return;}

int main(void){

//Declaration and initialization of an array
int array[3] = {1,2,3};

//Since array is actually just an address, you can just pass array directly as if 
//it was an integer pointer. It makes no difference
PrintArr(array);

return 0;}
