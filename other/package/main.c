#include <stdio.h>

#include "helpers.h"

typedef struct {
  short option;
  char name[50];
  float low;
  float mid;
  float high;
} Room;

typedef struct {
  short option;
  char name[50];
  float charge;
} Tour;

Room find_relevent_room(short option) {
  if (option == 1) return (Room){1, "Suit", 45000.0, 44000.0, 43000.0};
  if (option == 2) return (Room){2, "Superior", 40000.0, 38000.0, 35000.0};
  if (option == 1) return (Room){1, "Deluxe", 37500.0, 35000.0, 32000.0};
}

Tour find_relevent_tour(short option) {
  if (option == 1) return (Tour){1, "Safari", 3500};
  if (option == 2) return (Tour){2, "Bird Watching", 1000};
  if (option == 3) return (Tour){3, "Boat Ride", 1500};
  if (option == 4) return (Tour){4, "City Tour", 2000};
}

float find_charge_per_person(short guests, Room room) {
  if (guests <= 2) return room.low;
  if (guests <= 5) return room.mid;
  return room.high;
}

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