#include <stdio.h>

typedef struct {
    char ID[10];
    char title[100];
    int number_of_copies;
    int number_of_readers;
} Book;

void input_book_details(Book[], int);
Book find_most_popular_book(Book[], int);

int main(int argc, char const *argv[]) {
    const int COUNT = 3;
    Book library[COUNT];
    input_book_details(library, COUNT);
    const Book book = find_most_popular_book(library, COUNT);
    printf("Most popular book : %s\t%s\t%d\t%d", book.ID, book.title, book.number_of_copies, book.number_of_readers);
}

void input_book_details(Book lib[], int len) {
    printf("Enter book details in the following format\n");
    printf("ID title no_of_copies no_of_readers\n\n");
    for (int i = 0; i < len; i++) {
        printf("Book%d>>> ", i + 1);
        scanf("%s %s %d %d", lib[i].ID, lib[i].title, &lib[i].number_of_copies, &lib[i].number_of_readers);
    }
}

Book find_most_popular_book(Book lib[], int len) {
    Book most_popular_book = lib[0];
    for (int i = 0; i < len; i++) {
        if (lib[i].number_of_readers > most_popular_book.number_of_readers)
            most_popular_book = lib[i];
    }
    return most_popular_book;
}
