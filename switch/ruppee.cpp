// calculate the number of 100, 20, 10, 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=1;
    switch (m){
    case 1:
        cout<<"100 rupee used "<<n/100<<endl;
        n=n%100;
        m=2;
    case 2:
        m=3;
        if(n/20!=0){
            cout<<"20 rupee used "<<n/20<<endl;
            n=n%20;} 
    case 3:
        m=4;
        if(n>9){
            cout<<"10 rupee used "<<n/10<<endl;
            n=n%10;}
    case 4:
        if(n>0)
            cout<<"1 rupee used "<<n<<endl;
        break;
    }
}