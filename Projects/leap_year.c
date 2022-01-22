#include <stdio.h>
#include <stdlib.h>
// This code is used to print the leap year
//I am using a function to create the formula for the leap year to use in the main function
// Published October 15th 2021
// The main idea of the code was to get the leap year between years
// First paragraph is our function, our formula to calculate if the year is a leap or not

//* This is the function we are using *//

int leap(int year)
{
    // This formula is derived because if the year is completely by 400 or 4 its a leap year
    // However if the code is not completely divisible by 400 then it is nota leap

	if( (0 == year % 4) && (0 != year % 100) || (0 == year % 400) )
		return 1;
	else
		return 0;
}

// After we get our formula we can now create our code
//*Main Function*//
// We are using our leap function in action now//
// Enter the 2 years using command line arguments//

int main(int argc, char * argv[]){

    int year1, year2, i;
    year1 = atoi(argv[1]);
    year2 = atoi(argv[2]);

    for(i = year1; i <= year2; i++)
    {

    	if(leap(i))
            printf("%d\n", i);
        }
    
    return 0;
}
