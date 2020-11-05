#include "../inc/manage.h"




Manage::Manage(int id,string name,int deptid)
{
    this->m_id=id;
    this->m_name=name;
    this->m_deptid=deptid;
}

void Manage::show_info()
{
    cout<<"员工编号："<<this->m_id<<"\t"<<
    "员工姓名："<<this->m_name<<"\t"<<
    "职位："<<this->getDeptname()<<endl;
    cout<<"职责：完成老板的任务并下发任务交给员工"<<endl;


}

string Manage::getDeptname()
{
    string deptname="经理";
    return deptname;
}