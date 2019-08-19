#include <iostream>
#include <string>
#include "Sequence.cpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void bubbleSort1(NodeSequence<string> S) {
     int n = S.size();
     for(int i = 0; i < n; i++) {
             for(int j = 1; j < n-i; j++) {
                     NodeSequence<string>::Iterator prev = S.atIndex(j-1);
                     NodeSequence<string>::Iterator succ = S.atIndex(j);
                     if(*prev > *succ) {
                              string tmp = *prev; *prev = *succ; *succ = tmp;
                              }
                     }
             }
     }
     
void bubbleSort2(NodeSequence<string> S) {
	int n = S.size();
	for (int i = 0; i < n; i++) {
		NodeSequence<string>::Iterator prec = S.begin();
		for (int j = 1; j < n - i; j++) {
			NodeSequence<string>::Iterator succ = prec;
			++succ;
			if (*prec > *succ) {
				string tmp = *prec; *prec = *succ; *succ = tmp;
			}
			++prec;
		}
	}
}

void insert(NodeSequence<string> N, string s)
{
    NodeSequence<string>::Iterator ii = N.begin();
    while (ii != N.end() && *ii < s)
    {
          ++ii;
    }    
    N.insert(ii,s);
     
}

int main(int argc, char** argv) {
	NodeSequence<string> S;
    S.insertFront("Joe");
    
    
    S.insertFront("Jill");
    
    NodeSequence<string>::Iterator ii = S.atIndex(1);
    cout << *ii << endl;
    cout << S.indexOf(ii) << endl;
    //Find
    
    string findme = "Joe";
    for (ii = S.begin(); ii != S.end(); ++ii)
    {
        if (*ii == findme)
           break;
           
    }      
    if (ii!= S.end())
       cout << "Found " << findme << " at index " << S.indexOf(ii) << endl;
    else   
       cout << "Could not find " << findme  << endl;
       
    //Insert alphabetically
    NodeSequence<string> alpha_order;
    
    for (int i = 0; i < 5 ; ++i)
    {
        string name;
        cout << "enter a name" << endl;    
        cin >> name;
        
        alpha_order.insertFront(name);
         
    }
    
    bubbleSort2(alpha_order);
    
    //Print the list
    cout << endl << "Printing the list " << endl;
    for (ii = alpha_order.begin(); ii != alpha_order.end(); ++ii)
    {
         cout << *ii << endl;
           
    }   
	//system("PAUSE");
	return 0;
}
