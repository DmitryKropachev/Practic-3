#include <iostream>
using namespace std;

class Road {
	private:
		int length;
		int width;
	public:
		Road(int newlength, int newwidth) {
			length = newlength;
			width = newwidth;
		}
		void Print() {
			cout << "Road length: " << length << endl;
			cout << "Road width: " << width << endl;
		}
};

class Car {
	private:
		double X, V;
		int P;
	public:
		Car(double newx, int newp, double newv) {
			X = newx;
			P = newp;
			V = newv;
		}
		void Print() {
			cout << "X: " << X << endl;
			cout << "P: " << P << endl;
			cout << "V: " << V << endl;
		}
};

int main() {
	
	Car car1(21.5, 40, 33.4);
	car1.Print();

	Road road1(100, 5000);
	road1.Print();

	return 0;
}
