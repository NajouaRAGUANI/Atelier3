#include<iostream>
#include<cstring>
using namespace std;
class Media {
protected:
             char titre;	
 public:
             virtual void imprime();
             virtual char *id();

};


class Livre: virtual public Media {
protected:	
	char* t;
	int nombrePages;
	char* auteur;
public:
	          Livre(){};
              Livre( char* t, int nombrePages, char* auteur){
			 	t=new char[strlen(t)+1];
             	auteur=new char[strlen(auteur)+1];
            	strcpy(t,t);
             	strcpy(auteur,auteur);
			  nombrePages=nombrePages;
			  
			  };
			  void leLivre( char* t , int nombrePages ,char* auteur ){
			  	cout<<"le nom du livre est:"<<t<<"\t il contient:"<<nombrePages<<"pages"<<"\t il est ecrit par:"<<auteur<<endl;
			  }
       
};



class Audio:virtual public Media {
public:
             Audio() {};
             void up(){
			 cout<<"++"<<endl ;};
             void down(){
			 cout<<"--"<<endl;};
             void vitesse(){
			 cout<<"plus vite ou plus lent"<<endl;};
			 
private:
              char mots;
};


class Press: virtual public Media {
public:
	        Press(){};
            Press(char* type){
			type=new char[strlen(type)+1];
			strcpy(type,type);};
            laPress(char* type){
            	cout<<"il y a plusieurs type de la press!.... exemple:"<<type<<endl;
			};
             char* type;
};

class cassette: virtual public Audio {
public:
               cassette() {};
               cassette(char* type , float l) {
			   type=new char[strlen(type)+1];
			   strcpy(type,type);
			   l = l;
			   };
			   laCassette( char* type , float l){
			   	cout<<"cette cassette est de type:"<<type<<"et de largeur:"<<l<<"mm"<<endl;
			   }

              char* type;
               float l;
               
               
};
class cd: virtual public Audio {
public:
                 cd(){};
                 cd(float duree , float debit , float largeur){
                 	duree=duree;
                 	debit=debit;
                 	largeur=largeur;
				 };
				 leCD(float duree , float debit , float largeur){
				 	cout<<"ce cd a du duree du:"<<duree<<"\t, une debit de:"<<debit<<"mo et de largeur de :"<<largeur<<"mm"<<endl;
				 }

                 float duree;
                 float debit;
                 float largeur;
};

class disque:virtual public Audio {
public:
                  disque(){};
                  disque(char* formatFichier){
                  formatFichier=new char[strlen(formatFichier)+1];
			      strcpy(formatFichier,formatFichier);
				  };
                  LeDisque(char* formatFichier){
                  	cout<<"la forme de  cette disque est:"<<formatFichier<<endl;
				  }
                  char* formatFichier;
};
class magazine: virtual public Press {
public:
                magazine(){};
                magazine(char* titre , int pages , char* type ){
					type=new char[strlen(type)+1];
		          	strcpy(type,type);
		          	titre=new char[strlen(titre)+1];
		          	strcpy(titre,titre);
				};
				
				mag(char* titre , int pages , char* type ){
					cout<<"le titre de magazine est:"<<titre<<"elle est de categorie:"<<type<<"elle contient:"<<pages<<"pages"<<endl;
				}
               char* type;
               char* titre;
               int pages;
};
class journal: virtual public Press {
public:
               journal(char* titre){
               	titre=new char[strlen(titre)+1];
		       	strcpy(titre,titre);
			   };
			   leJournal(char* titre){
			   	cout<<"le titre du journal est:"<<titre<<endl;
			   }
               char* titre;
};
class revue:virtual public Press {
public:
                  revue(){
				  cout<<"revue!!!";};
          
};
main(){	
Livre *l;
l->leLivre("najoua" , 2 , "Raguani");
cout<<"######################"<<endl;
Audio *m;
m->up();
cout<<"######################"<<endl;
Press *p;
p->laPress("visuelle");
cout<<"######################"<<endl;
cassette *c;
c->laCassette("typeX" , 0.9);
cout<<"######################"<<endl;
cd *cd1;
cd1->leCD(1,1,1);
cout<<"######################"<<endl;
disque *dis;
dis->LeDisque("typX");
cout<<"######################"<<endl;
magazine *mag;
mag->mag("LALUNE" , 20 , "BEAUTEE");
cout<<"######################"<<endl;
journal *j;
j->leJournal("soir");
cout<<"######################"<<endl;
revue re();

}
