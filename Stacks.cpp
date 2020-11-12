// constructing stacks
#include <iostream>       // std::cout
#include <iomanip>
using namespace std;

//global variables
double accountBalance = 0.00;

//functions
void deposit(double a){  

}
void withdraw (){

}
void checkBalance() {
    cout << "Your Current Balance: " << fixed << setprecision(2) << accountBalance << "\n";
}

//driver code
int main() {
    int number;
    double money;

    cout<<"--------------------------------------------------\n";
    cout<<"Welcome to Kav's Bank How can I help you today? \n";
    cout<<"--------------------------------------------------\n";
    cout<<"Enter 1: Deposit \n";
    cout<<"Enter 2: Withdraw \n";
    cout<<"Enter 3: Check Balance \n";
    cin >> number;

    cout<<"\n";

    if(number == 1) {
        cout<<"How much would you like to deposit? \n";
        cin >> money;
        
        deposit(money);
    }
    if(number == 3) {
        checkBalance();
    }

  return 0;
}