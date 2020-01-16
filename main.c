#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "funcs.h"

int main() {
  int num_players = 5; //TODO: Change this
  struct user arr_players[num_players] = malloc(sizeof(struct user) * num_players);
  int i = 0;
  for(; i < num_players; i++) {
    arr_players[i] = {.is_alive = 1, .role = 'c'};
  }

  srand(time(NULL));
  int randint = rand() % num_players;
}
