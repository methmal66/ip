#include <stdio.h>

struct {
  int item_no;
  double price;
  int quantity;
} typedef Item;

void get_input_items_from_user(Item* items, const int items_length) {
  for (int i = 0; i < items_length; i++) {
    Item item;
    printf("--------item %d--------\n", i + 1);
    printf("%-10s : ", "Item no");
    scanf("%d", &item.item_no);
    printf("%-10s : ", "Price");
    scanf("%lf", &item.price);
    printf("%-10s : ", "Quantity");
    scanf("%d", &item.quantity);
    printf("\n");
    items[i] = item;
  }
}

void display_items(Item* items, const int items_length) {
  for (int i = 0; i < items_length; i++) {
    Item item = items[i];
    printf("|%-15d|%-15.2lf|%-15d|\n", item.item_no, item.price, item.quantity);
  }
}

int main(const int argc, const char* argv[]) {
  const int NO_OF_INPUTS = 2;
  printf("Enter number of items you wish to input : ");
  scanf("%d", &NO_OF_INPUTS);
  Item items[NO_OF_INPUTS];
  get_input_items_from_user(items /*pointer to the array*/, NO_OF_INPUTS);
  puts("+---------------+---------------+---------------+");
  printf("|%-15s|%-15s|%-15s|\n", "Item no", "Price", "Quantity");
  puts("+---------------+---------------+---------------+");
  display_items(items /*pointer to the array*/, NO_OF_INPUTS);
  puts("+---------------+---------------+---------------+");
  return 0;
}
