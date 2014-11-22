extern void print_int(int i);
extern void print_string(char c[]);

void indirect(int a){
    /* make sure we passed value correctly */
    print_string("should get 100\ngot: ");
    print_int(a);
    print_string("\n\n");

    /* make sure we can modify local 'a' and not change input array elem */
    a = 5;
    print_string("should get 5\ngot: ");
    print_int(a);
    print_string("\n\n");
}

void main(void){

    int myInt;
    int intArr[3];

    /* need assignToArry to work for this to work */
    intArr[0] = 999;
    intArr[1] = 100;
    intArr[2] = 200;

    /* test basic assign from array */
    myInt = intArr[1];
    print_string("should get 100\ngot: ");
    print_int(myInt);
    print_string("\n\n");

    /* test passing an array element */
    indirect(intArr[1]);

    /* test that changing local in indirect didn't change intArr */
    print_string("should get 100\ngot: ");
    print_int(intArr[1]);
    print_string("\n\n");
}
