// Software -  School Management System
// Developer - Jordan Ukawoko
// Date - June 8th 2022

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// This .h file carries all the functions for the school management system

void create_student()
{
    printf("Please input the details of the student\n");
    printf("Firstly, enter the firts name of the stduent\n");

    // We are entering the students first name
    scanf("%s", st[i].first_name);
    printf("Now, please enter the surname of the student");

    // We are entering the students last name
    scanf("%s", st[i].surname);
    printf("Please enter the students Roll Number");

    // We are entering the students roll number
    scanf("%d", &st[i].roll_number);
    printf("Now please enter the GPA (Grade Point Average)\n");

    // We are entering the students grade point average
    scanf("%.2f", &st[i].GPA);
    printf("Now pleae enter the grade description");

    // We are entering the grade description of the student e.g first class honours
    scanf("%s", st[i].grade_description);
    printf("Finally, enter the module ID");

    scanf("%.2f", &st[i].cid);
     for (int j = 0; j < 5; j++) {
        scanf("%d", &st[i].cid[j]);
    }
    i = i + 1;
}

// We use this function to find the student
// How this functon works it sorts out the students
// Based on their roll number
void find_roll_number()
{
    int x;
    printf("Enter the Roll Number of the student, please\n");
    scanf("%d", &x);
    for (int j = 1; j <= i; j++) {
        if (x == st[i].roll_number) {
            printf("The Students Details are: \n");
            printf("The First name is %s\n :", st[i].first_name);
            printf("The Last name is %s\n :",st[i].surname);
            printf("The Grade Point Average is %f\n: ", st[i].GPA);
            printf("Enter the course ID, for each course\n: ");
        }
        for (int j = 0; j < 5; j++) {
            printf("The course ID are %d\n",st[i].cid[j]);
        }
        break;
    }
}

// We are using this function to find the roll number
// This helps us to sort the students in the database based
// Off of their roll numbers 
void find_first_name()
{
    char a[50];
    printf("Please, enter the First Name of the student\n");
    scanf("%s", a);
    int c = 0;
 
    for (int j = 1; j <= i; j++) {
        if (!strcmp(st[j].first_name, a)) {
 
            printf("The Students Details are : \n");
            printf("The First name is : %s\n", st[i].first_name);
            printf("The Surname name is : %s\n",st[i].surname);
            printf("The Roll Number is : %d\n ",st[i].roll_number);
            printf("The Grade Point Average is : %f\n",st[i].GPA);
            printf("Enter the course ID of each course : \n");
    
            for (int j = 0; j < 5; j++) {
                printf(
                    "The course ID are %d\n", st[i].cid[j]);
            }
            c = 1;
        }
        else
            printf("The First Name was unfortunately not Found\n");
    }
}

// Function to find
// the students enrolled
// in a particular course
void find_course()
{
    int id;
    printf("Enter the course ID \n");
    scanf("%d", &id);
    int c = 0;
 
    for (int j = 1; j <= i; j++) {
        for (int d = 0; d < 5; d++) {
            if (id == st[j].cid[d]) {
 
                printf("The Students Details are\n");
                printf("The First name is %s\n",st[i].first_name);
                printf("The Last name is %s\n", st[i].surname);
                printf("The Roll Number is %d\n ",st[i].roll_number);
                printf("The Grade Point Average is %f\n",st[i].GPA);

                c = 1;
 
                break;
            }
            else
                printf(
                    "The First Name not Found\n");
        }
    }
}

// This function prints the total number of students within the database
void total()
{
    printf("The total number of Student is : %d\n", i);
    printf("\n you can have a max of 50 students\n");
    printf("you can have %d more students\n", 50 - i);
}


// This function is used to delete a student number
void delete_student()
{
    int a;
    printf("Enter the Roll Number (for the student), which you want to be deleted : \n");
    scanf("%d", &a);
    for (int j = 1; j <= i; j++) {
        if (a == st[j].roll_number) {
            for (int k = j; k < 49; k++)
                st[k] = st[k + 1];
            i--;
        }
    }
    printf("The student has been  removed Successfully\n");
}

// This function updates the database of the students
void update_database()
{
 
    printf("Enter the roll number to update the entry : ");
    long int x;
    scanf("%ld", &x);
    for (int j = 0; j < i; j++) {
        if (st[j].roll_number == x) {
            printf("1. first name\n"
                   "2. last name\n"
                   "3. roll no.\n"
                   "4. CGPA\n"
                   "5. courses\n");
            int z;
            scanf("%d", &z);
            switch (z) {
            case 1:
                printf("Enter the new first name : \n");
                scanf("%s", st[j].first_name);
                break;
            case 2:
                printf("Enter the new last name : \n");
                scanf("%s", st[j].surname);
                break;
            case 3:
                printf("Enter the new roll number : \n");
                scanf("%d", &st[j].roll_number);
                break;
            case 4:
                printf("Enter the new GPA : \n");
                scanf("%f", &st[j].GPA);
                break;
            case 5:
                printf("Enter the new courses \n");
                scanf(
                    "%d%d%d%d%d", &st[j].cid[0],
                    &st[j].cid[1], &st[j].cid[2],
                    &st[j].cid[3], &st[j].cid[4]);
                break;
            }
            printf(" DATABASE HAS BEEN UPDATED SUCCESSFULLY.\n");
        }
    }
}