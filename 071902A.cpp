# include<stdio.h> 
/*关于标准化输出*/
int main (void)
{
	int i =100;
	printf("the ten is %d ,\nthe eight is %o \n,the 16 is %x,\n and the float one is %.2f.\n",i,i,i,i);
	printf("another function is %#o for 8 ,\n and %#x for 16.\n",i,i);
	return 0;
}
