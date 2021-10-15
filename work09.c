#include <stdlib.h>
#include <stdio.h>
#include <time.h>

struct shapes {
    int sides; 
    char *s;
    double area; 
};

void print_shapes(struct shapes *x) {
    printf("shape: %s\n# of sides: %d\narea: %f units squared\n", x->s, x->sides, x->area);
}

struct shapes *make_shape(int i, char *c, double d) {
    struct shapes *n = malloc(sizeof(struct shapes));
    n->sides = i;
    n->s = c;
    n->area = d;
    return n;
};

int main() {
    srand(time(NULL));
    char *s = "square";
    int sides = 4;
    double area = rand() * sides * -1 % 100;
    struct shapes *h = make_shape(sides, s, area);
    print_shapes(h);
    free(h);
    return 0;
}