#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// structure for storing the sutent
struct SchoolManagement
{
    int sid[10];
    char fname[20];
    char lname[20];
    char course[50];
    char academic_year[7];
} student[1000];

int i = 0;

void add_student()
{
    printf("Add the student\n\n");

    printf("First name\t:");
    scanf("%s", &student[i].fname);

    printf("Last name\t:");
    scanf("%s", &student[i].lname);

    printf("Course\t:");
    scanf("%s", &student[i].course);

    printf("Academic Year\t:");
    scanf("%s", &student[i].academic_year);

    i = i + 1;
}

void find_from_fname()
{
}

void find_from_sid()
{
}

void find_from_course()
{
}

void count()
{
    printf("Total number of students %d", i);
}

void update()
{
}

void delete()
{
}

int main(int argc, char const *argv[])
{
    int command;

    printf("1\tAdd a student\n");
    printf("2\tFind from first name\n");
    printf("3\tFind from ID\n");
    printf("4\tfind from course\n");
    printf("5\tcount\n");
    printf("6\tUpdate\n");
    printf("7\tDelete\n\n");

    printf("Enter your command\t");
    scanf("%d", &command);

    switch (command)
    {
    case 1:
        add_student();
        break;

    case 2:
        find_from_fname();
        break;

    case 3:
        find_from_sid();
        break;

    case 4:
        find_from_course();
        break;

    case 5:
        count();
        break;

    case 6:
        update();
        break;

    case 7:
        delete ();
        break;

    default:
        printf("INVALID COMMAND");
        break;
    }

    return 0;
}
