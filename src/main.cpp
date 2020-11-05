#include "../inc/main.h"
#include<iostream>
using namespace std;




int main()
{
    workManage menu;

    while(1)
    {    
        menu.show_menu();
        int select;
        cout<<"输入你的选择"<<endl;
        cin >>select;
        switch(select)
        {
            case 0:menu.exitsystem();break;//退出
            case 1: //添加人员信息
            {
                menu.add_Emp();
                break;
            }
            case 2://显示
            {
                menu.show_allinfo();
                break;
            }
            case 3://删除
            {
                break;
            }
            case 4://修改
            {
                break;
            }
            case 5://查找
            {
                menu.findEmp();
                break;
            }
            case 6://按序号排序
            {
                break;
            }
            case 7://清空文档
            {
                break;
            }
            default:
            {
                system("clear");
                break; 
            }
            
            
        }

    }


    return 0;
}