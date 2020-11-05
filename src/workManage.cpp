#include "../inc/workManage.h"


workManage::workManage()
{
    //初始化人数
    this->m_Empnum=0;
    //初始化数组
    this->m_Emparry=NULL;
}

workManage::~workManage()
{

}

void workManage::show_menu()
{
    cout<<"********************************"<<endl;
    cout<<"**********欢迎使用管理系统*******"<<endl;
    cout<<"**********0.退出管理系统*********"<<endl;
    cout<<"**********1.增加职工信息*********"<<endl;
    cout<<"**********2.显示职工信息*********"<<endl;
    cout<<"**********3.删除离职职工*********"<<endl;
    cout<<"**********4.修改职工信息*********"<<endl;
    cout<<"**********5.查找职工信息*********"<<endl;
    cout<<"**********6.按照编号排序*********"<<endl;
    cout<<"**********7.清空所有文档*********"<<endl;
    cout<<"********************************"<<endl;
    cout<<endl;
}

void workManage::exitsystem()
{
    cout<<"欢迎下次使用"<<endl;
    exit(0);
}

void workManage::show_allinfo()
{
    if(m_Empnum==0)
    {
        cout<<"无数据可查询"<<endl;
        return;
    }
    for(int i=0;i<m_Empnum;i++)
    {
        m_Emparry[i]->show_info();
    }
}

void workManage::add_Emp()
{
    cout<<"请输入需要添加的职工数:"<<endl;
    int num=0;
    cin>>num;
    if(num>0)
    {
        //计算新空间大小
        int newsize=this->m_Empnum+num;
        //开辟新空间
        Worker **newarry=new Worker*[newsize];
        //将原有数据存入新空间
        if(m_Emparry!=NULL)
        {
            for(int i=0;i<m_Empnum;i++)
            {
                newarry[i]=this->m_Emparry[i];
            }            
        }

        //添加新数据到新空间

        for(int i=0;i<num;i++)
        {
            int id;
            string name;
            int deptid;
            cout<<"请输入第"<<i+1<<"位新增的员工编号"<<endl;
            cin>>id;
            cout<<"请输入第"<<i+1<<"位新增的员工姓名"<<endl;
            cin>>name;
            cout<<"请输入第"<<i+1<<"位新增的员工职位代码"<<endl;
            cin>>deptid;
            Worker *worker=NULL;
            switch(deptid)
            {
                case 1://老板
                {
                    worker=new Boss(id,name,deptid);
                    
                }
                case 2://经理
                {
                    worker=new Manage(id,name,deptid);
                    
                }
                case 3://普通成员
                {
                    worker=new Employee(id,name,deptid);
                    
                }
                default:
                {
                    break;
                }
                
            }
            //插入到原数据拷贝完成后的后面
            newarry[this->m_Empnum+i]=worker;
            
        }

        //全部添加进新的空间中后
        //删除旧的空间，并把新空间赋值给原指针
        if(this->m_Emparry!=NULL)
        {
            delete [] this->m_Emparry;
            this->m_Emparry=NULL;
        }

        this->m_Emparry=newarry;
        this->m_Empnum=newsize;
        cout<<"成功添加了"<<num<<"位职员信息"<<endl;
    }
    else
    {
        cout<<"输入错误"<<endl;
    }
    
    
}


void workManage::deleteinfo()
{
    cout<<"*********************"<<endl;
    cout<<"****1.按姓名删除****"<<endl;
    cout<<"****2.按编号删除****"<<endl;
    cout<<"*********************"<<endl;





}

void workManage::findEmp()
{
    while(1)
    {      
        cout<<"*********************"<<endl;
        cout<<"****1.按姓名查找****"<<endl;
        cout<<"****2.按编号查找****"<<endl;
        cout<<"****3.退出查找******"<<endl;
        cout<<"*********************"<<endl;
        cout<<"请输入选项"<<endl;
        int select;
        cin>>select;
        switch (select)
        {
            case 1:
            {
                string name;
                cout<<"请输入要查找的名字"<<endl;
                cin>>name;
                for(int i=0;i<this->m_Empnum;i++)
                {
                    if(m_Emparry[i]->m_name==name)
                    {
                        m_Emparry[i]->show_info();
                        return;
                    }
                }
                cout<<"未查到该信息"<<endl;
                break;
            }
            case 2:
            {
                int id;
                cout<<"请输入要查找人的编号"<<endl;
                cin>>id;
                for(int i=0;i<this->m_Empnum;i++)
                {
                    if(m_Emparry[i]->m_id==id)
                    {
                        m_Emparry[i]->show_info();
                        return;
                    }
                }
                cout<<"未查到该信息"<<endl;
                break;
            }    
            case 3:
            {
                cout<<"正在返回上一级。。。。"<<endl;
                return;
            }
            default:
            {
                cout<<"输入错误"<<endl;
                break;;
            }
        }
    }

}