#include <stdio.h>
#include <unistd.h>

int main() {
	char *ortam[] = {"/usr/home", NULL};
	execle("/bin/ls", "ls", "-al", NULL, ortam);
}