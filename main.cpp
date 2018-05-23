
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <new>
#include <vector>
#include "global.h"
#include "Car.h"
#include "Registration.h"

using namespace std;

void fillCarVector(vector<Car>&);
void printCarVector(vector<Car>&);
void editCarVector( vector<Car>&);
void deleteCarVector( vector<Car>&);

void fillRegistrationVector(vector<Registration>&);
void CheckLogin(const vector<Registration>&);


int main()
{
	vector<Car> AllCar;
	vector<Registration> AllRegistration;

	int num;
	do
	{
	    cout<<endl<<endl;
	  	cout<<"\t\t"<< "1.  Registration " << '\n';
		cout<<"\t\t" <<"2.  Login " << '\n';
		cout<<"\t\t" << "3.  Add Car " << '\n';
		cout<<"\t\t" << "4.  View Car" << '\n';
		cout<<"\t\t" << "5.  Edit Car" << '\n';
		cout<<"\t\t" << "6.  Delete Car" << '\n';
		cout<<"\t\t" << "0.  Quite " << '\n' << '\n';


		cout<<"Please Enter Number : ";
		cin >> num ;
		cout<<"\n\t\t" << "You entered : " << num << "\t\n\n";
		switch (num)
		{

		case 1:
            //Registration
		    fillRegistrationVector(AllRegistration);
		    break;

        case 2:
            //Login
		    CheckLogin(AllRegistration);
		    break;
        case 3:
            //Add Car
              fillCarVector(AllCar);

            if(!SessUserName.empty()){

            }else{
            cout << endl<<"Please Login First to Add your Car Details"<<endl;
            }
		    break;
        case 4:
            //View Car
             if(!SessUserName.empty()){

            }else{
            cout << endl<<"Please Login First to Add your Car Details"<<endl;
            }
		    printCarVector(AllCar);
		    break;
        case 5:
            //Edit Car

            printCarVector(AllCar);

            editCarVector(AllCar);
            break;
       case 6:
            //Delete Car

            printCarVector(AllCar);

            deleteCarVector(AllCar);
            break;
        case 0:
            break;
        default:
            cout<<"Please enter valid Number"<<endl;
            break;

		}
	} while (num != 0);


	return 0;
}

