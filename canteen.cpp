#include <iostream>
using namespace std;
int main() {
    
    int A, B, N;
   cin >> A >> B >> N;

    int total_tyiyn = (A * 100 + B) * N;

   
    int total_som = total_tyiyn / 100;
    int remaining_tyiyn = total_tyiyn % 100;

  cout << total_som << " som and " << remaining_tyiyn << " tyiyn" << endl;

    return 0;
}
