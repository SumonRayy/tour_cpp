#include<iostream>
#include<string>
using namespace std;

class tour
{
	string name;
	string password;
		public:
			void login(void)
			{
				cout<<"Enter Username:";
				cin>>name;
				cout<<"\nEnter Password:";
				cin>>password;
			}
			void details(void)
			{
				cout<<"Personal Details of "<<name<<":"<<endl;				
			}
			void goa(void);
			void an_island(void);
			void ne_india(void);
			void delhi(void);
			void jk(void);
			void south_india(void);
			void west_india(void);
};
//=======================================================//
void tour :: goa(void)
{
	int day;
	int sum1=5000,sum2=1500,sum3=6000;
	cout<<"\n\nThis Trip will includes the most Beautiful Beaches , Mountains & Colourfull cities/villages of Goa";
	cout<<"\nEnter the Number of days you wanna stay :";
	cin>>day;
	cout<<"\nHotel Charges :"<<sum1*day;
	cout<<"\nFood Charges :"<<sum2*day;
	cout<<"\nFare Charges :"<<sum3*day;
	cout<<"\nTotal Charges:"<<(sum1+sum2+sum3)*day;
}

void tour :: an_island(void)
{
	int day;
	int sum1=8000,sum2=2500,sum3=10000;
	cout<<"\n\nThis Trip will includes the most Beautiful Beaches , Mountains & Colourfull islands of Andaman & Nicobar";
	cout<<"\nEnter the Number of days you wanna stay :";
	cin>>day;
	cout<<"\nHotel Charges :"<<sum1*day;
	cout<<"\nFood Charges :"<<sum2*day;
	cout<<"\nFare Charges :"<<sum3*2;
	cout<<"\nTotal Charges:"<<(sum1+sum2)*day+(sum3*2);
}

void tour :: ne_india(void)
{
	int day;
	int sum1=2000,sum2=800,sum3=5000;
	cout<<"\n\nThis Trip will includes the most Beautiful Mountains";
	cout<<"\nEnter the Number of days you wanna stay :";
	cin>>day;
	cout<<"\nHotel Charges :"<<sum1*day;
	cout<<"\nFood Charges :"<<sum2*day;
	cout<<"\nFare Charges :"<<sum3*2;
	cout<<"\nTotal Charges:"<<(sum1+sum2)*day+(sum3*2);
}

void tour :: delhi(void)
{
	int day;
	int sum1=2000,sum2=1000,sum3=500;
	cout<<"\n\nThis Trip will includes the most Beautiful Capital of India ";
	cout<<"\nEnter the Number of days you wanna stay :";
	cin>>day;
	cout<<"\nHotel Charges :"<<sum1*day;
	cout<<"\nFood Charges :"<<sum2*day;
	cout<<"\nFare Charges :"<<sum3*2;
	cout<<"\nTotal Charges:"<<(sum1+sum2)*day+(sum3*2);
}

void tour :: jk(void)
{
	int day;
	int sum1=800,sum2=500,sum3=4000;
	cout<<"\n\nThis Trip will includes the most Beautiful icey Mountains of Jammu & Kashmir ";
	cout<<"\nEnter the Number of days you wanna stay :";
	cin>>day;
	cout<<"\nHotel Charges :"<<sum1*day;
	cout<<"\nFood Charges :"<<sum2*day;
	cout<<"\nFare Charges :"<<sum3*2;
	cout<<"\nTotal Charges:"<<(sum1+sum2)*day+(sum3*2);
}

void tour :: south_india(void)
{
	int day;
	int sum1=2000,sum2=1000,sum3=4000;
	cout<<"\n\nThis Trip will includes the most Beautiful Beaches , Mountains & Colourfull Sates of South India ";
	cout<<"\nEnter the Number of days you wanna stay :";
	cin>>day;
	cout<<"\nHotel Charges :"<<sum1*day;
	cout<<"\nFood Charges :"<<sum2*day;
	cout<<"\nFare Charges :"<<sum3*2;
	cout<<"\nTotal Charges:"<<(sum1+sum2)*day+(sum3*2);
}

void tour :: west_india(void)
{
	int day;
	int sum1=8000,sum2=2500,sum3=10000;
	cout<<"\n\nThis Trip will includes the most Beautiful Desserts of India ";
	cout<<"\nEnter the Number of days you wanna stay :";
	cin>>day;
	cout<<"\nHotel Charges :"<<sum1*day;
	cout<<"\nFood Charges :"<<sum2*day;
	cout<<"\nFare Charges :"<<sum3*2;
	cout<<"\nTotal Charges:"<<(sum1+sum2)*day+(sum3*2);
}
//=======================================================//
int main()
{
	tour a;
	int x;
	
	a.login();
	cout<<"Where do you wanna Go?? \nplease select the corresponding number\n";
	cout<<"\n1: Goa";
	cout<<"\n2: Andaman Nicobar islands";
	cout<<"\n3: North East India";
	cout<<"\n4: Delhi";
	cout<<"\n5: Jammu & Kashmir";
	cout<<"\n6: South India";
	cout<<"\n7: West India";
	cout<<"\nEnter Your choice: ";
	cin>>x;
	
	switch(x)
	{
		case 1 : a.goa();break;
		case 2 : a.an_island();break;
		case 3 : a.ne_india();break;
		case 4 : a.delhi();break;
		case 5 : a.jk();break;
		case 6 : a.south_india();break;
		case 7 : a.west_india();break;
		default : cout<<"Error in input ; Try again Later";
	}
	
}
//================================== THE END ====================================//
