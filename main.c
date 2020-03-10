#include<stdio.h>
#include"func.h"

int main()
{
    FILE *f;
    if ((f = fopen("input.txt", "r")) == NULL){
        printf("Oshibka pri otkrytii faila!\n");
    }
    
    int n = 0;
    printf("Vvedite kolichestvo figur:");
    scanf("%d", &n);
    
    Figure a[n];
    for (int i = 0; i < n; i++)
        reading(&a[i], f);
    fclose(f);    
    
    for (int i = 0; i < n; i++)
        proverka(&a[i]);
    
    for (int i = 0; i < n; i++)
        outputting(&a[i]);

    return 0;
}
