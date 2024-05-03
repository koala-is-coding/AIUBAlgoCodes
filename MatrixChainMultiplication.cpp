//Matrix Chain Multiplication
#include<iostream>
using namespace std;
void MultiSim(int dArr[],int op[5][5],int Par[5][5]){
int j,min,q;
int arrSize=5;
for(int d=1;d<arrSize-1;d++){
    for(int i=1;i<arrSize-d;i++){
        min=INT_MAX;
        j=i+d;
        for(int k=i;k<=j-1;k++){
        q=op[i][k]+op[k+1][j]+dArr[i-1]*dArr[k]*dArr[j];
        if(q<min){
            min=q;
            Par[i][j]=k;
        }
        }
    op[i][j]=min;
    }
}
cout<<op[1][4];
}
int main(){
int DimArr[5]={5,4,6,2,7};
int OpMat[5][5]={0};
int ParMat[5][5]={0};
MultiSim(DimArr,OpMat,ParMat);
   
}