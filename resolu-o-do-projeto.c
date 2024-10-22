#include <stdio.h>
int main(int argc,char** argv){
int indice = 12;
int soma = 0;
int *p = &soma;
int k = 1;
for ( int k = 0; k < indice;)
{   *p;

    k = k + 1;
    *p = *p + k;
};
printf("%i",soma);
return (0);
}