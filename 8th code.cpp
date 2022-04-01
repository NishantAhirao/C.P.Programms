
#include <iostream>

using namespace std;

int number[1000];
int k;
 void printinreverse(){
     cin>>k;
     for(int i=0; i<=k;i++){
         cin>>number[i];
         }
    for(int i=k-1;i>=0;i--){
        cout<<number[i]<<" ";
    }     
     
     
 }

int main() {
    printinreverse();
    return 0;
}
