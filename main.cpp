#include<stdio.h>
#include "hello.h"
#include "mul.h"
#include "add.h"

using namespace std;

void calculator (void) {
	int operator_;
	int a;
	int b;
	printf("Press operator that you want to execute\n"); 
	printf(" 1. Add \n 2. Multiply \n 3. Divide \n");
	scanf("%d", &operator_);
	printf("\n\nType first operand\n");
	scanf("%d", &a);
	printf("\n\nType second operand\n");
	scanf("%d", &b);

	if (operator_ == 1)
		printf("%d", add(a,b));
	else if (operator_ == 2)
		printf("%d\n", mul(a,b));
	else if (operator_ == 3)
		return;
	
}


int main(void)
{
	printf("Calculator!\n");
	calculator();
	hello();
}
