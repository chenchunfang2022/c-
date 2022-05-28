/*
#include <stdio.h>
int main(){
    printf("hello world\n");
    return 0;
    
}
*/


/*
// 引用做函数参数，参数包含值传递，地址传递
// 交换
// 1 值传递
void mySwap01(int a, int b)
{
    int temp = a ;
    a = b ;
    b = temp ;
}
// 2 地址传递
void mySwap02(int *a, int *b){
    int temp = *a ;
    *a = *b ;
    *b = temp ;
}
// 3 引用传递
void mySwap03(int &a, int &b){
    int temp = a ;
    a = b ;
    b = temp ;
}
*/

// ******应用做函数返回值******
/*
// 1 不要返回局部变量的引用,错误案例
int &test01(){
    int a = 10;
    return a;
}
//2 函数的返回值是引用，函数的调用可以作为左值
int &test02(){
    // 静态变量存在全局区，由系统释放
    static int a = 30;
    return a;
}
//3 引用的本质是指针常量，指针的指向不能改变
//  int &ref =a;  相当于 int * const ref = a;
*/
//***********函数重载*****************
//函数名相同，调高复用性参数不同，应满足条件，
//1 同一个作用域相同 2.函数名称相同  3.函数的参数类型不同或个数不同或顺序不同
//4 返回值不同不能作为函数重载的条件
// void func(){
//     cout << "func 的调用" << endl;
// }
// void func(int a){
//     cout << "func( int a) 的调用" << endl;
// }
// void func(int a, double b){
//     cout << "func(int a, double b) 的调用" << endl;
// }
// void func(double a, int b){
//     cout << "func(double a, int b) 的调用" << endl;
// }
//****************封装，继承，多态**********************
//*****************类和对象****************************
//包含属性和行为
//设计一个圆类，求周长  2 * PI * 半径
// double PI = 3.14;
// class Circle{
// public :
//     //访问权限    
//     //属性,半径
//     int m_r;
//     //行为,周长
//     double caculateZC(){
//         return 2 * PI * m_r;
//     }
    
// };
// 设计一个学生类
// class Student{
// public:
//     //属性
//     string m_Name; //姓名
//     int m_Id;
//     //行为
//     //显示姓名和学号
//     void shouStudent(){
//         cout << "姓名  "<< m_Name << "\n学号  "<< m_Id << endl;
//     }
//     //给姓名复制
//     void setName(string name){
//         m_Name = name ;
//     }
// };
// 访问权限  
// public  类内外都可以访问
// protected 类内可以访问，类外不可以访问 ,子类可以访问父类
// private   类内可以访问，类外不可以访问
// class Person{
// public :
//     string m_Name;  //姓名
// protected :
//     string m_Car ;  //汽车
// private :
//     int    Password;//mima
// };
//************空指针调用成员函数*********************
// class Person{
// public :
//     void showClassname(){
//         cout << "this is person class" << endl;
//     }
//     void  showPersonAge(){
//         //空指针，没有属性，直接返回
//         if(this == NULL){
//             return;
//         }
//         cout << "age = "<< m_Age <<endl ;
//     }
//     int m_Age;
// };
// void test01(){
//     // 定义空指针，可以访问成员函数
//     Person *p = NULL;
//     p->showClassname();
//     p->showPersonAge();

// }
// ***********consta 修饰成员函数*************
// // 常函数?????????
// class Person{
// public :
//     //this 本质是指针常量
//     //在成员函数后面加const，修饰的是this指向，让指针指向的值也不能修改
//     void showPerson()  {
//         m_B = 100 ;
//     }

//     int m_Age;
//     mutable int m_B;  //特殊声明，加mutable，也可以修改
// };
// // 常对象
// void test02(){
//     const Person p;
//     //p.m_Age = 100;
//     p.m_B = 100;
// }
// *******************构造函数和析构函数*************************

// class Person{
// public :
// // 1 不写返回值，也不用void
// // 2 函数名称与类相同
// // 3 可以有参数，可以重载
// // 4 在创建对象的时候，自动调用只调用一次
// // 构造函数进行初始化
//     Person(){
//         cout << "Peson 构造函数的调用" << endl;
//     }
// // 1 不写返回值，也不用void，加~
// // 2 函数名称与类相同
// // 3 不可以有参数，不可以重载
// // 4 在对象销毁的时候，只调用一次
// // 析构函数
//     ~Person(){
//         cout << "Peson 析构函数的调用" << endl;
//     }

// };


#include <iostream>
#include <string>
//#include <ctime>
using namespace std;
class Person{
public :
    // 无参构造
    Person(){
        cout << "Peson 无参构造函数的调用" << endl;
    }
    // 有参构造
    Person(int a){
        age = a;
        cout << "Peson 有参构造函数的调用" << endl;
    }
    // 拷贝构造函数
    Person(const Person &p){
        age  = p.age;
        cout << "Peson 拷贝构造函数的调用" << endl;
    }
    ~Person(){
        cout << "Peson 析构函数的调用" << endl;
    }
    int age;
};


// void test01(){
//     Person p;
// }
// void test01(){
//     //括号法
//     // Person p1 ;   //默认构造函数调用
//     // Person p2(10);//有参构造函数调用
//     // Person p3(p2);//拷贝构造函数调用
//     //注意事项
//     //调用默认构造函数时，不要加（）
//     // cout << "p2 的年龄为" << p2.age << endl;
//     // cout << "p3 的年龄为" << p3.age << endl;
//     // 编译器会认为是下面函数的声明，不会认为在创建对象
//     //Person p1() ;  
//     //显示法
//     Person p1;
//     Person p2 = Person(10);
//     Person p3 = Person(p3);
//     // Person(10);          //匿名对象
//     // cout << "aaaaaaaaaaa" << endl;
//     // 注意2不要利用拷贝构造函数初始化匿名对象
//     //Person(p3);  


// }
//    io滤波函数，读三次结果相同返回读取值，否则返回错误

// ioValue pinFliter(){
//     uint8_t temp[3] = { 0, 1, 1};

//     // int i;
//     // for(i=0; i<3 ; i++){
//     //     temp[i] = 1;
//     // }
//     if((temp[0] ==0) && ( temp[1] == 0) && (temp[2]== 0))
//         return valueZero ;
//     if((temp[0] ==1) && (temp[1] == 1) && (temp[2]== 1))
//         return valueOne ;
//     return valueFault;
// }
enum  ioValue { valueZero, valueOne, valueFault} ; 
//   io滤波函数
//   每次读取io三次，最多读取5次，三次读书相同任务，读数正确
ioValue pinFliter(){
    int i,j;
    uint8_t temp[3] = {1 , 1,  0 };
    ioValue temp1;
    for( i = 0 ; i < 5 ; i++ ){
        //读取三次io值
        for( j = 0; j < 3 ; j++ ){               
            // temp[j] = 1;
        }
        //是否全0
        if((temp[0] ==0) && ( temp[1] == 0) && (temp[2]== 0))
            temp1 = valueZero ;
        //是否全1
        else if((temp[0] ==1) && (temp[1] == 1) && (temp[2]== 1))
            temp1 = valueOne ;
        //有毛刺
        else    temp1 = valueFault;
        if( temp1 !=  valueFault) break ;
    }
    return temp1 ;
}
int  main(){
    // test01();
    // Person p;
//  空指针测试
//  test02();
    uint8_t a ;
    a = pinFliter();
    cout << "io滤波测试中........" << endl;
    cout <<"输出结果是" << (int) a << endl;
 //   system("pause");
    return 0;
}









//    函数重载
//    func(3.14);
//    func(10);
//    func(10,3.14);
//    func(3.14,10);
//    类的对象实例化，创建一个对象
//     double aaa;
//     Circle c1;
//     c1.m_r  = 10 ;
//    cout  << "圆的周长为  " <<    c1.m_r<< c1.caculateZC() << endl;
    //创建一个对象
    // Student s1;
    // // s1.m_Name = "张三" ;
    // s1.setName("张三");
    // s1.m_Id    =  10 ;
    // // 显示学生信息
    // s1.shouStudent();
   
   
   
   
   
   
   
   
   
   
   
   
    // 引用做函数参数，实现形参可以修饰实参；
    // 参数包含值传递，地址传递
    // 交换
    // 值传递 

    //int a = 10 ;
    //int b = 20 ;
    //mySwap01( a , b);      //值传递，形参不能改变实参
    //mySwap02( &a, &b);     //地址传递，形参可以修饰实参
    //mySwap03( a , b);        //引用传递，形参可以修饰实参，可以不用指针
    // int &ref = test02();
    // cout << "ref="<< ref<< endl;
    // test02() = 1000;
    // cout << "ref="<< ref<< endl;
/*  
    // 引用的含义给变量起别名
    // a,b共同对应一块内存 

    // 引用必须初始化，初始化完成后不能改变
    int a = 10;
    int &b = a;
    b = 20;
    cout << a << b << endl;
*/
 /*
    // while循环语句
    //利用系统当前时间生成随机数
    //srand(unsigned int)time(NULL);
    int num = rand() % 100 + 1     ;    //生成1-100的随机数
    cout << num << endl;
    int value = 0;                      //玩家输入数据
    while (1)
    {
       cin >> value ;
       if(value > num){
           cout << "猜测过大" << endl;
       }else if(value < num){
           cout << "猜测过小" << endl;
       }else{
           cout << "你猜对了" << endl;
           break;
       }
    }
    */

    /*
    // switch 语句
    cout << "请给电影打分"<<endl;
    int score = 0;
    cin >> score;
    cout << "您打的分数为" << score << endl;
    switch (score)
    {
    case 10:
        cout << "您认为是经典电影"<< endl;
        break;
    case 9:
        cout << "您认为是经典电影"<< endl;
        break;
    case 8:
        cout << "您认为电影非常好"<< endl;
        break;
    case 7:
        cout << "您认为电影一般"<< endl;
        break;
    default:
        cout << "您认为电影是烂片"<< endl;
        break;
    }
    */ 
 /*   
    //三目运算符
    int a = 10;
    int b = 20;
    int c = 0;
    // 返回变量
    ( a > b ? a : b) = 100 ;
    c = ( a > b ? a : b);
    cout << c << endl;*/
 /*   
    // 结构指针
    struct student{
        string name;   //姓名
        int    age;    //年龄
        int    scores; //分数
    };
    struct  student s ={"小明", 18,90};
    student* p = &s ;
    cout << "姓名:" << p->name <<"\n年龄:" << p->age << "\n分数:" << p->scores << "\n"<< endl;*/


















/*
int main()
{
    int a,d;
    int b,c,i;
    a = 0;
    b = 20;
    c = a + b;
    cout << "Hello Vscode\n" << b << "\n" << c << "\n"<< a << endl;

    return 0;
}
/*
void filtInDat(int now, InBufInf *pInBuf, int *pRslt)
      {
        int i;
        int tmp1;
        int tmp2;
        int tmp3;

        tmp1 = tmp2 = now;                           //
        for (i = 0; i < pInBuf->siz; i++) {          // size=3
                tmp1 &= pInBuf->pBuf[i];             // AND, get mininum value(include least "1")
                tmp2 |= pInBuf->pBuf[i];             // OR, get maximun value(include most "1")
        }
        tmp3 = tmp1;                                // save result
   
        tmp1 = ~tmp1;                                       
        tmp1 &= tmp2;                              // get the difference(where "1" in maximun value and "0" in mininum value)

        tmp1 &= *pRslt;                            // compare the difference with *pRslt
        *pRslt = tmp1 | tmp3;                      // get the new result

        /*-----------------------------------------------------
         update input buffer
        -----------------------------------------------------*/
     /*   pInBuf->pBuf[pInBuf->idx] = now;        //
        if (++pInBuf->idx >= pInBuf->siz) pInBuf->idx = 0;
      }



     typedef struct {
        int *pBuf;        //
        int siz;                                //
        int idx;                                //
   } InBufInf;
   */