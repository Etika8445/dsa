#include <bits/stdc++.h>
using namespace std;
//78 subsets
//17
//509

int main(){
    int number='2'-'0';
    cout<<number;
}

/*int power1(int a, int b){
    if(b==0) return 1;
    if (b==1) return a;
    int ans= power1(a, b/2);
    if(b%2==0) return ans*ans;
    else return a*ans*ans;
}

int main(){
    cout<<power1(3,10);
}

/*bool swapping(string &d, int i, int j)
{
        if(i>j) return 1;
        if(d[i]!=d[j]) return 0;
        else return swapping(d, i+1, j-1);
}
int main(){
    string d="babbar";
    cout<<swapping(d,0,5);
}




/*bool sorted(int arr[], int k,int n){
    if(n==0) return 0;
    if(arr[0]==k) return 1;
    else return sorted(arr+1,k,n-1);
}

int main(){
    int arr[6]={2,4,5,6,1,13};
    cout<<sorted(arr,5,6);
}

/*void numee(string arr[] ,int n){
        if(n==0) return ;
        int ans =n%10;
        n=n/10;
        numee(arr,n);
        cout<<arr[ans]<<" ";
} 


int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eigth","nine"};
    numee(arr,412);
}



/*int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1)+fib(n-2);
}
int main(){
    cout<<fib(13);
}



/*void step(int s, int n){
    cout<<s<<endl;
    if(s==n){
        cout<<"reached";
        return ;
    }
    s++;
    step(s,n);
}
int main(){
    int n=9;
    int s=0;
    step(s,n);    
}*/