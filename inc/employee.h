#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__
#include <iostream>
#include <string>
#include "worker.h"


class Employee:public Worker
{
    public:
    Employee(int id,string name,int deptid);
    virtual void show_info();
    virtual string getDeptname();

};















#endif