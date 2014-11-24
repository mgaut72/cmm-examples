extern void print_int(int x);
extern void print_string(char c[]);

void main(void){
  int x, y;
  char letter;

  x = 'A' + 'A';
  letter = 'A' + 'A';

  print_string("Should print 130\n");
  print_int(x);
  print_string("\n\n");

  print_string("Should print -126\n");
  print_int(letter);
  print_string("\n\n");

  letter = letter + 'B';

  print_string("Should print -60\n");
  print_int(letter);
  print_string("\n\n");

  letter = letter + 60;
  print_string("Should print 0\n");
  print_int(letter);
  print_string("\n");
}
