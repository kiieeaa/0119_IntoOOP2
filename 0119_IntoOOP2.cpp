#include <iostream>
using namespace std;

class bangunDatar {

	//akses modifier
private:
	float panjang, lebar;
public:
	float luas;

	void input () { // methode input persegi panjang 
		cout << "panjang : ";
		cin >> panjang;
		cout << "Lebar :";
		cin >> lebar;
	}

	float HitungLuas() {
		return panjang * lebar;
	}

	

};
