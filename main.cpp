#include<iostream>
#include"./head/utils.hpp"

int main(){
    int select = 0;
    Addressbook abs;
    while(true){
        // 清屏
        system("clear");
        showmain();
        std::cout<<"请选择操作"<<std::endl;
        std::cin>>select;
        switch(select){
            case 1:
                addperson(&abs);
                break;
            case 2:
                displayperson(&abs);
                break;
            case 3:
                deleteperson(&abs);
                break;
            case 4:
                findperson(&abs);
                break;
            case 5:
                modifyperson(&abs);
                break;
            case 0:
                std::cout<<"请按回车键继续"<<std::endl;
                std::cin.ignore();
                std::cin.get();
                return 0;
            default:
                break;
        }



    }
}