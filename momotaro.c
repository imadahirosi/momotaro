/*
 * MOMOTARO
 * It is a famous old tale of Japan.
 *
 * Author: imadahirosi
 *
 * RULE
 * - "main()" function must be readable English.
 * - This program must be executable.
 * - Try not to rely on comments as much as possible.
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

enum Status {FIREWOOD_COLLECTING, WASHING, HOME};

typedef struct {
  enum Status go_to;
} an;

typedef char* a;

void was_lived(){
  puts("lived!!!");
}

char* was_named(char* name){
  char msg[100] = "named ";
  strcat(msg, name);
  puts(msg);
  return name;
}

int when(an *person, enum Status status){
  if(person->go_to == status){
    puts("It's true!");
    return 1;
  }
  return 0;
}

a came_out_from(char* fruit){
  return fruit;
}

char* flows_through(char* where){
  if(strcmp(where, "the river")) return "peach";
  return "fallen leaves";
}

int main(){
  long long ago;
  an old_man, old_woman;
  was_lived();
  old_man.go_to = FIREWOOD_COLLECTING;
  old_woman.go_to = WASHING;
  when(&old_woman, WASHING);
  a peach = flows_through("the river");
  old_woman.go_to = HOME;
  a baby = came_out_from(peach);
  baby = was_named("momotaro");
  return 0;
}
