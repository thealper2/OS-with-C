#include <stdio.h>
#include <unistd.h>

int main() {
	char *ortam[] = {"/usr/home", NULL};
	char *komut[] = {"mkdir", "deneme", NULL};
	execve("/bin/mkdir", komut, ortam);
}