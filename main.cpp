// ��� ����
#include <iostream>
#include <string>
#include "MainControl.h"
#include "MainControlUI.h"
#include "Start.h"
#include "StartUI.h"
#include "User.h"
#include "UserList.h"


// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
void doTask(FILE* in_fp, FILE* out_fp);
void join();
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
