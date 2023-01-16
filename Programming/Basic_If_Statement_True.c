//This is the standard input output library which gives us functions like printf for printing
//This library allows us to print the values of variables
#include <stdio.h>

//This is the standard boolean library.
//This library allows us to declare boolean data types, which is a new datatype 
//you will encounter here
#include <stdbool.h>

int main(void){

//This is a new datatype called a boolean. It is smaller than an integer in size.
//Its value can be true or false. True can be represented as 1
//False can be represented as 0
  bool bootcamp = true;
//bool bootcamp = 1;
//The two ways of declaring and initializing bootcamp above are perfectly valid

//So this is the head of the if statement
//If whatever is in the () brackets end up being true in a boolean sense
//Execute the contents of the if statement body
if (bootcamp) 
    //This is the body of the if statement
    //Since bootcamp is true, this will execute
    {printf("Bootcamp is indeed True!\n");} 
//This is the head of the else statement.
//If we have an if statement, we don't necessarily need to declare a corresponding else statement
//But if we have an else statement, we absolutely must have an if statement before that else statement
//So this part will execute only if the if statement condition is false
//Since bool is true, the if statement condition is true and so the body of this else will not execute
else
    //This is the body of the else statement
    {printf("Bootcamp is false!\n");}

return 0;}


