//Program uses a class called Counter to simulate the behavior of a counter
//device that keeps a tally of the total amount you have spent at a store.
#include <iostream>
#include "counter.h"

using namespace std;

void startClicker(Counter& c);
//Fills Counter object c with valid increments of integer values representing
//cents, dimes, dollars, and/or tens of dollars, and then prints out the
//updated amount to the screen. 

int main()
{
    Counter c;
    startClicker(c);

    return 0;
}

void startClicker(Counter& counter)
{
    int n;
    char k, ans;

    cout<<"\nYour budget is 9999 ($99.99)\n\n";
    do
    {
        cout<<"Add cost of item (press 'o' to turn off)\n";

        while(true)
        {
            cin>>k;
            if (k == 'o')
                break;
            cin>>n;

            counter.setAmount(k,n);
            cout<<"Amount Display: "<<counter.getCurrentAmount()<<endl;
        }

        cout<<"Add another item to shopping cart (y/n)? ";
        cin>>ans;
        cout<<endl<<endl;

    }while(!counter.overFlow() && ans == 'y');
}
