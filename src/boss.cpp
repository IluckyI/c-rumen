#include "../inc/boss.h"




Boss::Boss(int id,string name,int deptid)
{
    this->m_id=id;
    this->m_name=name;
    this->m_deptid=deptid;
}

void Boss::show_info()
{
    cout<<"员工编号："<<this->m_id<<"\t"<<
    "员工姓名："<<this->m_name<<"\t"<<
    "职位："<<this->getDeptname()<<endl;
    cout<<"职责：把任务布置给经理"<<endl;


}

string Boss::getDeptname()
{
    string deptname="总裁";
    return deptname;
}