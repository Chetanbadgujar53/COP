#include<stdio.h>
#include<stdlib.h>

/*
int main(void)
{
    int i;
    for(i=1;i<=5;i++);  //i=1 1<=5 true i=2 2<=5 true i=3 i=4 i=5 i=6 6<=5 false
    
        printf("%4d",i);
    
    printf("\n");
    return 0;
}

*/

int main(void)
{
    int i;
    for(i=1;i<=20;i+=2) // increment value of i by 2 in every loop cycle
                        //logic for printing odd numbers
    {
        printf("%5d",i);
    }
    printf("\n");
    return 0;
}


/*
int main(void)
{
    int i;
    for(i=0;i<=20;i+=2) // increment value of i by 2 in every loop cycle
                        //logic for printing even numbers
    {
        printf("%5d",i);
    }
    printf("\n");
    return 0;
}
*/

/*

int main(void)
{
    int i=1;
    for(;i<=10;)
    {
        printf("%4d",i);

        i++;

    }
    printf("\n");
    return 0;
}
*/


/*
// for(  ;   ;  )

int main(void)
{
    int i=0; //inialization
    //skipped the initialization state inside the for loop
    for(;i<=10;i++)
    {
        printf("%4d",i);
    }
    printf("\n");

    return 0;

}
*/

/*

int main(void)
{
    int i;
    //for (initialization; condition ; incr/decr)
    for(i=5;i>=0;--i) // i is looping variable 
    {
        printf("%4d",i);

    }
    printf("\n");
    return 0;
}
*/


/*
int main(void)
{
    int i;
    //for (initialization; condition ; incr/decr)
    for(i=5;i>=0;i--) // i is looping variable 
    {
        printf("%4d",i);

    }
    printf("\n");
    return 0;
}
*/

/*
int main(void)
{
    int i;
    //for (initialization; condition ; incr/decr)
    for(i=0;i<=5;i++) // i is looping variable 
    {
        printf("%4d",i);

    }
    printf("\n");
    return 0;
}
*/
//i=0 0<5 true
//i=1 1<5 true
//i=2 2<5 true
//i=3 3<5 true
//i=4 4<5 true 
//i=5 5<5 false 