#include<stdio.h>
int main(void){
	int n ;
	size_t size_int,size_float,size_uint,size_LLint;
	size_t size_double;
	
	size_int = sizeof(int);
	size_uint = sizeof(unsigned int);
	size_float = sizeof(float);
	size_LLint= sizeof(long long int);
	size_double= sizeof(double);
	
	printf("%d\n",size_int);
	printf("%d\n",size_uint);
	printf("%d\n",size_LLint);
	printf("%d\n",size_float);
	printf("%d\n",size_double);
	return 0;
}
