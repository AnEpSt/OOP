#include <iostream>
#include <vector>
#include <complex>
template<typename T> void print_vec(const std::vector<T>& vec){
  for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

template<typename T> T avg(T a, T b)
{
    return (a + b)/2;
}

template<typename T> std::vector<T> mult(std::vector<T>& vec, T value){
  for ( auto& element : vec) {
          element *= value;
      }
  return vec;
}
template<typename T> std::vector<T> inv(std::vector<T>& vec){
  for (auto& element : vec) {
          element *= -1;
      }
  return vec;
}
template<typename T> std::vector<T> plus(std::vector<T>& vec,T value){
  for ( auto& element : vec) {
          element += value;
      }
  return vec;
}

int main()
{
    std::vector<double> vec= {5,79,13,158,466}; // вроде как std::complex с с++26
    
    double x = avg(5, 4);
    // mult(vec,4545);
    std::cout<<x<<std::endl;
    
    print_vec(mult(vec,359.22545));
    print_vec(inv(vec));
    print_vec(plus(vec,348.56));
    
    // std::cout << std::endl;
    // std::cout<<res1 <<std::endl;
    // std::cout<<<<std::endl;
    // std::cout<<plus(vec,45854654)<<std::endl;
   
    
    
}
