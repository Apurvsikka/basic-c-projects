#include </home/apurv/Desktop/CPP/stackman>
#include <iostream>

using namespace std;
int main() {
   int choice, value;
   cout<<"1) Push()\n";
   cout<<"2) Pop()\n";
   cout<<"3) Peek()\n";
   cout<<"4) Exit()\n";
   cout<<"5) delete()[warning : dont use this function ![-Wdepriciated-Function-gcc]]\n";

   do {
      cout<<"Enter choice: ";
      cin>>choice;
      switch(choice) {
         case 1: {
            cout<<"enter element to push";
            cin>>value; 
            cout<< "\n";
            cout<< "asking c++ to run `push("<< value <<")`......\n";
            cout<< "succesfully pushed"<< value <<"\n";
            push(value);
            break;
         }
         case 2: {
            cout << "running pop() on stack 'stack'\n";
            pop();
            break;
         }
         case 3: {
            cout << "showing elements present in the array...\n";
            peek();
            break;
         }
         case 4: {
            cout<<"Exitting the program....\n";
            cout << "sayonara\n";
            break;
         }
         case 5:
            cout<< "initiating `delete()` on stack `stack`\n";
            cout << "eptying the stack \n";
            cout << "stack emptied successfully\n";
            deleteD();
            break;

         default: {
            cout<<"Invalid Choice";
         }
      }
   }while(choice!=4);
   cout<< "made by @Apurvsikka\n";
   return 0;
}