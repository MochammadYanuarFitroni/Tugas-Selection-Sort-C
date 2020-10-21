#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct mahasiswa{
	char nama[50], npm[15], jurusan[25], kelamin[15], ttl[25], alamat[50], no_hp[15];
}mhs;

int main(){
	mhs data[50];
	mhs temp;
	int ubah, menu, i=0, j, a, x, metode, urutan;
	int pos;
	char yn;
	
	pilihan:
	system("cls");
	printf("Menu setting data mahasiswa\n");
	printf("1. Input data\n");
	printf("2. View data\n");
	printf("3. Ubah data\n");
	printf("4. Hapus data\n");
	printf("5. Sorting Data\n");
	printf("6. Exit\n");
	printf("Silahkan pilih menu yang anda ingin lakukan : ");
	scanf("%d",&menu);
	switch(menu){
		case 1:
			system ("cls");
			printf("masukkan jumlah data yang anda inginkan: ");
			scanf("%d", &a);
			for(i=0;i<a;i++){
				printf("\n===== data mahasiswa ke %d =====", i+1);
				printf("\nnama\t\t: ");
				scanf(" %[^\n]%*c", data[i].nama);
				printf("NPM\t\t: ");
				scanf(" %[^\n]%*c", data[i].npm);
				printf("Jurusan\t\t: ");
				scanf(" %[^\n]%*c", data[i].jurusan);
				printf("Nomor HP\t: ");
				scanf(" %[^\n]%*c", data[i].no_hp);
				printf("Kelamin\t\t: ");
				scanf(" %[^\n]%*c", data[i].kelamin);
				printf("TTL\t\t: ");
				scanf(" %[^\n]%*c", data[i].ttl);
				printf("Alamat\t\t: ");
				scanf(" %[^\n]%*c", data[i].alamat);
				printf("===============================\n");
			}
			printf("\n");
			printf("tekan apapun untuk kembali ke menu");
			getch();
			goto pilihan;
			break;
		case 2:
			system ("cls");
			for(i=0;i<a;i++){
				printf("===== data mahasiswa ke %d =====", i+1);
				printf("\nNama\t\t: %s\n", data[i].nama);
				printf("NPM\t\t: %s\n", data[i].npm);
				printf("Jurusan\t\t: %s\n", data[i].jurusan);
				printf("Nomor HP\t: %s\n", data[i].no_hp);
				printf("Kelamin\t\t: %s\n", data[i].kelamin);
				printf("TTL\t\t: %s\n", data[i].ttl);
				printf("Alamat\t\t: %s\n\n", data[i].alamat);
				printf("===============================\n\n");
			}
			printf("\n");
			printf("tekan apapun untuk kembali ke menu");
			getch();
			goto pilihan;
			break;
		case 3:
			system("cls");
			for(i=0;i<a;i++){
				printf("===== data mahasiswa ke %d =====", i+1);
				printf("\nNama\t\t: %s\n", data[i].nama);
				printf("NPM\t\t: %s\n", data[i].npm);
				printf("Jurusan\t\t: %s\n", data[i].jurusan);
				printf("Nomor HP\t: %s\n", data[i].no_hp);
				printf("Kelamin\t\t: %s\n", data[i].kelamin);
				printf("TTL\t\t: %s\n", data[i].ttl);
				printf("Alamat\t\t: %s\n\n", data[i].alamat);
				printf("===============================\n\n");
			}
			printf("\n");
			printf("data mahasiswa yang ingin diubah: ");
			scanf("%i", &i);
			system("cls");
			printf("===============================\n");
			printf("1. Nama\t\t\t: %s\n", data[i].nama);
			printf("2. NPM\t\t\t: %s\n", data[i].npm);
			printf("3. Jurusan\t\t: %s\n", data[i].jurusan);
			printf("4. Nomor HP\t\t: %s\n", data[i].no_hp);
			printf("5. Kelamin\t\t: %s\n", data[i].kelamin);
			printf("6. TTL\t\t\t: %s\n", data[i].ttl);
			printf("7. Alamat\t\t: %s\n\n", data[i].alamat);
			printf("===============================\n");
			printf("pilihlah bagian yang ingin di ubah: ");
			scanf("%d", &ubah);
			if(ubah==1){
				printf("nama: ");
				scanf(" %[^\n]%*c", data[i].nama);
			}
			else if(ubah==2){
				printf("NPM: ");
				scanf(" %[^\n]%*c", data[i].npm);
			}
			else if(ubah==3){
				printf("Jurusan: ");
				scanf(" %[^\n]%*c", data[i].jurusan);
			}
			else if(ubah==4){
				printf("Nomor HP: ");
				scanf(" %[^\n]%*c", data[i].no_hp);
			}
			else if(ubah==5){
				printf("Kelamin: ");
				scanf(" %[^\n]%*c", data[i].kelamin);
			}
			else if(ubah==6){
				printf("TTL: ");
				scanf(" %[^\n]%*c", data[i].ttl);
			}
			else if(ubah==7){
				printf("Alamat: ");
				scanf(" %[^\n]%*c", data[i].alamat);
			}
			else{
				printf("data tidak ada");
			}
			printf("tekan apapun untuk kembali ke menu");
			getch();
			goto pilihan;
			break;
		case 4:
			system("cls");
			for(i=0;i<a;i++){
				printf("===== data mahasiswa ke %d =====", i+1);
				printf("\nNama\t\t: %s\n", data[i].nama);
				printf("NPM\t\t: %s\n", data[i].npm);
				printf("Jurusan\t\t: %s\n", data[i].jurusan);
				printf("Nomor HP\t: %s\n", data[i].no_hp);
				printf("Kelamin\t\t: %s\n", data[i].kelamin);
				printf("TTL\t\t: %s\n", data[i].ttl);
				printf("Alamat\t\t: %s\n\n", data[i].alamat);
				printf("===============================\n\n");
			}
			printf("\n");
			printf("data mahasiswa yang ingin hapus: ");
			scanf("%j", &j);
			for(i=1;i<a-j;i++){
				strcpy(data[j-1+i].nama,data[j+i].nama);
				strcpy(data[j-1+i].npm,data[j+i].npm);
				strcpy(data[j-1+i].jurusan,data[j+i].jurusan);
				strcpy(data[j-1+i].no_hp,data[j+i].no_hp);
				strcpy(data[j-1+i].kelamin,data[j+i].kelamin);
				strcpy(data[j-1+i].ttl,data[j+i].ttl);
				strcpy(data[j-1+i].alamat,data[j+i].alamat);
			}
			a=a-1;
			system("cls");
			printf("\ndata sudah terhapus\n\n");
			printf("tekan apapun untuk kembali ke menu");
			getch();
			goto pilihan;
			break;
		case 5:
			printf("Jenis Pengurutan\n");
			printf("1.Bubble Sort\n");
			printf("2.Selection Sort\n");
			printf("Pilih jenis pengurutan: ");
			scanf("%d",&metode);
			
			if(metode==1){
				printf("\nIni adalah pengurutan Bubble sort\n");
				printf("1.Ascending\n");
				printf("2.Descending\n");
				printf("Pilih jenis urutan: ");
				scanf("%d",&urutan);
				if(urutan==1){
					clock_t start = clock()/CLOCKS_PER_SEC;
					for(j=0;j<a;j++){
						for(x=0;x<a-1;x++){
							if(strcmp(data[x].npm, data[x+1].npm)>0){
								temp = data[x];
								data[x] = data[x+1];
								data[x+1] = temp;
							}	
						}
					}
					clock_t end = clock()/CLOCKS_PER_SEC*100;
					double elapsed = (double)(end - start);
					printf("\nWaktu eksekusi = %.3f", elapsed);
					printf("\nData berhasil diurutkan berdasarkan NPM terkecil\n");
				}
				else if(urutan==2){
					clock_t start = clock()/CLOCKS_PER_SEC;
					for(j=0;j<a;j++){
						for(x=0;x<a-1;x++){
							if(strcmp(data[x].npm, data[x+1].npm)<0){
								temp = data[x];
								data[x] = data[x+1];
								data[x+1] = temp;
							}	
						}
					}
					clock_t end = clock()/CLOCKS_PER_SEC*100;
					double elapsed = (double)(end - start);
					printf("\nWaktu eksekusi = %.3f", elapsed);
					printf("\nData berhasil diurutkan berdasarkan NPM terbesar\n");	
				}
			}
			else if(metode==2){
				printf("\nIni adalah pengurutan Selection sort\n");
				printf("1.Ascending\n");
				printf("2.Descending\n");
				printf("Pilih jenis urutan: ");
				scanf("%d",&urutan);
				if(urutan==1){
					clock_t start = clock()/CLOCKS_PER_SEC;
					for(j=0;j<a-1;j++){
						pos = j;
						for(x=j+1;x<a;x++){
							if(strcmp(data[x].npm,data[pos].npm)<0){
								pos=x;
							}
						}
						if(pos != j){
							temp=data[j];
							data[j]=data[pos];
							data[pos]=temp;
						}
					}
					clock_t end = clock()/CLOCKS_PER_SEC*100;
					double elapsed = (double)(end - start);
					printf("\nWaktu eksekusi = %.3f", elapsed);
					printf("\nData berhasil diurutkan berdasarkan NPM terkecil\n");
				}
				else if(urutan==2){
					clock_t start = clock()/CLOCKS_PER_SEC;
					for(j=0;j<a-1;j++){
						pos = j;
						for(x=j+1;x<a;x++){
							if(strcmp(data[x].npm,data[pos].npm)>0){
								pos=x;
							}
						}
						if(pos != j){
							temp=data[j];
							data[j]=data[pos];
							data[pos]=temp;
						}
					}
					clock_t end = clock()/CLOCKS_PER_SEC*100;
					double elapsed = (double)(end - start);
					printf("\nWaktu eksekusi = %.3f", elapsed);
					printf("\nData berhasil diurutkan berdasarkan NPM terbesar\n");
				}
			}
			printf("tekan apapun untuk kembali ke menu");
			getch();
			goto pilihan;
		case 6:
			printf("\nEXIT\n");
			break;
		default:
			printf("\nMohon masukkan pilhan yang benar");
			getch();
			goto pilihan;
			break;
	}
	return 0;
	
}
