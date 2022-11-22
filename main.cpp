// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


void odd_even(int number){
    if(number%2==0){
        cout<<"Its is Even Number ";
        
    }else{
        cout<<"Its is Odd Number ";
    }
}
int main() {
     cout << "Hello, World!"<<endl;
     
    int number;
    cout<<"Enter Number Please :";
    cin>>number;
    odd_even(number);
   

    return 0;
}
