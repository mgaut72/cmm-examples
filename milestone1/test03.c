int z;

extern void print_int(int x);

void foo(int num)
{
   print_int(num);
}

void main(void)
{

    z = 4;

    foo(z);

    z = 3;

    foo(z);

    z = 2;

    foo(z);

}
