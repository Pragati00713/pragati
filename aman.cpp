#include<iostream>
#include<string>
using namespace std;
int main(){
    int p,a;
    cout << "Enter your total number of Days in persent";
    cin >> p;
    cout << "Enter your total number of Days in Adsent";
    cin >> a;
    int totalDays = p+a;
    int percent = totalDays *p /100;

    if(percent >= 75 ){
        cout << "your allowed to sit in exam percent " << percent << "%"; 
    }else{
        cout << "your not allowed to sit in exam percent  " << percent << "%"; 
    }


}