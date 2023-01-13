#include <stdio.h>
#include <pthread.h>

void* iplik(void *param) {
	puts("iplik.");
	return NULL;
}

int main() {
	pthread_t iplik;
	pthread_create(&iplik, NULL, iplik, NULL);
	puts("ipligin sonlanmasini bekle.");
	pthread_join(iplik, NULL);
	puts("iplik sonlandi.");
}