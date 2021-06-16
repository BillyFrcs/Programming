#include <iostream>
#include <list>
#include <vector>

class List
{
private:
     std::list<double> container = {4.5, 9.2, 1.3, 5.7, 9.4};

public:
     void Push()
     {
          container.push_front(6.5); //Push to the first element
          std::cout << "Push front = ";
          for (auto &i : container)
          {
               std::cout << i << ' ';
          }

          std::cout << "\n";

          std::cout << "Push back = ";
          container.push_back(8.4);
          for (auto j : container)
          {
               std::cout << j << ' ';
          }
     }

     void listLoops(std::list<int> &varList)
     {
          for (std::list<int>::iterator it = varList.begin(); it != varList.end(); ++it)
          {
               std::cout << *it << std::endl;
          }
          std::cout << "\nSize => " << varList.size() << "\n";
     }

     int frontBack()
     {
          std::cout << "\nFront = " << container.front() << ", Back = " << container.back() << "\n";

          return 0;
     }

     void isEmpty(std::list<float> &value)
     {
          //Using std::boolalpha it's gonna show result true or false
          std::cout << "\nIs empty " << std::boolalpha << value.empty() << "\n";
     }

     virtual void insertList(std::list<int> &var)
     {
          std::cout << "\nInsert = ";
          for (std::list<int>::iterator l = var.begin(); l != var.end(); ++l)
          {
               std::cout << *l << " ";
          }
     }

     virtual void pop()
     {
          container.pop_front();
          std::cout << "Pop front = ";
          for (auto &i : container)
          {
               std::cout << i << " ";
          }

          std::cout << "\n";

          std::cout << "Pop back = ";
          container.pop_back();
          for (auto &j : container)
          {
               std::cout << j << " ";
          }
     }
};

int main()
{
     //Class list
     List ls;

     std::list<int> l = {1, 2, 3, 4, 5};
     std::list<int> num = l;
     std::list<float> L;

     ls.Push();
     std::cout << "\n";
     ls.listLoops(l);
     ls.listLoops(l);
     ls.frontBack();
     ls.isEmpty(L);

     std::list<int> var = {5, 3, 1, 8, 9};
     std::list<int>::iterator it = var.begin();

     while ((*it != 8) && (it != var.end())) //Insert near the element
     {
          it++;
     }
     var.insert(it, 19);
     ls.insertList(var);

     var.erase(it); //Erase
     ls.insertList(var);

     var.remove(9); //Remove
     ls.insertList(var);

     var.clear();
     std::cout << "\nClear = " << std::boolalpha << var.empty() << "\n";

     ls.pop();

     std::cout << "\n\n";

     std::vector<int> vec = {1, -2, 3};

     std::list<int> List = {12, 34, 65};

     //Insert the vector element using list
     vec.insert(vec.begin(), List.begin(), List.end());

     std::cout << vec[0] << ", " << vec[1] << ", " << vec[2] << "\n";

     vec.pop_back(); //Erase the element
     vec.erase(vec.begin() + 1);
     std::cout << vec[0] << ", " << vec[1] << ", " << vec[2] << "\n";

     return 0;
}