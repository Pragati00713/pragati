#include <iostream>
using namespace std;
int main()
{
    int pr;
    cout << "Enter your Percentage:- ";
    cin >> pr;
    if (pr <33){
        cout<< "Sorry fail " << pr << "%";
    }else if(pr >=33 && pr < 60){
        cout<< "Good Pass 2nd Division " << pr << "%"; 
    }else{
        cout<< "Very Good Pass 1st Division " << pr << "%\n";  
        if (pr>=75)
        {
            cout<< "Distinction " << pr << "%"; 
        }  
    }
    
}