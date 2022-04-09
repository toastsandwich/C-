#include<iostream>

using namespace std;
int main(){
    system("cls");
    string phrase = "Hello World";
    int n = phrase.length();
    cout<<phrase<<endl;
    cout<<phrase.length()<<endl;
    cout<<phrase[1]<<"\n"<<endl;
    phrase[0]='B';
    cout<<phrase<<"\n"<<endl;
    cout<<phrase.find("World",0);
    cout<<phrase.substr(6,5);
    
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<phrase[i]<<endl;
    // }
    
    return 0;
}