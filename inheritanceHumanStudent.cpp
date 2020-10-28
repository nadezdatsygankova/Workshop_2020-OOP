#include <iostream>
#include <string>

class Human
{
private:
   std::string name;
public:
   
   std::string getName()
   {
      return name;
   };

   void setName(std::string name)
   {
      this->name = name;
   }

};

class Student: public Human 
{
private:
   std::string nameCourse;
public:
   Student()
   {}
   Student(std::string nameCourse)
   {
      this->nameCourse = nameCourse;
   }
   std::string getNameCourse()
   {
      return nameCourse;
   }
   void learn()
   {
      std::cout << "I am learning" << std::endl;
   }
};

class PartTimeStudent :public Student
{
private:
   int numberOfcourse;

public:
   PartTimeStudent() {

   }
   PartTimeStudent(int numberOfcourse)
   {
      this->numberOfcourse = numberOfcourse;
   }
   int getNumnberOfCourse()
   {
      return numberOfcourse;
   }
   void learn()
   {
      std::cout << "I am learning only in the evening" << std::endl;
   }

};


int main()
{
   Human n;
   Student First("Web");
   PartTimeStudent f(233);
   First.setName("Ios");
   std::cout << First.getName();
   std::cout  << std::endl;
   std::cout << First.getNameCourse();
   std::cout << std::endl;
    First.learn();

    f.setName("Excel");
    std::cout << f.getName() << std::endl;
    std::cout << f.getNameCourse() << std::endl;
    std::cout << f.getNumnberOfCourse() << std:: endl;


}