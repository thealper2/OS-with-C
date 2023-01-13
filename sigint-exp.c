#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void yakala() {
	puts("SIGINT sinyali yakalandi !");
}

int main() {
	while(1) {
		if(signal(SIGINT, yakala) == SIG_ERR) {
			puts("SIGINT yakalanamadi !");
		}
	}
}