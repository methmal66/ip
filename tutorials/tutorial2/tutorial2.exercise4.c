#include <stdio.h>

// define structure Item
struct {
  int item_no;
  double price;
  int quantity;
} typedef Item;

Item* get_input_items_from_user(int total_no_of_items_to_input, Item* items) {
  for (int number_of_items = 0; number_of_items < total_no_of_items_to_input;
       number_of_items++) {
    int item_no;
    double price;
    int quantity;
    int current_count = number_of_items + 1;
    printf("-----item %d-----\n", current_count);
    printf("Item no : ");
    scanf("%d", &item_no);
    printf("Price : ");
    scanf("%lf", &price);
    printf("Quantity : ");
    scanf("%d", &quantity);
    Item current_item = {item_no, price, quantity};
    items[number_of_items] = current_item;
  }
  return items;
}

void display_items(Item* items, int total_no_of_items_to_input) {
  puts("\nItemNo\tPrice\tQuantity");
  puts("========================");
  for (int count = 0; count < total_no_of_items_to_input; count++) {
    Item current_item = items[count];
    printf("%d\t%.2lf\t%d\n", current_item.item_no, current_item.price,
           current_item.quantity);
  }
}

int main() {
  int no_of_inputs = 2;
  Item items[no_of_inputs];
  get_input_items_from_user(
      no_of_inputs,
      items);  // this function uses a pointer to the Item array 'items'
  display_items(items, no_of_inputs);
  return 0;
}
