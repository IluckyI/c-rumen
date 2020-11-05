#ifndef __BOSS_H__
#define __BOSS_H__
#include <iostream>
#include <string>
#include "worker.h"


class Boss:public Worker
{
    public:
    Boss(int id,string name,int deptid);
    virtual void show_info();
    virtual string getDeptname();

};














#endif