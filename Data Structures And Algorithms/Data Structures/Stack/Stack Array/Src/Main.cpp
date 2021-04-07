#include <iostream>

using namespace std;

int Max = 5, top = 0;

string arrData[5];

// Check data array (Full)
bool isFull()
{
  if (top == Max)
  {
    return 1; // True
  }
  else
  {
    return 0; // False
  }
}

void checkDataFull() { cout << "Data full ? " << isFull() << endl; }

// Check data array (Empty)
bool isEmpty()
{
  if (top == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

void checkDataEmpty() { cout << "Data empty ? " << isEmpty() << endl
                             << endl; }

void dataArr(string data)
{
  if (isFull())
  {
    cout << "Data full!" << endl;
  }
  else
  {
    arrData[top] = data;
    top++;
  }
}

void popArray()
{
  if (isEmpty())
  {
    cout << "Data empty" << endl;
  }
  else
  {
    arrData[top - 1] = "";
    top--;
  }
}

// Display data array
void displayDataArr()
{
  if (isEmpty())
    cout << "Data empty" << endl;
  else
    cout << "Data stack array: " << endl;

  for (int i = Max - 1; i >= 0; i--)
  {
    if (arrData[i] != "")
    {
      cout << "Data: " << arrData[i] << endl;
    }
  }
  cout << endl;
}

// Peek data array
void peekArray(int position)
{
  if (isEmpty())
  {
    cout << "Data empty" << endl;
  }
  else
  {
    int index = top;
    for (int i = 0; i < position; i++)
    {
      index--;
    }
    cout << "Data position " << position << " = " << arrData[index] << endl;
  }
}

// Change data array
void changeDataArray(int position, string data)
{
  if (isEmpty())
  {
    cout << "Data empty" << endl;
  }
  else
  {
    int index = top;
    for (int i = 0; i < position; i++)
    {
      index--;
    }
    arrData[index] = data;
  }
}

// Count total data array
int countDataArray()
{
  if (isEmpty())
  {
    return 0;
  }
  else
  {
    return top;
  }
}

void showTotalDataArray()
{
  cout << "Total data array =  " << countDataArray() << endl
       << endl;
}

void removeDataStackArray()
{
  for (int i = 0; i < top; i++)
  {
    arrData[i] = "";
  }
  top = 0;
}

int main()
{

  // Data
  dataArr("Billy");
  displayDataArr();

  dataArr("Franscois");
  dataArr("Kolibonso");
  dataArr("Sendy");
  dataArr("Friscilla");
  displayDataArr();

  dataArr("Reggy");
  displayDataArr();

  popArray();
  displayDataArr();

  // Check data
  checkDataFull();
  checkDataEmpty();

  // Peek data array
  peekArray(3);

  // Show total data array
  showTotalDataArray();

  // Change data array
  changeDataArray(2, "Reggy");
  displayDataArr();

  //Remove data stack array and check condition data
  removeDataStackArray();
  checkDataFull();
  checkDataEmpty();

  return 0;
}