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



class ProductCollection { 

private:
	std::vector<Product> v;

public:
	//Product findFirst();
	//vector<Product>::iterator findFirstIdx() {};
	////Product getNext(vector<Product>::iterator it) {};
	
	std::vector<Product>::iterator findFirstIdx();
	std::vector<Product>::iterator getNext(std::vector<Product>::iterator it);
	std::vector<Product>::iterator findLastIdx();

	std::vector<Product> getList();

	void addProduct(Product p) {};
	//void traverseAll() {};
	std::vector<Product> listOnsaleProducts() {};
	std::vector<Product> listSoldoutProducts() {};
};
