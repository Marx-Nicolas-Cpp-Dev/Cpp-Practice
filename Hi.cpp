#include<iostream>
#include<string>

int main(){
    std::cout<<"Enter your name here: ";std::string name;getline(std::cin,name);
    std::cout<<"Your name is "<<name<<"\n";
    return 0;
}