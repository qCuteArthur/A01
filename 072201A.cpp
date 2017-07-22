#include<stdio.h> 
#define SQUARES 64 
int main(void){
//	const double WorldCurrent = 2E16;
	double current;
	int i =1;
	double total ;
	current =1.0;
	total = current+total;
	printf("the current is %d\n",current);
	printf("the total is %d\n",total);
	while(i<SQUARES){
		++i ;
		current = current*2.0;
		total = current+total ;
		printf("%d\n",current);
		printf("the i is %d\n",i);
	}
	printf("the final is %d",total );
	return 0;
}
