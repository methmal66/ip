#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char id[4];
    char name[150];
    short quantity;
    float price_per_kg;
} Item;

Item input_item();
void write_data_to_file(Item, char[]);

int main() {
    Item user_item = input_item();
    write_data_to_file(user_item, "purchase.txt");
    main();
}

Item input_item() {
    Item item;
    printf("++++++Enter item++++++\n");
    printf("ID\t\t>>> ");
    scanf("%s", item.id);
    printf("Name\t\t>>> ");
    scanf("%s", item.name);
    printf("Quantity\t>>> ");
    scanf("%hu", &item.quantity);
    printf("1Kg price\t>>> ");
    scanf("%f", &item.price_per_kg);
    printf("\n");
    return item;
}

void write_data_to_file(Item item, char file_name[]) {
    FILE *file;
    file = fopen(file_name, "w");
    if (file == NULL) {
        printf("Unable to create the file\n");
        exit(-1);
    }

    printf("\n");
    fprintf(file, "%s\t%s\t%hu\t%.2f\n", item.id, item.name, item.quantity, item.price_per_kg);

    fclose(file);
}
