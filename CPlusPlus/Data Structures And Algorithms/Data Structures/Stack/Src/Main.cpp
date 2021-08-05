#include <iostream>
#include <string>

//Stack array
class Stack
{
private:
     int top, arr[5];

public:
     Stack()
     {
          top = -1;
          for (int i = 0; i < 5; i++)
          {
               arr[i] = 0;
          }
     }

     bool isEmpty()
     {
          if (top == -1)
          {
               return true;
          }
          else
          {
               return false;
          }
     }

     bool isFull()
     {
          if (top == 4)
          {
               return true;
          }
          else
          {
               return false;
          }
     }

     void push(int value)
     {
          if (isFull())
          {
               std::cout << "Stack overflow" << std::endl;
          }
          else
          {
               top++; //0
               arr[top] = value;
          }
     }

     int pop()
     {
          if (isEmpty())
          {
               std::cout << "Stack underflow \n";

               return 0;
          }
          else
          {
               int valuePop = arr[top];
               arr[top] = 0;
               top--;

               return valuePop; //Temporary variable
          }
     }

     int count()
     {
          return (top + 1);
     }

     int peek(int position)
     {
          if (isFull())
          {
               std::cout << "Stack underflow \n";

               return 0;
          }
          else
          {
               return arr[position];
          }
     }

     void change(int position, int value)
     {
          arr[position] = value;

          std::cout << "Value already change at location " << position << std::endl;
     }

     void display()
     {
          std::cout << "Values stack" << std::endl;
          for (int i = 4; i >= 0; i--)
          {
               std::cout << arr[i] << std::endl;
          }
     }
};

void showStack()
{
     Stack s1;

     int option, position, value;

     //Enter some numbers
     do
     {
          std::cout << "1. Push" << std::endl;
          std::cout << "2. Pop" << std::endl;
          std::cout << "3. Empty" << std::endl;
          std::cout << "4. Full" << std::endl;
          std::cout << "5. Peek" << std::endl;
          std::cout << "6. Count" << std::endl;
          std::cout << "7. Change" << std::endl;
          std::cout << "8. Display" << std::endl;
          std::cout << "9. Clear Screen" << std::endl;
          std::cout << "0. Exit" << std::endl
                    << std::endl;

          std::cout << "Choose Number: ";
          std::cin >> option;

          switch (option)
          {
          case 0:
               break;

          case 1:
               std::cout << "Enter value in the stack \n";
               std::cin >> value;
               s1.push(value);
               break;

          case 2:
               std::cout << "Pop value: " << s1.pop() << std::endl;
               break;

          case 3:
               if (s1.isEmpty())
                    std::cout << "Stack is empty" << std::endl;

               else
                    std::cout << "Stack is not empty" << std::endl;
               break;

          case 4:
               if (s1.isFull())
                    std::cout << "Stack is full" << std::endl;
               else
                    std::cout << "Stack is not full" << std::endl;
               break;

          case 5:
               std::cout << "Peek position: ";
               std::cin >> position;

               std::cout << "Value position " << position << " is " << s1.peek(position) << std::endl;
               break;

          case 6:
               std::cout << "Total stack is: " << s1.count() << std::endl;
               break;

          case 7:
               std::cout << "Enter stack position: ";
               std::cin >> position;

               std::cout << std::endl;

               std::cout << "Enter value to change: ";
               std::cin >> value;

               s1.change(position, value);
               break;

          case 8:
               std::cout << "Show values stack" << std::endl;
               s1.display();
               break;

          case 9:
               system("cls");
               break;

          default:
               std::cout << "Not found!" << std::endl;
          }

     } while (option != 0);
}

int main()
{
     showStack();

     // 1) push()
     //     Place an item onto the stack. If there is no place for new item, stack is in overflow state.
     // 2) pop()
     //     Return the item at the top of the stack and then remove it. If pop is called when stack is empty, it is in an underflow state.
     // 3) isEmpty()
     //     Tells if the stack is empty or not
     // 4) isfull()
     //     Tells if the stack is full or not.
     // 5) peek()
     //     Access the item at the i position
     // 6) count()
     //     Get the number of items in the stack.
     // 7) change()
     //     Change the item at the i position
     // 8) display()
     //     Display all items in the stack

     return 0;
}