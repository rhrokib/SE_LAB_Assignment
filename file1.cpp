#include <iostream>

void changeTheFile(){
    std::cout << "This file has been changed drastically" << std::endl;
}

int main(){
    std::cout << "This is file1" << std::endl;
    changeTheFile();
}