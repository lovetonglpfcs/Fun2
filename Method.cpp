#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
void update_balance(char,float,float &balance);

int main()
{
	char command;
	float dollars,balance = 10000.00;
	cout << "Exit With 0" << endl;
	do{
	cout << "Your balance = " << balance << endl;
	cout << "Input command (1 withdraw or 2 deposit) : ";
	cin >> command;
	if (command == '0') {
		cout<<"Exit Program" << endl;
		break;
	}
	cout << "Input amount : ";
	cin >> dollars;
	update_balance(command,dollars,balance);
	cout << endl;
	}while(true);
}

void update_balance(char command,float dollars,float &balance)
{
	if (command == '1'){
		balance = balance - dollars;
	}else if(command == '2'){
		balance = balance + dollars;
	}
}