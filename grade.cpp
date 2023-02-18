#include <iostream>
using namespace std;
int main()
{
    int s1,s2,s3,s4,s5;

    cout <<"Enter your subject 1 :- ";
    cin >> s1;
    cout <<"Enter your subject 2 :- ";
    cin >> s2;
    cout <<"Enter your subject 3 :- ";
    cin >> s3;
    cout <<"Enter your subject 4 :- ";
    cin >> s4;
    cout <<"Enter your subject 5 :- ";
    cin >> s5;
    int subTotal = s1+s2+s3+s4+s5;
    int pr = 100*subTotal/500;
    
    // cout <<pr<<"%";

    if(pr>=60){
       cout <<"Grade A "<<pr<<"%"; 
    }else if(pr >= 50){
         cout <<"Grade B "<<pr<<"%"; 
    }else if(pr >= 40){
         cout <<"Grade C "<<pr<<"%";
    }else{
         cout <<"Grade D "<<pr<<"%";
    }
    

    
}