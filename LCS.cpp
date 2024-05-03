//Longest Common Subsequence
#include<iostream>
#include<algorithm>
using namespace std;
void ultiLCS(string str1,string str2,int m,int n){
//Array for tabulation process
int DP[m+1][n+1];
for(int i=0;i<m;i++){
   for(int j=0;j<n;j++){
   DP[i][j]=0;
   }
 }

for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
    if(str1[i-1]==str2[j-1]){
    DP[i][j]=DP[i-1][j-1]+1;
     }

     else{
     DP[i][j]=max(DP[i-1][j],DP[i][j-1]);
     }
        }
    }
    cout<<"Value of Longest Common Subsequence::"<<DP[m][n]<<endl;
    cout<<"Subsequence::"<<endl;
   
    }

int main(){
string str1="ABCAB";
string str2="AECB";
int m=str1.length();
int n=str2.length();
ultiLCS(str1,str2,m,n);
 }