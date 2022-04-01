#include <iostream>
#include <cstdio>
using namespace std;
long int a; 
long b;
char c; 
float x=0.0f;
double y=0.0;

void display_format(){
    cin >>a>>b>>c>>x>>y;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
   
    printf("%f\n%lf\n", x, y);
   
    
}

int main() {
    display_format();
    return 0;
}
