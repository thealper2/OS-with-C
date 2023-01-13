#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int file;
	char dosya[100];
	char *veri;
	struct stat buffer;

	printf("Bilgi istediginiz dosya: \t");
	gets(dosya);
	file = open(dosya, O_RDONLY);
	stat(dosya, &buffer);
	printf("---------%s\t dosyasiyla ilgili bilgiler---------\n", dosya);
	printf("Dosya boyutu : %d bytes \n", (int)buffer.st_size);
	printf("Baglanti sayisi : %d\n", buffer.st_nlink);
	printf("Dosya inode : %d\n", (int)buffer.st_ino);
	printf("Kullanici id : %d\n", (int)buffer.st_uid);
	printf("Grup id : %d\n", (int)buffer.st_gid);

	printf("---------Koruma Bitleri---------\n");
	printf(S_ISDIR(buffer.st_mode) == 1 ? "d" : "-");

	// USER
	printf(buffer.st_mode & S_IRUSR ? "r" : "-");
	printf(buffer.st_mode & S_IWUSR ? "w" : "-");
	printf(buffer.st_mode & S_IXUSR ? "x" : "-");

	// GROUP
	printf(buffer.st_mode & S_IRGRP ? "r" : "-");
	printf(buffer.st_mode & S_IRGRP ? "w" : "-");
	printf(buffer.st_mode & S_IRGRP ? "x" : "-");

	//OTHER
	printf(buffer.st_mode & S_IROTH ? "r" : "-");
	printf(buffer.st_mode & S_IROTH ? "w" : "-");
	printf(buffer.st_mode & S_IROTH ? "x" : "-");

	free(veri);
	close(file);
}