int z;
int y;

extern void print_int(int x);
extern void print_string(char c[]);

void bar(int c, int i, int n, int d)
{
    print_string("Should be 49\nGot: ");
    print_int(c);
    print_string("\n");

    print_string("Should be 99\nGot: ");
    print_int(i);
    print_string("\n");

    print_string("Should be 3\nGot: ");
    print_int(n);
    print_string("\n");

    print_string("Should be 4\nGot: ");
    print_int(d);
    print_string("\n");

    d = 128;

    print_string("Should be 128\nGot: ");
    print_int(d);
    print_string("\n");
    
    c = '1';

    print_string("Should be 49\nGot: ");
    print_int(c);
    print_string("\n");
    
    i = 1000;
    
    print_string("Should be 1000\nGot: ");
    print_int(i);
    print_string("\n");

    n = -4;

    print_string("Should be -4\nGot: ");
    print_int(n);
    print_string("\n");
}

void main(void)
{
    bar('1', 99, 3, 4);
}
