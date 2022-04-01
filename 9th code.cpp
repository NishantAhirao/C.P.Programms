#include <iostream>
#include <string>
using namespace std;

string str1;
string str2;
char ch1;
char ch2;


int main() {
	
    cin>> str1;
    cin>> str2;
    
    cout<< str1.size() <<" " << str2.size()<<"\n";
    cout << str1+str2<<"\n";
    ch1=str1[0];
    str1[0]=str2[0];
    str2[0]=ch1;
   /// cout << ch;
    cout << str1 << " " << str2;
    
    
    return 0;
}