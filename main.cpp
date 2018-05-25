
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <new>
#include <vector>
#include "global.h"
#include "Car.h"
#include "Registration.h"
#include "Car.h"

using namespace std;

void fillCarVector(vector<Car>&);
void printCarVector(vector<Car>&);
void editCarVector( vector<Car>&);
void deleteCarVector( vector<Car>&);

void fillRegistrationVector(vector<Registration>&,string AccountType);
void CheckLogin(const vector<Registration>&);
void showUserProfile(vector<Registration>&);

void showUserMenu();
void showCarOwnerMenu();
vector<Car> AllCar;
vector<Registration> AllRegistration;


int main()
{
    int Who;

    do
    {
        cout << "Who Are You:" << endl << "1. Press 1 for User" << endl << "2. Press 2 for Car Owner" <<endl;
        cin >> Who;
    }

    while (Who != 1 && Who != 2);

    switch (Who)
    {
    case 1:
        showUserMenu();
        break;

    case 2:
        showCarOwnerMenu();
        break;

    }



    return 0;
}

void showUserMenu()
{

    string AccountType="User";
    int num;
    do
    {
        cout<<endl<<endl;
        cout<<"\t\t"<< "-----------"<< '\n';
        cout<<"\t\t"<< "User Menu "<< '\n';
        cout<<"\t\t"<< "-----------"<< '\n';
        cout<<"\t\t"<< "1.  Registration " << '\n';
        cout<<"\t\t" <<"2.  Login " << '\n';
        cout<<"\t\t" << "3.  View Car " << '\n';
        cout<<"\t\t" << "4.  Rent Car" << '\n';
        cout<<"\t\t" << "5.  Return Car" << '\n';
        cout<<"\t\t" << "6.  Show Profile" << '\n';
        cout<<"\t\t" << "7.  Back To Main Menu" << '\n';
        cout<<"\t\t" << "0.  Quite " << '\n' << '\n';


        cout<<"Please Enter Number : ";
        cin >> num ;
        cout<<"\n\t\t" << "You entered : " << num << "\t\n\n";
        switch (num)
        {

        case 1:
            //Registration
            fillRegistrationVector(AllRegistration,AccountType);
            break;

        case 2:
            //Login
            CheckLogin(AllRegistration);
            break;
        case 3:
            //View Car
            printCarVector(AllCar);

            break;
        case 4:
            //Rent Car
            if(!SessUserName.empty())
            {

            }
            else
            {
                cout << endl<<"Please Login First to Add your Car Details"<<endl;
            }
            printCarVector(AllCar);
            break;
        case 5:
            //Return Car

            printCarVector(AllCar);

            editCarVector(AllCar);
            break;
        case 6:
            //User Profile

            showUserProfile(AllRegistration);
            break;
        case 7:
            main();
            break;
        case 0:
            break;
        default:
            cout<<"Please enter valid Number"<<endl;
            break;

        }
    }
    while (num != 0);



}

void showCarOwnerMenu()
{

    int num;
    string AccountType="CarOwner";
    do
    {
        cout<<endl<<endl;
        cout<<"\t\t"<< "-----------"<< '\n';
        cout<<"\t\t"<< "CarOwner Menu "<< '\n';
        cout<<"\t\t"<< "-----------"<< '\n';
        cout<<"\t\t"<< "1.  Registration " << '\n';
        cout<<"\t\t" <<"2.  Login " << '\n';
        cout<<"\t\t" << "3.  Add Car " << '\n';
        cout<<"\t\t" << "4.  View Car" << '\n';
        cout<<"\t\t" << "5.  Edit Car" << '\n';
        cout<<"\t\t" << "6.  Delete Car" << '\n';
        cout<<"\t\t" << "7.  Back To Main Menu" << '\n';
        cout<<"\t\t" << "0.  Quite " << '\n' << '\n';


        cout<<"Please Enter Number : ";
        cin >> num ;
        cout<<"\n\t\t" << "You entered : " << num << "\t\n\n";

        switch (num)
        {

        case 1:
            //Registration
            fillRegistrationVector(AllRegistration,AccountType);
            break;

        case 2:
            //Login
            CheckLogin(AllRegistration);
            break;
        case 3:
            //Add Car
            fillCarVector(AllCar);

            if(!SessUserName.empty())
            {

            }
            else
            {
                cout << endl<<"Please Login First to Add your Car Details"<<endl;
            }
            break;
        case 4:
            //View Car
            if(!SessUserName.empty())
            {

            }
            else
            {
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
        case 7:
            main();
            break;
        default:
            cout<<"Please enter valid Number"<<endl;
            break;

        }
    }
    while (num != 0);
}
