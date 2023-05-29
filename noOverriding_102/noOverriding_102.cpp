#include <iostream>
using namespace std;

class baseClass {				//class baseClass
public:
	virtual void perkenalan() final {
		cout << "Halo saya Function dari base class" << endl;
	}
};
class derivedClass : public baseClass {
public:
	void perkenalan() {
		cout << "halo saya Function dari derived class" << endl;
	}
};
int main() {
	derivedClass a;
	a.perkenalan();

	return 0;
}