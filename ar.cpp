#include<iostream>
using namespace std;
class arearectangle{
    int l;
    int b;
    public:
    arearectangle(int len, int bre){
        l=len;
        b=bre;
    }
int area(){
    return(l*b);
 }
};
int main(){
    arearectangle r1(22,56);
    cout<<"area of rectangle "<<r1.area()<<endl;
}


