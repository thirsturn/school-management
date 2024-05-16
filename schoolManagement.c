// include header files
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char number[5], name[100], Adress[100], year[5], course[50];

// function to add new students
void enter_details(FILE *studentDetails)
{
    printf("Enter number : ");
    scanf("%s", &number);

    printf("Enter name : ");
    scanf("%s", &name);

    printf("Enter Address : ");
    scanf("%s", &Adress);

    printf("Enter year : ");
    scanf("%s", &year);

    printf("Enter course : ");
    scanf("%s", &course);

    fprintf(studentDetails, "ID :%s |Name :%s |Address :%s |Year :%s |course :%s |", number, name, Adress, year, course);
}

// function to count students.
void count_students()
{
}

// function to update details

// function to delete data

int main(int argc, char const *argv[])
{

    // Declare the variables
    int command;

    // open the School.txt file
    FILE *studentDetails;
    studentDetails = fopen("School.txt", "a+");

    // index for operations
    printf("1\tEnter Details.\n");

    printf("2\tCount students\n");

    printf("Enter command number...");
    scanf("%d", &command);

    switch (command)
    {
    case 1:
        enter_details(studentDetails);
        break;

    case 2:
        count_students();

    default:
        break;
    }

    fclose(studentDetails);
    return 0;
}
