extern void print_int(int i);
extern void print_string(char c[]);

int return1(void) {
    return 1;
}

void main(void){

    int myInt;
    int intArr[3];

    /* need assignToArry to work for this to work */
    intArr[0] = 999;
    intArr[1] = 100;
    intArr[2] = 200;

    /* test index from a variable */
    myInt = 1;
    print_string("should get 100\ngot: ");
    print_int(intArr[myInt]);
    print_string("\n\n");

    /* test index from a function call */
    print_string("should get 100\ngot: ");
    print_int(intArr[return1()]);
    print_string("\n\n");

    /* test index from a complex expr */
    print_string("should get 100\ngot: ");
    print_int(intArr[return1() + 4 / 8]);
    print_string("\n\n");

    intArr[return1()] = 77;
    print_string("should get 77\ngot: ");
    print_int(intArr[1]);
    print_string("\n\n");
}
