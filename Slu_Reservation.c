#include <stdio.h>

int main() {
    char name[50];      // Array to store the user's name
    char sluID[15];     // Array to store the SLU ID number
    char year[10];      // Array to store the year (e.g., "1st Year")
    char course[50];    // Array to store the course

    printf("Welcome to the Saint Louis University Event Reservation System!\n\n");

    // Prompt for the user's name
    printf("Enter your Name: ");
    fgets(name, sizeof(name), stdin);

    // Prompt for the SLU ID number
    printf("Enter your SLU ID Number: ");
    fgets(sluID, sizeof(sluID), stdin);

    // Prompt for the year
    printf("Enter your Year (e.g., 1st Year, 2nd Year): ");
    fgets(year, sizeof(year), stdin);

    // Prompt for the course
    printf("Enter your Course (e.g., BS Computer Science): ");
    fgets(course, sizeof(course), stdin);

    
    printf("\nThank you, %s, for reserving! Your details are:\n", name);
    printf("SLU ID Number: %s", sluID);
    printf("Year: %s", year);
    printf("Course: %s", course);
    printf("\nWe look forward to seeing you at the event!\n");

    return 0;
}
