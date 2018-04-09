/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abdul
 *
 * Created on April 6, 2018, 5:31 PM
 */







#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

string atos(int n) {
       
    string a[] = {"zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string b[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string c[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    string d[] = {"hundred","thousand","million","billion"};

    if (n < 10) {
        return a[n];
    }

    if (n < 20) {
        return b[n - 10];

    }

    if (n >= 20 && n<100) {
        if (n % 10 == 0) {
            return c[n / 10];
        } else {
            return c[n / 10] + a[n % 10];

        }
    }
    if(n>99 && n<1000){
        return   a[n/100] + d[0] +"_"+ atos(n - (n/100 * 100));
        
    }
    if(n>999 && n<10000){
        return   a[n/1000] + d[1] +"_"+ atos(n - (n/1000 * 1000));
        
    }
    

    return "number too big";
}

string itos(int n){
    string m = "";
    if(n ==0 ){
        return "0";
    }
    bool neg = false;
    if(n < 0){
        n = -1 *n;
        neg = true;
    }
    while (n!=0){
       m += n%10 + '0';
       n = n/10;
    }
    if(neg == true){
        m = m + "-";
    }
 int l = m.length();
 
    // Swap character starting from two
    // corners
    for (int i=0; i<l/2; i++)
       swap(m[i], m[l-i-1]);
    
    
    return m;
}

int main(int argc, char* argv[]) {
    
  

    for (int i = 1; i < argc; i++) {
        int n = atoi(argv[i]);
        cout << "file " << itos(n) << ".txt" << endl;
    }
    
    

    



    return 0;
}


