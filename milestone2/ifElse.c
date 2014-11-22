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
    print_string("should get giraffe\ngot: ");
    if (x == 2)
        print_string("elephant\n");
    else
        print_string("giraffe\n");
    print_string("\n");
}
