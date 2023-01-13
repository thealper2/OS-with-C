#include <unistd.h>
#include <errno.h>
#include <stdio.h>

int main() {
	char baglanti[100];
	printf("Silinecek baglanti : ");
	gets(baglanti);
	
	int a = unlink(baglanti);
	if(a == 0) {
		printf("%s baglantisi sonlandirildi !\n", baglanti);
	} else {
		printf("Hata: %s", strerror(errno));
	}
}