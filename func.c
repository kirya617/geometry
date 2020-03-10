#include<stdio.h>
#include<stdlib.h>
#include"func.h"

void reading(Figure* a, FILE *f){
    fscanf(f, "%s", a->name);
    fscanf(f, "%d", &a->x);
    fscanf(f, "%d", &a->y);
    fscanf(f, "%f", &a->r);
}

void outputting(Figure* a){
    printf("%s(%d %d , %.1f)\n", a->name, a->x, a->y, a->r);
}

void proverka(Figure* a){
    char m[6] = "circle";
    for (int i = 0; i < 6; i++){
        if (a->name[i] != m[i]){
            printf("Error: unknown shape '%s'\n", a->name);
            exit(EXIT_SUCCESS);
        }
    }
    if (a->r <= 0){
        printf("Error: invalid circle");
        exit(EXIT_SUCCESS);

    }
}
