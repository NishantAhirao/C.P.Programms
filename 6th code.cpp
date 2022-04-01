#include <iostream>
#include <cstdio>
using namespace std;

int a ,b ,c, d;

void max_function(){
    cin>>a;
    
    cin>>b;
    
    cin>>c;
    
    cin>>d;
   
    if(a>b && a>c && a>d){cout<<a<<"\n";}
    else if(a>b && a>c && a<d){cout<<d<<"\n";}
    else if(a>b && a<c && a>d){cout<<c<<"\n";}
    else if(a<b && a>c && a<d){cout<<b<<"\n";}
    
    else if(b>a && b>c && b>d){cout<<b<<"\n";}
    else if(b>a && b>c && b<d){cout<<d<<"\n";}
    else if(b>a && b<c && b>d){cout<<c<<"\n";}
    else if(b<a && b>c && b<d){cout<<a<<"\n";}
    
    else if(c>b && c>a && c>d){cout<<c<<"\n";}
    else if(c>b && c>a && c<d){cout<<d<<"\n";}
    else if(c>b && c<a && c>d){cout<<a<<"\n";}
    else if(c<b && c>a && c<d){cout<<b<<"\n";}

    else if(d>b && d>c && d>a){cout<<d<<"\n";}
    else if(d>b && d>c && d<a){cout<<a<<"\n";}
    else if(d>b && d<c && d>a){cout<<c<<"\n";}
    else {cout<<b<<"\n";}
    
    
  
    
    
    
}



int main() {
    max_function();
    return 0;
}
