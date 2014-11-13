extern void print_int(int x);
extern void print_string(char x[]);

char c;

void main(void)
{
  int num;

  c='1';
  num = c;
  print_string("Should get 49, since '1' is equal to 49\n");
  print_int(num);
  print_string("\n");
  print_string("Should get 49, since '1' is equal to 49\n");
  print_int(c);
  print_string("\n");
}
