#include <iostream>
#include <queue>
#include <deque>
#include "vector.h"

using namespace std;

int main(){
  int x, y, z; //координаты вектора
  iterable_queue<Vector3d> queue1; //очередь из четной длины векторов
  iterable_queue<Vector3d> queue2; //очередь из нечетной длины векторов
  Vector3d *vectors[10]; //массив объектов
  for(int i=0; i<10; i++){
    int lenght = 0;
    cout << "Введите координаты для вектора a" << (i+1) <<endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "z = ";
    cin >> z;
    cout << endl;
    Vector3d a(x, y, z);
    vectors[i] = &a;
    lenght = vectors[i]->calLenght();
    if(lenght%2==0)
      queue1.push(a);
    else
      queue2.push(a);
  }
  Vector3d ptrbegin = *queue1.begin();
  Vector3d ptrend = *queue1.end();
  cout << "Указатели на начало и конец первой очереди" << endl;
  cout << &ptrbegin << endl;
  cout << &ptrend << endl;
  
  ptrbegin = *queue2.begin();
  ptrend = *queue2.end();
  cout << "Указатели на начало и конец второй очереди" << endl;
  cout << &ptrbegin << endl;
  cout << &ptrend << endl;

  return 0;
}