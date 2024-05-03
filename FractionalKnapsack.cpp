//fractional knapsack
#include<iostream>
using namespace std;

struct items{
    float iWeight;float iProfit;float pBywRatio;
};
void ratioSorting(items item[],int size){
    for(int i=0;i<size;i++){
        item[i].pBywRatio=item[i].iProfit/item[i].iWeight;
    }
//sorting by profit/weight ratio in descending order
//25+7.5=31.5 (max profit)
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
             if(item[i].pBywRatio<item[j].pBywRatio){
                swap(item[i],item[j]);
             }
        }
    }
}
void optimalSol(items item[],int maxW,int size){
    float maxProfit;
for(int i=0;i<size;i++){
    if(maxW>0 && maxW>=item[i].iWeight){
    maxW=maxW-item[i].iWeight;
      maxProfit=maxProfit+item[i].iProfit;
    }else if(maxW>0){
        maxProfit=maxProfit+(item[i].iProfit*(maxW/item[i].iWeight));
       cout<<"maxprofit::"<<maxProfit<<endl;
       break;
    }
}

}

int main(){
    int maxWeight=20;
items item[3];
int Size=sizeof(item)/sizeof(item[0]);
//item[0]={18.0,25.0,0.0};
item[0].iWeight=18.0;item[0].iProfit=25.0;item[0].pBywRatio=0.0;//ratio 1.38
//item[1]={15.0,24.0,0.0};
item[1].iWeight=15.0;item[1].iProfit=24.0;item[1].pBywRatio=0.0;//ratio 1.6
//item[2]={10.0,15.0,0.0};
item[2].iWeight=10.0;item[2].iProfit=15.0;item[2].pBywRatio=0.0;//ratio 1.5
ratioSorting(item,Size);
optimalSol(item,maxWeight,Size);
}