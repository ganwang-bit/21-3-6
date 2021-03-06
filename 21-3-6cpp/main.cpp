//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    cout << "Hello world!" << endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//template <class T>
//class A
//{
//public:
//    T m;
//};
//class B:public A<int>
//{
//
//};
//int main()
//{
//    B s1;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//template <class T>
//class A
//{
//    T m;
//};
//template <class T>
//class B:public A<T>
//{
//
//};
//int main()
//{
//    B <int>b;
//    return 0;
//}
//#include<iostream>
//#include<string>
//#include<typeinfo>
//using namespace std;
//template <class T>
//class A
//{
//public:
//    template <class T>
//    A(T name);
//    string name;
//};
//template <class T>
//A::A(T name)
//{
//    cout<<typeid(T).name()<<endl;
//    this->name=name;
//}
//int main()
//{
//    A("1");
//    return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//template <class T>
//class A
//{
//public:
//    T name;
//    A(T name);
//    void show();
//};
//template <class T>
//A<T>::A(T name)
//{
//    this->name=name;
//}
//template <class T>
//void A<T>::show()
//{
//    cout<<"name:"<<name;
//}
//int main()
//{
//    A<string>a("1") ;
//    a.show();
//    return 0;
//}
//#include"A.cpp"
//int main()
//{
//    A <string>a("1");
//    a.show();
//    return 0;
//}
//#include<iostream>
//using namespace std;
//#include<string>
//template <class T>
//class A;
//template <class T>
//void show(A<T>&p)
//{
//    cout<<"name:"<<p.name<<endl;
//}
//template <class T>
//class A
//{
//public:
//    A(T name){this->name=name;}
//    friend void show<>(A<T>&p);
//private:
//    T name;
//};
//int main()
//{
//    A <string>a("1");
//    show<string>(a);
//    return 0;
//}
