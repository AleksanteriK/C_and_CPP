                // ****************** FOR THE FIRST TIME, I'M PRACTICING COMMENTING ON MY SOURCE CODE, SO IT WOULD BE EASIER FOR ME ****************** 
                //                    AND ANYONE ELSE WHO MAY EVER BE IN TOUCH WITH MY CODE TO UNDERSTAND WHAT I'M DOING, AND ALSO
                //                    WHILE IM MAKING THE CODE, ITS EASIER FOR ME TO GO THROUGH THE THOUGHT PROCESS WHEN I COMMENT
                // ******************                       WHAT EVERYTHING MEANS IN THE SOURCE CODE :)                             ******************
#include <stdio.h> 
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define ARS 20
#define MIN 1
#define MAX 100

int main () {  

    int i;      //God tier variable
    int j;      //Another god tier variable
    int array[ARS]={1};    //Array
    int r;      //Variable for random value
    int f;      //variable for looping the array for finding the smallest and biggest number in the array

///////////////////////////////////

    srand(time(NULL));

        for(i=0;i<ARS;i++) {
            r=rand() %MAX + MIN;   //Filling the array with random values
            array[i]+=r;        //Adding the randomly generated value to array element by element
        }

    int big=array[19];       //These variables are for saving the smallest and biggest numbers in the array,
    int small=array[19];     /*I initialize them with the last element of the array like assuming the last element
                            is always the smallest or largest*/

        for (f=0;f<ARS;f++) {

            if (array[f]<small) {
                small=array[f];
            }                       //Looping the array to find the smallest and biggest numbers

            if (array[f]>big) {
                big=array[f];
            }        

        }
                printf("Content of array is [ ");

        for (j=0;j<ARS;j++) {

                printf("%d ",array[j]);

            }
                printf("]\n"); //Print content of array ends
                printf("and the biggest number was %d and smallest was %d\n\n",big,small);


///////////////////////////////////

    int co;
        
        printf("    ");

        for (co=1;co<=big;co++) 
        {
            if(co%10==0) 
            
            printf("%d",co/10);
            
            else{        

            printf(" ");
            
            }
        }

            printf("\n   ");

        for (co=0;co<=big;co++) {

            printf("%d",co%10);   
                
        }

            printf("\n   ");

        for (co=0;co<=big;co++) {

            printf("-");       

        }
        printf(">");
        printf("\n");

//////////////////////////////////

    //////////////////////////
    int n;                   // These are for the first for loop
    int m;                   //
    int space;               //
    int chartarray[ARS]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19}; //We declare an array for the chart indexes

    /////////////////////////
    int indx;               //  These are for the last for loop
    int st;                 //
    int spa;                //
    int new=big+1;          //  We need this for both loops, it will make space so * stars wont reach right next to its value in the chart, this will also keep
                            //  the chart in shape 
        
        for(n=0;n<10;n++) {

            printf(" %d: ",chartarray[n]);

            for(m=1;m<=array[n];m++) {

                printf("*");                        //Here we have a for loop, which draws the chart of array elements and their values until the 10th element
            }

            for (space=array[n]+1;space<new;space++) {
                printf(" "); 
            }

            printf("( %d)\n",array[n]);
        }
        
        for(indx=10;indx<ARS;indx++) {

            printf("%d: ",chartarray[indx]);

            for(st=1;st<=array[indx];st++) {

                printf("*");                       //And here we finally loop the last 10 elements of the array, because number 10 takes one more space than numbers 1-9,
            }                                      //we made a different loop so the chart stays in shape

            for (spa=array[indx]+1;spa<new;spa++) {
                printf(" "); 
            }

            printf("( %d)\n",array[indx]);
    }

char any;

printf("\nInput any key to exit...");
scanf("%s",any);

return 0;

} 