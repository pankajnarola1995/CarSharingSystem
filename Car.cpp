

#include "Car.h"
#include "global.h"
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
int cid =1;

void printCarVector(vector<Car>&);

using namespace std;



Car::Car()
{
}


Car::Car(int id, string name, float Price, string SessUserName, int Seats, string Manufacturer, double TrunkVolume,string Color, string FuelType, string Street, int PostCode,string City, string Extras, string Status)
{
    newId = id;
    newName = name;
    newPrice = Price;
    newSessUserName=SessUserName;
    newSeats=Seats;
    newManufacturer=Manufacturer;
    newTrunkVolume=TrunkVolume;
    newColor=Color;
    newFuelType=FuelType;
    newStreet=Street;
    newPostCode=PostCode;
    newCity=City;
    newExtras=Extras;
    newStatus=Status;


}

Car::~Car()
{

}

//Getter
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
int Car::getSeats() const
{
    return  newSeats;
}
string Car::getManufacturer() const
{
    return  newManufacturer;
}
double Car::getTrunkVolume() const
{
    return  newTrunkVolume;
}
string Car::getColor() const
{
    return  newColor;
}
string Car::getFuelType() const
{
    return  newFuelType;
}
string Car::getStreet() const
{
    return  newStreet;
}
int Car::getPostCode() const
{
    return  newPostCode;
}
string Car::getCity() const
{
    return  newCity;
}
string Car::getExtras() const
{
    return  newExtras;
}
string Car::getStatus() const
{
    return  newStatus;
}


//setter
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
void Car::setSeats(int Seats )
{
    newSeats = Seats;
}
void Car::setManufacturer(string Manufacturer )
{
    newManufacturer = Manufacturer;
}
void Car::setTrunkVolume(double TrunkVolume )
{
    newTrunkVolume = TrunkVolume;
}
void Car::setColor(string Color )
{
    newColor = Color;
}
void Car::setFuelType(string FuelType )
{
    newFuelType = FuelType;
}
void Car::setStreet(string Street )
{
    newStreet = Street;
}
void Car::setPostCode(int PostCode )
{
    newPostCode = PostCode;
}
void Car::setCity(string City )
{
    newCity = City;
}
void Car::setExtras(string Extras )
{
    newExtras = Extras;
}
void Car::setStatus(string Status )
{
    newStatus = Status;
}

void fillCarVector(vector<Car>& newAllCar)
{


    string Name;
    float Price;
    int Seats;
    string Manufacturer;
    double TrunkVolume;
    string Color;
    string FuelType;
    string Street;
    int PostCode;
    string City;
    string Extras;
    string Status="Available";

    cout<<endl;
    cout << "Add Car Info" << '\n';

    cout << " Car Name : ";
    cin >> Name;
    cout << " Car Price : ";
    cin >> Price;
    cout << " Car Seats : ";
    cin >> Seats;
    cout << " Car Manufacturer : ";
    cin >> Manufacturer;
    cout << " Car TrunkVolume : ";
    cin >> TrunkVolume;
    cout << " Car Color : ";
    cin >> Color;
    cout << " Car FuelType : ";
    cin >> FuelType;
    cout << " Car Street : ";
    cin >> Street;
    cout << " Car PostCode : ";
    cin >> PostCode;
    cout << " Car City : ";
    cin >> City;
    cout << " Car Extras : ";
    cin >> Extras;


    Car newCar(cid,Name,Price,SessUserName,Seats,Manufacturer,TrunkVolume,Color,FuelType,Street,PostCode,City,Extras,Status);

    newAllCar.push_back(newCar);
    cid++;
    cout << endl;
}


void deleteCarVector( vector<Car>& newAllCar)
{
    int id;
    cout<<" \n\t\t Please Enter the Id of Car to Delete Car Details :  ";
    cin>>id;

//replace(newAllCar.begin(),newAllCar.end(),"a","b");

    int tmp;
    unsigned int size = newAllCar.size();
    for (unsigned int i = 0; i<size; i++)
    {

        if(newAllCar[i].getId()==id)
        {
            cout<<"Current Car Name : "<<newAllCar[i].getName()<<"\n";

            newAllCar.erase(std::remove_if(newAllCar.begin(), newAllCar.end(), [&id](const Car& ele)->bool
            {
                return ele.getId() == id;

            }),newAllCar.end());
            cout<<"\t\t\t"<<"*******************************************\n";
            cout<<"\t\t\t Success!!! Car has been Deleted \n";
            cout<<"\t\t\t"<<"*******************************************\n";

            //  cout<<"Enter New Car Name : ";
            //  cout<<"Enter New Car Name : "<<newAllCar[i];
            //if(!NewCarName.empty())
            // delete newAllCar[i];
//remove(newAllCar[i].newName);


            //  newAllCar.erase(newAllCar[i].getName());
            //  newAllCar.erase(remove(newAllCar.begin(),newAllCar.end(),newAllCar.at(i).getId()));
        }
        else
        {
            cout<<"\t\t\t"<<"*******************************************\n";
            cout<<"\t\t\t Failed!!! Please Enter Correct Id\n";
            cout<<"\t\t\t"<<"*******************************************\n";


        }
    }
    printCarVector(newAllCar);

    cout << endl;
}


void editCarVector( vector<Car>& newAllCar)
{
    int id;
    float NewCarPrice;
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
            newAllCar[i].newName=NewCarName;

            cout<<"Current Car Price : "<<newAllCar[i].getPrice()<<"\n";
            cout<<"Enter New Car Price : ";
            cin>>NewCarPrice;
            newAllCar[i].newPrice=NewCarPrice;
        }
    }

    printCarVector(newAllCar);

    cout << endl;
}


void printCarVector( vector<Car>& newAllCar)
{

    cout<<"\n\n";
    cout<<"\t\t ----------------------------------------------\n"<< "\t\t\t\t Car Details \n";
    cout<<"\t\t ----------------------------------------------\n\n";

    cout<<setfill(' ')<<setw(10);

    cout<<setw(10)<<"Car Id"<<" | "<<setw(20)<<"Car Name"<<" | "<<setw(15) <<"Car price"<<" | "<<setw(15) <<"UserName"<<" | "<<setw(15) <<"Seats"<<" | "<<setw(15) <<"Seats"<<" | "<<setw(15) <<"Seats"<<" | "<<setw(15) <<"Seats"<<" | "<<setw(15) <<"Seats"<<" | "<<setw(15) <<"Seats"<<" | "<<setw(15) <<"Seats"<<" | "<<setw(15) <<"Seats"<<" | "<<setw(15) <<"Seats"<<" | "<<setw(15) <<"Seats" <<"\n";
    cout<<"--------------------------------------------------------------------------------\n";
    unsigned int size = newAllCar.size();
    for (unsigned int i = 0; i<size; i++)
    {
        cout << setw(10)<< newAllCar[i].getId()<<" | " ;
        cout << setw(20)<<newAllCar[i].getName()<<" | " ;
        cout << setw(15)<<newAllCar[i].getPrice()<<" | ";
        cout << setw(15)<<newAllCar[i].getSeats()<<" | ";
        cout << setw(15)<<newAllCar[i].getManufacturer()<<" | ";
        cout << setw(15)<<newAllCar[i].getTrunkVolume()<<" | ";
        cout << setw(15)<<newAllCar[i].getColor()<<" | ";
        cout << setw(15)<<newAllCar[i].getFuelType()<<" | ";
        cout << setw(15)<<newAllCar[i].getStreet()<<" | ";
        cout << setw(15)<<newAllCar[i].getPostCode()<<" | ";
        cout << setw(15)<<newAllCar[i].getCity()<<" | ";
        cout << setw(15)<<newAllCar[i].getExtras()<<" | ";
        cout << setw(15)<<newAllCar[i].getStatus()<<" | ";
        cout <<setw(15)<< newAllCar[i].getSessUserName()<<"\n";
    }
    cout<<"\n\n";
}
