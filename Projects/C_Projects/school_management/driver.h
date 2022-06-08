// Software -  School Management System
// Developer - Jordan Ukawoko
// Date - June 8th 2022

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Driver code
void main()
 
{
    int choice, count;
    while (i = 1) {
        printf("The Task that you "
               "want to perform\n");
        printf("1. Add the Student Details\n");
        printf("2. Find the Student "
               "Details by Roll Number\n");
        printf("3. Find the Student "
               "Details by First Name\n");
        printf("4. Find the Student "
               "Details by Course Id\n");
        printf("5. Find the Total number"
               " of Students\n");
        printf("6. Delete the Students Details"
               " by Roll Number\n");
        printf("7. Update the Students Details"
               " by Roll Number\n");
        printf("8. To Exit\n");
        printf("Enter your choice to "
               "find the task\n");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            create_student();
            break;
        case 2:
            find_roll_number();
            break;
        case 3:
            find_first_name();
            break;
        case 4:
            find_course();
            break;
        case 5:
            tot_s();
            break;
        case 6:
            del_s();
            break;
        case 7:
            up_s();
            break;
        case 8:
            exit(0);
            break;
        }
    }
}