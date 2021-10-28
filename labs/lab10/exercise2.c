#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char id[4];
    char name[150];
    short quantity;
    float price_per_kg;
} Item;

short get_user_inputs(Item[], short);
void write_data_to_file(Item[], short, char[]);

int main(int argc, char *argv[]){
    short max_len = 100;
    Item items[max_len];
    short item_count = get_user_inputs(items, max_len);
    write_data_to_file(items, item_count, "purchase.txt");
}

short get_user_inputs(Item items[], short max_len){
    printf("Enter 0 as ID to exit!\n\n");
    short count =  0;
    for(int i=0; i<max_len; i++){
        printf("++++++Enter item %hu++++++\n");
        printf("ID\t\t>>> ");
        scanf("%s",items[i].id);
        if(items[i].id[0] == '0'){
            break;
        }
        printf("Name\t\t>>> ");
        scanf("%s",items[i].name);
        printf("Quantity\t>>> ");
        scanf("%hu", &items[i].quantity);
        printf("1Kg price\t>>> ");
        scanf("%f", &items[i].price_per_kg);
        printf("\n");
        count++;
    }
    return count;
}

void write_data_to_file(Item items[], short count, char file_name[]){
    FILE *file;
    file = fopen(file_name,"w");

    if(file == NULL){
        printf("Unable to create the file\n");
        exit(-1);
    }

    printf("\n");
    for(int i=0; i<count; i++){
        fprintf(file,"%s\t%s\t%hu\t%.2f\n", items[i].id, items[i].name, items[i].quantity, items[i].price_per_kg);
        printf("wrote \"%s\t%s\t%hu\t%.2f\" to \"%s\"\n", items[i].id, items[i].name, items[i].quantity, items[i].price_per_kg, file_name);
    }

    fclose(file);
}
