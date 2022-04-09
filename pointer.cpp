#include<iostream>
using namespace std;
int main(){
    int age = 19;
    double gpa = 9.87;
    string name = "Shreyas Mali";
    int *pAge = &age;                                      // for pointer variable use *
    double *pgpa = &gpa;
    string *pname = &name;
    system("cls");
    cout<<"Memory Address of age is : "<<&age<<endl;
    cout<<"Memory Address of gpa is : "<<&gpa<<endl;
    cout<<"Memory Address of name is : "<<&name<<endl;     //& for accessing pointer
    cout<<"\n\n";
    cout<<"Memory Address of age is : "<<pAge<<endl;
    cout<<"Memory Address of gpa is : "<<pgpa<<endl;
    cout<<"Memory Address of name is : "<<pname<<endl;

    cout<<"\n\n";
    cout<<"Memory Address of age is : "<<*pAge<<endl;       //* used to dereference 
    cout<<"Memory Address of gpa is : "<<*pgpa<<endl;
    cout<<"Memory Address of name is : "<<*pname<<endl;

    
}