##include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double ini_loan , int_rate , amount ;
	cout << "Enter initial loan: ";
    cin >> ini_loan;
	cout << "Enter interest rate per year (%): ";
    cin >> int_rate;
	cout << "Enter amount you can pay per year: ";
    cin >> amount;
    

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

    int year = 1;
    double interest;
    double total , new_balance;
    double prev_balance = ini_loan;
    double payment = amount;

    for(int i = 0;prev_balance > 0;i++){
        interest = (int_rate*prev_balance)/100;
        total = prev_balance + interest;

        if(total < payment){
            payment = total;
        }
        new_balance = total - payment;

        cout << setw(13) << left << setprecision (2) << year++;
        cout << setw(13) << left << setprecision (2) << fixed << prev_balance;
        cout << setw(13) << left << setprecision (2) << fixed << interest;
        cout << setw(13) << left << setprecision (2) << fixed << total;
        cout << setw(13) << left << setprecision (2) << fixed << payment;
        cout << setw(13) << left << setprecision (2) << fixed << new_balance << endl;
        prev_balance = new_balance;
        
    }
    return 0;
}            
	
