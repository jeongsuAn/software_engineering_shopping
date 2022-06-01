// ��� ����
#include <iostream>
#include <string>
#include "MainControl.h"
#include "MainControlUI.h"
#include "Start.h"
#include "StartUI.h"
#include "User.h"
#include "UserList.h"
#include "ProductPayment.h"
#include "CheckPurchaseHistory.h"
#include "Satisfaction.h"
#include "ProductPayment.h"


// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
void doTask(FILE* in_fp, FILE* out_fp);
void join();
void buy(FILE *o_fp, User u, Product p);
void checkHistory(User u, FILE *out_fp);
void AssessSatisfaction(User u, FILE *out_fp);
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
                
                start->loginShop();
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

        case 4:
            switch (menu_level_2)
            {
                case 2: // 4.2. ��ǰ ����
                {
                    buy(out_fp, u, p);  // ��� ���� ������, ���� �α��ε� ����, �˻��� ��ǰ
                    break;
                }
                case 3: // 4.3. ��ǰ ���� ���� ��ȸ
                {   
                    // �Է� ���� : �Է°� ����

                    // ��� ����
                    checkHistory(u, out_fp);
                    break;
                }
                case 4: // 4.4. ��ǰ ���Ÿ����� ��
                {   
                    AssessSatisfaction(u, out_fp);
                    break;
                }
            }



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


        }
    }
        return;
}

    void program_exit(){
        
        
    }


void buy()
{
    // �Է� ���� : �Է°� ����

    // ��� ����
    ProductPayment(out_fp, u, p);   // ��� ���� ������, ���� �α��ε� ����, ������ �˻��� ��ǰ
}

void checkHistory(User u, FILE *out_fp)
{
    // �Է� ���� : �Է°� ����

    // ��� ����
    CheckPurchaseHistory(u, out_fp);    // ���� �α��ε� ����, ��� ���� ������
}

void AssessSatisfaction(User u, FILE *out_fp)
{
    string productName;
    int score;

   // �Է� ���� : ��ǰ��, ���Ÿ������� ���Ϸκ��� ����
   fscanf(in_fp, "%s %d", productName, &score);

    // ��� ����
    Satisfaction(u, productName, score, out_fp);  // ���� �α��ε� ����, �Է¹��� ��ǰ��
}