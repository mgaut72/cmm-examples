extern void print_int(int i);
extern void print_string(char c[]);

int one(void){
    print_string("one ");
    return 1;
}

void main(void){

    int x,y,z;

    x = 1;
    y = 2;
    z = 3;

    /* simple if */
    print_string("should get elephant\ngot: ");
    if (x == 1)
        print_string("elephant\n");
    print_string("\n");

    /* make sure we don't fall through the conditional */
    print_string("should get nothing before END\ngot: ");
    if (x == 2)
        print_string("elephant ");
    print_string("END\n");
    print_string("\n");

    /* test more complex boolean */
    print_string("should get elephant\ngot: ");
    if( x == y || (z == 3 && y == 2))
        print_string("elephant\n");
    print_string("\n");

    /* test short circuit OR */
    print_string("should get ONLY elephant\ngot: ");
    if( x == 1 || x == one())
        print_string("elephant\n");
    print_string("\n");

    /* test short circuit AND */
    print_string("should get nothing before END\ngot: ");
    if( x == 2 && x == one())
        print_string("elephant ");
    print_string("END\n");
    print_string("\n");
}
