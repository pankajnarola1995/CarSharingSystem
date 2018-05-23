

#include "Car.h"
#include "global.h"
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
int cid =1;

string Name;
float Price;

void printCarVector(vector<Car>&);

using namespace std;



Car::Car()
{
}


Car::Car(int id, string name, float Price, string SessUserName)
{
    newId = id;
    newName = name;
    newPrice = Price;
    newSessUserName=SessUserName;
}

Car::~Car()
{

}

int Car::getId() const
{
    return  newId;
}
string Car::getName() const
{
    return  newName;
}
float Car::getPrice() const
{
    return  newPrice;
}
string Car::getSessUserName() const
{
    return  newSessUserName;
}

void Car::setId(int id)
{
    newId = id;
}
void Car::setName(string name)
{
    newName = name;
}
void Car::setPrice(float Price )
{
    newPrice = Price;
}
void Car::setSessUserName(string SessUserName )
{
    newSessUserName = SessUserName;
}

void fillCarVector(vector<Car>& newAllCar)
{
    cout<<endl;
    cout << "Add Car Info" << '\n';

    cout << " Car Name : ";
    cin >> Name;
    cout << " Car Price : ";
    cin >> Price;

    Car newCar(cid,Name, Price,SessUserName);

    newAllCar.push_back(newCar);
    cid++;
    cout << endl;
}

// TODO: Here I want to delete the particuar Record from Vector Object..
void deleteCarVector( vector<Car>& newAllCar)
{
    int id;
    cout<<" \n\t\t Please Enter the Id of Car to Delete Car Details :  ";
    cin>>id;
    
    
 //replace(newAllCar.begin(),newAllCar.end(),"a","b");


    unsigned int size = newAllCar.size();
    for (unsigned int i = 0; i<size; i++)
    {

        if(newAllCar[i].getId()==id)
        {
            cout<<"Current Car Name : "<<newAllCar[i].getName()<<"\n";
          //  cout<<"Enter New Car Name : ";
          //  cout<<"Enter New Car Name : "<<newAllCar[i];
            //if(!NewCarName.empty())
//            newAllCar.erase(remove(newAllCar.begin(),newAllCar.end(),newAllCar.at(i).getId()));


        }
    }

    printCarVector(newAllCar);

    cout << endl;
}

// TODO: Here I want to edit the particuar Record from Vector Object..

void editCarVector( vector<Car>& newAllCar)
{
    int id;
    string NewCarName;
    cout<<" \n\t\t Please Enter the Id of Car to Edit Details :  ";
    cin>>id;
 //replace(newAllCar.begin(),newAllCar.end(),"a","b");


    unsigned int size = newAllCar.size();
    for (unsigned int i = 0; i<size; i++)
    {

        if(newAllCar[i].getId()==id)
        {
            cout<<"Current Car Name : "<<newAllCar[i].getName()<<"\n";
            cout<<"Enter New Car Name : ";
            cin>>NewCarName;
            //if(!NewCarName.empty())
               newAllCar[i].getName()=NewCarName;

        }
    }

    printCarVector(newAllCar);

    cout << endl;
}


void printCarVector( vector<Car>& newAllCar)
{

    cout<<"\n\n";
    cout<<"\t\t ----------------------------------------------\n"<< "\t\t Car Details \n";
    cout<<"\t\t ----------------------------------------------\n\n";

    cout<<setfill(' ')<<setw(10);

    cout<<setw(10)<<"Car Id"<<" | "<<setw(20)<<"Car Name"<<" | "<<setw(15) <<"Car price"<<" | "<<setw(15) <<"UserName" <<"\n";
    cout<<"--------------------------------------------------------------------------------\n";
    unsigned int size = newAllCar.size();
    for (unsigned int i = 0; i<size; i++)
    {
        cout << setw(10)<< newAllCar[i].getId()<<" | " ;
        cout << setw(20)<<newAllCar[i].getName()<<" | " ;
        cout << setw(15)<<newAllCar[i].getPrice()<<" | ";
        cout <<setw(15)<< newAllCar[i].getSessUserName()<<"\n";
    }
    cout<<"\n\n";
}
