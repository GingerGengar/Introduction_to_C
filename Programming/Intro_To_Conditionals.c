//This is the standard input output library. 
//This allows us to print things to the terminal console
#include <stdio.h>

//We need to use a new library, standard boolean
//This library allows us to declare and use boolean datatypes
#include <stdbool.h>


int main(void){

//This is a declaration of a boolean datatype
bool koala;

//It can be set to true, 
koala = true;

//Let us see the value of koala
printf("The boolean koala after setting it to true: %d\n", koala);

//The boolean can also be set to false
koala = false;

//Let us see the value of koala after setting it to false
printf("The boolean koala after setting it to false: %d\n", koala);

//From the above example we know that a true boolean is represented as 1
//We also know that a false boolean is represented as 0

//Just to separate things a bit better
printf("######################################################################\n");

//Introduction to equality comparison
printf("The number 1 is equals to 1: %d\n", 1==1);
printf("The number 1 is not equals to 2: %d\n", 1==2);

//Introduction to less than comparison
printf("The number 2 is less than 3: %d\n", 2<3);
printf("The number 3 is not less than 1: %d\n", 3<1);

//Introduction to greater than comparison
printf("The number 7 is greater than the number 4: %d\n", 7>4);
printf("The number 11 is not greater than the number 13: %d\n", 11>13);

//Just to separate things a bit better
printf("######################################################################\n");

//Introduction to AND comparison (arg1 && arg2)
printf("This is for AND Gates:\n");
printf("Only 2 trues can return a true: %d\n", true && true);
printf("1 true and 1 false is not enough to return a true: %d\n", true && false);
printf("1 false and 1 true is not enough to return a true: %d\n", false && true);
printf("Two falses in an AND gate will always give false: %d\n", false && false);

//Introduction to OR comparison (arg1 || arg2)
printf("This is for OR Gates:\n");
printf("2 trues will always return true: %d\n", true || true);
printf("1 true and 1 false will return a true: %d\n", true || false);
printf("1 false and 1 truw ill return a true: %d\n",  false || true);
printf("Only 2 falses will return a false: %d\n", false || false);

//Introduction to NOT operator (!arg1)
printf("This is for the NOT Operator:\n");
printf("This will invert the true into a false: %d\n", !true);
printf("This will invert the false into a true: %d\n", !false);

return 0;}


