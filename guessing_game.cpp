#include<iostream>
using namespace std;
int main(){
    string key ="supersecret";
    string guess;
    int i = 0;
    system("cls");
    while(key!=guess && i < 3){
        cout<<"Enter Key : ";
        cin>>guess;
        i++;
        cout<<"Tries : "<<3-i<<endl;
    }
    system("cls");
    if(guess==key){
        cout<<"Opening....";
    }
    else{
        cout<<"Shutting Down .....";
    }
    return 0;
}