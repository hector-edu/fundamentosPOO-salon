//clase 11 de mayo de 2015

main(int argc, char const *argv[])
{
	int noaccounts=0;
	while(noaccounts<maxaccounts)
	{
		char transactiontype;
		cout<<"Enter C to continue or X to terminate: ";
		cin>>transactiontype;

		if (transactiontype=='X'||transactiontype=='X')
		{
			break;
		}
		init(accountnumber[noaccounts],balance[noaccounts]);
		process(accountnumber[noaccounts],balance[noaccounts]);
		noaccounts++;
	}

	double total=0;
	cout<<"Acount information:\n";
	for (int i = 0; i < noaccounts; ++i)
	{
		cout<<"Balance for account"
			<<accountnumber[i]
			<<"="
			<<balance[i]
			<<endl;
			total+=balance[i];
	}
	cout<<"Balance for all accounts = "
		<<total
		<<endl;

	getch();
}

void init(unsigned &accountnumber, double &balance)
{
	cout<<"Enter account number: ";
	cin>>accountnumber;
	balance=0.0;
}

void process(unsigned &accountnumber, double &balance)
{
	cout<<"Enter positive number for deposit:\n"
		<<"Negative for withrawal.\n";

	double transaction;
	do
	{
		cout<<" : ";
		cin>>transaction;
		if (transaction>0)
		{
			balance=transaction;
		}
		if (transaction<0)
		{
			transaction=-transaction;
			if (balance<transaction)
			{
				cout<<"Insufficent founds : balance"
					<<balance
					<<" check "
					<<transaction
					<<endl;
			}
			else
			{
				balance-=transaction;
			}
		}
	}while(transaction!=0);
}