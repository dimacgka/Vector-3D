#include <iostream>
#include <queue>
#include <deque>
#include <cmath>
#include <vector>

using namespace std;

class Vector3d{
  private:
    int x;
    int y;
    int z;
  public:
    Vector3d () : x(1), y(1), z(1) { };
    Vector3d (int x_, int y_, int z_){x=x_; y=y_; z=z_;}
    int calLenght(){
      return (sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)));  //метод для вычисления длины вектора
    }
    ~Vector3d() { };
friend ostream& operator<< (ostream &out, const Vector3d &vector);
};

ostream& operator<< (ostream &out, const Vector3d &vector)
{    
    std::vector<int> vectors = {vector.x, vector.y, vector.z};
    int *ptr = &vectors[0];
    out << ptr;
    return out; 
}

template<typename T, typename Container=std::deque<T> >
class iterable_queue : public std::queue<T,Container>
{
public:
    typedef typename Container::iterator iterator;
    typedef typename Container::const_iterator const_iterator;

    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
    const_iterator begin() const { return this->c.begin(); }
    const_iterator end() const { return this->c.end(); }
};