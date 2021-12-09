#include<iostream>
#include<cmath>

using namespace std;
class vecteur3d {
	float x;
	float y;
	float z;
	
	public:
	vecteur3d(float a = 0 ,float b= 0 ,float c =0): x(a), y(b), z(c) {
	}
	
	vecteur3d(const vecteur3d & v) {
		x = v.x;
		y = v.y;
		z = v.z;		
	}
	
	
	void afficher() {
		cout << "("<<x<<","<<y<<","<<z<<")" << endl;
	}
	

	vecteur3d somme(const vecteur3d & v) {
		vecteur3d s;
		s.x = x + v.x;
		s.y = y + v.y;
		s.z = z + v.z;
		return s;
	
	}

	float produit(const vecteur3d & v) {
		return x*v.x + y*v.y + z*v.z;
	}
	

	bool coincide(const vecteur3d & v) {
		return (x == v.x && y == v.y && z == v.z);
	}
	

	float norme() {
		return sqrt(x*x + y*y + z*z);
	}
	

	vecteur3d normax(vecteur3d v) {
		if( this->norme() > v.norme())
		    return *this;
		    
		return v;
	}
	

	vecteur3d * normax(vecteur3d * v) {
		if( this->norme() > v->norme())
		    return this;
		    
		return v;
	}
	

	vecteur3d & normaxR(vecteur3d &v) {
		if( this->norme() > v.norme())
		    return *this;
		    
		return v;
	}
};

int main() {
	vecteur3d v1(9,9,9);
	cout << " V1=";
	v1.afficher();
	vecteur3d v2(1,1,1);
	cout << " V2=";
	v2.afficher();
	cout<<endl;
	cout << "La somme des deux vecteurs est : ";
	v1.somme(v2).afficher();
	cout << "Le produit scalaire des deux vecteurs  est : " << v1.produit(v2) << endl;
	cout<<endl;
	cout << "Copier le vecteur V1 dans V3:" << endl;
	vecteur3d v3(v1);
	cout << " V3=";
	v3.afficher();
	if(v1.coincide(v3))
	    cout << "Les vecteurs v1 et v3 coincident " << endl; 
	else
	    cout << "Les vecteurs v1 et v3 ne coincident pas " << endl;
	
	cout<<endl;
	cout << "la plus grande norme par valeur: ";
	(v1.normax(v2)).afficher();
	cout<<endl;
	cout << "la plus grande norme par adresse: ";
	(v1.normax(&v2))->afficher();
	cout<<endl;
	cout << "la plus grande norme  par reference:";
	(v1.normaxR(v2)).afficher();
	cout<<endl;
}
