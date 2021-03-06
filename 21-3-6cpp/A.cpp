#include"A.h"
template <class T>
A<T>::A(T name)
{
    this->name=name;
}
template <class T>
void A<T>::show()
{
    cout<<"name:"<<name<<endl;
}
