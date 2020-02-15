#include <stdio.h>
#include <stdlib.h>

int main(){
	int cod1, num1, cod2, num2;
	float val1, val2;
	
	scanf("%d%d%f", &cod1, &num1, &val1);
	
	scanf("%d%d%f", &cod2, &num2, &val2);
	
	printf("VALOR A PAGAR: R$ %.2f\n", (num1*val1)+(num2*val2));
	
}
