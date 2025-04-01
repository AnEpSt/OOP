#ifndef REMIX_H
#define REMIX_H
#include <ctime>
#include <iostream>
#include "music.h"
class remix:public music{
private:
    std::string genre_ = "phonk";
    std::string feat_  = "-";

public:
    remix() = default;
    remix(const std::string& name,const std::string& genre,const std::string& feat):music(name), genre_(genre),feat_(feat){}
    void setgenre(const std::string& genre) {
        genre_ = genre;
    }
    void setfeat(const std::string& feat) {
        feat_ = feat;
    }
    const std::string& genre() const {
        return genre_;
    }
    const std::string& feat() const {
        return feat_;
    }
};
#endif // REMIX_H
