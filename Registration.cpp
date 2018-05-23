

#include "global.h"
#include "Registration.h"
#include <string>
#include <vector>
int rid =1;

string UserName;
string Password;



Registration::Registration()
{
}


Registration::Registration(int id, string name, string Password)
{
    newId = id;
    newUserName = name;
    newPassword = Password;

}

Registration::~Registration()
{

}

int Registration::getId() const
{
    return  newId;
}
string Registration::getUserName() const
{
    return  newUserName;
}
string Registration::getPassword() const
{
    return  newPassword;
}

void Registration::setId(int id)
{
    newId = id;
}
void Registration::setUserName(string name)
{
    newUserName = name;
}
void Registration::setPassword(string Password )
{
    newPassword = Password;
}

void fillRegistrationVector(vector<Registration>& newAllRegistration)
{
    cout<<endl;
    cout<< "\t\t" <<"--------------------------------------------"<< '\n';
    cout<< "\t\t" << "Add Registration Info" << '\n';
    cout<< "\t\t" <<"--------------------------------------------"<< '\n';
    cout <<"\n"<< "\t\t"<< " User Name : ";
    cin >> UserName;
    cout<< "\t\t" << " Password: ";
    cin >> Password;


    Registration newRegistration(rid,UserName, Password);

    newAllRegistration.push_back(newRegistration);
    rid++;
    cout << endl;
     cout<<"\t\t\t"<<"Yuppieee, Registration Success Now Login...";
       cout << endl;
}
void CheckLogin(const vector<Registration>& newAllRegistration)
{
    string tmpUserName,tmpPassword;
    cout<<endl;
    cout<<endl;
    cout<<"Enter UserName :  ";
    cin>>tmpUserName;
    cout<<"Enter Password : ";
    cin>>tmpPassword;

    unsigned int size = newAllRegistration.size();

    for (unsigned int i = 0; i<size; i++)
    {
        if( newAllRegistration[i].getUserName()== tmpUserName & newAllRegistration[i].getPassword() == tmpPassword )
        {

            isLogin= true;
            SessUserName =newAllRegistration[i].getUserName();
            cout<<endl;
            cout<<"\t\t\t"<<"Yuppieee, Login Success!!!";
            i=size;
        }
        else
        {

            cout<<endl;
            cout<<"\t\t\t"<<"Login Failed!!! Please Try Again";
            isLogin= false;
        }
    }
    cout<<endl;
    cout<<endl;

}
