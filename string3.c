#include <iostream> 
using namespace std; 
void printString(string str, char ch, int count) 
{ 
    int occ = 0, i; 
    if (count == 0) { 
        cout << str; 
        return; 
    } 
  
    for (i = 0; i < str.length(); i++) { 
  
        if (str[i] == ch) 
            occ++; 
 
        if (occ == count) 
            break; 
    } 
  
   
    if (i < str.length() - 1) 
        cout << str.substr(i + 1, str.length() - (i + 1)); 
  
    else
        cout << "Empty string"; 
} 

int main() 
{ 
    string str = "geeks for geeks"; 
    printString(str, 'e', 2); 
    return 0; 
} 
