#include<iostream>
using namespace std;
class complexe{	
	public:
		float image;
		float reel;
		complexe();//constructeur pa defaut
		complexe( float , float);//contructeur paramétré
		~complexe();//destructeur
		void afficher(){
			cout<<reel<<"+i"<<image<<endl;
		}
};
complexe::complexe(){ };
complexe::complexe(float reel , float image){
this->reel=reel;
this->image=image;  };
complexe::~complexe(){ };
main(){
	float r1,r2,i1,i2;
	char ch;
	complexe com1 , com2 , c ;
	cout<<"entrer la partie reelle de premier complexe:"<<endl;
	cin>>r1;
	cout<<"entrer la partie imaginaire de premier complexe:"<<endl;
	cin>>i1;
	com1.reel=r1;
	com1.image=i1;

	cout<<"entrer la partie reelle de deuxieme complexe:"<<endl;
	cin>>r2;
	cout<<"entrer la partie imaginaire de deuxieme complexe:"<<endl;
	cin>>i2;
	com2.reel=r2;
	com2.image=i2;
	cout<<"le premier complexe:";
	com1.afficher();
	cout<<endl;
	cout<<"le deuxieme 3complexe:";
	com2.afficher();
		cout<<endl;
		cout<<"entere l operation que vous veullez effectuer:(+ ou - ou * ou / ou =)"<<endl;
		cin>>ch;
		
		if(ch=='+'){//choix de l opération
			c=complexe(com1.reel + com2.reel , com1.image+com2.image);
			cout<<"la somme des deux complexes est:";
			c.afficher();
				}
				else if (ch=='-'){
					c=complexe(com1.reel - com2.reel , com1.image-com2.image);
						cout<<"la soustraction des deux complexes est:";
		             	c.afficher();
				}
					else if (ch=='*'){
					c=complexe((com1.reel * com2.reel)-(com1.image * com2.image), (com1.reel * com2.image)+(com2.reel * com1.image));
						cout<<"la multiplication des deux complexes est:";
		             	c.afficher();
				}
			        	else if (ch=='/'){
			         		c=complexe(((com1.reel * com2.reel)+(com1.image * com2.image))/((com2.reel * com2.reel) + (com2.image*com2.image)), ((com1.image * com2.reel)-(com1.reel * com2.image))/((com2.reel * com2.reel) + (com2.image*com2.image)));
					          	cout<<"la divition des deux complexes est:";
		                          	c.afficher();
				} 
			      	else if (ch=='='){
			         	if( com1.reel == com2.reel && com1.image == com2.image){
			         		cout<<"les deux complexes sont egaux";
						 }else{
						 	cout<<"les deux comlexes ne sont pas egaux";
						 }
				}
				else{
					cout<<"veuillez entrer l'un des operateurs demandees!!!!!!"<<endl;
				cin>>ch;
				}

}
