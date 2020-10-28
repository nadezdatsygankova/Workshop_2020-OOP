#include <iostream>
#include <string>


class Msg
{
public:
   Msg(std::string msg)
   {
      this->msg = msg;
   }
   virtual std::string getMessage()
   {
      return msg;
   }
private:
   std::string msg;
};


class Book: public Msg
{
public:
   Book(std::string msg) :Msg(msg)
   {
   }

   std::string getMessage()override
   {
      return "[" + ::Msg::getMessage() + "]";
   }
private:

};

class Printer
{
public:
   void print(Msg* msg)
   {
      std::cout << msg->getMessage() << std::endl;
   }
};


int main()
{
   Printer pr;
   Msg m("I am here");
   Book b("I am not here");
   
   pr.print(&m);
   std::cout << std::endl;
   pr.print(&b);
}
