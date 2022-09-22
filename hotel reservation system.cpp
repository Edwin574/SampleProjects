#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	cout<<"================================================================================="<<endl;
	cout<<"                         DEE'S FRIENDSHIP INN                                         "<<endl;
	cout<<"================================================================================="<<endl;
	int option1, option2;
	int total=0;
	char ask;
	cout<<"Would you like any of our services?(y/n)"; 
    cin>>ask;
	retry:
	if(ask=='y'){
	cout<<"\n*******FRIENDSHIP INN*****\n";
	cout<<"1.Room Booking\n2.Swimming\n3.Restaurant\n4.Bar\n5.Massage\n\n";
	cout<<"What would you like today?";cin>>option1;
		if (option1==1){
		cout<<"\nThe following rooms are available\n\n";
		cout<<"1.Single Room(One bed)\n2.Twin Room(Two beds)\n3.Mini Suite(A bed and a sitting area)\n4.Master Suite(A living room with a bedroom)\n\n";
		int nights;
		int price[4]={800, 1200, 2500, 5000};
		cout<<"\nEnter what you would like:"; cin>> option2;
		switch(option2){
			case 1:
				cout<<"Enter how many nights:"; cin>>nights;
				total+=price[0]*nights;
				cout<<"Do you want to buy anything else?(y/n) ";cin>>ask;
				if (ask=='y'){
					system("cls");
					goto retry;
				}else{
					goto end;
				
			}case 2:
				cout<<"Enter how many nights:"; cin>>nights;
				total+=price[1]*nights;
				cout<<"Do you want to buy anything else?(y/n) ";cin>>ask;
				if (ask=='y'){
					system("cls");
					goto retry;
				}else{
					goto end;
				}case 3:
				cout<<"Enter how many nights:"; cin>>nights;
				total+=price[2]*nights;
				cout<<"Do you want to buy anything else?(y/n) ";cin>>ask;
				if (ask=='y'){
					system("cls");
					goto retry;
				}else{
					goto end;}case 4:
				cout<<"Enter how many nights:"; cin>>nights;
				total+=price[3]*nights;
				cout<<"Do you want to buy anything else?(y/n) ";cin>>ask;
				if (ask=='y'){
					system("cls");
					goto retry;
				}else{
					goto end;
}
}
}else if(option1==2){
	cout<<"\nThe following are available\n\n";
	cout<<"1.Adults @kshs.1000\n2.Kids @kshs.500\n\n";
	int people;
	int price[2]={1000, 500};
	cout<<"\nEnter what you would like:"; cin>> option2;
	switch(option2){
			case 1:
				cout<<"Enter how many people:"; cin>>people;
				total+=price[0]*people;
				cout<<"Do you want to buy anything else?(y/n) ";cin>>ask;
				if (ask=='y'){
					system("cls");
					goto retry;
				}else{
					goto end;
			}case 2:
				cout<<"Enter how many people:"; cin>>people;
				total+=price[1]*people;
				cout<<"Do you want to buy anything else?(y/n) ";cin>>ask;
				if (ask=='y'){
					system("cls");
					goto retry;
				}else{
					goto end;
			}
}
}
}else if(option1==3){
		cout<<"\nWe offer the following dishes\n\n";
		cout<<"1.Coffee, Bread, Bacon\n2.Coffee, Bread, Omelete\n3.Juice, Chicken, Fries\n4.Juice, Pancake, Syrup\n5.Coffee, Bread, Sausage, egg\n6.Ugali, vegetables, meat\n7.Ugali, vegetables, fish\n8.Ugali, vegetables, chicken\n9.Biryani, vegetables\n10.Rice, Chappati, Meat/veggetables\n\n";
		int dishes;
		int price[10]={500, 400, 750, 550, 690, 850, 1200, 900, 750, 500};
		cout<<"\nEnter what you would like:"; cin>> option2;
	    switch(option2){
			case 1:
				cout<<"Enter how dishes:"; cin>>dishes;
				total+=price[0]*dishes;
				cout<<"Do you want to buy anything else?(y/n) ";cin>>ask;
				if (ask=='y'){
					system("cls");
					goto retry;
				}else{
					goto end;
	}case 2:
				cout<<"Enter how dishes:"; cin>>dishes;
				total+=price[1]*dishes;
				cout<<"Do you want to buy anything else?(y/n) ";cin>>ask;
				if (ask=='y'){
					system("cls");
					goto retry;
				}else{
					goto end;
	}
	case 3:
				cout<<"Enter how dishes:"; cin>>dishes;
				total+=price[2]*dishes;
				cout<<"Do you want to buy anything else?(y/n) ";cin>>ask;
				if (ask=='y'){
					system("cls");
					goto retry;
				}else{
					goto end;
	}
	case 4:
				cout<<"Enter how dishes:"; cin>>dishes;
				total+=price[3]*dishes;
				cout<<"Do you want to buy anything else?(y/n) ";cin>>ask;
				if (ask=='y'){
					system("cls");
					goto retry;
				}else{
					goto end;
	}
	case 5:
				cout<<"Enter how dishes:"; cin>>dishes;
				total+=price[4]*dishes;
				cout<<"Do you want to buy anything else?(y/n) ";cin>>ask;
				if (ask=='y'){
					system("cls");
					goto retry;
				}else{
					goto end;
	}
	case 6:
				cout<<"Enter how dishes:"; cin>>dishes;
				total+=price[5]*dishes;
				cout<<"Do you want to buy anything else?(y/n) ";cin>>ask;
				if (ask=='y'){
					system("cls");
					goto retry;
				}else{
					goto end;
	}
	case 7:
				cout<<"Enter how dishes:"; cin>>dishes;
				total+=price[6]*dishes;
				cout<<"Do you want to buy anything else?(y/n) ";cin>>ask;
				if (ask=='y'){
					system("cls");
					goto retry;
				}else{
					goto end;
	}
	case 8:
				cout<<"Enter how dishes:"; cin>>dishes;
				total+=price[7]*dishes;
				cout<<"Do you want to buy anything else?(y/n) ";cin>>ask;
				if (ask=='y'){
					system("cls");
					goto retry;
				}else{
					goto end;
	}
	case 9:
				cout<<"Enter how dishes:"; cin>>dishes;
				total+=price[8]*dishes;
				cout<<"Do you want to buy anything else?(y/n) ";cin>>ask;
				if (ask=='y'){
					system("cls");
					goto retry;
				}else{
					goto end;
	}
	case 10:
				cout<<"Enter how dishes:"; cin>>dishes;
				total+=price[9]*dishes;
				cout<<"Do you want to buy anything else?(y/n) ";cin>>ask;
				if (ask=='y'){
					system("cls");
					goto retry;
				}else{
					goto end;
  }
  }
}else if(option1==4){
			cout<<"\nBest Offers on Mzinga -_<\n\n";
			cout<<"1.Chrome--750\n2.General Meakins--1700\n3.Gilbeys--1500\n4.Johnnie Walker--800\n\n";
			int bottles;
			int price[4]={750, 1700, 1500, 800};
			cout<<"\nEnter what you would like:"; cin>> option2;
			switch(option2){
			case 1:
				cout<<"Enter how many bottles:"; cin>>bottles;
				total+=price[0]*bottles;
				cout<<"Do you want to buy anything else?(y/n) ";cin>>ask;
				if (ask=='y'){
					system("cls");
					goto retry;
				}else{
					goto end;
			}
				case 2:
				cout<<"Enter how many bottles:"; cin>>bottles;
				total+=price[1]*bottles;
				cout<<"Do you want to buy anything else?(y/n) ";cin>>ask;
				if (ask=='y'){
					system("cls");
					goto retry;
				}else{
					goto end;
			}
				case 3:
				cout<<"Enter how many bottles:"; cin>>bottles;
				total+=price[2]*bottles;
				cout<<"Do you want to buy anything else?(y/n) ";cin>>ask;
				if (ask=='y'){
					system("cls");
					goto retry;
				}else{
					goto end;
			}
				case 4:
				cout<<"Enter how many bottles:"; cin>>bottles;
				total+=price[3]*bottles;
				cout<<"Do you want to buy anything else?(y/n) ";cin>>ask;
				if (ask=='y'){
					system("cls");
					goto retry;
				}else{
					goto end;
			}
		}
		}else if(option1==5){
		cout<<"\nWelcome to our massage parlour\n";
		cout<<"Services of the day are\n";
		cout<<"1.Couple's Massage\n2.Individual Massage\n\n";
		int customers;
		int price[2]={3000, 5000};
		cout<<"\nEnter what you would like:"; cin>> option2;
		switch(option2){
			case 1:
				cout<<"Enter how many people:"; cin>>customers;
				total+=price[0]*customers;
				cout<<"Do you want to buy anything else?(y/n) ";cin>>ask;
				if (ask=='y'){
					system("cls");
					goto retry;
				}else{
					goto end;
	}
	case 2:
		cout<<"Enter how many couples:"; cin>>customers;
		total+=price[1]*customers;
		cout<<"Do you want to buy anything else?(y/n) ";cin>>ask;
	if (ask=='y'){
		system("cls");
		goto retry;
	}else{
	goto end;
				}
			}
  }end:
		cout<<"Total Money Used= Kshs."<<total;
}
/* Edwin codes -Hotel reservation system project in c++*/