#ifndef MUSIC_H
#define MUSIC_H

#include <iostream>
#include <vector>
#include <ctime>
class music {
private:
    std::string name_;
    std::string author_;
    int year_;
    std::string favorit_;
    int proslushivanie_;
public:
    music() {
        name_ = "-";
        author_ = "Unknown";
        year_ = 2024;
        favorit_ = "not favorit";
        proslushivanie_ = 1;
    }
    music(const std::string& name, int year, int proslushivanie, const std::string& author) {
        name_ = name;
        author_ = author;
        year_ = year;
        favorit_ = "not favorit";
        proslushivanie_ = proslushivanie;
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
