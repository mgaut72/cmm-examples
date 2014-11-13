int fact(int x);
extern void print_int(int x);

int main(void){
    int i,x;

    x = 5;
    i = 0;
    print_string("should get: 120\ngot: ");
    print_int(fact(x));
    print_string("\n\n");
    return i;
}

int fact(int x){
    if (x == 0)
        return 1;
    else
        return x * fact(x - 1);
}
