#include <iostream>
#include "middle.h"
using namespace std;
long long itc_chet_num(long long number){
    int digit = 0;
    int chet = 0;
    while(number){
        digit = number % 10;
        if(digit % 2 == 0){
            chet++;
        }
    number /= 10;
    }
cout << chet << endl;
}


long long itc_min_max_sum(long long number){
    int max1 = 0;
    int min1 = 9;
    int count0 = 0;
    if (number < 0){
        number = number * (-1);
        while(number){
            int digit = number % 10;
            if(digit > max1){
                max1 = digit;
            }
            if(digit < min1){
                min1 = digit;
            }
            if(digit == 0){
                count0++;
            }
        number /= 10;
    }
    int otvet = (max1 + min1) * count0;
    cout << otvet << endl;
    }
    else{
    while(number){
            int digit = number % 10;
            if(digit > max1){
                max1 = digit;
            }
            if(digit < min1){
                min1 = digit;
            }
            if(digit == 0){
                count0++;
            }
        number /= 10;
    }
    int otvet = (max1 + min1) * count0;
    cout << otvet << endl;
    }
}

int itc_second_min_num(long long number){
    int min1 = 9;
    int min2 = 9;
    if(number < 0){
        number = number * (-1);
        while(number){
        int digit = number % 10;
        if(digit < min1){
            min2 = min1;
            min1 = digit;
        }
        else if(digit < min2 && digit > min1){
            min2 = digit;
        }
        number /= 10;
    }
    cout << min2 << endl;
    }

    else{
        while(number){
            int digit = number % 10;
            if(digit < min1){
                min2 = min1;
                min1 = digit;
            }
            else if(digit < min2 && digit > min1){
                min2 = digit;
            }
        number /= 10;
        }
    cout << min2 << endl;
    }
}



