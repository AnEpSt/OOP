#include <iostream>
#include <vector>
#include <ctime>
class music{
private:
    std::string name_;
    std::string author_;
    int year_;
    std::string favorit_;
    int proslushivanie_;
public:
    music() { //констрктор по умолчанию (НУ)
        name_ = "-";
        author_ = "Unknown";
        year_ = 2024;
        favorit_= "not favorit";
        proslushivanie_ = 1;
    }
    music(const std::string& name) { //констрктор по имени
        name_ = name;
        author_ = "Unknown";
        year_ = 2024;
        favorit_= "not favorit";
        proslushivanie_ = 1;
    }
    music(int year) { //констрктор по имени
        name_ = "-";
        author_ = "Unknown";
        year_ = year;
        favorit_= "not favorit";
        proslushivanie_ = 1;
    }
    //setter
    void setName (const std::string& name){
        name_=name;
    }
    void setAuthor (const std::string& author){
        author_=author;
    }
    void setYear(int year){
        year_=year;
    }
    void setfavorit(const std::string& favorit){
        favorit_=favorit;
    }
    void setprosl(int proslushivanie){
        proslushivanie_=proslushivanie;
    }
    //getter
    const std::string& name() const {
        return name_;
    }
    const std::string& author() const {
        return author_;
    }
    int year() const{
        return year_;
    }
    int proslushivanie() const{
        return proslushivanie_;
    }
    void print() const{
        std::cout<<"Name: "<<name_<<std::endl
                  <<"Author: "<<author_<<std::endl
                  <<"Year: " << year_<<std::endl
                  <<"Favorit "<< favorit_<<std::endl
                  <<"Proslushivanie " << proslushivanie_<<std::endl;

    }
};

int main()
{
    srand(time(0));
    music tr1;
    tr1.setName("APT");
    tr1.setAuthor("ROSE");
    tr1.setYear(2024);
    tr1.setfavorit("not favorit");
    tr1.setprosl(rand()%(10000000000-542655+1)+542655);
    std::vector<music> vec{music("Submarin"), music(1992)};
    vec.push_back(tr1);
    for (const auto& i :vec){
        i.print();
        std::cout<<std::endl;
    }
    return 0;
}
