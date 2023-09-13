// ================= Bahasa C++ yang saya gunakan untuk tugas kali ini ================== //

// #include <iostream>
// #include <string>
// using namespace std;

// #define MAX 10

// typedef string string_type;

// struct data_mhs {
//     string_type name;
//     int nrp;
//     string_type status;
//     string_type gender;
// };

// struct mahasiswa {
//     data_mhs datas[MAX];
// };

// void tambahData(mahasiswa& mhs) {
//     int i, tambah;
//     cout << "Mau tambah berapa mahasiswa ? ";
//     cin >> tambah;
//     cin.ignore();
//     if (MAX >= tambah) {
//         cout << "Tambahkan hingga " << tambah << " data mahasiswa" << endl;
//         for (i = 0; i < tambah; i++) {
//             cout << endl;
//             cout << "Infokan nama : ";
//             cin >> mhs.datas[i].name;
//             cout << "Infokan nrp : ";
//             cin >> mhs.datas[i].nrp;
//             cout << "Status juga dong : ";
//             cin >> mhs.datas[i].status;
//             cout << "Gendernya apa kak : ";
//             cin >> mhs.datas[i].gender;
//             cout << endl;
//         }
//     } else if (MAX < tambah) {
//         cout << "Maksimal " << MAX << " mahasiswa" << endl;
//         return;
//     }
// }

// void updateDataMhs(mahasiswa& mhs, string_type name) {
//     int i;
//     bool update = false;
//     for (i = 0; i < MAX; i++) {
//         if (name == mhs.datas[i].name) {
//             cout << "NRP biarin gausah ganti: " << mhs.datas[i].nrp << endl;
//             cout << "Gender mana mungkin ganti hmm: " << mhs.datas[i].gender << endl;
//             cout << "Yaudah mau ganti nama siapa: ";
//             getline(cin, mhs.datas[i].name);
//             cout << "Cieee ganti status: ";
//             cin >> mhs.datas[i].status;
//             cin.ignore();
//             update = true;
//             break;
//         }
//     }
//     if (!update) {
//         cout << "Data mahasiswa tidak ada kak" << endl;
//     }
// }

// void hapusData(mahasiswa& mhs, string_type name) {
//     int i;
//     bool hapus = false;
//     for (i = 0; i < MAX; i++) {
//         if (name == mhs.datas[i].name) {
//             for (int j = i; j < MAX - 1; j++) {
//                 mhs.datas[j] = mhs.datas[j + 1];
//             }
//             hapus = true;
//             break;
//         }
//     }
//     if (!hapus) {
//         cout << "Data mahasiswa tidak ada kak" << endl;
//     }
// }

// void bacaData(mahasiswa& mhs) {
//     int tampil;
//     cout << "(terdaftar sampai " << MAX << " data)" << endl;
//     cout << "Mau tampil berapa data ? ";
//     cin >> tampil;
//     cin.ignore();
//     bool view = false;

//     if (MAX >= tampil) {
//         view = true;
//         for (int i = 0; i < tampil; i++) {
//             cout << "Mahasiswa NRP " << mhs.datas[i].nrp << " namanya: " << mhs.datas[i].name << endl;
//             cout << "Bener banget NRPnya: " << mhs.datas[i].nrp << endl;
//             cout << "Dia nulis statusnya sih " << mhs.datas[i].status << " yak" << endl;
//             cout << "Yuk yang nyari jodoh, dia gendernya " << mhs.datas[i].gender << endl;
//             cout << endl;
//         }
//     } else if (tampil > MAX) {
//         cout << "Data terlalu banyak" << endl;
//         return;
//     } else if (tampil == 0) {
//         return;
//     }

//     if (!view) {
//         cout << "Data mahasiswa tidak ada kak" << endl;
//     }
// }

// int main() {
//     mahasiswa mhs;
//     string_type input;
//     char choice;
//     do {
//         system("cls");
//         cout << "Data Mahasiswa" << endl;
//         cout << "1. Tambah Data" << endl;
//         cout << "2. Tampilkan Data" << endl;
//         cout << "3. Update Data" << endl;
//         cout << "4. Delete Data" << endl;
//         cout << "5. Exit" << endl;
//         cout << "Pilih : ";
//         cin >> choice;

//         switch (choice) {
//             case '1':
//                 tambahData(mhs);
//                 break;
//             case '2':
//                 bacaData(mhs);
//                 break;
//             case '3':
//                 cin.ignore();
//                 cout << "Ketikkan nama yang akan diupdate : ";
//                 getline(cin, input);
//                 updateDataMhs(mhs, input);
//                 break;
//             case '4':
//                 cin.ignore();
//                 cout << "Ketikkan nama yang akan dihapus : ";
//                 getline(cin, input);
//                 hapusData(mhs, input);
//                 break;
//         }
//     } while (choice != '5');

//     return 0;
// }


// ================= Bahasa C yang juga saya gunakan untuk tugas kali ini ================== //


//#include<stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <conio.h>
//
//#define MAX 10
//
//typedef char string[255];
//typedef struct{
//    string name;
//    int nrp; 
//    string status;
//    string gender;
//}data_mhs;
//
//typedef struct{
//    data_mhs datas[MAX];
//}mahasiswa;
//
//void tambahData(mahasiswa *mhs){
//    int i, tambah;
//    printf("mau tambah berapa mahasiswa ? "); scanf("%d", &tambah);
//    fflush(stdin);
//    if(MAX >= tambah) {
//    	printf("tambahkan hingga %d data mahasiswa\n", tambah);
//	 	for(i=0;i<tambah;i++){
//        fflush(stdin);
//        printf("\n");
//        printf("infokan nama : ");scanf("%s", &(*mhs).datas[i].name);
//        printf("infokan nrp : ");scanf("%d", &(*mhs).datas[i].nrp);
//        printf("status juga dong : ");scanf("%s", &(*mhs).datas[i].status);
//        printf("gendernya apa kak : ");scanf("%s", &(*mhs).datas[i].gender);
//        printf("\n");
//    	}
//	 } else if (MAX < tambah) {
//	 	printf("maksimal %d mahasiswa", MAX);
//	 	return;
//	 }
//}
//
//void updateDataMhs(mahasiswa *mhs, string name){
//    int i;
//    bool update=false;
//    for(i=0;i<MAX;i++){
//        if(strcmpi(name, (*mhs).datas[i].name)==0){
//            printf("nrp biarin gausah ganti : %d \n", (*mhs).datas[i].nrp);
//            printf("gender mana mungkin ganti hmm : %s \n", (*mhs).datas[i].gender);
//            fflush(stdin);
//            printf("yaudah mau ganti nama siapa : ");scanf("%[^\n]", &(*mhs).datas[i].name);
//            printf("cieee ganti status : ");scanf("%s", &(*mhs).datas[i].status);
//            update=true;
//            break;
//        }
//    }
//        if(!update){
//            printf("Data mahasiswa tidak ada kak\n");
//    }
//}
//
//void hapusData(mahasiswa *mhs, string name){ 
//    int i; 
//	 bool hapus = false; 
//    for(i=0;i<MAX;i++)  { 
//        if(strcmpi(name, (*mhs).datas[i].name)==0) { 
//            for(int j=i;j<MAX-1;j++) { 
//                (*mhs).datas[j] = (*mhs).datas[j+1]; 
//            }
//            hapus=true; 
//            break; 
//        } 
//    } if(!hapus) { 
//        printf("Data mahasiswa tidak ada kak\n"); 
//    }
//}
//
//void bacaData(mahasiswa *mhs){
//    int i, tampil;
//    printf("(terdaftar sampai %d data)\nmau tampil berapa data ? ", MAX); scanf("%d", &tampil);
//    bool view = false;
//    fflush(stdin);
//    if(MAX >= tampil) {
//    	view = true;
//    	for(i=0;i < tampil;i++){
//        printf("mahasiswa nrp %d namanya : %s\n", (*mhs).datas[i].nrp, (*mhs).datas[i].name);
//        printf("bener banget NRPnya : %d\n", (*mhs).datas[i].nrp);
//        printf("dia nulis statusnya sih %s yak\n", (*mhs).datas[i].status);
//        printf("yuk yang nyari jodoh, dia gendernya %s", (*mhs).datas[i].gender);
//        printf("\n\n");
//        break;
//    }	
//	 } else if (tampil > MAX) {
//	 	printf("data terlalu banyak");
//	 	return;
//	 } else if (tampil == 0) {
//	 	return;
//	 } if (!view) { 
//        printf("Data mahasiswa tidak ada kak\n"); 
//    }
//}
//
//int main(){
//    mahasiswa mhs;
//    string input;
//    do{
//        system("cls");
//        puts("Data Mahasiswa");
//        puts("1. Tambah Data");
//        puts("2. Tampilkan Data");
//        puts("3. Update Data");
//        puts("4. Delete Data");
//        puts("5. Exit");
//        puts("Pilih : ");
//    switch(getch()){
//        case '1' : tambahData(&mhs);
//        break;
//        case '2' : bacaData(&mhs);
//        break;
//        case '3' : fflush(stdin);
//        printf("Ketikkan nama yang akan diupdate : ");gets(input);
//        updateDataMhs(&mhs, input);
//        break;
//        case '4' : fflush(stdin);
//        printf("Ketikkan nama yang akan dihapus : ");gets(input);
//        hapusData(&mhs, input);
//        break;
//    }
//}
//while(getch()!=5);
//getch();
//return 0;
//}