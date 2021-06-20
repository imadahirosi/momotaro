#include<stdio.h>

enum Status {FIREWOOD_COLLECTING, WASHING};

typedef struct {
  enum Status go_to;
} an;

void was_lived(){
  puts("lived!!!¥n");
}

int when(an *person, enum Status status){
  if(person->go_to == status){
    puts("It's true!¥n");
    return 1;
  }
  return 0;
}

int main(){
  long long ago;
  an old_man, old_woman;
  was_lived();
  old_man.go_to = FIREWOOD_COLLECTING;
  old_woman.go_to = WASHING;
  when(&old_woman, WASHING);
  return 0;
}
