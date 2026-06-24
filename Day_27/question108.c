#include <stdio.h>
int main() {
    char name[50];
    int roll, sub1, sub2, sub3;
    int total;
    float percentage;

    printf("--- Marksheet Generation System ---\n");
    printf("Enter Student Name: ");
    scanf("%s", name);
    printf("Enter Roll Number: ");
    scanf("%d", &roll);
    
    printf("Enter marks for Subject 1, 2 & 3 (out of 100): ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);

    total = sub1 + sub2 + sub3;
    percentage = total / 3.0;

    printf("\n===================================\n");
    printf("             MARKSHEET             \n");
    printf("===================================\n");
    printf("Name: %s\t\tRoll No: %d\n", name, roll);
    printf("-----------------------------------\n");
    printf("Subject 1 : %d\n", sub1);
    printf("Subject 2 : %d\n", sub2);
    printf("Subject 3 : %d\n", sub3);
    printf("-----------------------------------\n");
    printf("Total Marks: %d/300\n", total);
    printf("Percentage : %.2f%%\n", percentage);
    printf("Status     : %s\n", (sub1 >= 40 && sub2 >= 40 && sub3 >= 40) ? "PASS" : "FAIL");
    printf("===================================\n");

    return 0;
}