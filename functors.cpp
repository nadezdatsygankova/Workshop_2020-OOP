class MyFunction
{
public:
//without parameters
/*void operator () ()
{
std::cout << "I am a functor " <<count << std::endl;
count++;
}*/

//with parameters
/*
void operator () ()
{
std::cout << "I am a functor " <<count << std::endl;
count++;
}

private:
int count = 0;
};
*/



int main()
{
   MyFunction f;
   f(); //0
   f(); //1
   f();
   f();
//with 2 parameters
   int resultSum= f(5,6);
  std::cout << resultSum;

}
