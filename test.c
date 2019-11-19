#include <stdio.h>
#include <cs50.h>

int main(void){
    int numStudents = get_int("Number of students: ");
    int numAssignments = get_int("Number of Assignments for each student: ");

    int gradebook[numStudents][numAssignments];
    string students[numStudents];
    int averages [numStudents];

    for(int i=0; i<numStudents; i++){
        students[i] = get_string("Name of student %i: ",i);
            printf("%s",students[i]);
    }



    int entry = get_int("Enter Grade: ");
    printf("grade is: %i\n",entry);



} // end of main
