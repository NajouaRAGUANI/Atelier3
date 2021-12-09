#include<iostream>
using namespace std;
class T{
	static int nombre ;
	public :
		void call(){
			cout<<"l appelle de la fonction"<<endl;
			nombre++;
		}
		void static afficher(){
			cout<<"le nombre de fois call  est appele est:"<<nombre<<endl;
		}
};
int T ::nombre=0;
main(){
	T a , b ;
	a.call();
	b.call();
	T::afficher();
}
