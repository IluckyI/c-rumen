#ifndef __MANAGE_H__
#define __MANAGE_H__
#include <iostream>
#include <string>
#include "worker.h"


class Manage:public Worker
{
    public:
    Manage(int id,string name,int deptid);
    virtual void show_info();
    virtual string getDeptname();

};














#endif