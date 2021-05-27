#include<stdio.h>
#include<stdlib.h>
/*

// 257
// 0000 0000 0000 0000 0000 0001  0000 0001
int main(void)
{
    int num=256;
    int *cptr=&num;
    // pointer of type int
    //while dereferencing the pointer will derefer only four bytes

    printf("num = %d *cptr=%d \n",num,*cptr);//256   256
    return 0;
}
*/

/*
int main(void)
{
    int num=256;
    char *cptr=&num;
    // pointer of type character
    //while dereferencing the pointer will derefer only one byte

    printf("num = %d *cptr=%d \n",num,*cptr);
    return 0;
}
*/


int main(void)
{
    int num=10;
    char *cptr=&num;
    printf("num = %d *cptr=%d \n",num,*cptr);//10  //10
    return 0;
}




/*
int main(void)
{
    int num=10;
    int *ptr=&num;

    
    //Pointer is holding address of num
    //pointer is of type integer

    char ch='A';
    char *cptr=&ch; 
    //pointer is holding address of character
    //pointer is of type character

    printf("Num = %d *ptr=%d \n",num,*ptr);
    printf("&num=%u ptr=%u \n",&num,ptr);

    printf("Ch = %c *cptr=%c \n",ch,*cptr);
    printf("&ch=%u cptr=%u \n",&ch,cptr);
    return 0;
}
*/


/*
int main(void)
{
    int num=10;
    int *ptr=&num;
    //Pointer is holding address of num
    //pointer is of type integer

    char ch='A';
    char *cptr=&ch; 
    //pointer is holding address of character
    //pointer is of type 
    */