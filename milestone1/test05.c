int a;

extern void print_int(int num);
extern void print_string(char word[]);

void two(int num)
{
   num = 2;

   print_string("num is ");
   print_int(num);
   print_string("\n");
}

void main(void)
{
   two(a);

   print_string("a is ");
   print_int(a);
   print_string("\n");
}
