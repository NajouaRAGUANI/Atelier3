#include <iostream>
using namespace std;
class MyClass{
    public:
    MyClass();//constructeur par defaut
    ~MyClass();//destructeur
    
};
MyClass::MyClass(){
    cout<<"c'est le constructeur de MyClass"<<endl;
};
MyClass::~MyClass(){
    cout<<"c'est le destructeur de MyClass "<<endl;
};
int main() {
  MyClass m ;
    return 0;
} 
