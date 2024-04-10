#include <iostream> 
using namespace std ;

int main () {
    
    char letter_grade  ;
    
    cout << "Enter the grade you expect in exam " << endl ;
    cin >> letter_grade ;

     switch (letter_grade) {
         
         case 'A' :
         case 'a' :
         cout << "You need  90 or above. Study hard!! " << endl ;
         break ;
         
         case 'B' :
         case 'b' :
         cout << "You need 80-89 for B. Go study " << endl ;
         break ;
         
         case 'C' :
         case 'c' : 
         cout << "You need 70-79 for C. " << endl ;
         break ;
         
         case 'D' :
         case 'd' :
         cout << "You need 60-69 for D " << endl ;
         break ;
         
         case 'F' :
         case 'f' :
         cout << "XXXXXX " << endl ;
         break ;
         
         default : 
         cout << "Sorry not a valid grade " << endl ;
     }
         
    return 0 ;
}