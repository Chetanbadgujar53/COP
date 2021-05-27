#include<stdio.h>
#define test(a,b) a##b //stringizing

int main(void)
{
    int a=10,b=40,ab=300;
    printf("%d %d %d",a,b,ab);

    printf("\n %d",test(a,b));
    //printf("\n %d",ab);
    return 0;
}

/*

//# indeicates string
#define STRDISP(x) {printf("\n %s",#x+2);}
int main(void)
{
    STRDISP(sunbeam);
    //{printf("\n %s","sunbeam"+2);}

    return 0;
}


*/
/*


//# indeicates string
#define STRDISP(x) {printf("\n %s",#x);}
int main(void)
{
    STRDISP(sunbeam);
    //{printf("\n %s","sunbeam");}
    return 0;
}
*/


/*

#define SWAP(value,a,b){value temp; temp=a; a=b; b=temp;}

int main(void)
{
    int n1=20,n2=10;
    printf("Before : N1 = %d N2 = %d",n1,n2);
    SWAP(int,n1,n2);
    //SWAP(type,a,b) SWAP(int,n1,n2)
                    //SWAP(int,20,10)
    //{int temp; temp=20; n1=10; n2=20;}
    printf("\n After Before : N1 = %d N2 = %d",n1,n2);
    return 0;
}*/

/*        
#define SQR(a) a*a 
int main(void)
{
    printf("%d",SQR(3+2));
        //SQR(3+2) //macro call
        //SQR(a) a*a
        //SQR(3+2) 3+2 * 3+2
          //       3 + 6 + 2
             // 11
    return 0;
}

*/


/*
#define SQR(a) a*a 
//SQR(a) is macro name 
//(a) it means macro is taking one argument
//a*a is macro definition

int main(void)
{
    printf("%d",SQR(4)); //macro call 
    //printf("%d",4*4);
    return 0;
}
*/


#define PI 3.14



int main(void)
{
    printf("%f",PI);
    return 0;
}

