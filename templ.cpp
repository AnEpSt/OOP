#include <iostream>
#include <vector>
void print_vec(const std::vector<int>& vec){
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
    std::vector vec= {5,79,13,158,466};
    double x = avg(5, 4);
    // mult(vec,4545);
    std::cout<<x<<std::endl;
    
    print_vec(mult(vec,796));
    print_vec(inv(vec));
    print_vec(plus(vec,798));
    
    // std::cout << std::endl;
    // std::cout<<res1 <<std::endl;
    // std::cout<<<<std::endl;
    // std::cout<<plus(vec,45854654)<<std::endl;
   
    
    
}
