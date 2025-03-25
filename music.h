#ifndef MUSIC_H
#define MUSIC_H

#include <iostream>
#include <vector>
#include <ctime>
class music {
private:
    std::string name_ = "-";
    std::string author_= "Unknown";
    int year_ = 2024;
    std::string favorit_ = "not favorit";
    int proslushivanie_ = 1;
public:
    music () = default;
    music(const std::string& name,const std::string& author, int year, int proslushivanie): name_(name),author_(author),year_(year), proslushivanie_(proslushivanie){
    }

    music(const std::string& name) {
        name_ = name;
    }
    //setter
    void setName(const std::string& name) {
        name_ = name;
    }
    void setAuthor(const std::string& author) {
        author_ = author;
    }
    void setYear(int year) {
        year_ = year;
    }
    void setfavorit(const std::string& favorit) {
        favorit_ = favorit;
    }
    void setprosl(int proslushivanie) {
        proslushivanie_ = proslushivanie;
    }
    //getter
    const std::string& name() const {
        return name_;
    }
    const std::string& author() const {
        return author_;
    }
    int year() const {
        return year_;
    }
    int proslushivanie() const {
        return proslushivanie_;
    }
};

#endif // MUSIC_H
