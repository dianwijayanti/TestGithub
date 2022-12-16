#include <iostream>

using namespace std;

int hitungHarga(int harga_satuan, int banyak){
    int harga;
    harga =  harga_satuan * banyak;
    return harga;
}

int hitungPajak(int total2){
	int hargapajak, afterpajak;
	hargapajak = 0.15 * total2;
	afterpajak = hargapajak + total2;
	return afterpajak; 
}

void pilihan_menu(){
    cout<<"\n****************************************************************************************"<<endl;
    cout<<"                          DAFTAR MENU HARGA MAKANAN DAN MINUMAN"<<endl;
    cout<<"                                     BIG BUNS BURGER"<<endl;
    cout<<"                            Jln. Raya Uluwatu No. 2 Jimbaran"<<endl;
    cout<<"****************************************************************************************"<<endl;
    cout<<"|| 1. Spicy Crispy Chicken       Rp 55.000  || 7.  Mineral Water            Rp 5.500  || \n";
    cout<<"|| 2. Classical Chicken Burger   Rp 53.000  || 8.  Iced Latte               Rp 25.000 || \n";
    cout<<"|| 3. Wagyu Beef Burger          Rp 75.000  || 9.  CocaCola                 Rp 15.000 || \n";
    cout<<"|| 4. Sirloin Beef Burger        Rp 100.000 || 10. Pepsi                    Rp 15.000 || \n";
    cout<<"|| 5. Spaghetti Bolognese        Rp 52.500  ||[11] SELESAI                            || \n";
    cout<<"|| 6. French Fries               Rp 30.000  ||                                        || \n";
}

int main(){
	int harga, jumlah, pilih, total, bayar, total3, uang_kembalian;
	string nama_menu;
	pilihan_menu();
	do{
		cout<<"\nMasukan Menu Pilihan Anda [1-11] : ";
		cin>>pilih;
		switch(pilih){
			case 1 :
				nama_menu = "Spicy Crispy Chicken";
				harga = 55000;
				cout<<"Jumlah Pesanan : ";
				cin>>jumlah;
				total+=hitungHarga(harga, jumlah);
				cout<<jumlah<<" "<<nama_menu;
				cout<<" = Rp "<<hitungHarga(harga, jumlah)<<endl;
				break;
			case 2 :
				nama_menu = "Classical Chicken Burger";
				harga = 53000;
				cout<<"Jumlah Pesanan : ";
				cin>>jumlah;
				total+=hitungHarga(harga, jumlah);
				cout<<jumlah<<" "<<nama_menu;
				cout<<" = Rp "<<hitungHarga(harga, jumlah)<<endl;
				break;
			case 3 :
				nama_menu = "Wagyu Beef Burger";
				harga = 75000;
				cout<<"Jumlah Pesanan : ";
				cin>>jumlah;
				total+=hitungHarga(harga, jumlah);
				cout<<jumlah<<" "<<nama_menu;
				cout<<" = Rp "<<hitungHarga(harga, jumlah)<<endl;
				break;
			case 4 :
				nama_menu = "Sirloin Beef Burger";
				harga = 100000;
				cout<<"Jumlah Pesanan : ";
				cin>>jumlah;
				total+=hitungHarga(harga, jumlah);
				cout<<jumlah<<" "<<nama_menu;
				cout<<" = Rp "<<hitungHarga(harga, jumlah)<<endl;
				break;
			case 5 :
				nama_menu = "Spaghetti Bolognese";
				harga = 52500;
				cout<<"Jumlah Pesanan : ";
				cin>>jumlah;
				total+=hitungHarga(harga, jumlah);
				cout<<jumlah<<" "<<nama_menu;
				cout<<" = Rp "<<hitungHarga(harga, jumlah)<<endl;
				break;
			case 6 :
				nama_menu = "French Fries";
				harga = 30000;
				cout<<"Jumlah Pesanan : ";
				cin>>jumlah;
				total+=hitungHarga(harga, jumlah);
				cout<<jumlah<<" "<<nama_menu;
				cout<<" = Rp "<<hitungHarga(harga, jumlah)<<endl;
				break;
            case 7 :
				nama_menu = "Mineral Water";
				harga = 5500;
				cout<<"Jumlah Pesanan : ";
				cin>>jumlah;
				total+=hitungHarga(harga, jumlah);
				cout<<jumlah<<" "<<nama_menu;
				cout<<" = Rp "<<hitungHarga(harga, jumlah)<<endl;
				break;
            case 8 :
				nama_menu = "Iced Latte";
				harga = 25000;
				cout<<"Jumlah Pesanan : ";
				cin>>jumlah;
				total+=hitungHarga(harga, jumlah);
				cout<<jumlah<<" "<<nama_menu;
				cout<<" = Rp "<<hitungHarga(harga, jumlah)<<endl;
				break;
            case 9 :
				nama_menu = "CocaCola";
				harga = 15000;
				cout<<"Jumlah Pesanan : ";
				cin>>jumlah;
				total+=hitungHarga(harga, jumlah);
				cout<<jumlah<<" "<<nama_menu;
				cout<<" = Rp "<<hitungHarga(harga, jumlah)<<endl;
				break;
            case 10 :
				nama_menu = "Pepsi";
				harga = 15000;
				cout<<"Jumlah Pesanan : ";
				cin>>jumlah;
				total+=hitungHarga(harga, jumlah);;
				cout<<jumlah<<" "<<nama_menu;
				cout<<" = Rp "<<hitungHarga(harga, jumlah)<<endl;
				break;
			case 11 :
			    cout<<"\n***************************************************************************************"<<endl;
  			    cout<<"                                    STRUK  PEMBAYARAN"<<endl;
    			cout<<"                                     BIG BUNS BURGER"<<endl;
    			cout<<"                            Jln. Raya Uluwatu No. 2 Jimbaran"<<endl;
    			cout<<"***************************************************************************************"<<endl;
  				cout<<"Total Pembayaran = Rp. "<<total<<endl;
  				cout<<"Total Pembayaran (include tax 15%) = Rp. "<<hitungPajak(total)<<endl;
  				total3 = hitungPajak(total);
  				cout<<"Bayar            = Rp. "; cin>>bayar;
  				uang_kembalian = bayar-total3;
  				cout<<"Uang Kembalian   = Rp. "<<uang_kembalian<<endl;
				break;
			default :
                cout<<"======================================================================================="<<endl;
                cout<<"                                     >>MOHON MAAF<<                                    "<<endl;
                cout<<"                              Pilihan Menu Tidak Tersedia                              "<<endl;
                cout<<"======================================================================================="<<endl;
				break;
			}
		}while(pilih !=11);
    system ("pause");
    system("cls");
    cout<<"======================================================================================="<<endl;
    cout<<"                           Terima Kasih atas kunjungan Anda^^                          "<<endl;
    cout<<"======================================================================================="<<endl;
    return 0;
}

