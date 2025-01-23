#include <iostream>
#include <iomanip>
  using namespace std;
  int main() {
      //       string name;
      //       std::cout<<"PLEASE enter your name: ";
      //       std::cin>>name;
      //       std::cout<<"okay"<<name<<"enter your age"<<endl;
      //       int age;
      //       std::cin>>age;
      //       std::cout<<"okay"<<name<<"you are "<<age<<"years old"<<endl;
      //
      //
      // return 0;
      //   }
      // for (int i = 1; i <= 5; i++) {
      //     std::cout<<setw(5)<< i;
      // }
      //     return 0;
      //
      //     int n1;
      //     int n2;
      //     std::cout<<"enter a value for number1";
      //     std::cin >> n1;
      //     std::cout<<"enter a value for number2";
      //     std::cin >> n2;
      //     int temp=n1;
      //     n1=n2;
      //     n2=temp  ;
      //     std::cout<<n1<<"is number1"<<setw(5)<<n2<<"is number2";
      //
      //     return 0;
      // }
      // int n1;
      // std::cout<<"enter a number:"<<endl;
      // std::cin >> n1;
      // for (int i = 1; i <= n1; i++) {
      //     std::cout<<setw(5)<<i<<setw(5)<<i*i<<endl;
      // }
      //
      // return 0;
      // }
      string text;
      cout << "enter your text" << endl;
      cin>>text;
      int width= 50;
      int padding=(width-text.length())/2;
      cout<<setw(padding)<<text<<setw(padding)<<endl;

      return 0;
  }

