#include <iostream>
using namespace std;

class baseClass {				//class baseClass
public:
	virtual void perkenalan() {
		cout << "Halo saya Function dari base class" << endl;
	}
};
class derivedClass : public baseClass {		//class derivedClass yang diturunkan secara virtual dan publik dari class baseClass
public:
	void perkenalan() {
		cout << "halo saya Function dari derived class" << endl;
	}
};
int main() {									//main program
	derivedClass a;
	a.perkenalan();

	return 0;
}