// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


void odd_even(int number){
    if(number%2==0){
        cout<<"It is Even Number ";
        
    }else{
        cout<<"It is Odd Number ";
    }
}

void areYouWithMe(char ch){
	if(ch == 'y' || ch == 'Y'){
		cout<<"\nWelcom bot...\n";
	}
	else{
		while(ch != 'n' || ch != 'N' || ch == 'y' || ch == 'Y'){
			cout<<"\n\nyou can't leave..\n";
			cout<<"\nAgain enter n/y : ";
			cin>>ch;
			areYouWithMe(ch);
			break;
		}
	}
}

void multiplication_Table(int table_number){
    for(int i=1 ; i<11 ; i++)
    {
        cout<<table_number<<"*"<<i<<"= "<<table_number*i<<"\n";
        
    }
}



int main() {    
	
    int table_number;
    cout<<"Enter Table Number : ";
    cin>>table_number;
    cout<<"\n";
    multiplication_Table(table_number);
	
	
    char character;
    cout<<"Enter Character : ";
    cin>>character;
    
        switch(character)
    {
        case 'a':
        
            cout<<"It is Vowel "<<endl;
            break;
            
        
        case 'e':
        
            cout<<"It is Vowel"<<endl;
            break;
            
        
        case 'i':
        
            cout<<"It is Vowel"<<endl;
            break;
            
        
        case 'o':
        
            cout<<"It is Vowel"<<endl;
            break;
            
        
        case 'u':
        
            cout<<"It is Vowel"<<endl;
            break;
            
        default:
            cout<<"It is consonant"<<endl;
            break;
            
    }
   
     
    int number;
    cout<<"Enter Number Please :";
    cin>>number;
    odd_even(number);

	//My work
	char charac;
	cout<<"\nAre you with me : "; cin>>charac;
	
	areYouWithMe(charac);

    return 0;
}
