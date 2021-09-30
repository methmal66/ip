#include <stdio.h>

#include "helpers.h"
#include "selectors.h"
#include "structures.h"

int main(int argc, char *argv[]) {
  short room_option =
      input_option("Room option 1)Suit/ 2)Superior/ 3)Deluxe>>> ", 3);
  short guests = input_natural_number("guests");
  short days = input_natural_number("days");

  Room room = find_relevent_room(room_option);
  float charge_per_person = find_charge_per_person(guests, room);
  float total = charge_per_person * guests * days;

  while (1) {
    short need_extra_tour = input_if_need_additional_tour();
    if (need_extra_tour) {
      short tour_option = input_option(
          "Input tour option 1)Safari/ 2)Bird Watching/ 3)Boat Ride/ 4)City "
          "Tour>>> ",
          4);
      Tour tour = find_relevent_tour(tour_option);
      total += tour.charge * guests;
    } else {
      printf("Total Price : %.2f", total);
      break;
    }
  }

  return 0;
}