#ifndef __WORKMANAGE_H__
#define __WORKMANAGE_H__
#include <iostream>
#include "worker.h"
#include "main.h"
using namespace std;

class workManage
{


    public:
    workManage();
    ~workManage();
    void show_menu();//显示菜单
    void exitsystem();//退出函数
    void add_Emp();//添加职员信息
    void show_allinfo();//显示所有信息
    void deleteinfo();//删除离职职员
    void findEmp();//查找某职员信息
    void changeinfo();//修改某职员信息
    void sort();//按序号进行排序（由小到大）
    void clear_info();//清空文档

    //记录文件中的人数
    int m_Empnum;
    //员工数组的指针,数组中每个元素都为worker* 类型
    Worker **m_Emparry;
    


};










#endif