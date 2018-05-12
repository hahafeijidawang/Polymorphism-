#include <iostream>

using namespace std;

class Parent
{
public:
    Parent(int a) {

        this->a=a;
        cout<<"a"<<a<<endl;
    }
    //多态标志
 void print(){

        cout<<"Parent print()"<<a<<endl;

    }
  private:
    int a;
};
class child:public Parent
{
public:
    child(int b):Parent(10) {

        this->b = b;

        cout<<"b:"<<b<<endl;
        }

    void print(){

        cout<<"child print()"<<b<<endl;

    }

private:

    int b;



};
void howToPrint(Parent *base){

    base->print();


}
void howToPrint2(Parent& base){

     base.print();


}

int main()
{
   Parent *base = NULL;
   Parent p1(90);
   child c1(30);
   base=&p1;
   base->print();
   base= &c1;

   base->print();
   howToPrint(&p1);
   howToPrint(&c1);
   howToPrint2(p1);
   howToPrint2(c1);
    return 0;
}

