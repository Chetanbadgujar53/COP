/*#include <stdio.h>
int main( void )
{
	int var1 = 1, var2=0;

	var1 = !(!(!( --var1 || (++var2 == 1))) && var2--);

         //!(!(!(--1 || (++0==1)) && 1--); 
         //!(!(!(0 || (1==1)) && 0);
         //!(!(!(0||0)) && 0 );
          //!(!(!(1)) && 0 );
          //!(!(0 )&& 0 );
          //!(1);
          ///var1=0


	printf("\n var1=%d var2=%d",var1, var2);// var1=0,var2=0

	return 0;
}
*/
/*

#include <stdio.h>
int main( void )
{
	float x;

	x = 0.39f == (float)(3.9/10.0);//both are same so x==1

	printf("x=%-3.3f", !x);//!x= !1 =0

	return 0;
}
*

#include<stdio.h>
int main(void)
{
	int t,a=5,b=10,c=15;

	t=((++a && ++b, ++a), ++a || ++c);// t=((1,7),8 , 15);

	printf("t=%d a=%d b=%d c=%d",t,a,b,c);// t=1,  a=8 ,  b= 11  ,  c= 15
	return 0;
}
*//*




#include <stdio.h>
int main( void )
{
	printf("\n ans1=%d ans2=%x ans3=%o", 064,064,064);
    //%d ---064== 4*1+6*8==4+48=52
    //%x----064==6-->110=110
               ==4-->100=100
    //%x----064==0011 0100=3 4
    //%o----064==011  100 ==64
	return 0;
}

/*
#include <stdio.h>
int main( void )
{
	int _1=0;
	printf("True=%d", _1++);
	++_1,--_1,1--;// lvalue required
	printf("False=%d",_1++);

	return 0;
}*/