#include <stdio.h>
#include <stdlib.h>;

int main()
{
    printf("hola\n");
    system("pause");

    FILE*arch=fopen("out.txt","wt");
    fputs("hello",arch);
    fclose(arch);
    
    
}
