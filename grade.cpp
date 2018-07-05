//hope to help me calculate grades
#include <iostream>
#include <cstdlib>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int m = 0;
    double c = 0;//total
    while(n > 0){
        int a;//grades
        double b;//weights
        cin >> a;//key in grades
        cin >> b;//key in weights
        c = c + a*b;//sum them
        m = m + b;//the total weights
        n = n - 1;//count the num of class
    }
    
    cout << "total: " << c << endl;
    cout << "average: " << double(c/m) << endl; //<< m << endl;
  
}

