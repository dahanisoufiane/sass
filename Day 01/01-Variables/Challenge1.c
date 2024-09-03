#include <stdio.h>

int main() {
    char firstName[50], lastName[50];
    int age;
    char gender;
    char email[100];

    printf("Enter your last name: ");
    scanf("%s", lastName);

    printf("Enter your first name: ");
    scanf("%s", firstName);

    printf("Enter your age: ");
        scanf("%d", &age);

    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter your email: ");
    scanf("%s", email);

    printf("\nYour information is:\n");
    printf("Name: %s %s\n", lastName, firstName);
    printf("Age: %d\n", age);
    printf("Gender: %c\n", gender);
    printf("Email: %s\n", email);

    return 0;
}