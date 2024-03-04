/* ONLY WRITE THE ANSWER TO THE QUESTIONS IN THE CORRESPONDING METHODS */

#ifndef LABFILE_HPP
#define LABFILE_HPP

#include <iostream>

using namespace std;

double fahrenheitToKelvin(double fahrenheit) {
    double kel;
    kel = (fahrenheit - 32) * 5 / 9 + 273.15;
    return kel;
}

bool isPrime(int n) {
    int i;
    bool ans = true;

    if (n == 0 || n == 1) {
        ans = false;
    }
    else if( n >= 1 ){
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                ans = false;
            }

        }
    }

    else ans = true;
    
    
    return ans;
}

int sumOfPrimes(int limit) {
    int sum = 0, n;
    for (n = 2; n <= limit; n++) {
        if (isPrime(n) == true) {
            sum = n + sum;
        }
    }

 
 
        
    

    return sum;
}


int reverseInteger(int num) {


    return 0;
}

void printInvertedHalfStarPyramid(int rows) {


    switch (rows) {
    case (1): cout << "*" << endl;
    case (2): cout << "* *\n\n*" << endl;
    case (3): cout << "* * *\n\n* *\n\n*" << endl;
    case (4): cout << "* * * *\n\n* * *\n\n* *\n\n*" << endl;
    case (5): cout << "* * * * *\n\n* * * *\n\n* * *\n\n* *\n*" << endl;
        
    }
    return;
}


#endif
