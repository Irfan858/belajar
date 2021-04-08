#include <stdio.h>
#include <iostream>
using namespace std;


	// Nama		: Ichsan Khaliq Adyanda
	// Nim		: 1902011014
	// Jurusan	: Teknik Informatika 19
	/* Hitung luas segitiga
	/* Persegi penjang
	/* Luas lingkaran
	/* Volume tabung
	/* Volume kerucut
	/* Volume Kubus
	/* Volume Balok
	*/
	
	void luasSegitiga()
	{
		int a,t,luasS;
		cout<<"Selamat Datang Di Program Mencari Luas Segitiga"<<endl;
		cout<<"Masukan Alas		= ";
		cin>>a;
		cout<<"Masukan Tinggi	= ";
		cin>>t;
		luasS = (a*t)/2;
		cout<<"Luas Segitiga Adalah		= "<<luasS<<endl;
	}
	void persegiPanjang()
	{
		int p,l,hasilpp;
		cout<<"Selamat Datang Di Program Mencari Luas Persegi Panjang"<<endl;
		cout<<"Masukan Panjang		= ";
		cin>>p;
		cout<<"Masukan Lebar		= ";
		cin>>l;
		hasilpp = p*l;
		cout<<"Luas Persegi Panjang		= "<<hasilpp<<endl;
	}
	void persegi()
	{
		int s,hasilp;
		cout<<"Selamat Datang Di Program Mencari Luas Persegi"<<endl;
		cout<<"Masukan Sisi		= "<<"cm"<<endl;
		hasilp = s*s;
		cout<<"Luas Persegi Adalah		= "<<"cm^2"<<hasilp<<endl;
	}
	void luasLingkaran()
	{
		int r,hasilling;
		cout<<"Selamat Datang Di Program Mencari Luas Lingkaran"<<endl;
		cout<<"Masukan Jari Jari		= ";
		cin>>r;
		hasilling = 3.14*r*r;
		cout<<"Luas Lingkaran Adalah		= "<<hasilling<<endl;
	}
	void volumTabung()
	{
		int r,t,vtabung;
		cout<<"Selamat Datang Di Program Mencari Volume Tabung"<<endl;
		cout<<"Masukan Jari-Jari		= ";
		cin>>r;
		cout<<"Masukan Tinggi		= ";
		cin>>t;
		vtabung = 3.14*r*r*t;
		cout<<"Volume Tabung Adalah		= "<<"cm^3"<<vtabung<<endl;
		
	}
	void volumKerucut()
	{
		int r,t,vkerucut;
		cout<<"Selamat Datang Di Program Mencari Volume Kerucut"<<endl;
		cout<<"Masukan Jari-Jari		= ";
		cin>>r;
		cout<<"Masukan Tinggi		= ";
		cin>>t;
		vkerucut = (3.14*r*r*t)/3;
		cout<<"Volume Kerucut Adalah		= "<<"cm^3"<<vkerucut<<endl;
	}
	void volumKubus()
	{
		int s,vkubus;
		cout<<"Selamat Datang Di Program Mencari Volume Kubus"<<endl;
		cout<<"Masukan Sisi		= "<<"cm";
		cin>>s;
		vkubus = s*s*s;
		cout<<"Volume Kubus Adalah		= "<<"cm^3"<<vkubus<<endl;
	}
		
	void volumBalok()
	{
		int p,l,t,vbalok;
		cout<<"Selamat Datang Di Program Mencari Volume Balok"<<endl;
		cout<<"Masukan Panjang		= "<<"cm";
		cin>>p;
		cout<<"Masuka Lebar		= "<<"cm";
		cin>>l;
		cout<<"Masukan Tinggi		= "<<"cm";
		vbalok = p*l*t;
		cout<<"Volume Balok Adalah		= "<<"cm^3"<<vbalok<<endl;
	}

	void tampilan()
	{
		int input;
		cout<<"Program Mencari Luas & Volume Ruangan"<<endl;
		cout<<"1.	Luas Segitiga "<<endl;
		cout<<"2.	Luas Persegi Panjang "<<endl;
		cout<<"3.	Luas Persegi"<<endl;
		cout<<"4.	Luas Lingkaran"<<endl;
		cout<<"5.	Volume Tabung"<<endl;
		cout<<"6.	Volume Kerucut"<<endl;
		cout<<"7.	Volume Kubus"<<endl;
		cout<<"8.	Volume Balok"<<endl;
		cout<<"Masukan Pilihan	: ";
		cin>>input;
		
		switch (input)
		{
			case 1:
				luasSegitiga();
				break;
			case 2:
				persegiPanjang();
				break;
			case 3:
				persegi();
				break;
			case 4:
				luasLingkaran();
				break;
			case 5:
				volumTabung();
				break;
			case 6:
				volumKerucut();
				break;
			case 7:
				volumKubus();
				break;
			case 8:
				volumBalok();
				break;
		
		}
	}

	int main()
	{
		char quit  = 'y';
		while (quit == 'y')
		{
			cout<<"Program Mencari Luas & Volume Bagun Ruang"<<endl;
			tampilan();
			cout<<"Apakah Anda ingin Lanjut (y/n) : "<<endl;
			cin>>quit;
		}
		cout<<"program telah selesAi"<<endl;
		cout<<"Anda Akan Keluar DAri PrOgRaM"<<endl;
	}
