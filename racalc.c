#include <stdio.h>

int main(int argc, char* argv[]){
	int a = argv[1];
	int b = argv[2];

	if (argv[0] == "+"){
		int sum = (a+b);
		printf("%u\n", sum);
	}
	if (argv[0] == "x"){
		int product = (a * b);
		printf("%u\n", product);
	}
	if (argv[0] == "/"){
		int quotient = (a / b);
		printf("%u\n", quotient);
	}
	if (argv[0] == "-"){
		int difference = (a - b);
		printf("%u\n", difference);
	}
	return 0;

}