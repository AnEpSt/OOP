#ifndef ERR.H
#define ERR_H
#include <iostream>
#include <exception>
class err:public exception{
    private:
        std::string err_message ="Исключений не обнаружено";
        int str_numb = 0;
    public: 
        err() = default;
        err(const std::string& mes, int str_err): err_message(mes), str_numb(str_err){}

        const char* what() const noexcept override {
              formatted_message = "\033[31m" + err_message + " (Строка " + std::to_string(str_numb) + ")\033[0m";
              return err_message.c_str();
        }
};
#endif
