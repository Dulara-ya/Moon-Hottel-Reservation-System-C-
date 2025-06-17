#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;
class Room{
        	public:
        		int ID;
        		string funtion;
        		string topic1;
        		string topic2;
        		string topic3;
        		string cur;
        		int price;
        		void menu();
		};
	
int main() {
        int RoomID[10];
        int menu[10];
        string BookingID[10];
        string customerName[20];
        string checkInDate[10];
        string checkOutDate[10];
        int RoomPrice[1000];
        string UserName[10];
        string UserPassword[10];
		{
        int INP3; //first input for Login
        cout << "\n __________________________________________________________ ";
        cout << "\n|                                                          |";
        cout << "\n|                        Welcome                           |";
        cout << "\n|                                                          |";
        cout << "\n|                      Moon Hotel                          |";
        cout << "\n|__________________________________________________________|";
        cout << "\n|                                                          |";
        cout << "\n|                 |*****************|                      |";
        cout << "\n|                 |      Login      |                      |";
        cout << "\n|                 |     Enter ID    |                      |";
        cout << "\n|                 |                 |                      |";
        cout << "\n|                  *****************                       |";
        cout << "\n|__________________________________________________________|";
        cout << "\n                                                            "<<endl;
        cout << "Enter ID.......... : ";
        cin  >> INP3;
        cout << "\n                                                            "<<endl;
        cout << "\n                                                            "<<endl;
        cout << " ||||||||||||||||||   Success Login...!   ||||||||||||||||||||"<<endl;
        cout << "\n                                                            "<<endl;
        cout << "\n                                                            "<<endl;
        if(INP3==2024)
            {
			
			    string defaultAdminName = "admin";
                        string defaultAdminPassword = "admin";
                        string AdminName;
                        string AdminPassword;
                        cout << "\n ________________________________________________________________________";
                        cout << "\n|                                                                        |";
                        cout << "\n|                            Admin LOGIN                                 |";
                        cout << "\n|________________________________________________________________________|";
                        cout << "\n                                                                          "<<endl;
                        cout <<"Enter Admin Name : ";
                        cin >> AdminName;
                        cout <<"\n                                                                           ";
                        cout <<"\nEnter Admin Password : ";
                        cin >> AdminPassword;
                        cout << "----------------------------------------------------------------------------" << endl;
                        if (AdminName==defaultAdminName && AdminPassword==defaultAdminPassword)
                            {
                            while (true)
                             {
                                int INP3; //Manu Bar status
                                cout << "\n                                                                          ";
                                cout << "\n|||||||||||||||||||||||||||||   Hello Sir   ||||||||||||||||||||||||||||||"<<endl;
                                cout << "\n                                                                          ";
                                cout << "\n ________________________________________________________________________ ";
                                cout << "\n|                     Moon Hotel Management system                       |";
                                cout << "\n|________________________________________________________________________|";
                                cout << "\n|                                                                        |";
                                cout << "\n|     01. Chack Room Availability.                                        |";
                                cout << "\n|                                                                        |";
                                cout << "\n|     02. Display Booked Room.                                           |";
                                cout << "\n|                                                                        |";
                                cout << "\n|     03. Print Bill.                                                    |";
                                cout << "\n|                                                                        |";
                                cout << "\n|     04. Book a Room.                                                   |";
                                cout << "\n|                                                                        |";
                                cout << "\n|     05. Exit.                                                          |";
                                cout << "\n|________________________________________________________________________|" << endl;
                                cout << "Enter Your Choice............. : " ;
                                cin  >> INP3;
                                cout << "\n----------------------------------------------------------------------------" << endl;
                                cout << "\n                                                                            " << endl;
                                cout << "\n                                                                            " << endl;
                                if (INP3==1){
                            	    Room roomobj0;
                                	roomobj0.topic1 = "Room ID";
                                	roomobj0.topic2 = "Room Types ";
                                	roomobj0.topic3 = "Price";
                                	
                                	
                                	Room roomobj1;
                                	roomobj1.ID = 001;
                                	roomobj1.funtion = "Single Room";
                                	roomobj1.cur = "R.S";
                                	roomobj1.price = 1000;	
                                	
                                	Room roomobj2;
                                	roomobj2.ID = 002;
                                	roomobj2.funtion = "Double Room ";
                                	roomobj2.cur = "R.S";
                                	roomobj2.price = 2000;
                                	
                                	Room roomobj3;
                                	roomobj3.ID = 003;
                                	roomobj3.funtion = "Twin Room";
                                	roomobj3.cur = "R.S";
                                	roomobj3.price = 2500;
                                	
                                	Room roomobj4;
                                	roomobj4.ID = 004;
                                	roomobj4.funtion = "Family Room";
                                	roomobj4.cur = "R.S";
                                	roomobj4.price = 3500;
                                	
                                	Room roomobj5;
                                	roomobj5.ID = 005;
                                	roomobj5.funtion = "Standard Room ";
                                	roomobj5.cur = "R.S";
                                	roomobj5.price = 2500;
                                	
                                	Room roomobj6;
                                	roomobj6.ID = 006;
                                	roomobj6.funtion = "Deluxe Room";
                                	roomobj6.cur = "R.S";
                                	roomobj6.price = 5000;
                                	
                                	cout << "\n----------------------------------------------------------------------------" << endl;
                                	cout << "\n                                                                              " << endl;
                                	cout <<   roomobj0.topic1 << "      " << roomobj0.topic2 << "                  " << roomobj0.topic3 << "\n";
                                	cout << "\n                                                                             " << endl;
                                	cout <<   roomobj1.ID << "           " << roomobj1.funtion << "                  " << roomobj1.cur << " "<< roomobj1.price << " \n";
                                	cout << "\n                                                                            " << endl;
                                	cout <<   roomobj2.ID << "           " << roomobj2.funtion << "                 " << roomobj2.cur << " "<< roomobj2.price << " \n";
                                	cout << "\n                                                                            " << endl;
                                	cout <<   roomobj3.ID << "            " << roomobj3.funtion << "                   " << roomobj3.cur << " "<< roomobj3.price << " \n";
                                	cout << "\n                                                                             " << endl;
                                	cout <<   roomobj4.ID << "           " << roomobj4.funtion << "                  " << roomobj4.cur << " "<< roomobj4.price << " \n";
                                	cout << "\n                                                                            " << endl;
                                	cout <<   roomobj5.ID << "           " << roomobj5.funtion << "               " << roomobj5.cur << " "<< roomobj5.price << " \n";
                                	cout << "\n                                                                            " << endl;
                                	cout <<   roomobj6.ID << "           " << roomobj6.funtion << "                  " << roomobj6.cur << " "<< roomobj6.price << " \n";
                                	cout << "\n                                                                            " << endl;
                                	cout << "\n                                                                            " << endl;
                                	cout << "\n                                                                            " << endl;
								    }
						    	    
						    	
						    	else if(INP3==4){
						    		cout << "\n----------------------------------------------------------------------------" << endl;
                                    cout << "---                           Booking Room                             ---" << endl;
                                    cout << "----------------------------------------------------------------------------" << endl;
                                        cout << " Witch you need room...........?" <<endl;
                                        float Date;// Booking Proceses
                                        string RoomID;
                                        string customerName;
                                        string checkInDate;
                                        string checkOutDate;
                                        int RoomPrice;
                                        float price;
                                        float total;
                                        float pay_AMT;
                                        float Balance;
                                        float FullTotal;
                                        int l=0;
                                        cout << "                                            " ;
                                        cout << "                                            " ;
                                        cout << "                                            " ;
                                                   {
                                                     cout << "\nEnter Room Number : ";
                                                     cin >>RoomID;
                                                     cout << "\n                       ";
                                                     cout << "\n                       ";
													 cout << "\nEnter Customer Name : ";
                                                     cin >>customerName;{
                                                     cout << "\n                       ";
                                                     cout << "\nEnter Check In Date (YYYY.MM.DD) : ";
                                                     cin >> checkInDate;
                                                     cout << "\n                       ";
                                                     cout << "\nEnter Check Out Date (YYYY.MM.DD) : ";
                                                     cin >> checkOutDate;
                                                     cout << "\n                      ";}
                                                
												ofstream MyWriteFile("Booking.txt");
												MyWriteFile <<"\n  Booking ID : RM00"<<RoomID<<"\n  Room Number :  "<<RoomID<<"\n  Name Of Customer : "<<customerName<<"\n  Date Of Check In : "<<checkInDate<<"\n  Date Of Check Out : "<<checkOutDate<<"\n";
												MyWriteFile.close();
												string myText;
												cout << "\nYour Booking Sucsusfull.... ";}}
												
							         else if(INP3==3){
										float Date;
                                        string RoomID;
                                        string customerName;
                                        float RoomPrice;
                                        float total;
                                        float pay_AMT;
                                        float Balance;
                                        float FullTotal;
                                        int l=0;
                                        cout << "                                            " ;
                                        cout << "                                            " ;
                                        cout << "                                            " ;
                                        while (l>=0){
                                                     cout << "\nEnter Room Number : ";
                                                     cin >>RoomID;
                                                     cout << "\n                       ";
                                                     cout << "\n                       ";
													 cout << "\nEnter Customer  Name : ";
                                                     cin >>customerName;{
                                                     cout << "\n                       ";
                                                     cout << "\nEnter Total Bookig Nights : ";
                                                     cin >> Date;
                                                     cout << "\n                      ";
                                                     cout << "\nEnter Price For Per Night : ";
                                                     cin >> RoomPrice;
                                                     cout << "\n                      ";
                                                     if (RoomID!="-1")
                                                     total=Date*RoomPrice;
                                                     l+=1;
                                                     FullTotal+=total;
                                                    }
                                                    {
                                                        l=-1;
                                                    }
				
		                                            
                                        cout <<"\n ___________________________________________";
                                        cout <<"\n|            you bill Is Genarating         |";
                                        cout <<"\n|___________________________________________|";
                                        cout <<"\n                                             ";
                                        cout <<"\n                  "<< customerName<<endl; 
										cout <<"                                "<<endl;
										cout <<"\n               Booking ID :"<< RoomID <<endl; 
										cout <<"\n                                             ";    
                                        cout <<"\n          Total is : Rs. "<<FullTotal;
                                        cout <<"\n         Enter Pay amount : Rs. ";
                                        cin >>pay_AMT;
                                        Balance=pay_AMT-FullTotal;
                                        cout << "\n          Balance is : Rs. " << Balance<<endl;
                                        cout <<"\n                                             ";
                                        cout <<"\n       Thank You... Come Again. "<< customerName <<endl;}}
										
											
										   else if (INP3==2) {
												 string myText;
												ifstream MyReadFile("Booking.txt");
												while (getline (MyReadFile,myText)) {
												cout << myText;
											}
											MyReadFile.close();
                                            
                                            
                }else if (INP3==5)
                {
                    exit(0); // Exit the program
                }
                else
                {
                    cout << "\nInvalid option! Please select a valid option." << endl;
                }
            }
        }
        else
        {
            cout << "\nInvalid username or password. Exiting program." << endl;
            return 0; // Exit the program
        }
}
}
}

