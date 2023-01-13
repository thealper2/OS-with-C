#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main() {
	pid_t pid;
	pid = fork();
	if(pid == 0) {
		printf("ben cocuk %d proses\n", pid);
	} else {
		printf("ben anne %d proses\n", pid);
	}
}