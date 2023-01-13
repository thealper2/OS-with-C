#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int main() {
	int file;
	file = creat("test", 0744);
	puts("Test dosyasi olusturuldu.");
	close(file);
}