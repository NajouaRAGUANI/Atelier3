#include <iostream>
using namespace std;
class mere{ //la classe base
	public:
		mere();//constructeur par defaut
		~mere();//destructeur
	    void display();
};
class fille: public mere{ //la classe hérité
	public :
		fille();//contructeur de la classe hérité
		~fille();//destructeur de la classe hérité
		void display();
};
mere::mere(){ };
mere::~mere(){ };
fille::fille(){ };
fille::~fille(){ };
void mere :: display(){
	cout<<"LA MERE: c'est l appel de display pour la MERE";
};
void fille :: display(){
	cout<<"LA FILLE : c'est l appel de display pour la fille ";
}
main() {
	fille f;
	f.display();

}
