#include <stdio.h>
int main( void )
{
	int _1=0;
	printf("True=%d", _1++);
	++_1,--_1,1--;// lvalue required
	printf("False=%d",_1++);

	return 0;
}