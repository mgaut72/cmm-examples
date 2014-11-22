extern void print_int(int i);
extern void print_string(char c[]);

void main(void){

    int x;

    print_string("should get: 123\ngot: ");
    x = 1;
    while (x < 4){
        print_int(x);
        x = x + 1;
    }
    print_string("\n\n");

}
