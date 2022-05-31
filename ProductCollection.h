/*
* Class : ProductCollection
* Description:  ProductCollection control class
* Created: 2022/5/31
* Author: B711169 ¡§¥Ÿ¿∫
* mail: jul12230103@gmail.com
*/

#include <string>
#include <vector>
#include "Product.h"

using namespace std;

class ProductCollection { 

private:
	vector<Product> v;

public:
	//Product findFirst();
	//vector<Product>::iterator findFirstIdx() {};
	////Product getNext(vector<Product>::iterator it) {};
	
	vector<Product>::iterator findFirstIdx();
	vector<Product>::iterator getNext(vector<Product>::iterator it);
	vector<Product>::iterator findLastIdx();

	vector<Product> getList() {};

	void addProduct(Product p) {};
	//void traverseAll() {};
	vector<Product> listOnsaleProducts() {};
	vector<Product> listSoldoutProducts() {};
};
