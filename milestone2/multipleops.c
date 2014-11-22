extern void print_int(int x);
extern void print_string(char x[]);

void main(void)
{
  int num;

  num = 6 + 2 * 4;
  print_string("Should get 14\nGot: ");
  print_int(num);
  print_string("\n");

  num = 6 - 4 / 4;
  print_string("Should get 5\nGot: ");
  print_int(num);
  print_string("\n");

  num = 6 * 2 - 7;
  print_string("Should get 5\nGot: ");
  print_int(num);
  print_string("\n");

  num = 6 / 2 + 8;
  print_string("Should get 11\nGot: ");
  print_int(num);
  print_string("\n");

  num = '2' / 25 + 8;
  print_string("Should get 10\nGot: ");
  print_int(num);
  print_string("\n");

  num = 24 / ('1' - 37);
  print_string("Should get 2\nGot: ");
  print_int(num);
  print_string("\n");

  num = 8 + 8 + 8 - 64 / 2 ;
  print_string("Should get -8\nGot: ");
  print_int(num);
  print_string("\n");

  num = 8 / (8 - 4 * (1 - 0)) * 5 + 8 + 3;
  print_string("Should get 21\nGot: ");
  print_int(num);
  print_string("\n");

  num = (8 / 8) * (4 + 4) + 9;
  print_string("Should get 17\nGot: ");
  print_int(num);
  print_string("\n");

}
