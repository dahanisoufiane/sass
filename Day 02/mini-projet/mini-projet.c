#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE_LENGTH 50
#define MAX_AUTHOR_LENGTH 50

char titles[MAX_BOOKS][MAX_TITLE_LENGTH];
char authors[MAX_BOOKS][MAX_AUTHOR_LENGTH];
float prices[MAX_BOOKS];
int quantities[MAX_BOOKS];
int bookCount = 0;

void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("Stock is full. Cannot add more books.\n");
        return;
    }

    printf("Enter book title: ");
    scanf("%[^\n]", titles[bookCount]);
    getchar(); // Clear newline character

    printf("Enter book author: ");
    scanf("%[^\n]", authors[bookCount]);
    getchar();

    printf("Enter book price: ");
    scanf("%f", &prices[bookCount]);

    printf("Enter book quantity: ");
    scanf("%d", &quantities[bookCount]);

    bookCount++;
}

void displayBooks() {
    if (bookCount == 0) {
        printf("No books available.\n");
        return;
    }

    printf("Available Books:\n");
    for (int i = 0; i < bookCount; i++) {
        printf("Title: %s\n", titles[i]);
        printf("Author: %s\n", authors[i]);
        printf("Price: %.2f\n", prices[i]);
        printf("Quantity: %d\n", quantities[i]);
        printf("\n");
    }
}

void searchBook() {
    char searchTitle[MAX_TITLE_LENGTH];
    printf("Enter book title to search: ");
    scanf("%[^\n]", searchTitle);
    getchar();

    int found = 0;
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(titles[i], searchTitle) == 0) {
            printf("Book Found:\n");
            printf("Title: %s\n", titles[i]);
            printf("Author: %s\n", authors[i]);
            printf("Price: %.2f\n", prices[i]);
            printf("Quantity: %d\n", quantities[i]);
            printf("\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }
}

void updateQuantity() {
    char updateTitle[MAX_TITLE_LENGTH];
    printf("Enter book title to update quantity: ");
    scanf("%[^\n]", updateTitle);
    getchar();

    int found = 0;
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(titles[i], updateTitle) == 0) {
            printf("Enter new quantity: ");
            scanf("%d", &quantities[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }
}

void deleteBook() {
    char deleteTitle[MAX_TITLE_LENGTH];
    printf("Enter book title to delete: ");
    scanf("%[^\n]", deleteTitle);
    getchar();

    int found = 0;
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(titles[i], deleteTitle) == 0) {
            for (int j = i; j < bookCount - 1; j++) {
                strcpy(titles[j], titles[j + 1]);
                strcpy(authors[j], authors[j + 1]);
                prices[j] = prices[j + 1];
                quantities[j] = quantities[j + 1];
            }
            bookCount--;
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }
}

void displayTotalBooks() {
    printf("Total number of books in stock: %d\n", bookCount);
}

int main() {
    int choice;

    while (1) {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Update Quantity\n");
        printf("5. Delete Book\n");
        printf("6. Display Total Books\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                updateQuantity();
                break;
            case 5:
                deleteBook();
                break;
            case 6:
                displayTotalBooks();
                break;
            case 7:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}