#include "structures.h"

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