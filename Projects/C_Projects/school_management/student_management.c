// Software -  School Management System
// Developer - Jordan Ukawoko
// Date - June 8th 2022

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "database.h"
#include "driver.h"
 
// Variable to keep track of
// number of students
int i = 0;
 
// Structure to store the student
struct sinfo {
    char first_name[50];
    char surname[50];
    int roll_number;
    float GPA;
    char grade_description; // e.g first class honours, second class honours etc etc
    int cid[10];
} st[55];

void create_student();
void find_roll_number();
void find_first_name();
void find_course();
void total();
void delete_student();
void update_database();
void main();