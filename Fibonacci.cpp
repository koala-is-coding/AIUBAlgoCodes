//Fibonacci series 
#include<iostream>
using namespace std;
int fib(int n){
int seq[n];
for(int i=0;i<n;i++){seq[i]=0;}
seq[0]=1;seq[1]=1;
for(int i=2;i<n;i++){
seq[i]=seq[i-1]+seq[i-2];
}
return seq[n-1];
}
int main(){
int n;
cout<<"Enter value::"<<endl;
cin>>n;
cout<<fib(n);
}