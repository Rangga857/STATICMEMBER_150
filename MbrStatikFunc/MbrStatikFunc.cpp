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
	void pritAll();

	static void setnim(int pNim) { nim = pNim; }/*Definisi function*/
	static int getNim() { return nim; /*definisi function*/ }

};