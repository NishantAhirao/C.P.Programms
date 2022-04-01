#include <iostream>
using namespace std;

int a;
int b;
int c;
int d;

void add_sub(){
    cin>>a;
    cin>>b;
    c=a+b;
    if (a>b) {
    d=a-b;
    }
    else {
    d=b-a;
    };
    cout << c<<"\n"<<d;
}

int main(){
   add_sub(); 
    
}
