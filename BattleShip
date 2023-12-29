#include <iostream>
using namespace std;

int main() {

  int board[7][7] = {
                          { 0, 0, 0, 0, 0, 0, 1 },
                          { 0, 0, 1, 0, 0, 0, 1 },
                          { 0, 0, 0, 0, 0, 0, 0 },
                          { 0, 0, 0, 0, 0, 0, 0 },
                          { 1, 0, 0, 1, 1, 1, 0 },
                          { 1, 0, 0, 0, 0, 0, 0 },
                          { 0, 0, 1, 0, 0, 1, 0 },
    
  };
  int found[7][7] = {0};

  string playerName;
  cout << "Enter your name: ";
  cin >> playerName;

  int counter = 0;  
  const int number_of_ships = 10;  

  while (true) {

    int row, col;
    cout << playerName << ", enter coordinates to shoot (row, col): ";
    cin >> row >> col;

    if (board[row][col] == 1) {
      cout << "Hit!" << endl;
      found[row][col] = 1;
      counter++;  

      if (counter == number_of_ships) {
        cout << "Congratulations, " << playerName << ", you won!" << endl;
        break;
      }
    }
    else { found[row][col] = 1;
      cout << "Miss!" << endl;
    }
    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            if(found[i][j]==1){
                if(board[i][j]==1){
                    cout<<"H";
                }
                else{
                    cout<<"M";
                }
                
            }
            else{
                cout<<".";
            }
        }
        cout<<endl;
    }
  }

  return 0;
}
