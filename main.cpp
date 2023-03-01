#include <iostream>
#include <array>
using namespace std;

template<typename T, size_t S>

class Array{
  public:
    constexpr size_t size() const{ 
      return S;
    }
    T& operator[](size_t index){
      return m_Data[index];
    }
    const T& operator[](size_t index) const{
      return m_Data[index];
    }
    T* Data(){
      return m_Data;
    }
    const T* Data() const{
      return m_Data;
    }
  private:
    T m_Data[S];
};

int main(){
  Array<string, 5> data;
  data[0] = "In";
  data[1] = "C++";
  data[2] = "We";
  data[3] = "All";
  data[4] = "Love";
  for(size_t i = 0; i <data.size(); i++){
    cout << data[i] << endl;
  }
  return 0;
}