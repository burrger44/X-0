#include <iostream>

using namespace std;

bool winO(char mat[9][9]){

    if(mat[1][1] == 'O'&&
        mat[2][1] == 'O'&&
        mat[3][1] == 'O'){
         return true;
     }
     else if(mat[1][2] == 'O'&&
         mat[2][2] == 'O'&&
         mat[3][2] == 'O'){
          return true;
      }
      else if(mat[1][3] == 'O'&&
         mat[2][3] == 'O'&&
         mat[3][3] == 'O'){
          return true;
      }
      else if(mat[1][1] == 'O'&&
         mat[1][2] == 'O'&&
         mat[1][3] == 'O'){
          return true;
      }
      else if(mat[2][1] == 'O'&&
         mat[2][2] == 'O'&&
         mat[2][3] == 'O'){
          return true;
      }
      else if(mat[3][1] == 'O'&&
         mat[3][2] == 'O'&&
         mat[3][3] == 'O'){
          return true;
      }
      else if(mat[1][1] == 'O'&&
         mat[2][2] == 'O'&&
         mat[3][3] == 'O'){
          return true;
      }
      else if(mat[1][3] == 'O'&&
         mat[2][2] == 'O'&&
         mat[3][1] == 'O'){
          return true;
      }
      
      return false;
}

bool winX(char mat[9][9])
{
    if(mat[1][1] == 'X'&&
       mat[2][1] == 'X'&&
       mat[3][1] == 'X'){
        return true;
    }
    else if(mat[1][2] == 'X'&&
        mat[2][2] == 'X'&&
        mat[3][2] == 'X'){
         return true;
     }
     else if(mat[1][3] == 'X'&&
        mat[2][3] == 'X'&&
        mat[3][3] == 'X'){
         return true;
     }
     else if(mat[1][1] == 'X'&&
        mat[1][2] == 'X'&&
        mat[1][3] == 'X'){
         return true;
     }
     else if(mat[2][1] == 'X'&&
        mat[2][2] == 'X'&&
        mat[2][3] == 'X'){
         return true;
     }
     else  if(mat[3][1] == 'X'&&
        mat[3][2] == 'X'&&
        mat[3][3] == 'X'){
         return true;
     }
     else  if(mat[1][1] == 'X'&&
        mat[2][2] == 'X'&&
        mat[3][3] == 'X'){
         return true;
     }
     else if(mat[1][3] == 'X'&&
        mat[2][2] == 'X'&&
        mat[3][1] == 'X'){
         return true;
     }

      return false;
}

bool vezi(char mat[9][9], int i, int j)
{
    if(mat[i][j] == 'O' || mat[i][j] == 'X'){
        return false;
    }
    else{
        return true;
    }
}

int main()
{
    char mat[9][9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    int i = 0, j = 0;

    for(int rand = 1; rand <= 2; rand++){
        cin >> i >> j;

        if(vezi(mat, i, j) == true){
            if(rand == 1){
                mat[i][j] = 'X';
            }
            else if (rand == 2){
                mat[i][j] = 'O';
                rand = 0;
            }

            system("cls");
            
            for(int index = 1; index <= 3; index++){
                for(int jndex = 1; jndex <= 3; jndex++){
                    cout << mat[index][jndex];
                    if(jndex != 3){
                        cout << "| ";
                    }
                }
                cout << endl;
                if(index != 3){
                    cout << "-------" << endl;
                }
            }
        }
        else{
            cout << "NO";
        }

        if(winX(mat) == true){
            cout << "A castigat X";
        }
        else if(winO(mat) == true){
            cout << "A castigat O";
        }
    }
}