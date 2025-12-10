#include<iostream>
#include"./head/utils.hpp"

int main(){
    int select = 0;
    Addressbook abs;
    while(true){
        system("clear");
        showmain();
        std::cout<<"请选择操作"<<std::endl;
        std::cin>>select;
        switch(select){
            case 1:
                addperson(&abs);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 0:
                std::cout<<"请按任意键继续"<<std::endl;
                std::cin.ignore();
                std::cin.get();
                return 0;
            default:
                break;
        }



    }


    std::cout<<"test"<<std::endl;
}