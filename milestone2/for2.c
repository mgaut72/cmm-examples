extern void print_int(int x);
extern void print_string(char c[]);

void loopNoInitialization(int times) {
  int i;

  i = times;
  for(; i > 0 ; i = i - 1) {
    print_int(i);
    print_string(" ");
  }

  print_int(i);
  print_string(" ");
}

void loopNoCondition(int times) {
  int i;

  for(i = times; ; i = i - 1) {
    print_int(i);
    print_string(" ");

    if( i <= 0 ) {
      return;
    }
  }
}

void loopNoAfterThought(int times) {
  int i;

  for(i = times; i > 0 ;) {
    print_int(i);
    print_string(" ");

    i = i - 1;
  }

  print_int(i);
  print_string(" ");
}

void main(void){
  print_string("Should get 3 2 1 0 -1\n");
  loopNoInitialization(3);
  loopNoInitialization(-1);

  print_string("\n");

  print_string("Should get 3 2 1 0 -1\n");
  loopNoCondition(3);
  loopNoCondition(-1);

  print_string("\n");

  print_string("Should get 3 2 1 0 -1\n");
  loopNoAfterThought(3);
  loopNoAfterThought(-1);
}
