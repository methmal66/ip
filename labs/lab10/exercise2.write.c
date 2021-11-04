#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char id[4];
    char name[150];
    short quantity;
    float price_per_kg;
} Item;

void input_items(Item[], int);
void write_data_to_file(Item[], int, char[]);

int main() {
    const int COUNT = 2;
    Item items[COUNT];
    input_items(items, COUNT);
    write_data_to_file(items, COUNT, "purchase.txt");
}

void input_items(Item items[], int len) {
    printf("Enter 5 items in the following format\n");
    printf("id name quantity price(per kg)\n\n");

    for (int i = 0; i < len; i++) {
        printf("Item%d>>> ", i + 1);
        scanf("%s %s %hu %f", items[i].id, items[i].name, &items[i].quantity, &items[i].price_per_kg);
    }
}

void write_data_to_file(Item items[], int len, char file_name[]) {
    FILE *file;
    file = fopen(file_name, "w");
    if (file == NULL) {
        printf("Unable to create the file\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < len; i++)
        fprintf(file, "%s\t%s\t%hu\t%.2f\n", items[i].id, items[i].name, items[i].quantity, items[i].price_per_kg);

    fclose(file);
}
