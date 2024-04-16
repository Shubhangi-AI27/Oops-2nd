#include<iostream>
using namespace std;
class areatriangle{
     int b;
     int h;
     public:
     areatriangle(int base, int height){
        b= base;
        h= height;
     }
int area(){
        return(0.5*b*h);
    }    

};
int main(){
    areatriangle t1(2,3);
    areatriangle t2 (4,5);
    cout<<"area of first triangle "<<t1.area()<<endl;
    cout<<"area of second triangle "<<t2.area()<<endl;
    return 0;
}
