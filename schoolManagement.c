// include header files
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// function to add new students
void enter_details()
{
}

// functions to find students
void find_student()
{
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

    // structure for entering data
    struct StudentDetails
    {
        char name[100];
        char DoB[20];
        char Address[100];
        char course[50];
        char year[5];
    };

    struct StudentDetails S[10000];

    // index for operations
    printf("1\tEnter Details.\n");
    printf("2\tFind Student from number.\n");
    printf("3\tFind student from first name.\n");
    printf("3\tCount students\n");

    printf("Enter command number...");
    scanf("%d", &command);

    switch (command)
    {
    case 1:
        enter_details();
        break;

    case 2:
        find_student();
        break;

    case 3:
        count_students();

    default:
        break;
    }

    return 0;
}
