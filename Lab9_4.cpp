#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int age;
    double h;
    long b;
    string name;
    cout<<"Enter your age: ";
    cin>>age;
    
    if(age<=25){
        cout<<"Enter your height: ";
        cin>>h;
        if(h<100){
            name="Chopper";
        }
        else if(h<180&&h>=100){
            name="Usopp";
        }
        else{
            cout<<"Enter your bounty: ";
            cin>>b;
            if(b>1.1*pow(10,9)){
            name="Zoro";
            }
            else{
                name="Sanji";
            }
        }
    }
    else if(age<=60&&age>25){
        cout<<"Enter your bounty: ";
        cin>>b;
        if(b>5*pow(10,8)){
            name="Jinbe";
        }
        else{
            name="Franky";
        }
    }
    else{
        name="Brook";
    }
    cout<<"Your character = "<<name;
  return 0;
}
