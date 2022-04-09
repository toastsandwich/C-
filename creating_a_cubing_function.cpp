#include <iostream>
using namespace std;
double cubethatbitch(double num){
    double result = num * num * num;
    return result;
}
int main(){
    system("cls");
    double num;
    cout<<"Enter The Number You Want The Cube For : ";
    cin>>num;
    //double answer = cubethatbitch(num);
    //cout<<"Answer is : "<<answer<<endl;
    cout<<"Answer is : "<<cubethatbitch(num)<<endl;
}