#include <iostream>
using namespace std;


//********************
// Declare Function Prototypes
//********************
void getTwoValues(int &begin, int &end);
int getNextPrime(int begin);
int getPrevPrime(int end);

int prime;

// ******************************
// Implement all your functions here
// ******************************

void getTwoValues(int &begin, int &end){
    cin >> begin >> end;
    while(begin > end){
        cout << "Enter two different values where begin < end " << endl;
        cin >> begin >> end;
    }
}

int getNextPrime(int begin){
    for (int i = begin++; i <= 100; i++){
        prime = 0;
        for(int j = 2; j <= 100; j++){
            if( i == j ){
                j++;
            }
            if(i % j == 0){
                prime++;
            }
        }
        if(prime == 0){
            cout << i << " " << endl;
            prime = i;
            i = 101;
        }
    }

    return prime;
}

int getPrevPrime(int end){
    for (int i = end--; i <= 100; i--){
        prime = 0;
        for(int j = 2; j <= 100; j--){
            if( i == j ){
                j++;
            }
            if(i % j == 0){
                prime++;
            }
        }
        if(prime == 0){
            cout << "Previous prime number is: " << i << " " << endl;
            prime = i;
            i = 101;
        }
    }
    return prime;

}