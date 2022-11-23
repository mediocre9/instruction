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

void multiplication_Table(int table_number){
    for(int i=1 ; i<11 ; i++)
    {
        cout<<table_number<<"*"<<i<<"= "<<table_number*i<<"\n";
        
    }
}



int main() {
     cout << "Hello, World!"<<endl;
    
    int table_number;
        cout<<"Enter Table Number : ";
        cin>>table_number;
        cout<<"\n";
        multiplication_Table(table_number);
     
    int number;
       cout<<"Enter Number Please :";
       cin>>number;
       odd_even(number);
   

    return 0;
}
