// constructing stacks
#include <iostream>       // std::cout
#include <iomanip>
using namespace std;

//global variables
double accountBalance = 0.00;

//functions
<<<<<<< HEAD
void deposit(double money){  
    int number;
    accountBalance = accountBalance + money;
    cout << "Transaction Complete! \n\n";

}
void withdraw (double money){
    if(accountBalance < money){
        cout << "Insufficent Funds! Please try again later.";
    } else {
        accountBalance = accountBalance - money;
        cout <<"Transaction Complete! \n\n";
    }
}
void checkBalance() {
    cout << "Your Current Balance: " << fixed << setprecision(2) << "$"<< accountBalance << "\n\n";
}
void exitMessage(){
    cout <<"Goodbye, Have a nice day! \n\n";
=======
void exitMessage() {
    cout<<"Bye! Thank's for visiting Kav's Bank Have a nice day!\n";
    
>>>>>>> master
}
void menu() {

    double moneyIn;
    double moneyOut;
    int number;
<<<<<<< HEAD
    double moneyIn;
    double moneyOut;
    

    cout<<"--------------------------------------------------\n";
    cout<<"Welcome to Kav's Bank How can I help you today? \n";
    
    int i = 0;
    while(i < 1){
        cout<<"----------------------------------------------\n";
        cout <<"Please enter one of the options.\n";
        cout<<"Enter 1: Deposit \n";
        cout<<"Enter 2: Withdraw \n";
        cout<<"Enter 3: Check Balance \n";
        cout<<"Enter 4: Exit \n";
        cout<<"----------------------------------------------\n";
        cin >> number;
        cout<<"\n";

        if(number == 1) {
            cout<<"How much would you like to deposit? \n";
            cin >> moneyIn;
            deposit(moneyIn);
        }
        if(number == 2){
            cout<<"How much would you like to withdraw? \n";
            cin>>moneyOut;
            withdraw(moneyOut);
        }
        if(number == 3) {
            checkBalance();
        }
        if(number == 4) {
            exitMessage();
            i = i + 1;
        }
    }
    
=======

    cout<<"Enter 1: Deposit \n";
    cout<<"Enter 2: Withdraw \n";
    cout<<"Enter 3: Check Balance \n";
    cout<<"Enter 4: Exit \n";
    cin >> number;
    options(number);

    cout<<"\n";
}
void deposit(double money){

    accountBalance = accountBalance - money;
    cout<< "Transaction complete! \n";
    menu();

}
void withdraw (double money){
    if (accountBalance < money) {
        cout << "Transaction failed. Insufficent fund detected, try again later \n";
    } else {
        accountBalance = accountBalance - money;
        cout<< "Transaction complete! \n";
    }
    menu();
}
void checkBalance() {
    cout << "Your Current Balance: " << fixed << setprecision(2) << "$" << accountBalance << "\n";
}
int options(int number) {
    double moneyIn;
    double moneyOut;

    if(number == 1) {
        cout<<"How much would you like to deposit? \n";
        cin >> moneyIn;
        deposit(moneyIn);
    }
    if(number == 2){
        cout<<"How much would you like to withdraw? \n";
        cin >> moneyOut;
        withdraw(moneyOut);
    }
    if(number == 3) {
        checkBalance();
    }
    if(number == 4) {
        exitMessage();
    }
}


//driver code
int main() {

    cout<<"--------------------------------------------------\n";
    cout<<"Welcome to Kav's Bank How can I help you today? \n";
    cout<<"--------------------------------------------------\n";
    menu();

>>>>>>> master
  return 0;
}