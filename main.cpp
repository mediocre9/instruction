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
    
     char character;
    cout<<"Enter Character : ";
    cin>>character;
    
        switch(character)
    {
        case 'a':
        
            cout<<"Its is Vowel "<<endl;
            break;
            
        
        case 'e':
        
            cout<<"Its is Vowel"<<endl;
            break;
            
        
        case 'i':
        
            cout<<"Its is Vowel"<<endl;
            break;
            
        
        case 'o':
        
            cout<<"Its is Vowel"<<endl;
            break;
            
        
        case 'u':
        
            cout<<"Its is Vowel"<<endl;
            break;
            
        default:
            cout<<"Its is consonant"<<endl;
            break;
            
            
        
    }
   
     
    int number;
    cout<<"Enter Number Please :";
    cin>>number;
    odd_even(number);
   

    return 0;
}
