// 2-16-26 Chapter 6 Bank Deposit
#include <iostream>
using namespace std;

struct bank_account
{
	int account_number;
	int balance;
};

void deposit_money(bank_account &account_ref, int deposit_amount);

int main()
{
	bank_account account;
	int deposit_amount = 0;

	cout << "====== Bank of America ======" << endl;
	cout << "Enter Account Number: ";
	cin >> account.account_number;

	cout << "Enter Account Balance: ";
	cin >> account.balance;

	cout << "Enter Deposit Amount: ";
	cin >> deposit_amount;

	cout << "Account balance (before functino): " << account.balance << endl;

	deposit_money(account, deposit_amount);

	cout << "Account balance (After function): " << account.balance << endl;

	return 0;
}

void deposit_money(bank_account& account_ref, int deposit_amount)
{
	account_ref.balance = account_ref.balance + deposit_amount;

	cout << "Account balance (ref): " << account_ref.balance << endl;
}