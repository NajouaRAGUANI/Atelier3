#include <iostream>
using namespace std;
//la class shape
class shape{
    protected:
    float a;
    float b;
    public:
    shape(float , float);//constrecteur(definit dehors)
    virtual float area();
} ;
//sous classe triangle
class triangle : public shape{
    public: 
 triangle( float, float);
 float area();
};
//sous classe rectangle
class rectangle : public shape{
    public:
    rectangle(float , float );
    float area();
};
//definition d area pour shape
float shape::area(){
    cout<<" determiner une shape!!!!"<<endl;
};
//definition d area pour triangle
float triangle::area(){
    return (a*b/2);
};
//definition d area pour rectangle
float rectangle::area(){
    return (a*b);
};
//definition de constructeur parammétré de shape
shape::shape(float a , float b){
  this-> a = a ;
  this-> b = b ;
      cout<<"l'appel de constructeur est bien realise"<<endl;
};
//definition de constructeur parammétré de triangle
triangle::triangle(float a , float b):shape(a,b){
    cout<<"constructeur de tiangle"<<endl;
};
//definition de constructeur parammétré de rectangle
rectangle::rectangle( float a , float b):shape(a,b){
        cout<<"constructeur de rectangle"<<endl;
};

main(){
    shape *rec=new rectangle(2,2); //allocation de mèmoire pour un object de shape type rectangle
    shape *tri=new triangle(2,2);//allocation de mèmoire pour un object de shape type triangle
    cout<<"voila les resultas:"<<endl;
   cout<<"l area de recteangle est:"<< rec->area()<<endl;
   cout<<"l area de triangle est:"<< tri->area()<<endl;
}
