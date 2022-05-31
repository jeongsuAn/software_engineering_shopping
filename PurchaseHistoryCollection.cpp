#include "PurchaseHistoryCollection.h"

using namespace std;

vector<Product>::iterator PurchaseHistoryCollection::findFirstIdx()
{
    return v.begin();
}
vector<Product>::iterator PurchaseHistoryCollection::getNext(vector<Product>::iterator it)
{
    next(it, 1);
    return it;
}

vector<Product>::iterator PurchaseHistoryCollection::findLastIdx()
{
    return v.end();
}

void PurchaseHistoryCollection::addPurchaseHistory(Product p)
{
    v.push_back(p);
}

Product PurchaseHistoryCollection::getProductDetails(string pName)
{
    for(auto it = v.begin() ; it != v.end() ; it++){
        if(pName == it->getProductName())
        {
            return *it;
        }
    }
}