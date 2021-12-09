#include <iostream>
using namespace std;

class Animal{ //la classe base Animal

public:
	const char*   nom;
	int age;
	Animal(const char* nom) : nom (nom){};
	void set_value(int age){age = age;};	
};

class Zebra : public Animal{ //une sous classe nommée zebra hérité d animal
public:
	const char* LieuOrigine;
	Zebra (const char* nom, const char* LieuOrigine) : Animal (nom), LieuOrigine(LieuOrigine){};
	void afficher(){cout << "ce zebra a pour nom:"<<nom << " il a : " << age << " il vient de "<<LieuOrigine<< endl;};

};

class Dolphin : public Animal{ //une sous classe nommée dolphin hérité d animal
public:
	const char* LieuOrigine;
	Dolphin (const char* nom, const char* LieuOrigine) : Animal (nom), LieuOrigine (LieuOrigine){};
	void afficher(){cout << "ce Dolphin a pour nom "<< nom << " il a " << age << " il vient de "<< LieuOrigine<< endl;};

};

int main()
{	
	Zebra z1("nijux", "affrique");
	z1.set_value(10);
	z1.afficher();
	Dolphin d1("rijux","japon");
	d1.set_value(20);
	d1.afficher();
	return 0;
}
