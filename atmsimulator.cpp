#include <iostream>
using namespace std;

int main() {
    int balance=10000;
    int withdrawamount;
    int depositmoney;
    cout<<"=====ATM SIMULATOR====="<<endl;

    for( ; ; ) {
        cout<<"==========================\nWelcome to C++ ATM SIMULATOR\n==========================\n";
        cout<<"1.CHECK BALANCE\n";
        cout<<"2.DEPOSIT MONEY\n";
        cout<<"3.WITHDRAW MONEY\n";
        cout<<"4.Exit\n";

        int n;
        cout<<"Enter the S.NO of the option you want to check: ";
        cin>>n;

        if(n==1) {
            cout<<"CURRENT BALANCE: "<<balance<<endl;
        }else if(n==2) {
            
            cout<<"ENTER THE AMOUNT TO DEPOSIT: ";
            cin>>depositmoney;
            if(depositmoney>0) {
                balance+=depositmoney;
                cout<<"Deposit Successful!\n";
                cout<<"Updated Balance: "<<balance<<endl;
            }else if(depositmoney<=0) {
                cout<<"Invalid Deposit Amount!\n";
            }
        }else if(n==3) {
            cout<<"Enter amount to withdraw: "<<endl;
            cin>>withdrawamount;

            if(withdrawamount>0 && withdrawamount<=balance) {
                cout<<"Withdrawal Successful!";
                balance-=withdrawamount;
                cout<<"Remaining Balance: "<<balance<<endl;
            }else if(withdrawamount>balance) {
                cout<<"Insufficient Balance!\n";
            }else if(withdrawamount<=0) {
                cout<<"Invalid Withdrawal Amount!\n";
            }
        }else if(n==4) {
            cout<<"Thank you for using C++ ATM.\nHave a Nice Day!\n"; 
            break;
        }else{
            cout<<"Invalid Choice!\nPlease try again.";
        }
    }
    return 0;
}