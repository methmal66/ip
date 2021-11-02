#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char id[4];
    char name[150];
    short quantity;
    float price_per_kg;
} Item;

short read_items_from_file(Item[], short, char[]);
void display_items(Item[], short);

int main(int argc, char const* argv[]) {
    const short max_len = 200;
    Item items[max_len];
    const short items_count = read_items_from_file(items, max_len, "purchase.txt");
    display_items(items, items_count);
    return 0;
}

short read_items_from_file(Item items[], short max_len, char file_name[]) {
    FILE* file = fopen(file_name, "r");
    short count = 0;
    if (file == NULL) {
        printf("File not found!\n");
        exit(-1);
    }

    for (int i = 0; i < 1; i++) {
        fscanf(file, "%s\t%s\t%hu\t%f", items[i].id, items[i].name, &items[i].quantity, &items[i].price_per_kg);
        count++;
    }

    fclose(file);
    return count;
}

void display_items(Item items[], short count) {
    for (int i = 0; i < count; i++) {
        printf("%s\t%s\t%hu\t%.2f", items[i].id, items[i].name, items[i].quantity, items[i].price_per_kg);
    }
}