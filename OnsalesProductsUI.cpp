/*
* Class : OnsalesProductUI
* Description:  OnsalesProduct boundary class for UI
* Created: 2022/5/31
* Author: B711169 ������
* mail: jul12230103@gmail.com
*/
#include "OnsalesProductsUI.h"
using namespace std;

OnsalesProductsUI::OnsalesProductsUI(FILE* o_fp, User u, ProductCollection list)
{
    enableEx(o_fp);

    vector<Product>::iterator it = list.findFirstIdx();
    enable(o_fp, *(it));
    while (list.getNext(it) != list.findLastIdx()) {
        enable(o_fp, *(list.getNext(it)));  ++it;
    }
}

void OnsalesProductsUI::enableEx(FILE* out_fp)
{
    // ��� ����
    fprintf(out_fp, "3.1 �Ǹ� �Ƿ� ���\n");
}

void OnsalesProductsUI::enable(FILE* out_fp, Product p)
{
    // ��� ����
    fprintf(out_fp, "%s %s %d %d\n", this->productName, this->manufacturer, this->price, this->quantity);
}