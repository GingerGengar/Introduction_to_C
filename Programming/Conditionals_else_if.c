#include <stdio.h>
#include <stdbool.h>

int main(void){

//This is a declaration of an integer named option 
int option = 6;

//We are introducing a new operator here which is the == operator. This is an equality operator
//So it compares whether the 2 variables are the same with each other and returns a boolean
//Here is what I mean: 1==1 will return true because indeed the integer 1 is the same as the integer 1
//1==2 will return false because the integer 1 is not the same as the integer 2
//3==(1+2) will return true because indeed the integer 3 is equals to the integer 3 which is 1+2

//This is an if statement
if (option == 0)
    {printf("The value of option is 0\n");}
//This is an else if statement and its body will execute only if its () condition is true
else if (option == 1)
    {printf("The value of option is 1\n");}
//The body of this else if statement will only execute if (option==2) is true.
//So if option is anything else othern than 2, the body of this else if will never execute
else if (option == 2)
    //This is the body of the else if statement
    {printf("The value of option is 2\n");}
//If a single else if statement has been triggered, for example if this one is triggered
//The body of this statement will get executed,
//but C would also ignore the remaining else if because it already found one that was true
//So for example if this one got triggered, then C would just skip to the end after the else statement
//and ignore all the else if 4-6.
else if (option == 3)
    {printf("The value of option is 3\n");}
//Likewise if this gets executed, C would go ahead do the body of this else if
//and then jump after the else statement
else if (option == 4)
    {printf("The value of option is 4\n");}
//The body of this else if statement will only execute if option's value is 5
else if (option == 5)
    {printf("The value of option is 5\n");}
//The body of this else if statement will only execute if the option's value is 6
else if (option == 6)
    {printf("The value of option is 6\n");}
//This is an else statement
else
    {printf("The value of option is not 1-6\n");}

return 0;}
