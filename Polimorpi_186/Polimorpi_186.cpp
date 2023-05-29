#include <iostream>
using namespace std;

class seseorang {							//class seseorang
public:
	virtual void pesan() = 0;
	// virtual void pesan(){
	// cout << "Pesan dari seseorang" << endl;
	// }
};

class joko :public seseorang {					//class joko yang diturunkan secara virtual dan publik dari class seseorang
public:
	void pesan() {
		cout << "Pesan Dari Joko" << endl;
	}
};

class lia :public seseorang {					//class lia yang diturunkan secara virtual dan publik dari class seseorang
public:
	void pesan() {
		cout << "Pesan Dari Lia" << endl;
	}
};

int main() {										//main program
	seseorang* obyek;
	joko a;
	lia b;

	obyek = &a;
	obyek->pesan();
	obyek = &b;
	obyek->pesan();
	//a.seseorang::pesan();

	return 0;
}