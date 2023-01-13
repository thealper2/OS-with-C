#include <signal.h>
#include <stdio.h>
#include <unistd.h>

int main() {
	kill(getpid(), SIGKILL);
	puts("SIGKILL");
}