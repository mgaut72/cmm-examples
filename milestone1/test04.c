extern void print_string(char word[]);

void foo(char text[])
{
   print_string(text);
}

void main(void)
{
   foo("this is in main\n");
}
