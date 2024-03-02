#include <stdio.h>
#include <stdlib.h>

void afficher(int i, int n)
{
    printf("%d est divisible par %d \n",n,i);
}
void tester(int i , int n)
{
    if(n%i==0)
    {
        afficher(i,n);
    }
}
void boucler(int i, int n)
{
    while(i<=n)
    {
        tester(i,n);
        i++;
    }
}

int main()
{
    int i=2;
    int n;
    printf("entrez une valeur positive: ");
    scanf("%d",&n);
    boucler(i,n);
    return 0;
}
