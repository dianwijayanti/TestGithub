#include <iostream>
using namespace std;

int hitung_biaya_parkir (int harga, int jam_berikutnya){
	int biaya;
	biaya = harga + jam_berikutnya;
	return biaya;
}

void pilihan_kendaraan(){
	cout<<"********************************************"<<endl;
	cout<<"               TARIF PARKIR "<<endl;
    cout<<"             BIG BUNS BURGER"<<endl;
    cout<<"    Jln. Raya Uluwatu No. 2 Jimbaran"<<endl;
    cout<<"********************************************\n"<<endl;
    cout<<"Jenis Kendaran : "<<endl;
    cout<<"1. Motor"<<endl;
    cout<<"2. Mobil"<<endl;
    cout<<"3. Bus"<<endl;
    cout<<endl;
}

int main(){
	int pilih, tambahan, jam_berikutnya, harga, total;
	int jam_masuk, jam_keluar, lama;
	string no_plat;
	string jenis_kendaraan;
	pilihan_kendaraan();
	    cout<<"---------------------------------------------"<<endl;
		cout<<"Masukan Jenis Kendaraan : ";
		cin>>pilih;
		cout<<"Masukan No.Plat : ";
		getline(cin,no_plat);
		cout<<"Jam Masuk : ";
		cin>>jam_masuk;
 		cout<<"Jam Keluar : ";
 		cin>>jam_keluar;
 		if(jam_keluar>=jam_masuk){
			lama = jam_keluar-jam_masuk;
 		}else {
 			lama = (12-jam_masuk)+jam_keluar;
 		}cout<<"Lama Jam : "<<lama<<endl;
		switch(pilih){
			case 1 : 
				jenis_kendaraan = "Motor";
				harga = 2000;
				tambahan = 1000;
				if(lama>=2) {
 					jam_berikutnya = ((lama-2)*tambahan);
				} else {
					jam_berikutnya = 0;
				}cout<<"2 Jam Pertama : Rp "<<harga<<endl;
				cout<<"Jam Berikutnya : Rp "<<jam_berikutnya<<endl;
				total+=hitung_biaya_parkir (harga,jam_berikutnya);
				cout<<"Total Tarif Parkir : Rp "<<hitung_biaya_parkir(harga,jam_berikutnya)<<endl;
				break;
			case 2 :
				jenis_kendaraan = "Mobil";
				harga = 3000;
				tambahan = 2000;
				if(lama>=2) {
 					jam_berikutnya = ((lama-2)*tambahan);
				} else {
					jam_berikutnya = 0;
				}cout<<"2 Jam Pertama : Rp "<<harga<<endl;
				cout<<"Jam Berikutnya : Rp "<<jam_berikutnya<<endl;
				total+=hitung_biaya_parkir (harga,jam_berikutnya);
				cout<<"Total Tarif Parkir : Rp "<<hitung_biaya_parkir(harga,jam_berikutnya)<<endl;
				break;
			case 3 :
				jenis_kendaraan = "Bus";
				harga = 5000;
				tambahan = 3000;
				if(lama>=2) {
 					jam_berikutnya = ((lama-2)*tambahan);
				} else {
					jam_berikutnya = 0;
				}cout<<"2 Jam Pertama : Rp "<<harga<<endl;
				cout<<"Jam Berikutnya : Rp "<<jam_berikutnya<<endl;
				total+=hitung_biaya_parkir (harga,jam_berikutnya);
				cout<<"Total Tarif Parkir : Rp "<<hitung_biaya_parkir(harga,jam_berikutnya)<<endl;
				break;
			default :
			    cout<<"---------------------------------------------"<<endl;
                cout<<"                 >>MOHON MAAF<<              "<<endl;
                cout<<"             Pilihan Tidak Tersedia          "<<endl;
                cout<<"---------------------------------------------"<<endl;
				break;		
			}
	system ("pause");
    system("cls");
    cout<<"---------------------------------------------"<<endl;
    cout<<"      Terima Kasih atas kunjungan Anda^^     "<<endl;
    cout<<"---------------------------------------------"<<endl;
    return 0;
}

