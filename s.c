/*
#include<stdio.h>
int main(void)
{
 int one, two = 1, three;
 if(three = (two == 0)); one = 5; two = 3;
 printf("%d %d %d\n", three, two, one);//0  3  5
 return 0;
}
*/ /*
#include <stdio.h>
int main(void)
{
 int y = 1;
 if( y < 0)
 if( y > 0);
 printf("sunbeam pune\n");
 else//error
 printf("sunbeam karad\n");
 return 0;
}*/

/*
#include <stdio.h>
int main(void)
{
int x = 3, y = z = 4;
printf("%d\n", z >= y >= x ? 1 : 0);// 0 but z not decleaers
return 0;
}

4.*//*
#include <stdio.h>
int main(void)
{
int i=1,j=2;
switch(i)
{
default: printf("Sunbeam Pune");break;
case 1+1-1: printf("Sunbeam Karad ");
case 'j': printf("Sunbeam Market yard"); break;
}
return 0;

}
/*//*
#include<stdio.h>
int main(void)
{
 int a = 1, b = 1, c;
 if( c = b < 0) a = 5;
 else if( b == 0) a = 7;
 else a = 9;
 printf("%d %d\n", a, c);// 9 0
 return 0;
} */

#include<stdio.h>
int main(void)
{
 int x = 1, y = 1, z = 1;
 printf("%d ", z += x < y ? x++ : y++);//2
 printf("%d %d %d\n", x, y, z);  //  x=1  y=2  z==2
 return 0;
}
