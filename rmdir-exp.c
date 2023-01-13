#include <stdio.h>
#include <errno.h>

int main() {
	char ad[100];
	printf("Silinecek dizin adi: ");
	gets(ad);
	
	int durum = rmdir(ad);
	if(durum == 0) {
		puts("Dizin basariyla olusturuldu.");
	} else {
		puts("Hata : %s", strerror(errno));
	}
}