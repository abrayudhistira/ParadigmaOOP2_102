#include <iostream>
using namespace std;

class AbstraksiKlas {			//class abstrak
private: string x, y;
public:
	//method untuk mengisi nilai
	//private number
	void setXY(string a, string b) {
		x = a;
		y = b;
	}
	//menampilkan nilai
	void display() {
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
};

int main() {
	AbstraksiKlas ak;
	ak.setXY("Yogyakarta", "Kampus");
		ak.display();

		return 0;
}