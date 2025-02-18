#include <stdio.h>

int main() {
    int categories, i, totalBooks = 0;

    // Ask for the number of categories
    printf("Enter the number of book categories: ");
    scanf("%d", &categories);

    // Declare an array to hold the number of books in each category
    int books[categories];

    // Get the number of books in each category
    for (i = 0; i < categories; i++) {
        printf("Enter the number of books in category %d: ", i + 1);
        scanf("%d", &books[i]);
        totalBooks += books[i]; // Add to total books count
    }

    // Display the total number of books
    printf("Total number of books in the library: %d\n", totalBooks);

    return 0;
}
