// include header files
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// function to add new students
void enter_details(FILE *student_file)
{
    // variable declaration
    char name[100], DoB[20], course[100], year[8], address[200]; // Increased buffer size for address

    // enter data
    printf("Enter Name: ");
    fgets(name, sizeof(name), stdin);
    strtok(name, "\n"); // Remove newline character

    printf("Enter Date of birth: ");
    fgets(DoB, sizeof(DoB), stdin);
    strtok(DoB, "\n"); // Remove newline character

    printf("Enter Course: ");
    fgets(course, sizeof(course), stdin);
    strtok(course, "\n"); // Remove newline character

    printf("Enter Year: ");
    fgets(year, sizeof(year), stdin);
    strtok(year, "\n"); // Remove newline character

    printf("Enter Address: ");
    fgets(address, sizeof(address), stdin);
    strtok(address, "\n"); // Remove newline character

    // enter data to the file (School.txt)
    fprintf(student_file, "Name - %s | DoB - %s | Address - %s | Course - %s | Year - %s\n", name, DoB, address, course, year);
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

    // open the School.txt
    FILE *studen_file;
    studen_file = fopen("School.txt", "a+");

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
        enter_details(studen_file);
        break;

    case 2:
        find_student();
        break;

    case 3:
        count_students();

    default:
        break;
    }

    fclose(studen_file);
    return 0;
}
