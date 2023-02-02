// 1. Define a class Complex to represent a complex number. Declare instance member
// variables to store real and imaginary part of a complex number, also define instance
// member functions to set values of complex number and print values of complex number
// #include <iostream>
// using namespace std;
// class Complex
// {
//     int a,b;
//     public:
//     Complex(int x,int y)
//     {
//         a = x,b = y;
//     }
//     void print()
//     {
//         cout<<"Number = "<<a<<" + "<<b<<"i"<<endl;
//     }
// };
// int main()
// {
//     Complex c(1,2);
//     c.print();
//     return 0;
// }

// 2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
// number of instance member variables and also define instance member functions to set
// values for time and display values of time.
// #include <iostream>
// using namespace std;
// class Time
// {
//     int h,m,s;
//     public:
//     void set()
//     {
//         cout<<"Enter Hour:: "<<endl;
//         cin>>h;
//         cout<<"Enter min:: "<<endl;
//         cin>>m;
//         cout<<"Enter second:: "<<endl;
//         cin>>s;
//     }
//     void display()
//     {
//         cout<<h<<" hr "<<m<<" min "<<s<<" sec "<<endl;
//     }
// };
// int main()
// {
//     Time t;
//     t.set();
//     t.display();
//     return 0;
// }

// 3. Define a class Factorial and define an instance member function to find the Factorial of a
// number using class.
// #include <iostream>
// using namespace std;
// class Factorial
// {
//     int n,fact;
//     public:
//     Factorial(int a)
//     {
//         n = a;
//     }
//     void fact()
//     {
//         fact = 1;
//         for (int i = 1; i <= n; i++)
//         {
//             fact = fact * i;
//         }
//         cout<<"Factorial = "<<fact<<endl;
//     }
// };
// int main()
// {
//     Factorial f(5);
//     f.fact();
//     return 0;
// }

// 4. Define a class LargestNumber and define an instance member function to find the
// Largest of three Numbers using the class.
// #include <iostream>
// using namespace std;
// class LargestNumber
// {
//     int a,b,c;
//     public:
//     LargestNumber(int x,int y,int z)
//     {
//         a = x,b = y,c = z;
//     }
//     void chcek_Largest()
//     {
//         if (a > b)
//         {
//             if (a > c)
//             {
//                 cout<<a<<" is largest.";
//             }
//             else
//             {
//                 cout<<c<<" is largest.";
//             }
//         }
//         else
//         {
//             if (b > c)
//             {
//                 cout<<b<<" is largest.";
//             }
//             else
//             {
//                 cout<<c<<" is largest.";
//             }
//         }
//     }
// };
// int main()
// {
//     LargestNumber l(1,3,5);
//     l.chcek_Largest();
//     return 0;
// }

// 5. Define a class ReverseNumber and define an instance member function to find Reverse
// of a Number using class.
// #include <iostream>
// using namespace std;
// class ReverseNumber
// {
//     int n,res;
//     public:
//     ReverseNumber(int x)
//     {
//         n = x;
//     }
//     void FindReverse()
//     {
//         res = 0;
//         while (n != 0)
//         {
//             res = (res*10 + n%10);
//             n = n/10;
//         }
//         cout<<"Reverse Number = "<<res<<endl;;
//     }
// };
// int main()
// {
//     ReverseNumber r(123);
//     r.FindReverse();
//     return 0;
// }

// 6. Define a class Square to find the square of a number and write a C++ program to Count
// number of times a function is called.
// #include <iostream>
// using namespace std;
// static int count;
// class Square
// {
//     int n;
//     public:
//     Square(int x)
//     {
//         n = x;
//     }
//     void sqr()
//     {
//        count++;
//        n = n*n;
//        cout<<"Squre:: "<<n<<endl;
//     }
// };
// int Square :: count = 0;
// int main()
// {
//     Square s(4),s1(2);
//     s.sqr();
//     s1.sqr();
//     cout<<"No of Time Function is called:: "<<count;
//     return 0;
// }

// 7. Define a class Greatest and define instance member function to find Largest among 3
// numbers using classes.
//  #include <iostream>
//  using namespace std;
//  class Greatest
//  {
//      int a,b,c;
//      public:
//      Greatest(int x,int y,int z)
//      {
//          a = x,b = y,c = z;
//      }
//      void chcek_Largest()
//      {
//          if (a > b)
//          {
//              if (a > c)
//              {
//                  cout<<a<<" is largest.";
//              }
//              else
//              {
//                  cout<<c<<" is largest.";
//              }
//          }
//          else
//          {
//              if (b > c)
//              {
//                  cout<<b<<" is largest.";
//              }
//              else
//              {
//                  cout<<c<<" is largest.";
//              }
//          }
//      }
//  };
//  int main()
//  {
//      Greatest l(1,3,5);
//      l.chcek_Largest();
//      return 0;
//  }

// 8. Define a class Rectangle and define an instance member function to find the area of the
// rectangle.
// #include <iostream>
// using namespace std;
// class Rectangle
// {
//     int l,b,area;
//     public:
//     Rectangle(int len,int bret)
//     {
//         l = len,b = bret;
//     }
//     void Area()
//     {
//         area = l*b;
//         cout<<"Area = "<<area<<endl;
//     }
// };
// int main()
// {
//     Rectangle r(3,4);
//     r.Area();
//     return 0;
// }

// 9. Define a class Circle and define an instance member function to find the area of the
// circle.
//  #include <iostream>
//  using namespace std;
//  class Circle
//  {
//      float r,area;
//      public:
//      Circle(float radius)
//      {
//          r = radius;
//      }
//      void Area()
//      {
//          area = 3.14*r*r;
//          cout<<"Area = "<<area<<endl;
//      }
//  };
//  int main()
//  {
//      Circle r(3);
//      r.Area();
//      return 0;
//  }

// 10. Define a class Area and define instance member functions to find the area of the
// different shapes like square, rectangle , circle etc.
// #include <iostream>
// using namespace std;
// class Area
// {
//     int l, b, s;
//     double r;
// public:
//     Area(int side)
//     {
//         s = side;
//     }
//     Area(int len, int bre)
//     {
//         l = len, b = bre;
//     }
//     Area(double radius)
//     {
//         r = radius;
//     }
//     void Area_of_square()
//     {
//         cout << "Area = " <<(s * s) << endl;
//     }
//     void Area_of_rectangle()
//     {
//         cout << "Area = " << (l * b) << endl;
//     }
//     void Area_of_circle()
//     {
//         cout << "Area = " << 3.14 * (r * r) << endl;
//     }
// };
// int main()
// {
//     Area a(2),a1(2,3),a2(2.1);
//     a.Area_of_square();
//     a1.Area_of_rectangle();
//     a2.Area_of_circle();
//     return 0;
// }