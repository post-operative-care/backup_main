#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<string>

using namespace std;
void Start(){
    string detect;
    cout << setw(50) <<"Welcome To Post Operative Care\n";
    cout << setw(47) <<"Press Enter To Contineue\n" ;
    if(getline(cin,detect)){
    }
}

int selectPage(){
    int input;
    cout << "Did You Have An Accout?\n";
    cout << "1 If you have , 2 IF you don't have ,3 If You are Medical Staff\n";
    cout << "Input Your Command Here: ";
    cin >> input;
    return input;
}