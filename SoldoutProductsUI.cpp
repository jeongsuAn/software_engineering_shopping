/*
* Class : SoldoutProductsUI
* Description:  SoldoutProductsUI boundary class for UI
* Created: 2022/5/31
* Author: B711169 ������
* mail: jul12230103@gmail.com
*/
#include "SoldoutProductsUI.h"
using namespace std;

SoldoutProductsUI::SoldoutProductsUI(FILE* o_fp, User u, ProductCollection list)
{
    enableEx(o_fp);

    vector<Product>::iterator it = list.findFirstIdx();
    enable(o_fp, *(it));
    while (list.getNext(it) != list.findLastIdx()) {
        enable(o_fp, *(list.getNext(it)));  ++it;
    }
}

void SoldoutProductsUI::enableEx(FILE* out_fp)
{
    // ��� ����
    fprintf(out_fp, "3.3. �Ǹ� �Ϸ� ��ǰ ��ȸ\n");
}

void SoldoutProductsUI::enable(FILE* out_fp, Product p)
{
    // ��� ����
    fprintf(out_fp, "%s %s %d %d %d\n", this->productName, this->manufacturer, this->price, this->soldQuantity, this->avgSatisfaction);
}