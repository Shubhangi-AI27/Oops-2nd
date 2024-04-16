#include<iostream>
using namespace std;
class areacircle{
    public:
    int r=4;
    float area(){
        return(3.14*r*r);
    }
};
int main(){
    areacircle c1;
    cout<<"area of circle "<<c1.area()<<endl;
    
}
