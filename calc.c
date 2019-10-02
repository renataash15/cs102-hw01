#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	double a = atof(argv[2]);
	double b = atof(argv[3]);


	if (argv[1][0] == '+'){
		double sum = (a+b);
		printf("%f\n", sum);
	}
	if (argv[1][0] == 'x'){
		double product = (a * b);
		printf("%f\n", product);
	}
	if (argv[1][0] == '/'){
		double quotient = (a / b);
		printf("%f\n", quotient);
	}
	if (argv[1][0] == '-'){
		double difference = (a - b);
		printf("%f\n", difference);
	}
	return 0;

}