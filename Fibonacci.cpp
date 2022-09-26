#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
 /*int fab (int n)
 {
   if (n==0)
   return 0;
   if (n==1)
   return 0;
   if (n== 2)
   return 1;
   
  
 }

int main()
{ 
  int n;
  cout<<"enter fibonacci number=";
  cin>>n;
    cout << fab(n);
}*/
  #include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << ", ";
    }
    return 0;
}
