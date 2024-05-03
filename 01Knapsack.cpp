//01 knapsack
#include<iostream>
using namespace std;
void Knappy(int profit[],int weight[],int MaxW){
    //int n=sizeof(profit)/sizeof(profit[0]);cout<<n;
    

    //table arr
    int DP[5][MaxW+1];
    for(int i=0;i<=4;i++){
        for(int j=0;j<=MaxW;j++){
           if(i==0 || j==0){
            DP[i][j]=0;
           }else if(weight[i-1]<=j){
            DP[i][j]=max(DP[i-1][j],DP[i-1][j-weight[i-1]]+profit[i-1]);
           }else{
            DP[i][j]=DP[i-1][j];
           }
        }
    }
    cout<<"maximum profit::"<<DP[4][MaxW];
}
int main(){
    int profit[]={1,2,5,6};
    int weight[]={2,3,4,5};
    int MaxW=8;
    Knappy(profit,weight,MaxW);
}