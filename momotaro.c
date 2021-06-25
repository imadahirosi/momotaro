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

int when(an *person, enum Status status){
  if(person->go_to == status){
    puts("It's true!");
    return 1;
  }
  return 0;
}

char* flow(char* where){
    if(strcmp(where, "kawa")) return "momo";
    return "ochiba";
}

an cut(char* fruit){
    an person;
    if(strcmp(fruit, "momo")){
        person.go_to = HOME;
        puts("momotaro came out!\n");
    }
    return person;
}

int main(){
  long long ago;
  an old_man, old_woman;
  was_lived();
  old_man.go_to = FIREWOOD_COLLECTING;
  old_woman.go_to = WASHING;
  when(&old_woman, WASHING);
  a momo = flow("kawa");
  old_woman.go_to = HOME;
  an momotaro = cut(momo);
  return 0;
}
