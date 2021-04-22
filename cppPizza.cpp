#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Hello, Welcome to the APP"<<endl;
    cout<<"Please create a new account"<<endl;
    cout<<"Choose a username: "<<endl;
    string user;
    getline(cin,user);
    cout<<"Choose a password: "<<endl;
    string pass;
    getline(cin,pass);

    cout<<"Please enter your information"<<endl;
    cout<<"Username: "<<endl;
    string username;
    getline(cin,username);
    cout<<"Password: "<<endl;
    string password;
    getline(cin,password);

    while(username!=user&&password!=pass){
        cout<<"Wrong username or password, Please try again"<<endl;
        cout<<"Username: "<<endl;
        getline(cin,username);
        cout<<"Password: "<<endl;
        getline(cin,password);
    }

    cout<<"Welcome to the pizza app!"<<endl;
    double balance=5.00;
    cout<<"Would you like to add money to your balance?"<<endl;
    string q1;
    getline(cin,q1);
    if(q1=="yes"){
        cout<<"Enter how much money you want to add: "<<endl;
        double add;
        cin>>add;
        cout<<"Your new balance is: "<<balance+add<<" dollars"<<endl;
    }
    else{
        cout<<"Alright"<<endl;
    }
    cout<<"Would you like a pizza today?"<<endl;
    string q2;
    getline(cin,q2);

    if(q2=="yes"){
        cout<<"Please select what pizza you want "<<endl;
        string pizzatype[]={"chicken pizza","cheese pizza","peperoni pizza"};
        double pizzaprices[]={3.00,4.00,5.00};
        cout<<"1.   "<<pizzatype[0]<<"--"<<setw(4)<<pizzaprices[0]<<" dollars"<<endl;   
        cout<<"2.   "<<pizzatype[1]<<"--"<<setw(5)<<pizzaprices[1]<<" dollars"<<endl;
        cout<<"3.   "<<pizzatype[2]<<"--"<<setw(3)<<pizzaprices[2]<<" dollars"<<endl;
        cout<<"Your choice: "<<endl;
        int q3;
        cin >>q3;

        while(q3>3||q3<1){
            cout<<"This is not a valid input, please try again "<<endl;
            cin>>q3;
        }
        if(q3==1){
            cout<<"You have ordered a "<<pizzatype[0]<<endl;
            cout<<"The total of your order is "<<pizzaprices[0]<<" dollars"<<endl;
            cout<<"You have "<<balance-pizzaprices[0]<<" dollars left on your balance"<<endl;
        }
        else if(q3==2){
            cout<<"You have ordered a "<<pizzatype[1]<<endl;
            cout<<"The total of your order is "<<pizzaprices[1]<<" dollars"<<endl;
            cout<<"You have "<<balance-pizzaprices[1]<<" dollars left on your balance"<<endl;
        }
        else if(q3==3){
            cout<<"You have ordered a "<<pizzatype[2]<<endl;
            cout<<"The total of your order is "<<pizzaprices[2]<<" dollars"<<endl;
            cout<<"You have "<<balance-pizzaprices[2]<<" dollars left on your balance"<<endl;
        }
    }
    else{
        cout<<"Alright have a good day"<<endl;

    }
    return 0;
}