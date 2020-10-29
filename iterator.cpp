#include<iostream>
#include<vector>


int main()
{
   std::vector<int> n;
   n.push_back(52);
   n.push_back(58);
   n.push_back(78);

   

   for (std::vector<int>::iterator i = n.begin(); i != n.end(); i++)
   {
      std::cout << *i << std::endl;
   }

std::cout <<  std::endl;
   std::vector<int>::iterator it;

   it = n.begin();

   //*it = 1000;
   //std::cout << *it << std::endl;

   //it++;

   //std::cout << std::endl;
   //std::cout << std::endl;
   //std::cout << *it << std::endl;
   //std::cout << std::endl;
   //std::cout << std::endl;*/
  
it += 2;
std::cout << *it << std::endl;
it -= 2;
std::cout << *it << std::endl;


std::cout << "Reverse iteration" << std::endl;
for (std::vector<int>::reverse_iterator i = n.rbegin(); i != n.rend(); i++)
{
   std::cout << *i << std::endl;
}


std::vector<int>::iterator p = n.begin();


advance(p, 2); // сдвиг итератора на 2 

std::cout << *p << std::endl;

std::cout << std::endl;
 
n.insert(p, 589); //add number

for (std::vector<int>::reverse_iterator i = n.rbegin(); i != n.rend(); i++)
{
   std::cout << *i << std::endl;
}

std::vector<int>::iterator er = n.begin();
n.erase(er);
std::cout << std::endl;

for (std::vector<int>::reverse_iterator i = n.rbegin(); i != n.rend(); i++)
{
   std::cout << *i << std::endl;
}
}