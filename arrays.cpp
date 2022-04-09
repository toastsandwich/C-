#include<iostream>
using namespace std;
int main(){
    int p,i,luckNums[5];
    system("cls");
    for (i = 0; i < 5; i++){
        cout<<"Enter A Number "<<i+1<<" :";
        cin>>luckNums[i];
    }
    
    system("cls");
    cout<<"Stored Numbers are "<<endl;
    for(i=0;i < 5; i++){
        cout<<"Number "<<i+1<<" :"<<luckNums[i]<<endl;
    }

    cout<<"\n\n\n"<<endl;
    p = luckNums[0];
    for(i = 0; i < 5; i++){
        if(p < luckNums[i]){
            p = luckNums[i];
        }
    }
    cout<<"Max of Given numbers is "<<p<<endl;
return 0;
}
