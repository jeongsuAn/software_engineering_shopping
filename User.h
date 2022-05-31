/*
* File name : User.h
* File created by B711169 ������
*/

#include <string>
#include "Product.h"
#include "ProductCollection.h"
using namespace std;

class User {       // The class

private:
    string name;
    double residentRegistrationNumber; // Access specifier
    string ID;
    string password;

    ProductCollection mySalesCollection;
    //ProductCollection soldoutCollection;

public:
    string getName() {};
    double getRegNo() {};
    string getID() {};
    string getPassword() {};

    void createID(string userDB, string name, string residentRegistrationNumber, string ID, string pw) {};
    void checkLogin(string ID, string pw) {};
    void withdrawalUser(string id) {};

    ProductCollection getAllSalesCollection() {};
    ProductCollection getOnSalesCollection() {};
    ProductCollection getSoldoutCollection() {};
};
