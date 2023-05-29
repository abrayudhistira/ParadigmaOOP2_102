#include <iostream>
using namespace std;

class baseClass {				//class baseClass
public:
	virtual void perkenalan() {
		cout << "Halo saya Function dari base class" << endl;
	}
};
class derivedClass: public baseClass {				//class baseClass
public:
	void perkenalan() {
		cout << "Halo saya Function dari derived class" << endl;
	}
};