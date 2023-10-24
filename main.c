
#include <stdio.h>
#include <stdlib.h>


#define Min(a,b) ((a)<(b)?(a):(b))

int getnextnum(){
    int nextnum = rand() % 100;
    printf("next : %d\n", nextnum);
    return nextnum;
}

int main(){
    int n1, n2, n3;
    n3 = Min(n1 = getnextnum(), n2 = getnextnum());
    printf("la somme est :%d\n",n3);
    printf("la somme est :%d\n",Min(2,'f'));
    return 0;
}

