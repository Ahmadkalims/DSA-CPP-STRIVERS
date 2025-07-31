#include<iostream>
#include<cmath>
using namespace std;

// wrong code because it is not checking for the number of digits in the number
// int main(){
//     int n = 1634;
//     int duplicate = n;
//     int sum = 0;

//     while(n>0){
//         int last_digit = n%10;
//         sum = sum + last_digit*last_digit*last_digit;
//         n = n/10;
//     }

//     if(duplicate == sum){
//         cout<<"Armstrong Number"<<endl;
//     }
//     else{
//         cout<<"Not Armstrong Number"<<endl;
//     }

//     return 0;
// }

int main()
{
    int num = 1634;
    int digits = 0;
    int duplicate = num;
   
   //count the number of digits in the number
    while(num>0){
        num = num/10;
        digits++;
    }

    //restore the value of num
    num = duplicate;
    int sum = 0;

    //calculate the sum of the digits raised to the power of the number of digits
    while(num>0){
        int last_digit = num%10;
        sum = sum + pow(last_digit, digits);
        num = num/10;
    }

    //check if the sum is equal to the original number
    if(duplicate == sum){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not Armstrong Number"<<endl;
    }

    return 0;
}