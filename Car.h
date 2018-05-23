
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
    Car(int, string, float,string);

    //destructor
    ~Car();

    //Accessor Fun
    int getId() const;

    string getName() const;

    float getPrice() const;
    string getSessUserName() const;
    //string getSessUserName() const;


    //mutator functions
    void setId(int);
    void setName(string);
    void setPrice(float);
    void setSessUserName(string);

private:
    //Member Variables
    int newId;
    string newName;
    float  newPrice;
    string  newSessUserName;



};
#endif // !CAR_H
