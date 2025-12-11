#include"../head/utils.hpp"

void showmain(){
    std::cout<<"**********     通讯录     **********"<<std::endl;
    std::cout<<"**********  1.添加联系人  **********"<<std::endl;
    std::cout<<"**********  2.显示联系人  **********"<<std::endl;
    std::cout<<"**********  3.删除联系人  **********"<<std::endl;
    std::cout<<"**********  4.查找联系人  **********"<<std::endl;
    std::cout<<"**********  5.修改联系人  **********"<<std::endl;
    std::cout<<"**********  6.清空联系人  **********"<<std::endl;
    std::cout<<"**********  0.退出通讯录  **********"<<std::endl;
}

void addperson(Addressbook* abs){
    if(abs->m_size==MAX){
        std::cout<<"通讯录超限，重新操作"<<std::endl;
        return;
    }
    std::string name;
    std::cout<<"输入姓名"<<std::endl;
    std::cin>>name;
    abs->p_arrary[abs->m_size].m_name=name;

    std::string sex;
    std::cout<<"输入性别"<<std::endl;
    std::cin>>sex;
    abs->p_arrary[abs->m_size].m_sex=sex;

    int age;
    std::cout<<"输入年龄"<<std::endl;
    std::cin>>age;
    abs->p_arrary[abs->m_size].m_age=age;

    std::string number;
    std::cout<<"输入号码"<<std::endl;
    std::cin>>number;
    abs->p_arrary[abs->m_size].m_number=number;

    abs->m_size += 1;
    std::cout<<"成功添加，按任意键回到主页"<<std::endl;
    std::cin.ignore();
    std::cin.get();
}
void displayperson(Addressbook* abs){
    if(abs->m_size==0){
        std::cout<<"当前通讯录为空"<<std::endl;
        return;
    }
    for(int i=0;i<abs->m_size;i++){
        std::cout<<"Name:"<<abs->p_arrary[i].m_name<<"\t";
        std::cout<<"Age:"<<abs->p_arrary[i].m_age<<"\t";
        std::cout<<"Sex:"<<abs->p_arrary[i].m_sex<<"\t";
        std::cout<<"Number:"<<abs->p_arrary[i].m_number<<"\t";
        std::cout<<std::endl;
    }
    std::cout<<"显示成功，按任意键回到主页"<<std::endl;
    std::cin.ignore();
    std::cin.get();
}