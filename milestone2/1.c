extern void print_int(int x);
extern void print_string(char c[]);

int x;
char c;

void main(void){

    // check signed-ness of char -> int conversion
    x = -1;
    c = x;
    print_string("should get -1\ngot: ");
    print_int(c);
    print_string("\n\n");

    x = -2147483647;
    print_string("should get -2147483647\ngot: ");
    print_int(x);
    print_string("\n\n");

    // check signed-ness of char -> int conversion
    x = -2147483648;
    print_string("should get -2147483648\ngot: ");
    print_int(x);
    print_string("\n\n");
}
