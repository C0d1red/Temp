#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int temp, prov;
    float f;
    char grad;
    prov = 0;
    printf("Example: 164C\n");
    scanf("%d%c", &temp, &grad);
    printf("\n%s", "");
    if (grad == 'K' || grad == 'C' || grad == 'F') {prov = 1;} else {prov = 2;}
    if (prov==1) printf("%d%s%c%s\n", temp, " ", grad, ":");
    if (prov==2) printf("%d\n\n", temp);


    if (prov == 1){
        if (grad == 'C') printf("%.2f%s\n%.2f%s\n", temp + 273.15, " K", temp * 1.8 + 32, " F");
        if (grad == 'K') printf("%.2f%s\n%.2f%s\n", temp - 273.15, " C", (temp - 273.15) * 1.8 + 32, " F");
        if (grad == 'F') printf("%.2f%s\n%.2f%s\n", (temp - 32)*0.55555555555, " C", 0.55555555555*(temp - 32) + 273.15, " K");
    }
    else
    {
        if (prov == 2)
        printf("%s\n%.2f%s\n%.2f%s\n\n", "C:", temp + 273.15, " K", temp * 1.8 + 32, " F");
        printf("%s\n%.2f%s\n%.2f%s\n\n", "K:", temp - 273.15, " C", (temp - 273.15) * 1.8 + 32, " F");
        printf("%s\n%.2f%s\n%.2f%s\n", "F:", (temp - 32)*0.55555555555, " C", 0.55555555555*(temp - 32) + 273.15, " K");
    }

    }
