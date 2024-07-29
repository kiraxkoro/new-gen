#include <bits/stdc++.h>
using namespace std;


int josephus(int n, int k) {
    int result = 0;  
   
    for (int i = 2; i <= n; i++) {
        result = (result + k) % i;
    }

    return result;
}


int find_the_winner(int n, int k) {
    return josephus(n, k) + 1;
}

int main() {
    int n ;  
    cin>>n;

    int k;
    cin>>k;  
    int winner = find_the_winner(n, k);
    printf("The winner is friend number %d\n", winner);
    return 0;
}
