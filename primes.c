#include <stdio.h>
#include <unistd.h>
#include <math.h>

#define RATE 20/30

int main(int argc, char const *argv[]){
	int num, sr, num2;
	int isPrime = 1; //If 1, true, else false

	num = 0;
	for(num=0; num!=-1; num++){
		sr = (int) sqrt(num);
    num2 = 2;
    while(num2<=sr && isPrime!=0){
			if(num%num2 == 0)
				isPrime = 0;

      num2++;
		}

		if(isPrime)
			printf("Prime number:\t %d\n", num);

		isPrime = 1;
		sleep(1/RATE);
	}

	return 0;
}
