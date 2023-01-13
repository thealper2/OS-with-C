#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
	pid_t pid;
	pid = fork();
	int durum;
	if(pid == 0) {
		puts("Child Process");
	} else {
		puts("Parent Process");
		wait(&durum);
	}
}