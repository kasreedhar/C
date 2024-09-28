 //#4 multiplication tables
 //C program that generates multiplication tables from 1 to 10 up to a specified maximum value.
 //This C program generates multiplication tables for numbers from 1 to 10 up to the value of 12. Here's a breakdown of what it does:


#include <stdio.h>  // Include the standard input-output library for printf.

int main() {
    int i, j;       // Declare integer variables i and j.
    int table = 10; // Set the value for the multiplication tables up to 10.
    int max = 12;   // Set the maximum value for each table (up to 12).

    // Outer loop: Iterate through numbers from 1 to 10 for multiplication tables.
    for (i = 1; i <= table; i++) {
        printf("%d-> Table \n",i);
        // Inner loop: Multiply the number (i) with values from 0 to 12.
        for (j = 0; j <= max; j++) {
            printf("%d x %d = %d\n", i, j, i * j); // Print the multiplication equation.
        }
        printf("\n"); // Print a blank line to separate tables.
    }

    return 0; // Return 0 to indicate successful program execution.
}

