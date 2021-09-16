#include <iostream>
using namespace std;
class Student
{
  private:
   int StudentNo;
   int marks1;
   int marks2;
   int marks3;

   public:
    void setStudentNo(int stno);
    void assignMarks(int mark1,int mark2,int mark3);
    float calAvg();
};
void Student::setStudentNo(int no){
    StudentNo=no;
}
void Student::assignMarks(int mark1,int mark2, int mark3){
    marks1=mark1;
    marks2=mark2;
    marks3=mark3;
}
float Student::calAvg(){
    float Avg=(marks1+marks2+marks3)/3.0;
    return Avg;
}

class Rectangle
{
  private:
     int width;
     int length;
  public:
     void setWidth(int no);
     void setLength(int no);
     int calcArea();
};
void Rectangle::setWidth(int no){
    width=no;
}
void Rectangle::setLength(int no){
    length=no;
}
int Rectangle::calcArea(){
    int Area=width*length;
    return Area;
}

class Circle
{
  private:
    int radius;
  public:
    void setRadius(int r);
    int calArea();
};
void Circle::setRadius(int r)
{
    radius=r;
}
int Circle::calArea(){
    int Area=3.14*radius*radius;
    return Area;
}
int main() 
{
   Rectangle rec1,rec2;
   Circle circle1;
   Student stu1,stu2;

   rec1.setWidth(4);
   rec1.setLength(10);

   rec2.setWidth(5);
   rec2.setLength(9);

   circle1.setRadius(7);

   cout<<"Rec1 area is "<<rec1.calcArea()<<endl;
   cout<<"Rec2 area is "<<rec2.calcArea()<<endl;
   cout<<"Circle1 area is "<<circle1.calArea()<<endl;

   stu1.setStudentNo(1023);
   stu1.assignMarks(50,60,70);

   stu2.setStudentNo(2345);
   stu2.assignMarks(70,80,75); 

   cout<<"Stu1 Avg is "<<stu1.calAvg()<<endl;
   cout<<"Stu2 Avg is "<<stu2.calAvg()<<endl;

   return 0;
}