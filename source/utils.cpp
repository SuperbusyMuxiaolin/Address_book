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
    std::cout<<"成功添加，按回车键回到主页"<<std::endl;
    // 等待回车
    std::cin.ignore();
    std::cin.get();
}
void displayperson(Addressbook* abs){
    if(abs->m_size==0){
        std::cout<<"当前通讯录为空，按回车键回到主页"<<std::endl;
        std::cin.ignore();
        std::cin.get();
        return;
    }
    for(int i=0;i<abs->m_size;i++){
        std::cout<<"Name:"<<abs->p_arrary[i].m_name<<"\t";
        std::cout<<"Age:"<<abs->p_arrary[i].m_age<<"\t";
        std::cout<<"Sex:"<<abs->p_arrary[i].m_sex<<"\t";
        std::cout<<"Number:"<<abs->p_arrary[i].m_number<<"\t";
        std::cout<<std::endl;
    }
    std::cout<<"显示成功，按回车键回到主页"<<std::endl;
    std::cin.ignore();
    std::cin.get();
}

// 判断通讯录是否为空
bool is_abs_empty(Addressbook* abs){
    return abs->m_size==0;
}

//返回找到的人的索引
int find_person_index(Addressbook* abs, std::string name){
    if (!is_abs_empty(abs)){
        for(int i=0;i<abs->m_size;i++){
            if(abs->p_arrary[i].m_name==name){
                return i;
            }
        }
        std::cout<<"查无此人"<<std::endl;
        return -1;
    }
    else{
        std::cout<<"通讯录为空"<<std::endl;
        return -1;
    }
}


void deleteperson(Addressbook* abs){
    std::string name;
    std::cout<<"请输入要删除的人"<<std::endl;
    std::cin>>name;
    int index = find_person_index(abs, name);
    if( index!=-1 ){
        for(int i=index; i<abs->m_size; i++){
            abs->p_arrary[i] = abs->p_arrary[i+1];
        }
        abs->m_size--;
        std::cout<<"删除成功，按回车键回到主页"<<std::endl;
        std::cin.ignore();
        std::cin.get();
        return;

    }
    std::cout<<"删除失败，按回车键回到主页"<<std::endl;
    std::cin.ignore();
    std::cin.get();
}

void findperson(Addressbook* abs){
    std::string name;
    std::cout<<"请输入要查找的人"<<std::endl;
    std::cin>>name;
    int index = find_person_index(abs, name);
    if(index!= -1){
        std::cout<<"Name:"<<abs->p_arrary[index].m_name<<"\t";
        std::cout<<"Age:"<<abs->p_arrary[index].m_age<<"\t";
        std::cout<<"Sex:"<<abs->p_arrary[index].m_sex<<"\t";
        std::cout<<"Number:"<<abs->p_arrary[index].m_number<<"\t";
        std::cout<<std::endl;
        std::cout<<"查找成功，按回车键回到主页"<<std::endl;
        std::cin.ignore();
        std::cin.get();
        return;
    }
    std::cout<<"查找失败，按回车键回到主页"<<std::endl;
    std::cin.ignore();
    std::cin.get();


}

void modifyperson(Addressbook* abs){
    std::string name;
    std::cout<<"请输入要修改的人"<<std::endl;
    std::cin>>name;
    int index = find_person_index(abs, name);
    if(index !=-1){
        std::cout<<"输入数字选择修改的内容\n1代表姓名,2代表性别,3代表年龄,4代表号码"<<std::endl;
        int choose=0;
        std::string name_modify;
        std::string sex_modify;
        int age_modify;
        std::string number_modify;
        while(true){
            std::cin>>choose;
            switch (choose){
                case 1:
                    std::cout<<"输入修改之后的姓名"<<std::endl;
                    std::cin>>name_modify;
                    abs->p_arrary[index].m_name=name_modify;
                    std::cout<<"修改成功，按回车键返回"<<std::endl; 
                    std::cin.ignore();
                    std::cin.get();      
                    return;
                case 2:
                    std::cout<<"输入修改之后的性别"<<std::endl;
                    std::cin>>sex_modify;
                    abs->p_arrary[index].m_sex=sex_modify;
                    std::cout<<"修改成功，按回车键返回"<<std::endl; 
                    std::cin.ignore();
                    std::cin.get();      
                    return;
                case 3:
                    std::cout<<"输入修改之后的年龄"<<std::endl;
                    std::cin>>age_modify;
                    abs->p_arrary[index].m_age=age_modify;
                    std::cout<<"修改成功，按回车键返回"<<std::endl; 
                    std::cin.ignore();
                    std::cin.get();      
                    return;
                case 4:
                    std::cout<<"输入修改之后的号码"<<std::endl;
                    std::cin>>number_modify;
                    abs->p_arrary[index].m_number=number_modify;
                    std::cout<<"修改成功，按回车键返回"<<std::endl; 
                    std::cin.ignore();
                    std::cin.get();      
                    return;
        
                default:
                    std::cout<<"请输入1,4之间的数字，按回车键继续"<<std::endl;
                    std::cin.ignore();
                    std::cin.get();   
                    break;
            }
        }
    }
    std::cout<<"修改失败，按回车键回到主页"<<std::endl;
    std::cin.ignore();
    std::cin.get();

}
void cleanperson(Addressbook* abs){
    abs->m_size=0;
    std::cout<<"清空成功，按回车键回到主页"<<std::endl;
    std::cin.ignore();
    std::cin.get();
}