/*---------------------------------------------------------------------
This is the header file counter.h. This is the interface for the class
Counter. Values of this type represent a clicker that keeps a tally of
the amount of money a person has spent so far at a grocery store.

Author: Chibuikem Amaechi
Email:  cramaechi@me.com
---------------------------------------------------------------------*/
class Counter
{
public:
    Counter(int theMaxAmount);
    //Assigns the value of the argument theMaxAmount to the variable maxAmount.
    //The member variable currentAmount is set to 0.

    Counter(); //Default constructor.

    int getCurrentAmount() const;
    //Returns the current amount of the Counter object

    void setAmount(char key, int number);
    //Set the variable currentAmount with respect to the arguments.

    void reset();
    //Resets the member variable currentAmount to 0.

    void incr1();
    //Increments the units digit by 1.

    void incr10();
    //Increments the tens digit by 1.

    void incr100();
    //Increments the one-hundreds digit by 1.

    void incr1000();
    //Increments the one-thousands digit by 1.

    bool overFlow() const;
    //Returns true if the variable currentAmount is > 9999
private:
    int currentAmount, maxAmount;
};
