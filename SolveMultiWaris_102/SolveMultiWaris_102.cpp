#include <iostream>
using namespace std;

class orang {										//class orang
public:
	int umur;

	orang(int pUmur) :
		umur(pUmur)
	{
		cout << "Orang dibuat dengan umur" << endl;
	}
};

class pekerja : virtual public orang {					//class pekerja yang diturunkan secara virtual dan publik dari class orang
public:
	pekerja(int pUmur) :
		orang(pUmur)
	{
		cout << "Pekerja dibuat\n" << endl;
	}
};

class pelajar : virtual public orang {
public:
	pelajar(int pUmur) :
		orang(pUmur)
	{
		cout << "Pelajar dibuar\n" << endl;
	}
};

class budi: public pekerja, public pelajar {
public:

	budi(int pUmur) :
		pekerja(pUmur),
		pelajar(pUmur),
		orang(pUmur)  //tidak bisa dipakai tanpa virtual
	{
		cout << "Budi dibuat\n" << endl;   
	}
};

int main() {
	budi a(12);

	return 0;
}