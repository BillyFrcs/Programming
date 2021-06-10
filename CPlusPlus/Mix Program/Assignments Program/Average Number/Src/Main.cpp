#include <iostream>

void findAverageNumber()
{
     double data[10], total;
     int i, jumData;
     char jawab;

     for (i = 0; i < 10; i++)
     {
          std::cout << "Masukan sembarang bilangan: ";
          std::cin >> data[i];

          std::cout << "Masukan lagi (y/t)? : ";
          std::cin >> jawab;

          if (jawab == 'T' || jawab == 't')
          {
               jumData = (i + 1);
               break;
          }
     }

     for (i = 0; i < jumData; i++)
     {
          std::cout << data[i] << std::endl;
     }

     //Data array
     std::cout << "Total data array: ";
     for (i = 0; i < jumData; i++)
     {
          total += data[i];
     }
     std::cout << total << std::endl;

     //Average number
     float average;

     for (i = 0; i < jumData; i++)
     {
          //average = data[i] - 1;
          average = (total / jumData);
     }

     std::cout << "Average number is: " << average << std::endl;
}

int main()
{
     findAverageNumber();

     return 0;
}