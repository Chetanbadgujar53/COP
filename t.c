#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int num=50;
    int *ptr=&num;
    int **pptr=&ptr; // pointer to pointer

    printf("Num = %d *ptr = %d \n",num,*ptr);
    printf("&Num = %u ptr = %u \n",&num,ptr);

    printf("&ptr=%u \n",&ptr);
    printf("Size = %d \n",sizeof(ptr));

    printf("num = %d *ptr=%d **pptr=%d \n",num,*ptr,**pptr);
    printf("&ptr = %u pptr=%u \n",&ptr,pptr);
    return 0;
}



/*

int main(void)
{
    int num=50;
    int *ptr=&num;
    int **pptr=&ptr; // pointer to pointer

    num=60;
    printf("Num=%d *ptr=%d **pptr=%d \n",num,*ptr,**pptr);  //60    60//  60

    *ptr=70;
    printf("Num=%d *ptr=%d **pptr=%d \n",num,*ptr,**pptr);  //70  70  70 

    **pptr=80;
    printf("Num=%d *ptr=%d **pptr=%d \n",num,*ptr,**pptr);//80  80  80

    return 0;
}*/