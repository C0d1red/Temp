#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    float temp = atof(argv[1]);

    if (argc==2)

    {
        printf("%s\n%.2f%s\n%.2f%s\n\n", "C:", temp + 273.15, " K", temp * 1.8 + 32, " F");
        printf("%s\n%.2f%s\n%.2f%s\n\n", "K:", temp - 273.15, " C", (temp - 273.15) * 1.8 + 32, " F");
        printf("%s\n%.2f%s\n%.2f%s\n", "F:", (temp - 32)*0.55555555, " C", 0.555555555*(temp - 32) + 273.15, " K");
    }


    if (argc==3)
   {
        if (strcmp(argv[2], "C")==0 || strcmp(argv[2], "c")==0) printf("%.2f%s\n%.2f%s\n", temp + 273.15, " K", temp * 1.8 + 32, " F");
        if (strcmp(argv[2], "K")==0 || strcmp(argv[2], "k")==0) printf("%.2f%s\n%.2f%s\n", temp - 273.15, " C", (temp - 273.15) * 1.8 + 32, " F");
        if (strcmp(argv[2], "F")==0 || strcmp(argv[2], "f")==0) printf("%.2f%s\n%.2f%s\n", (temp - 32)*0.5555555, " C", 0.55555555*(temp - 32) + 273.15, " K");
    }

    }
