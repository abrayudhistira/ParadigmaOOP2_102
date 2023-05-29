#include <iostream>
using namespace std;

class orang {							//class orang
public:
	int umur;

	orang(int pUmur) :
		umur(pUmur)
	{
		cout << "Orang dibuat dengan umur" << umur << endl;
	}
};

class pekerja : public orang {			//class pekerja yang diturunkan secara publik dari class orang
public:

	pekerja(int pUmur) :
		orang(pUmur)
	{
		cout << "Pekerja dibuat\n" << endl;
	}
};

class pelajar : public orang {
public:

	pelajar(int pUmur) :
		orang(pUmur)
	{
		cout << "pelajar dibuat\n" << endl;
	}
};

class budi : public pekerja, public pelajar {
public:

	budi(int pUmur) :
		pekerja(pUmur),
		pelajar(pUmur)
	{
		cout << "Budi dibuat\n" << endl;
	}
};

int main() {
	budi a(12);

	return 0;
}