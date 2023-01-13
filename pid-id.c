#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
	printf("Proses PID = %d.\n", getpid());
	printf("Anne Proses PID = %d.\n", getppid());
	printf("Kullanici ID'si = %d.\n", getuid());
}