#include <stdio.h>
#include <unistd.h>

int main() {
	char eskiAd[100], yeniAd[100];

	printf("Adini degistirmek istediginiz dosya : ");
	gets(eskiAd);
	int erisim = access(eskiAd, F_OK);
	if(erisim == -1) {
		puts("Dosya bulunamadi.");
	} else {
		printf("Dosyanin yeni adini giriniz : ");
		gets(yeniAd);
		
		int degistir = rename(eskiAd, yeniAd);
		if(degistir == -1) {
			puts("Dosya adi degistirilemedi.");
		}
	}
}