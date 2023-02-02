#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define MAX 120
#define MIN -50
#define ARRAY_SIZE 15

int main () {
    
    int i;
    int a;
    int b;
    int c;
    int o;
    int e;

    int all[ARRAY_SIZE];
    int odd[ARRAY_SIZE];
    int eve[ARRAY_SIZE];

    
    srand(time(NULL));

        int x=-1;
        int z=-1;

        int y=-1;
        int v=-1;

    for (i=0;i<15;i++) {

        int r;

        r=rand() %171 - 50;
        all[i]=r;

            if (r%2==0){
                x=r;
                z++;
                eve[z]=x;

            } else {
                y=r;
                v++;
                odd[v]=y;

            }
    }

        printf("All numbers are: \n");

        for(a=0;a<15;a++) {
            printf("%d ",all[a]);
        }

        printf("\nOdd numbers are: \n");

        for(b=0;b<z;b++) {
            printf("%d ",odd[b]);
        }

        printf("\nEven numbers are: \n");

        for(c=0;c<v;c++) {
            printf("%d ",eve[c]);
        }

return 0;

}