#include <iostream>
#include <vector>
template<typename T> T avg(T a, T b)
{
    return (a + b)/2;
}

template<typename T> void mult(std::vector<T>& vec, T value){
  for (const auto& element : vec) {
          element *= value;
      }
}
template<typename T> void inv(std::vector<T>& vec){
  for (const auto& element : vec) {
          element *= -1;
      }
}
template<typename T> void plus(std::vector<T>& vec,T value){
  for (const auto& element : vec) {
          element += value;
      }
}
int main(int argc, char* argv[])
{
    double x = avg(5, 4);
    std::vector vec= {5,564,45,456,654};
    mult(vec,4545);
    inv(vec);
    plus(vec,45854654);
}
