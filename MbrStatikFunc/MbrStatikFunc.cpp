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

	mahasiswa(string pNama) : nama(pNama) { setID(); };
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

int main() {
	mahasiswa mhs1("Sri Dadi");
	mahasiswa mhs2("Budi Jatmiko");
	mahasiswa::setnim(9); //mengakses nim melalui static member  function "setnim"
	mahasiswa mhs3("Andi Janu");
	mahasiswa mhs4("Joko Wahoo");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "Akses dari luar object = " << mahasiswa::getNim() << endl; // mengaskes nim melalui static meber function "getNim"

}	