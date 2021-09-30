#ifndef STRUCTURES_H
#define STRUCTURES_H

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

#endif