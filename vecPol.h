#ifndef VECPOL_H
#define VECPOL_H
#include <iostream>
class vecPol {
  private: 
    int length_ = 0;
    double phi_ = 0;  
  public:
    vecPol (int length, double phi):length_(length),phi_(phi) {}
    vecPol() = default;
    vecPol operator + (const vecPol& vec) const{ //имеено для возврата объекта класса
          return vecPol{length_ + vec.length_, phi);
    }
    vecPol operator - (const vecPol& vec) const {
          return vecPol{length_ - vec.length_, phi);
    }
    bool operator < (const vecPol& vec) const{
          return ((length_ < vec.length_) && (phi_< vec.phi_);
    }
    bool operator > (const vecPol& vec) const{
        return ((length_ > vec.length_) && (phi_> vec.phi_);
    }
    void print_vec(){
        std::cout<<"length= "<<vecPol.length_ <<std::endl<<"angle= "<<std::vecPol.phi<<endl;
    }
};

#endif
