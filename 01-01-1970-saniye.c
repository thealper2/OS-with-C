#include <time.h>
#include <stdio.h>

int main() {
	time_t *t;
	printf("1 Ocak 1970 00:00:00'dan itibaren %ld saniye gecmistir.\n", time(&t));
}