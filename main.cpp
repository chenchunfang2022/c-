/*
#include <stdio.h>
int main(){
    printf("hello world\n");
    return 0;
    
}
*/


/*
// ������������������������ֵ���ݣ���ַ����
// ����
// 1 ֵ����
void mySwap01(int a, int b)
{
    int temp = a ;
    a = b ;
    b = temp ;
}
// 2 ��ַ����
void mySwap02(int *a, int *b){
    int temp = *a ;
    *a = *b ;
    *b = temp ;
}
// 3 ���ô���
void mySwap03(int &a, int &b){
    int temp = a ;
    a = b ;
    b = temp ;
}
*/

// ******Ӧ������������ֵ******
/*
// 1 ��Ҫ���ؾֲ�����������,������
int &test01(){
    int a = 10;
    return a;
}
//2 �����ķ���ֵ�����ã������ĵ��ÿ�����Ϊ��ֵ
int &test02(){
    // ��̬��������ȫ��������ϵͳ�ͷ�
    static int a = 30;
    return a;
}
//3 ���õı�����ָ�볣����ָ���ָ���ܸı�
//  int &ref =a;  �൱�� int * const ref = a;
*/
//***********��������*****************
//��������ͬ�����߸����Բ�����ͬ��Ӧ����������
//1 ͬһ����������ͬ 2.����������ͬ  3.�����Ĳ������Ͳ�ͬ�������ͬ��˳��ͬ
//4 ����ֵ��ͬ������Ϊ�������ص�����
// void func(){
//     cout << "func �ĵ���" << endl;
// }
// void func(int a){
//     cout << "func( int a) �ĵ���" << endl;
// }
// void func(int a, double b){
//     cout << "func(int a, double b) �ĵ���" << endl;
// }
// void func(double a, int b){
//     cout << "func(double a, int b) �ĵ���" << endl;
// }
//****************��װ���̳У���̬**********************
//*****************��Ͷ���****************************
//�������Ժ���Ϊ
//���һ��Բ�࣬���ܳ�  2 * PI * �뾶
// double PI = 3.14;
// class Circle{
// public :
//     //����Ȩ��    
//     //����,�뾶
//     int m_r;
//     //��Ϊ,�ܳ�
//     double caculateZC(){
//         return 2 * PI * m_r;
//     }
    
// };
// ���һ��ѧ����
// class Student{
// public:
//     //����
//     string m_Name; //����
//     int m_Id;
//     //��Ϊ
//     //��ʾ������ѧ��
//     void shouStudent(){
//         cout << "����  "<< m_Name << "\nѧ��  "<< m_Id << endl;
//     }
//     //����������
//     void setName(string name){
//         m_Name = name ;
//     }
// };
// ����Ȩ��  
// public  �����ⶼ���Է���
// protected ���ڿ��Է��ʣ����ⲻ���Է��� ,������Է��ʸ���
// private   ���ڿ��Է��ʣ����ⲻ���Է���
// class Person{
// public :
//     string m_Name;  //����
// protected :
//     string m_Car ;  //����
// private :
//     int    Password;//mima
// };
//************��ָ����ó�Ա����*********************
// class Person{
// public :
//     void showClassname(){
//         cout << "this is person class" << endl;
//     }
//     void  showPersonAge(){
//         //��ָ�룬û�����ԣ�ֱ�ӷ���
//         if(this == NULL){
//             return;
//         }
//         cout << "age = "<< m_Age <<endl ;
//     }
//     int m_Age;
// };
// void test01(){
//     // �����ָ�룬���Է��ʳ�Ա����
//     Person *p = NULL;
//     p->showClassname();
//     p->showPersonAge();

// }
// ***********consta ���γ�Ա����*************
// // ������?????????
// class Person{
// public :
//     //this ������ָ�볣��
//     //�ڳ�Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ�����޸�
//     void showPerson()  {
//         m_B = 100 ;
//     }

//     int m_Age;
//     mutable int m_B;  //������������mutable��Ҳ�����޸�
// };
// // ������
// void test02(){
//     const Person p;
//     //p.m_Age = 100;
//     p.m_B = 100;
// }
// *******************���캯������������*************************

// class Person{
// public :
// // 1 ��д����ֵ��Ҳ����void
// // 2 ��������������ͬ
// // 3 �����в�������������
// // 4 �ڴ��������ʱ���Զ�����ֻ����һ��
// // ���캯�����г�ʼ��
//     Person(){
//         cout << "Peson ���캯���ĵ���" << endl;
//     }
// // 1 ��д����ֵ��Ҳ����void����~
// // 2 ��������������ͬ
// // 3 �������в���������������
// // 4 �ڶ������ٵ�ʱ��ֻ����һ��
// // ��������
//     ~Person(){
//         cout << "Peson ���������ĵ���" << endl;
//     }

// };


#include <iostream>
#include <string>
//#include <ctime>
using namespace std;
class Person{
public :
    // �޲ι���
    Person(){
        cout << "Peson �޲ι��캯���ĵ���" << endl;
    }
    // �вι���
    Person(int a){
        age = a;
        cout << "Peson �вι��캯���ĵ���" << endl;
    }
    // �������캯��
    Person(const Person &p){
        age  = p.age;
        cout << "Peson �������캯���ĵ���" << endl;
    }
    ~Person(){
        cout << "Peson ���������ĵ���" << endl;
    }
    int age;
};


// void test01(){
//     Person p;
// }
// void test01(){
//     //���ŷ�
//     // Person p1 ;   //Ĭ�Ϲ��캯������
//     // Person p2(10);//�вι��캯������
//     // Person p3(p2);//�������캯������
//     //ע������
//     //����Ĭ�Ϲ��캯��ʱ����Ҫ�ӣ���
//     // cout << "p2 ������Ϊ" << p2.age << endl;
//     // cout << "p3 ������Ϊ" << p3.age << endl;
//     // ����������Ϊ�����溯����������������Ϊ�ڴ�������
//     //Person p1() ;  
//     //��ʾ��
//     Person p1;
//     Person p2 = Person(10);
//     Person p3 = Person(p3);
//     // Person(10);          //��������
//     // cout << "aaaaaaaaaaa" << endl;
//     // ע��2��Ҫ���ÿ������캯����ʼ����������
//     //Person(p3);  


// }
//    io�˲������������ν����ͬ���ض�ȡֵ�����򷵻ش���

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
//   io�˲�����
//   ÿ�ζ�ȡio���Σ�����ȡ5�Σ����ζ�����ͬ���񣬶�����ȷ
ioValue pinFliter(){
    int i,j;
    uint8_t temp[3] = {1 , 1,  0 };
    ioValue temp1;
    for( i = 0 ; i < 5 ; i++ ){
        //��ȡ����ioֵ
        for( j = 0; j < 3 ; j++ ){               
            // temp[j] = 1;
        }
        //�Ƿ�ȫ0
        if((temp[0] ==0) && ( temp[1] == 0) && (temp[2]== 0))
            temp1 = valueZero ;
        //�Ƿ�ȫ1
        else if((temp[0] ==1) && (temp[1] == 1) && (temp[2]== 1))
            temp1 = valueOne ;
        //��ë��
        else    temp1 = valueFault;
        if( temp1 !=  valueFault) break ;
    }
    return temp1 ;
}
int  main(){
    // test01();
    // Person p;
//  ��ָ�����
//  test02();
    uint8_t a ;
    a = pinFliter();
    cout << "io�˲�������........" << endl;
    cout <<"��������" << (int) a << endl;
 //   system("pause");
    return 0;
}









//    ��������
//    func(3.14);
//    func(10);
//    func(10,3.14);
//    func(3.14,10);
//    ��Ķ���ʵ����������һ������
//     double aaa;
//     Circle c1;
//     c1.m_r  = 10 ;
//    cout  << "Բ���ܳ�Ϊ  " <<    c1.m_r<< c1.caculateZC() << endl;
    //����һ������
    // Student s1;
    // // s1.m_Name = "����" ;
    // s1.setName("����");
    // s1.m_Id    =  10 ;
    // // ��ʾѧ����Ϣ
    // s1.shouStudent();
   
   
   
   
   
   
   
   
   
   
   
   
    // ����������������ʵ���βο�������ʵ�Σ�
    // ��������ֵ���ݣ���ַ����
    // ����
    // ֵ���� 

    //int a = 10 ;
    //int b = 20 ;
    //mySwap01( a , b);      //ֵ���ݣ��ββ��ܸı�ʵ��
    //mySwap02( &a, &b);     //��ַ���ݣ��βο�������ʵ��
    //mySwap03( a , b);        //���ô��ݣ��βο�������ʵ�Σ����Բ���ָ��
    // int &ref = test02();
    // cout << "ref="<< ref<< endl;
    // test02() = 1000;
    // cout << "ref="<< ref<< endl;
/*  
    // ���õĺ�������������
    // a,b��ͬ��Ӧһ���ڴ� 

    // ���ñ����ʼ������ʼ����ɺ��ܸı�
    int a = 10;
    int &b = a;
    b = 20;
    cout << a << b << endl;
*/
 /*
    // whileѭ�����
    //����ϵͳ��ǰʱ�����������
    //srand(unsigned int)time(NULL);
    int num = rand() % 100 + 1     ;    //����1-100�������
    cout << num << endl;
    int value = 0;                      //�����������
    while (1)
    {
       cin >> value ;
       if(value > num){
           cout << "�²����" << endl;
       }else if(value < num){
           cout << "�²��С" << endl;
       }else{
           cout << "��¶���" << endl;
           break;
       }
    }
    */

    /*
    // switch ���
    cout << "�����Ӱ���"<<endl;
    int score = 0;
    cin >> score;
    cout << "����ķ���Ϊ" << score << endl;
    switch (score)
    {
    case 10:
        cout << "����Ϊ�Ǿ����Ӱ"<< endl;
        break;
    case 9:
        cout << "����Ϊ�Ǿ����Ӱ"<< endl;
        break;
    case 8:
        cout << "����Ϊ��Ӱ�ǳ���"<< endl;
        break;
    case 7:
        cout << "����Ϊ��Ӱһ��"<< endl;
        break;
    default:
        cout << "����Ϊ��Ӱ����Ƭ"<< endl;
        break;
    }
    */ 
 /*   
    //��Ŀ�����
    int a = 10;
    int b = 20;
    int c = 0;
    // ���ر���
    ( a > b ? a : b) = 100 ;
    c = ( a > b ? a : b);
    cout << c << endl;*/
 /*   
    // �ṹָ��
    struct student{
        string name;   //����
        int    age;    //����
        int    scores; //����
    };
    struct  student s ={"С��", 18,90};
    student* p = &s ;
    cout << "����:" << p->name <<"\n����:" << p->age << "\n����:" << p->scores << "\n"<< endl;*/


















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