#include <iostream>
using namespace std;

int main()
{
    float grade;
    string name;
    
    cout<<"Input Name: ";
    cin>>name;
    cout<<"Input grade: ";
    cin>>grade;
    
    if(grade >=75 && grade <= 100){
        cout<<"Hello "<<name<<" your grade is "<<grade;
        cout<<"\nYou are passed.";
    }
    else if(grade >= 50 && grade <= 74){
        cout<<"Hello "<<name<<" your grade is "<<grade;
        cout<<"\nYou are failed.";
    }
    else{
        cout<<"Invalid input.";
    }

    return 0;
}