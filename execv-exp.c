#include <stdio.h>
#include <unistd.h>

int main() {
	char *komut[] = {"ls", "-l", NULL};
	execv("/bin/ls", komut);
}