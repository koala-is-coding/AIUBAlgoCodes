//ActivitySelectionProblem
#include<iostream>
using namespace std;
struct Activities{
char id;
int sTime;
int eTime;
};
//sorting is done in respect to end times  in ascending order 
void Sort(Activities a[]){
for(int i=0;i<sizeof(a);i++){
   for(int j=i+1;j<6;j++){
   if(a[i].eTime>a[j].eTime){
       /*int temp=a[i].sTime;
       int temp2=a[i].eTime;
       a[i].sTime=a[j].sTime;
       a[j].sTime=temp;
       a[i].eTime=a[j].eTime;
       a[j].eTime=temp2;*/
       swap(a[i],a[j]);
   }
}
}
}
int main(){
Activities a[6];
//a[0]={0,6};
a[0].sTime=0;a[0].eTime=6;a[0].id='a';
a[1].sTime=3;a[1].eTime=4;a[1].id='b';
a[2].sTime=1;a[2].eTime=2;a[2].id='c';
a[3].sTime=5;a[3].eTime=9;a[3].id='d';
a[4].sTime=5;a[4].eTime=7;a[4].id='e';
a[5].sTime=8;a[5].eTime=9;a[5].id='f';
Sort(a);
//the first activity is always selected
cout<<"activity id "<<a[0].id<<" start time::"<<a[0].sTime<<" and finishing time::"<<a[0].eTime<<endl;
int i=0;
for(int j=1;j<6;j++){
   if(a[j].sTime>=a[i].eTime){
   cout<<"activity id "<<a[j].id<<" start time::"<<a[j].sTime<<" and finishing time::"<<a[j].eTime<<endl;
   i=j;
   }
}
}