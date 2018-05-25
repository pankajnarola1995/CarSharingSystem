
//Car Header

#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>

using namespace std;

class Car
{

public:

    //default constructor
    Car();

    //overload Constructor
    Car(int, string, float,string,int,string,double,string,string,string,int,string,string,string);

    //destructor
    ~Car();

    //Accessor Fun
    int getId() const;

    string getName() const;

    float getPrice() const;
    string getSessUserName() const;
    int getSeats() const;
    string getManufacturer() const;
    double getTrunkVolume() const;
    string getColor() const;
    string getFuelType() const;
    string getStreet() const;
    int getPostCode() const;
    string getCity() const;
    string getExtras() const;
    string getStatus() const;
    //string getSessUserName() const;


    //mutator functions
    void setId(int);
    void setName(string);
    void setPrice(float);
    void setSessUserName(string);
    void setSeats(int);
    void setManufacturer(string);
    void setTrunkVolume(double);
    void setColor(string);
    void setFuelType(string);
    void setStreet(string);
    void setPostCode(int);
    void setCity(string);
    void setExtras(string);
    void setStatus(string);


  //Member Variables
    int newId;
     string newName;
    float  newPrice;
    string  newSessUserName;
    int newSeats;
    string newManufacturer;
    double newTrunkVolume;
    string newColor;
    string newFuelType;
    string newStreet;
    int newPostCode;
    string newCity;
    string newExtras;
    string newStatus;

};
#endif // !CAR_H
