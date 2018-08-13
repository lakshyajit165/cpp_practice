#include <stdio.h>
int main(int argc, char *argv[])
{
	int num,binary,decimal=0,digit,base=1;
	num=atoi(argv[1]);
	binary=num;
	while(num>0)
	{
		digit=num%10;
		decimal +=digit*base;
		num=num/10;
		base=base*2;
	}
	printf("%d",decimal);
	return 0;
}
