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
float calculate_total_amount(Item[], short);

int main(int argc, char const* argv[]) {
    const short max_len = 100;
    Item items[max_len];
    const short items_count = read_items_from_file(items, max_len, "purchase.txt");
    const float total = calculate_total_amount(items, items_count);

    display_items(items, items_count);
    printf("\nTotal amount : %.2f\n", total);
}

short read_items_from_file(Item items[], short max_len, char file_name[]) {
    FILE* file = fopen(file_name, "r");
    short count = 0;
    if (file == NULL) {
        printf("File not found!\n");
        exit(EXIT_FAILURE);
    }

    int i = 0;
    while (fscanf(file, "%s\t%s\t%hu\t%f", items[i].id, items[i].name, &items[i].quantity, &items[i].price_per_kg) != EOF) {
        if (i == max_len) {
            printf("Maximum read limit exceeded!\n");
            break;
        }
        i++;
    }

    fclose(file);
    return i;
}

void display_items(Item items[], short count) {
    for (int i = 0; i < count; i++)
        printf("%s\t%s\t%hu\t%.2f\n", items[i].id, items[i].name, items[i].quantity, items[i].price_per_kg);
}

float calculate_total_amount(Item items[], short len) {
    float total = 0;
    for (int i = 0; i < len; i++)
        total += items[i].quantity * items[i].price_per_kg;
    return total;
}