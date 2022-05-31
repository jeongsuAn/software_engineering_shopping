/*
* Class : ProductCollection
* Description:  ProductCollection control class
* Created: 2022/5/31
* Author: B711169 정다은
* mail: jul12230103@gmail.com
*/

#include "Product.h"
#include "ProductCollection.h"

vector<Product>::iterator ProductCollection::findFirstIdx()
{
    return v.begin();
}
vector<Product>::iterator ProductCollection::getNext(vector<Product>::iterator it)
{
    next(it, 1);
    return it;
}

vector<Product>::iterator ProductCollection::findLastIdx()
{
    return v.end();
}
vector<Product> ProductCollection::getList()
{
    return v;
}


void ProductCollection::addProduct(Product p)
{
	v.push_back(p);
}


//void ProductCollection::traverseAll()
//{
//    for (auto iter = v.begin(); iter != v.end(); iter++) {
//        {
//            string product_name = (*iter).getProductName();
//            string manufacturer = (*iter).getManufacturer();
//            int price = (*iter).getPrice();
//            int quantity = (*iter).getQuantity();
//        }
//    }
//}

vector<Product> ProductCollection::listOnsaleProducts()
{
    vector<Product> onsalesList;

    for (auto iter = v.begin(); iter != v.end(); iter++) {
        // 판매 중인 것만 출력
        if ((*iter).getSalesState() == true || (*iter).getQuantity() != 0)
        {
            onsalesList.push_back(*iter);
            //string product_name = (*iter).getProductName();
            //string manufacturer = (*iter).getManufacturer();
            //int price = (*iter).getPrice();
            //int quantity = (*iter).getQuantity();
        }
    }
    return onsalesList;
}

vector<Product> ProductCollection::listSoldoutProducts()
{
    vector<Product> soldoutList;

    for (auto iter = v.begin(); iter != v.end(); iter++) {
        // 품절인 것만 출력
        if (!(*iter).getSalesState())
        {
            soldoutList.push_back(*iter);

            //string product_name = (*iter).getproductName();
            //string manufacturer = (*iter).getmanufacturer();
            //int price = (*iter).getprice();
            //int quantity = (*iter).getquantity();
            //fprintf(out_fp, "%s %s %d %d\n", product_name, manufacturer, price, quantity);
        }
    }
    return soldoutList;
}