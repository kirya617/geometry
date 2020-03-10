typedef struct {
    char name[6];
    int x;
    int y;
    float r;
} Figure;

void reading(Figure* a, FILE *f);

void proverka(Figure* a);

void outputting(Figure* a);
