#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private :
	static int nim;
public :
	int id;
	string nama;

	void setID();
	void printAll();

	static void setnim(int pNim) { nim = pNim; }/*Definisi function*/
	static int getNim() { return nim; /*definisi function*/ }
};

int mahasiswa::nim = 0;

void mahasiswa::setID() {
	id = ++nim;
}
void mahasiswa::printAll() {
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}