// #include<iostream>
// using namespace std;
// void birthday(string name){
//     cout<<"Happy Birthday "<<name<<endl;
// }
// int main(){
//     system("cls");
//     birthday("Shreyas");

// return 0;
// }

#include <iostream>
using namespace std;

void user(string username, string password);
int main()
{
    string username, password;
    system("cls");
    cout << "Enter Your NewUser Name: ";
    getline(cin, username);
    cout << "Enter Your SuperSecret Password: ";
    getline(cin, username);

    user(username, password);
}
void user(string username, string password)
{
    system("cls");
    cout << "User Name : " << username << endl;
    cout << "Password : " << password << endl;
}