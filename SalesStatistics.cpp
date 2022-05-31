/*
* Class : SalesStatistics
* Description:  SalesStatistics control class
* Created: 2022/5/31
* Author: B711169 ������
* mail: jul12230103@gmail.com
*/

#include "SalesStatistics.h"
#include "SalesStatisticsUI.h"
using namespace std;

void SalesStatistics::showStatistics(FILE* o_fp, User u)
{
	ProductCollection allList = u.getAllSalesCollection();
	// �ۼ���
	SalesStatisticsUI UI(FILE * o_fp, User u, ProductCollection list)
}