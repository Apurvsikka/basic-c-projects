#include <iostream>
#include </home/apurv/Desktop/CPP/queueman>

using namespace std;

int main() {
   int choice;
   cout<<"1) Push()\n";
   cout<<"2) Pop()\n";
   cout<<"3) Peek()\n";
   cout<<"4) Exit()\n";

   do {
      cout<<"Enter choice: ";
      cin>>choice;
      switch(choice) {
         case 1: {
            cout<<"enter element to push :";
            cin>>val; 
            cout<< "\n";
            cout<< "asking c++ to run `push("<< val <<")`......\n";
            cout<< "succesfully pushed"<< val <<"\n";
            Push(val);
            break;
         }
         case 2: {
            cout << "running pop() on stack 'stack'\n";
            Pop();
            break;
         }
         case 3: {
            cout << "showing elements present in the array...\n";
            Peek();
            break;
         }
         case 4: {
            cout<<"Exitting the program....\n";
            cout << "sayonara\n";
            break;
         }
         default: {
            cout<<"Invalid Choice";
         }
      }
   }while(choice!=4);
   cout<< "made by @Apurvsikka\n";
   return 0;
}