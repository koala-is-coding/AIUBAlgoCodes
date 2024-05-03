//Counting Money problem
#include<iostream>
using namespace std;
int main(){
    int coinNum=0;
    int amount=0;int answer=0;
    cout<<"Enter number of coins::"<<endl;
    cin>>coinNum;
        int coinArr[coinNum];
    cout<<"Enter coin denominators::"<<endl;
    for(int i=0;i<coinNum;i++){
        cin>>coinArr[i];
    }
    //sorting
    for(int i=0;i<coinNum;i++){
        for(int j=i+1;j<coinNum;j++){
            if(coinArr[i]<coinArr[j]){
                swap(coinArr[i],coinArr[j]);
            }
        }
    }
    cout<<"Enter amount::"<<endl;cin>>amount;
    for(int i=0;i<coinNum;i++){
        answer=answer+amount/coinArr[i];
        amount=amount-(amount/coinArr[i]*coinArr[i]);
        
    }
    cout<<"Coins needed::"<<answer<<endl;
}
