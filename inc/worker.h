#ifndef __WORKER_H__
#define __WORKER_H__
#include <iostream>
#include <string>

using namespace std;


//职工类基类（抽象类）
class Worker
{
    public:
    virtual void show_info()=0;
    virtual string getDeptname()=0;
    
    int m_id;
    string m_name;
    int m_deptid;
};

#endif