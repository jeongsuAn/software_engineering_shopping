// ��� ����
#include <iostream>
#include <string>
#include "MainControl.h"
#include "MainControlUI.h"
#include "Start.h"
#include "StartUI.h"
#include "User.h"
#include "UserList.h"
#include "AddProduct.h"
#include "OnsalesProducts.h"
#include "SoldoutProducts.h"
#include "SalesStatistics.h"
#include "Product.h"
#include "ProductPayment.h"
#include "CheckPurchaseHistory.h"
#include "Satisfaction.h"

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
void doTask(FILE* in_fp, FILE* out_fp);
void program_exit();

// ���� ����
FILE* in_fp, * out_fp;

int main()
{
    // ���� ������� ���� �ʱ�ȭ
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");


    doTask(in_fp, out_fp);

    return 0;
}


void doTask(FILE* in_fp, FILE* out_fp) 
{
    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;
    Start* start =new Start(in_fp, out_fp);
    MainControl* mControl = nullptr;
    User* user = nullptr;
    while (!is_program_exit)
    {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);

        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1)
        {
        case 1:

            switch (menu_level_2)
            {
            case 1:   // "1.1. ȸ�����ԡ� �޴� �κ�
            {
                // join() �Լ����� �ش� ��� ���� 
                start->fillJoinShop();

                break;
            }
            case 2:   // "1.2. ȸ��Ż��" �޴� �κ�
            {
                // join() �Լ����� �ش� ��� ���� 
                mControl->withdrawalShop();

                break;
            }
            }
            break;


        case 2:

            switch (menu_level_2)
            {
            case 1:   // "2.1. �α���" �޴� �κ�
            {

                user = start->loginShop();
                mControl = start->getMainControlPtr();

                break;
            }
            case 2:   // "2.2. �α׾ƿ�" �޴� �κ�
            {

                mControl->logout();
                break;
            }
            }
            break;

        case 3:

            switch (menu_level_2)
            {
            case 1:
            {
                // "3.1. �Ǹ� �Ƿ� ���" �޴� �κ�
                AddProduct* addProduct = new AddProduct();
                addProduct->addProduct(user, in_fp, out_fp);

                break;
            }
            case 2:
            {
                // 3.2. ��� ��ǰ ��ȸ
                OnsalesProducts* onsalesProducts = new OnsalesProducts();
                onsalesProducts->showOnsalesProducts(user, in_fp, out_fp);

                break;
            }
            case 3:
            {
                // 3.3. �Ǹ� �Ϸ� ��ǰ ��ȸ
                SoldoutProducts* soldoutProducts = new SoldoutProducts();
                soldoutProducts->showSoldoutProducts(user, out_fp);

                break;
            }
            }
            break;


        case 4:

            switch (menu_level_2)
            {
            case 1:   
            {  //showProductDetails();  
                break;
            }
            case 2:
            {  
                std::string pName = "hat";  // for test
                ProductPayment* productPayment = new ProductPayment(out_fp, user, pName);
                break;
            }
            case 3:
            {  
                CheckPurchaseHistory* checkPurchaseHistory = new CheckPurchaseHistory(user, out_fp);
                break;
            }
            case 4:
            {  
                Satisfaction* satisfaction = new Satisfaction(user, in_fp, out_fp);
                break;
            }
            }
            break;

        case 5:

            switch (menu_level_2)
            {
            case 1:
            {
                // 5.1. �Ǹ� ��ǰ ���
                SalesStatistics* salesSatistics = new SalesStatistics();
                salesSatistics->showStatistics(out_fp, user);

                break;
            }
            }
            break;

        case 6:

            switch (menu_level_2)
            {
            case 1:   // "6.1. ���ᡰ �޴� �κ�
            {
                delete(start);
                program_exit();
                is_program_exit = 1;

                break;
            }
            }
            break;


            return;
        }
    }
}

void program_exit()
{

}

