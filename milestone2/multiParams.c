extern void print_string(char c[]);
extern void print_int(int x);

void indirect(int w, int x, int y, int z){
    print_int(w);
    print_string(" ");
    print_int(x);
    print_string(" ");
    print_int(y);
    print_string(" ");
    print_int(z);
    print_string("\n");
}

void main(void){

    int w,x,y,z;

    w = 5;
    x = 1;
    y = 2;
    z = 3;

    print_int(w);
    print_string(" ");
    print_int(x);
    print_string(" ");
    print_int(y);
    print_string(" ");
    print_int(z);
    print_string("\n");

    indirect(w, x, y, z);
}
