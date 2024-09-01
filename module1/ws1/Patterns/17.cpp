/*
    A     
   ABA    
  ABCBA   
 ABCDCBA  
ABCDEDCBA 



*/

// N=5


// Soltuion 1

// breakPoint = ( 2*i + 1 )/2 + 1; // Taking the middle element to be the breakPoint 

#include <iostream>
using namespace std;

void pattern17Sol1(int n) {
    

    for (int i =0; i < n; i++) {

        // space # 43210

        for (int j = 0; j < n -i -1; j++) {
            cout << " ";
        }

        
        int start = 0;
        int end = 2*i + 1;  

        // For an example
        // For i = 2 (3rd row), total chars = 5, breakpoint = (2*2 + 1)/2 + 1 = 3, (3rd character),j=2 index (j 0-based )
        // A => B => C => B => A
        // ++  ++   --   --    
        // 0    1    2    3    4

        // If j=start and j < end
        //    j=0     and j < 5  breakpoint is the 3rd char (j=2 index) as (j=0 based)
        // breakpoint --> sequence stops increasing and begins decreasing. here C
        
        
        int breakPoint = (start+end)/2 + 1  ; // 3rd character C, (j = 2) ,j(0-based ) and for i=2 , 
        char letter = 'A'; 
        
        for (int j = 0; j < 2*i + 1 ; j++) {
            cout << letter;  
                                                // for i = 2, 3rd row, A B C B A            
            if (j < breakPoint - 1) letter++ ; // j can't include the breakpoint as no post increament is happening after break point, 
            else letter-- ;              // So include just the previos one
                   // As even though C is the break point , but B is the element after which last post increment is happening 
        }                       // once it is reaching C, then Post decrement is happening 
        // That is why as per the logic, j < breakpoint - 1 , as j starts from 0, if it was starting with 1, then j < breakpoint, as we have to include just the element 1 before the breakPoint
         


        // space # 43210
        for (int j = 0; j < n -i -1; j++) {
            cout << " ";
        }
        
        cout << endl;

    }
}

//  Soltuion 2

// If take the element just before the middle element as breakPoint
// breakPoint = (2*i + 1)/2  = 2 ==> B, (A B C B A) 2nd element for 3rd row
// and For easier understanding intialize j with 1 while printing the alphabet characters

#include <iostream>
using namespace std;

void pattern17Sol2(int n) {
    

    for (int i=0; i < n; i++) { 

        // space # 43210

        for (int j = 0; j < n -i -1; j++) {
            cout << " ";
        }

        
        int breakPoint = (2*i + 1)/2;
        char letter = 'A';
        
        for (int j = 1; j <= 2*i + 1; j++) {
            cout << letter;

            if (j <=breakPoint ) letter++ ; 
            else letter-- ;
        }



        // space # 43210
        for (int j = 0; j < n -i -1; j++) {
            cout << " ";
        }
        
        cout << endl;

    }
}


int main() {
    int N;
    cin >> N;
    pattern17Sol1(N);    
    // pattern17Sol2(N);
    return 0;
}


