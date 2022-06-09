// Software -  School Management System
// Date - June 8th 2022

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Variable to keep track of
// number of students

int i = 0;
// We are using struct to store the student details
struct sinfo {
	char first_name[50];
    char last_name[50];
	int roll_number;
	float gpa;
	int cid[10];
} st[55];

// Function to add the student
void create_student()
{

	printf("Welcome, please add the student details\n");
	printf("--------------\n");
	printf("Enter the first "
		"name of the student\n");
	scanf("%s", st[i].first_name);
	printf("Enter the last name"
		" of the student\n");
	scanf("%s", st[i].last_name);
	printf("Enter the Roll Number of the student\n");
	scanf("%d", &st[i].roll_number);
	printf("Enter the GPA"
		"you obtained\n");
	scanf("%f", &st[i].gpa);
	printf("Enter the course ID"
		" of each course the student is studying\n");
	for (int j = 0; j < 5; j++) {
		scanf("%d", &st[i].cid[j]);
	}
	i = i + 1;
}


// Function to find the student
// by the roll number
void find_roll()
{
	int x;
	printf("Enter the Roll Number"
		" of the student\n");
	scanf("%d", &x);
	for (int j = 1; j <= i; j++) {
		if (x == st[i].roll_number) {
			printf(
				"The Students Details are\n");
			printf(
				"The First name is %s\n",
				st[i].first_name);
			printf(
				"The Last name is %s\n",
				st[i].last_name);
			printf(
				"The CGPA is %f\n",
				st[i].gpa);
			printf(
				"Enter the course ID"
				" of each course\n");
		}
		for (int j = 0; j < 5; j++) {
			printf(
				"The course ID are %d\n",
				st[i].cid[j]);
		}
		break;
	}
}

// Function to find the student
// by the first name
void find_fn()
{
	char a[50];
	printf("Enter the First Name"
		" of the student\n");
	scanf("%s", a);
	int c = 0;

	for (int j = 1; j <= i; j++) {
		if (!strcmp(st[j].first_name, a)) {

			printf(
				"The Students Details are\n");
			printf(
				"The First name is %s\n",
				st[i].first_name);
			printf(
				"The Last name is %s\n",
				st[i].last_name);
			printf(
				"The Roll Number is %d\n ",
				st[i].roll_number);
			printf(
				"The CGPA is %f\n",
				st[i].gpa);
			printf(
				"Enter the course ID of each course\n");

			for (int j = 0; j < 5; j++) {
				printf(
					"The course ID are %d\n",
					st[i].cid[j]);
			}
			c = 1;
		}
		else
			printf(
				"The First Name was not Found !!\n");
	}
}

// This function finds the course the student is studying
void find_course()
{
	int id;
	printf("Enter the course ID \n");
	scanf("%d", &id);
	int c = 0;

	for (int j = 1; j <= i; j++) {
		for (int d = 0; d < 5; d++) {
			if (id == st[j].cid[d]) {

				printf(
					"The Students Details are\n");
				printf(
					"The First name is %s\n",
					st[i].first_name);
				printf(
					"The Last name is %s\n",
					st[i].last_name);
				printf(
					"The Roll Number is %d\n ",
					st[i].roll_number);
				printf(
					"The CGPA is %f\n",
					st[i].gpa);

				c = 1;

				break;
			}
			else
				printf(
					"The First Name not Found\n");
		}
	}
}

// Function to print the total
// number of students
void tot_s()
{
	printf("The total number of"
		" Student is %d\n",
		i);
	printf("\n you can have a "
		"max of 50 students\n");
	printf("you can have %d "
		"more students\n",
		50 - i);
}

// Function to delete a student
// by the roll number
void del_s()
{
	int a;
	printf("Enter the Roll Number"
		" which you want "
		"to delete\n");
	scanf("%d", &a);
	for (int j = 1; j <= i; j++) {
		if (a == st[j].roll_number) {
			for (int k = j; k < 49; k++)
				st[k] = st[k + 1];
			i--;
		}
	}
	printf("The Roll Number"
		" is removed Successfully\n");
}

// Function to update a students data
void up_s()
{

	printf("Enter the roll number"
		" to update the entry : ");
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
				printf("Enter the new "
					"first name : \n");
				scanf("%s", st[j].first_name);
				break;
			case 2:
				printf("Enter the new "
					"last name : \n");
				scanf("%s", st[j].last_name);
				break;
			case 3:
				printf("Enter the new "
					"roll number : \n");
				scanf("%d", &st[j].roll_number);
				break;
			case 4:
				printf("Enter the new CGPA : \n");
				scanf("%f", &st[j].gpa);
				break;
			case 5:
				printf("Enter the new courses \n");
				scanf(
					"%d%d%d%d%d", &st[j].cid[0],
					&st[j].cid[1], &st[j].cid[2],
					&st[j].cid[3], &st[j].cid[4]);
				break;
			}
			printf("UPDATED SUCCESSFULLY.\n");
		}
	}
}

// Driver code
int main()

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
			find_rl();
			break;
		case 3:
			find_fn();
			break;
		case 4:
			find_c();
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

