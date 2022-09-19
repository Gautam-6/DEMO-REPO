#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void  mainMenu();

class Management 
{
     public:
        Management()
	 {
	 	mainMENU();
	 }
};
class Details
{
	public:
		static string name, gender;
		int phoneNo;
		int Age;
		string add;
		static int cID;
		
		void information
		{
			cout<<"\nEnter the Customer ID: ";
			cin>>cID;
			cout<<"\nEnter the Name : ";
			cin>>name;
			cout<<"\nEnter your Age   : ";
			cin>>Age;
			cout<<"\nAddress :";
			cin>>add;
			cout<<"\n Gender  :";
			cin>>gender;
			cout<<"Your details are saved with us \n"<<endl;
		};
};
int Details::cID;
string Details::name;
string Details::gender;

class registration
{
	public:
		static int choice;
		int choice1;
		int back;
		static float charges;
		
		void flights()
		{
			string flightN[]= ("Dubai","Canada","UK","USA","Australia","Europe\n");
				for(int a=0;a<6;a++);
			{
				cout<<(a+1);".flight to"<<flight[a]<<endl;
			}
			cout<<"\nWelcome to VISTARA AIRLINES!"<<endl;
			cout<<"Press the number of the country of which you wwant to book a flight:  ";
			cin>>choice;
			
			switch(choice)
			{
				case  1:
					{
						cout<<"____________________WELCOME TO DUBAI EMIRATES__________________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjor the journey!"<<endl;
						
						cout<<"1.DUB - 498"<<endl;
						cout<<"\t08-01-2022 8.00AM  10hrs  Rs. 14000"<<endl;
						cout<<"1.DUB - 500"<<endl;
						cout<<"\t16-01-2022 8.00AM  12hrs  Rs. 15000"<<endl;
						cout<<"1.DUB - 496"<<endl;
						cout<<"\t24-01-2022 8.00AM  8hrs  Rs. 19000"<<endl;
						
						
						cout<<"\nSelect the Flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges =  14000;
							cout<<"\nYou have successfully booked the flight DUB - 498"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else if(choice1==2)
						{
							charges=  15000;
							cout<<"\nYou have successfully booked the flight DUB - 500"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else  if (choice1==3)
						{
							charges=  19000;
							cout<<"\nYou have successfully booked the flight DUB - 496"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input,shifting to the previous menu"<<endl;
							flights();
						}
						cout<<"Press any key to go back to the main menu"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
						}
						else
						{
							mainMenu();
						}
					}
					
					case 2:
						{
							cout<<"____________________WELCOME TO CANADIAN AIRLINES__________________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjor the journey!"<<endl;
						
						cout<<"1.CAN - 498"<<endl;
						cout<<"\t08-01-2022 8.00AM  10hrs  Rs. 14000"<<endl;
						cout<<"1.CAN - 500"<<endl;
						cout<<"\t16-01-2022 8.00AM  12hrs  Rs. 15000"<<endl;
						cout<<"1.CAN - 496"<<endl;
						cout<<"\t24-01-2022 8.00AM  8hrs  Rs. 19000"<<endl;
						
						
						cout<<"\nSelect the Flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges=  14000;
							cout<<"\nYou have successfully booked the flight CAN - 498"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else if(choice1==2)
						{
							charges= 15000;
							cout<<"\nYou have successfully booked the flight CAN - 500"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else  if (choice1==3)
						{
							charges= 19000;
							cout<<"\nYou have successfully booked the flight CAN - 496"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input,shifting to the previous menu"<<endl;
							flights();
						}
						cout<<"Press any key to go back to the main menu"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
						}
						else
						{
							mainMenu();
						}	
						}
			case 3:
					{
							cout<<"____________________WELCOME TO UK AIRWAYS__________________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjor the journey!"<<endl;
						
						cout<<"1.UK - 498"<<endl;
						cout<<"\t08-01-2022 8.00AM  10hrs  Rs. 14000"<<endl;
						cout<<"1.UK - 500"<<endl;
						cout<<"\t16-01-2022 8.00AM  12hrs  Rs. 15000"<<endl;
						cout<<"1.UK - 496"<<endl;
						cout<<"\t24-01-2022 8.00AM  8hrs  Rs. 19000"<<endl;
						
						
						cout<<"\nSelect the Flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges= 14000;
							cout<<"\nYou have successfully booked the flight UK - 498"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else if(choice1==2)
						{
							charges= 15000;
							cout<<"\nYou have successfully booked the flight UK - 500"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else  if (choice1==3)
						{
							charges= 19000;
							cout<<"\nYou have successfully booked the flight UK - 496"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input,shifting to the previous menu"<<endl;
							flights();
						}
						cout<<"Press any key to go back to the main menu"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
						}
						else
						{
							mainMenu();
						}
					}
					case 4:
						{
								cout<<"____________________WELCOME TO US AIRWAYS__________________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjor the journey!"<<endl;
						
						cout<<"1.USA - 498"<<endl;
						cout<<"\t08-08-2022 8.00AM  10hrs  Rs. 14000"<<endl;
						cout<<"1.USA - 500"<<endl;
						cout<<"\t16-06-2022 8.00AM  12hrs  Rs. 15000"<<endl;
						cout<<"1.USA - 496"<<endl;
						cout<<"\t24-04-2022 8.00AM  8hrs  Rs. 19000"<<endl;
						
						
						cout<<"\nSelect the Flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges= 14000;
							cout<<"\nYou have successfully booked the flight USA - 498"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else if(choice1==2)
						{
							charges= 15000;
							cout<<"\nYou have successfully booked the flight USA - 500"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else  if (choice1==3)
						{
							charges= 19000;
							cout<<"\nYou have successfully booked the flight USA - 496"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input,shifting to the previous menu"<<endl;
							flights();
						}
						cout<<"Press any key to go back to the main menu"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
						}
						else
						{
							mainMenu();
						}
						}
						case 5:
							{
									cout<<"____________________WELCOME TO AUSTRIALIANS AIRLINE__________________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjor the journey!"<<endl;
						
						cout<<"1.AUS - 498"<<endl;
						cout<<"\t08-01-2022 12.00AM  14Hrs  Rs. 14000"<<endl;
						cout<<"1.AUS - 500"<<endl;
						cout<<"\t16-01-2022 16.00AM  12hrs  Rs. 15000"<<endl;
						cout<<"1.AUS - 496"<<endl;
						cout<<"\t24-01-2022 23.00AM  8hrs  Rs. 19000"<<endl;
						
						
						cout<<"\nSelect the Flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges= 14000;
							cout<<"\nYou have successfully booked the flight AUS - 498"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else if(choice1==2)
						{
							charges= 15000;
							cout<<"\nYou have successfully booked the flight AUS - 500"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else  if (choice1==3)
						{
							charges= 19000;
							cout<<"\nYou have successfully booked the flight AUS - 496"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input,shifting to the previous menu"<<endl;
							flights();
						}
						cout<<"Press any key to go back to the main menu"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
						}
						else
						{
							mainMenu();
						}
							}
					case 6:
						{
								cout<<"____________________WELCOME TO EUROPIAN AIRWAYS__________________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjor the journey!"<<endl;
						
						cout<<"1.EUR - 498"<<endl;
						cout<<"\t08-01-2022 8.00AM  10hrs  Rs. 14000"<<endl;
						cout<<"1.EUR - 500"<<endl;
						cout<<"\t16-01-2022 8.00AM  12hrs  Rs. 15000"<<endl;
						cout<<"1.EUR - 496"<<endl;
						cout<<"\t24-01-2022 8.00AM  8hrs  Rs. 19000"<<endl;
						
						
						cout<<"\nSelect the Flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges= 14000;
							cout<<"\nYou have successfully booked the flight EUR - 498"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else if(choice1==2)
						{
							charges= 15000;
							cout<<"\nYou have successfully booked the flight EUR - 500"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else  if (choice1==3)
						{
							charges= 19000;
							cout<<"\nYou have successfully booked the flight EUR - 496"<<endl;
							cout<<"You can go back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input,shifting to the previous menu"<<endl;
							flights();
						}
						cout<<"Press any key to go back to the main menu"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
						}
						else
						{
							mainMenu();
						}
						}
						default :
							{
								cout<<"Invalid input,Shifting to the main menu !"<<endl;
								mainMenu();
								break;
							}
			}
		}		
};

float registration::charges;
int registration::choice;

class ticket :  public registration, Details 
{
	public:
		
		void Bill()
		{
			string destination="";
			ofstream outf("record.txt");
			{
				outf<<"____________VISTARA AIRLINE___________"<<endl;
				outf<<"_______________TICKET_________________"<<endl;
				outf<<"_______________________________________"<<endl;
				
				outf<<"Customer ID:"<<Details::cID<<endl;
				outf<<"Customer Name:"<<Details::name<<endl;
				outf<<"Customer Gender:"<<Details::gender<<endl;
				outf<<"\tDescription"<<endl<<endl;
				
				if(registration::choice==1)
				{
					destination="Dubai";
				}
				else if(registration::choice==2)
		    	{
					destination="Canada";
				}
					else if(registration::choice==3)
		    	{
					destination="UK";
				}
					else if(registration::choice==4)
		    	{
					destination="USA";
				}
					else if(registration::choice==5)
		    	{
					destination="Australia";
				}
					else if(registration::choice==6)
		    	{
					destination="Europe";
				}
				outf<<"Destination\t\t"<<destination<<endl;
				outf<<"Flight cost: \t\t"<<registration::charges<<endl;
				}
				outf.close();
			}
			void dispBill()
			{
				ifstream ifs("record.txt");
				{
					if(!ifs)
					{
					cout<<"File error!"<<endl;
				}
				while(!ifs.eof())
				{
					ifs.getline(arr.100);
					cout<<arr<<endl;
             }
			}
			ifs.close();
		}
				
};

void mainMenu
{
	int lchoice;
	int schoice;
	int back;
	
	cout<<"\t           VISTARA AIRLINES \n"<<endl;
	cout<<"\t______________MAIN MENU______________"<<endl;
	
	cout<<"\t_____________________________________"<<endl;
	cout<<"\t|\t\t\t\t\t\t|"<<endl;
	cout<<"\t|\t PRESS 1 to add the Customer Details  \t|"<<endl;
	cout<<"\t|\t PRESS 2  for Flight Registration  \t|"<<endl;
	cout<<"\t|\t PRESS 3 for Flight Ticket and Charges \t|"<<endl;
	cout<<"\t|\t PRESS 4 to Exit \t|"<<endl; 
    cout<<"\t|\t\t\t\t\t\t|"<<endl;
cout<<"\t_____________________________________________________"<<endl;
	 
	cout<<"Enter the Choice : ";
	cin>>lchoice;

	
	Details d;
	registration r;
	ticket t;
}
	
	switch(lchoice)
	{
		 case 1:
		 	{
		 		cout<<"____________Customers___________\n"<<endl;
		 		d.information()
		 		cout<<"Press any key to go back to the Main Menu";
		 		cin>>back;
		 		
		 		if(back==1)
		 		{
		 			mainMenu();
		         }
		         else
		         {
		         	mainMenu();
				 }
		 		  break;
			 }
			 
			 case 2:
			 {
			 	cout<<"________Book a Flight using this system________\n"<<endl;
			 	r.flight();
			 	break;
			 }
			 
			 case 3:
			 cout<<"______Get YOUR TICKET______\n"<<endl;
			 cout<<"Press 1 to display your ticket";
			 
			 cin>>back
			       if (back==1)
			         {
			 	        t.display();
			 	         cout<<"Press any key to go back to Main Menu:";
			 	         cin>>back
			 	         if(back==1)
			 	         {
			 	         	 mainMenu(); 
						  }
						  else
						  {
						  	mainMenu();
						  }
						  break;
			 	
				     } 	
		case 4:
		    {
		    	cout<<"\n\n\t__________THANK YOU__________"<<endl;
		    	break;
			 }
			 
			 Default  :
			 {
			 	   cout<<"Invalid input,Please try Again!\n"<<endl;
			 	   mainMenu();
			 	   break;
			 }	 
	}
	
	
}






int main()
{
	Management Mobj;
	return 0;
}

