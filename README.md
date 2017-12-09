# Grocery Store Counter
A program that uses a class called Counter to simulate a counter clicker device that keeps a tally of the amount
of money a person is spending at a grocery store.

### Synopsis
The class Counter provides a simulation of a counter device used to keep tally of the amount of money spent at
a grocery store.

The amount shown will always be in the form of an integer instead in dollars and cents (ex. 9999 --> 99.99). 
And as such, the rightmost two digits are always thought of as cents and tens of cents, the next digit as
dollars, and the fourth digit as tens of dollars.

There are four keys provided for cents, dimes, dollars, and tens of dollars:

**a** for cents, followed by a digit 1-9.<br />
**s** for dimes, followed by a digit 1-9.<br />
**d** for dollars, followed by a digit 1-9.<br />
**f** for tens of dollars, followed by a digit 1-9.<br />

Each entry (one of asdf followed by 1 to 9) is followed by pressing the Return key. 

## Setup
1. Download and install [Git](https://git-scm.com/downloads), if you don't already have it.

2. Open terminal and run the git clone command:

   ```
   $ git clone https://github.com/cramaechi/grocery-store-counter.git
   ```
    or [download as ZIP](https://github.com/cramaechi/grocery-store-counter/archive/master.zip).

3. Go to the project folder:

   ```
   $ cd grocery-store-counter
   ```

4. Compile:

   ```
   $ make
   ```
   
## Usage
Run:

```
$ ./counter
```

Sample Output:
```
Your budget is 9999 ($99.99)                                                                                          
                                                                                                                      
Add cost of item (press 'o' to turn off)                                                                              
a9                                                                                                                    
Amount Display: 9                                                                                                     
f9                                                                                                                    
Amount Display: 9009                                                                                                  
o                                                                                                                     
Add another item to shopping cart (y/n)? y                                                                            
                                                                                                                      
                                                                                                                      
Add cost of item (press 'o' to turn off)                                                                              
d5                                                                                                                    
Amount Display: 9509                                                                                                  
s7                                                                                                                    
Amount Display: 9579                                                                                                  
o                                                                                                                     
Add another item to shopping cart (y/n)? n 
```
