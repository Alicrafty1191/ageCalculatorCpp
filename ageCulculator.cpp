#include<iostream>
using namespace std;

int main(){

    cout << "\n================================";
    cout << "\n== Age Calculator Application ==";
    cout << "\n================================\n";
    
    int year_now, year_born;
    cout<<"Enter NOW year: ";
    cin>>year_now;

    cout<<"Enter BORN year: ";
    cin>>year_born;


    const int age = year_now - year_born;
    cout<<"Your Age is "<< age << endl;

    if(age < 18){
        cout<<"You Need "<<18-age<<" year To Be 18y\n\n";
    }

    cout<<"You Lifed "<< age * 12 << " Months\n";
    cout<<"You Lifed "<< age * 365 << " Days\n";
    cout<<"You Lifed "<< (age * 365) * 24 << " Hours\n";
    cout<<"You Lifed "<< ((age * 365) * 24) * 60 << " Minutes\n";
    cout<<"You Lifed "<< (((age * 365) * 24) * 60) * 60 << " Seconds\n";
    return 0;
}
