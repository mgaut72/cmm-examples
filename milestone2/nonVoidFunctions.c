extern void print_string(char c[]);
extern void print_int(int x);

char charFunc(void){
    return 'A';
}

int intFunc(void){
    return 8;
}

void main(void){

    int x;
    char c;

    print_string("should get 65 (since 65 == 'A')\ngot: ");
    print_int(charFunc());
    print_string("\n\n");

    c = charFunc();
    print_string("should get 65 (since 65 == 'A')\ngot: ");
    print_int(c);
    print_string("\n\n");

    print_string("should get 8\ngot: ");
    print_int(intFunc());
    print_string("\n\n");

    x = intFunc();
    print_string("should get 8\ngot: ");
    print_int(x);
    print_string("\n\n");
}
