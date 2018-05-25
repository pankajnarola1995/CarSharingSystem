

#include "global.h"
#include "Registration.h"
#include <string>
#include <vector>

#include <iomanip>
int rid =1;



Registration::Registration()
{
}


Registration::Registration(int id, string name, string Password, string AccountType)
{
    newId = id;
    newUserName = name;
    newPassword = Password;
    newAccountType = AccountType;

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
string Registration::getAccountType() const
{
    return  newAccountType;
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
void Registration::setAccountType(string AccountType )
{
    newAccountType = AccountType;
}

void fillRegistrationVector(vector<Registration>& newAllRegistration,string AccountType)
{

string UserName;
string Password;

    cout<<endl;
    cout<< "\t\t" <<"--------------------------------------------"<< '\n';
    cout<< "\t\t" << "Add Registration Info" << '\n';
    cout<< "\t\t" <<"--------------------------------------------"<< '\n';
    cout <<"\n"<< "\t\t"<< " User Name : ";
    cin >> UserName;
    cout<< "\t\t" << " Password: ";
    cin >> Password;


    Registration newRegistration(rid,UserName, Password,AccountType);

    newAllRegistration.push_back(newRegistration);
    rid++;
    cout << endl;
     cout<<"\t\t\t"<<"*******************************************\n";
     cout<<"\t\t\t"<<"Yuppieee, Registration Success Now Login...\n";
     cout<<"\t\t\t"<<"********************************************\n";
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
    if(size==0){
        cout<<"\n\n\t\t\t"<<"*******************************************\n";
        cout<<"\t\t\t Please Register First to  Login\n";
        cout<<"\t\t\t"<<"*******************************************\n";
    }
    for (unsigned int i = 0; i<size; i++)
    {
        if( newAllRegistration[i].getUserName()== tmpUserName & newAllRegistration[i].getPassword() == tmpPassword )
        {

            isLogin= true;
            SessUserName =newAllRegistration[i].getUserName();
            cout<<endl;
              cout<<"\t\t\t"<<"*******************************************\n";

            cout<<"\t\t\t"<<"Success!!! Login Success!!!\n";
     cout<<"\t\t\t"<<"*******************************************\n";

            i=size;
        }
        else
        {

            cout<<endl;
              cout<<"\t\t\t"<<"*******************************************\n";

            cout<<"\t\t\t"<<"Login Failed!!! Please Try Again\n";
              cout<<"\t\t\t"<<"*******************************************\n";

            isLogin= false;
        }
    }
    cout<<endl;
    cout<<endl;

}

void showUserProfile( vector<Registration>& newAllRegistration)
{

    cout<<"\n\n";
    cout<<"\t\t ----------------------------------------------\n"<< "\t\t User Details \n";
    cout<<"\t\t ----------------------------------------------\n\n";

    cout<<setfill(' ')<<setw(10);

    cout<<setw(10)<<"User Id"<<" | "<<setw(20)<<"User Name"<<" | "<<setw(15) <<"Account Type"<<"\n";
    cout<<"--------------------------------------------------------------------------------\n";
    unsigned int size = newAllRegistration.size();
    for (unsigned int i = 0; i<size; i++)
    {
        cout << setw(10)<< newAllRegistration[i].getId()<<" | " ;
        cout << setw(20)<<newAllRegistration[i].getUserName()<<" | " ;
         cout <<setw(15)<< newAllRegistration[i].getAccountType()<<"\n";
    }
    cout<<"\n\n";
}
