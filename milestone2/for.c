extern void print_int(int i);
extern void print_string(char c[]);

void main(void){

    int x;

    /* all optionals present */
    print_string("should get: 123\ngot: ");
    for (x = 1; x<4; x = x+1)
        print_int(x);
    print_string("\n\n");


    /* no first assignment */
    print_string("should get: 4321\ngot: ");
    for (; x>0; x = x-1){
        print_int(x);
    }
    print_string("\n\n");

    /* no last assignment */
    print_string("should get: 123\ngot: ");
    for (x = 1; x<4;){
        print_int(x);
        x = x + 1;
    }
    print_string("\n\n");

    /* no conditional
     * this has to be last since it has a return to "break" the loop
     * */
    print_string("should get: 1234\ngot: ");
    for (x = 1; ; x = x+1){
        print_int(x);
        if ( x == 4 )
            return;
    }
}
