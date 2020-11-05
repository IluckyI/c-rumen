#include "../inc/employee.h"

Employee::Employee(int id,string name,int deptid)
{
    this->m_id=id;
    this->m_name=name;
    this->m_deptid=deptid;
}



void Employee::show_info()
{
    cout<<"员工编号："<<this->m_id<<"\t"<<
    "员工姓名："<<this->m_name<<"\t"<<
    "职位："<<this->getDeptname()<<endl;
    cout<<"职责：完成经理派发的任务"<<endl;



}

string Employee::getDeptname()
{
    string deptname="普通员工";
    return deptname;
}