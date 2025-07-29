#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    char op;
      cout<<"Enter a no.";
      cin>>num1;
       
       cout<<"Enter the operation";
       cin>>op;
       
       cout<<"Enter another number";
       cin>>num2;
       
      switch(op){
        case '+':
          cout<<"Result: "<<num1+num2<<endl;
          break;
          
        case '-':
          cout<<"Result: "<<num1-num2<<endl;
          break;
          
        case '*':
          cout<<"Result: "<<num1*num2<<endl;
          break;
        case '/':
            if (num2!= 0)
                cout << "Result: " << num1 / num2 << endl;
                
            else
                cout << "Error" << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
      }

    return 0;
}
