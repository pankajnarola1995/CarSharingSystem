

//Car Header

#ifndef REGISTRATION_H
#define REGISTRATION_H
#include <iostream>
#include <string>

using namespace std;

class Registration
{

public:

    //default constructor
    Registration();

    //overload Constructor
    Registration(int, string, string,string);

    //destructor
    ~Registration();

    //Accessor Fun
    int getId() const;

    string getUserName() const;

    string getPassword() const;
    string getAccountType() const;


    //mutator functions
    void setId(int);
    void setUserName(string);
    void setPassword(string);
    void setAccountType(string);

       bool isLogin=false;
  string SessUserName="";

private:
    //Member Variables
    int newId;
    string newUserName;
    string  newPassword;
    string  newAccountType;



};
#endif // !CAR_H
