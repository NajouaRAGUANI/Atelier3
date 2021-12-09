#include<iostream>
#include<cstring>

using namespace std;


class personne{//la classe base personne
	protected:
		char* nom;
		char* prenom;
		char* birth;
	public:
		personne(char*,char*,char*);
		virtual void affichage();
};
personne::personne(char* n,char* p,char* d){
	nom=new char[strlen(n)+1];
	prenom=new char[strlen(p)+1];
	birth=new char[strlen(d)+1];
	strcpy(nom,n);
	strcpy(prenom,p);
	strcpy(birth,d);
}
void personne::affichage(){
	cout<<"le nom :"<<nom<<endl;
}

class employe:public personne{ //la classe hérité employe(sous classe de personne)
	protected:
		double salaire;
	public:
		employe(char*,char*,char*,double);
		void affichage();
}; 
employe::employe(char*n,char*p,char*d,double s):personne(n,p,d){
	salaire=s;
}
void employe::affichage(){
	cout<<"le prenom : "<<prenom<<endl;
	personne::affichage();
	cout<<"son salaire est:"<<salaire<<endl;
}
class chef:public employe{ //la classe hérité chef(sous classe d employé)
	private:
		string service;
	public:
		chef(char*,char*,char*,double,string);
		void affichage();
		
};
class directeur:public chef{//la classe hérité directeur(sous classe chef)
	protected:
         	string societe;
         	
	public:
		directeur(char*,char*,char*,double,string, string);
		void affichage();
};
chef::chef(char*n,char*p,char*d,double s,string sv):employe(n,p,d,s){
	service=sv;
	
};
directeur::directeur(char*n,char*p,char*d,double s,string sv , string so):chef(n,p,d,s,sv){
	societe=so;
};
void directeur::affichage(){
	cout<<"le prenom de directeur est:"<<prenom<<endl;
    
	cout<<"il travail chez la societe:"<<societe<<endl;
};
void chef::affichage(){
	cout<<"le prenom de chef est: "<<prenom<<endl;
	personne::affichage();
	cout<<"son salaire est:"<<salaire<<endl;	
};
 main(){

personne *p1, *p2 , *p3;
p1=new employe("nijux","rijux","4/12/1999",1000);
p1->affichage();
p2=new chef("fatima","nadir","5/3/1988",14000,"Service1");
p2->affichage();
p3=new directeur("Najoua","RAGUANI","9/1/2001",300000,"Service2","NorthAgency");
p3->affichage();

		
	
}
