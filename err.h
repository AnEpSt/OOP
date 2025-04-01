#ifndef ERR.H
#define ERR_H
#include <iostream>
#include <exception>
class err:public exception{
    private:
        std::string err_message ="Исключений не обнаружено";
        int str_numb = 0;
    public: 
        err() = default
        err(const std::string& mes, int numb): err_message(mes), str_numb(numb){}




}
