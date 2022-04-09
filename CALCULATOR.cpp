#include<iostream>
#include<cmath>

using namespace std;
void calculator(int choice){
    float a,b,sum,dif,mul,div,per,pow;
    switch (choice){
    case 1:
        system("cls");
        cout<<"ADDITION"<<endl;
        cout<<"Enter Number 1 : ";
        cin>>a;
        cout<<"ENter Number 2 : ";
        cin>>b;
        
        sum = a + b;
        cout<<"Addition : "<<sum<<endl;
        break;
    case 2:
        system("cls");
        cout<<"SUBSTRACTION"<<endl;
        cout<<"Enter Number 1 : ";
        cin>>a;
        cout<<"ENter Number 2 : ";
        cin>>b;

        dif = a - b;
        cout<<"Substraction : "<<dif<<endl;
        break;
    case 3:
        system("cls");
        cout<<"MULTIPLICATION"<<endl;
        cout<<"Enter Number 1 : ";
        cin>>a;
        cout<<"ENter Number 2 : ";
        cin>>b;
        mul = a * b;
        cout<<"Multiplication : "<<mul<<endl;
        break;
    case 4:
        system("cls");
        cout<<"DIVISION"<<endl;
        cout<<"Enter Number 1 : ";
        cin>>a;
        cout<<"ENter Number 2 : ";
        cin>>b;
        sum = a / b;
        cout<<"Division : "<<div<<endl;
        break;
    case 5:
        system("cls");
        cout<<"PERCENTAGE"<<endl;
        cout<<"Enter Number 1 : ";
        cin>>a;
        cout<<"ENter Number 2 : ";
        cin>>b;
        per = (a / b)*100;
        cout<<"Percentage : "<<per<<endl;
        break;
    // case 6:
    //     system("cls");
    //     cout<<"POWER"<<endl;
    //     cout<<"Enter Number 1 : ";
    //     cin>>a;
    //     cout<<"ENter Number 2 : ";
    //     cin>>b;
    //     cout<<"Power : "<<pow(a,b)<<endl;
    //     break;
    
    default:
        cout<<""<<endl;
        break;
    }
}
int main(){
    int choice;
    float c,d;
    system("cls");
    cout<<"\t\t\t=XCalcutor for two numbersX="<<endl;
    cout<<"\t1.Addition\t2.Substraction\t3.Multiply\n\t4.Division\t5.Percentage\t6.power"<<endl;
    cout<<"\n\nselect any choice(1~6): ";
    cin>>choice;

    if(choice == 6){
        system("cls");
        cout<<"POWER"<<endl;
        cout<<"Enter Number 1 :";
        cin>>c;
        cout<<"Enter Number 2 :";
        cin>>d;
        cout<<pow(c,d)<<endl;
    }
    else{
        calculator(choice);
    }
}