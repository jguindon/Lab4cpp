#include <iostream>
#include <string>
using namespace std;
// Include the library that will allow you to convert from string to integer


int main() {
  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 1         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
  
  // Ask the user for 3 integers as input
  // The user should enter all integers on the same line, pressing enter only once
  int a,b,c;
   cin >> a >> b >>c; //Input integers
   cin.ignore();
    cout << a * b * c << endl; // Multiply numbers
    cout <<"Now they're multiplied!";





  // Multiply the three integers





  // Output the result of the multiplication



  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  // Ask the user for three strings and output a haiku poem
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html
  string j,k,l;
  cout <<"What is the first line of the Haiku?" << endl;
    
    getline(cin,j); // grabbing j string
   cout <<"Please Enter the second line:"<< endl;
    getline(cin,k); // grabbing k string
  cout <<"Please enter the last line:" << endl;
    getline(cin,l); // grabbing l string
  cout << "Heres your Haiku:" << endl;
  cout << j << endl;
  cout << k << endl;
  cout << l << endl;// Printing the 3 lines
  


    
      













  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  string  x= ("1234"); // Convert this string to an integer 
  int i;
 i =stoi(x); // string to integer
  cout << "This is now an integer:" << i << endl; // print the integer



  
  return 0;
}