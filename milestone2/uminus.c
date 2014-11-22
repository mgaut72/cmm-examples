extern void print_int(int x);
extern void print_string(char x[]);

void main(void)
{
    int num;
    int x;
    int y;
    int z;
    char c;

    x = 3;
    y = 5;
    z = 15;
    c = '<'; /* '<' = 60 */

    num = -(6 + 2);
    print_string("Should get -8\nGot: ");
    print_int(num);
    print_string("\n");

    num = 6 - (-2);
    print_string("Should get 8\nGot: ");
    print_int(num);
    print_string("\n");

    num = -6 * 2;
    print_string("Should get -12\nGot: ");
    print_int(num);
    print_string("\n");

    num = -6 / -(2 + 3);
    print_string("Should get 1\nGot: ");
    print_int(num);
    print_string("\n");

    num = '2' / -25;
    print_string("Should get -2 ('2' = 50)\nGot: ");
    print_int(num);
    print_string("\n");

    num = -z / y;
    print_string("Should get -3\nGot: ");
    print_int(num);
    print_string("\n");

    num = c / -z;
    print_string("Should get -4\nGot: ");
    print_int(num);
    print_string("\n");

    num = -x + 8 * y;
    print_string("Should get 37\nGot: ");
    print_int(num);
    print_string("\n");

    num = -(c + z) / z;
    print_string("Should get -5\nGot: ");
    print_int(num);
    print_string("\n");

    num = 2 * -(x - 2);
    print_string("Should get -2\nGot: ");
    print_int(num);
    print_string("\n");

    num = z + (-c) + z - 45 / x ;
    print_string("Should get -45\nGot: ");
    print_int(num);
    print_string("\n");

    /* - (15 * 15) / (-15) */
    num = -( z * 15 ) / (x * -y);
    print_string("Should get 15\nGot: ");
    print_int(num);
    print_string("\n");

    num = -(z / z) * -(x + x) + x;
    print_string("Should get 9\nGot: ");
    print_int(num);
    print_string("\n");
}
