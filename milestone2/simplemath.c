extern void print_int(int x);
extern void print_string(char x[]);

void main(void)
{
  int num;

  num = 6 + 2;
  print_string("Should get 8\nGot: ");
  print_int(num);
  print_string("\n");

  num = 6 - 2;
  print_string("Should get 4\nGot: ");
  print_int(num);
  print_string("\n");

  num = 6 * 2;
  print_string("Should get 12\nGot: ");
  print_int(num);
  print_string("\n");

  num = 6 / 2;
  print_string("Should get 3\nGot: ");
  print_int(num);
  print_string("\n");

}
