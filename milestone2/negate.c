extern void print_int(int x);
extern void print_string(char c[]);

void main(void){
  int x, y;

  x = 0;
  y = 1;

  print_string("Should print Foo\n");
  if(!(x == 1)) {
    print_string("Foo\n");
  }

  print_string("\n");
  print_string("Should print Bar\n");
  if(!(x == 0 && y == 10)) {
    print_string("Bar\n");
  }

  print_string("\nShould not print anything else\n");
  if(x != 1) {
    if(!(x < 0) && y == 1) {
      print_string("Boo\n");
    }
  }
}
