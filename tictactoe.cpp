#include<iostream>
using namespace std ;
void display_grid(char grid[][3],int row,int col){
    int i,j;
    for(i=0;i<row;i++){
        for (j=0;j<col;j++)
        {
            cout<<grid[i][j];
            if(j==2) break;
            cout<<"   |";
             
        }
        cout<<endl;
         if(i==2) break;
        cout<<"----|----|----"<<endl;
        }
}
   void insert_p1(char (*grid)[3], int row, int col) {
    int pos1;
    cout << "ENTER POSITION FOR PLAYER 1" << endl;
    cin >> pos1;
    if (pos1 == 1) {
        if (grid[0][0] == 'X' || grid[0][0] == 'O') cout << "PLACE OCCUPIED";
        else  grid[0][0] = 'X';
        }
     else if (pos1 == 2) {
        if (grid[0][1] == 'X' || grid[0][1] == 'O')  cout << "PLACE OCCUPIED";
         else grid[0][1] = 'X';
        }
     else if (pos1 == 3) {
        if (grid[0][2] == 'X' || grid[0][2] == 'O')  cout << "PLACE OCCUPIED";
        else grid[0][2] = 'X';
        }
      else if (pos1 == 4) {
        if (grid[1][0] == 'X' || grid[1][0] == 'O') cout << "PLACE OCCUPIED";
        else grid[1][0] = 'X';
        }
    else if (pos1 == 5) {
        if (grid[1][1] == 'X' || grid[1][1] == 'O') cout << "PLACE OCCUPIED";
         else  grid[1][1] = 'X';
        }
    else if (pos1 == 6) {
        if (grid[1][2] == 'X' || grid[1][2] == 'O')  cout << "PLACE OCCUPIED";
             else grid[1][2] = 'X';
        }
        else if (pos1 == 7) {
        if (grid[2][0] == 'X' || grid[2][0] == 'O')  cout << "PLACE OCCUPIED";
        else   grid[2][0] = 'X';
         }
          else if (pos1 == 8) {
        if (grid[2][1] == 'X' || grid[2][1] == 'O') cout << "PLACE OCCUPIED";
         else grid[2][1] = 'X';
        }
    else if (pos1 == 9) {
        if (grid[2][2] == 'X' || grid[2][2] == 'O')  cout << "PLACE OCCUPIED";
        else  grid[2][2] = 'X';
        }
    else  cout << "Invalid position";
}
void insert_p2(char (*grid)[3], int row, int col)
{
    int pos2;
    cout<<"ENTER POSITION FOR PLAYER 2"<<endl;
    cin>>pos2; 
   if (pos2 == 1) {
        if (grid[0][0] == 'X' || grid[0][0] == 'O') cout << "PLACE OCCUPIED";
        else  grid[0][0] = 'O';
        }
     else if (pos2 == 2) {
        if (grid[0][1] == 'X' || grid[0][1] == 'O')  cout << "PLACE OCCUPIED";
         else grid[0][1] = 'O';
        }
     else if (pos2 == 3) {
        if (grid[0][2] == 'X' || grid[0][2] == 'O')  cout << "PLACE OCCUPIED";
        else grid[0][2] = 'O';
        }
      else if (pos2 == 4) {
        if (grid[1][0] == 'X' || grid[1][0] == 'O') cout << "PLACE OCCUPIED";
        else grid[1][0] = 'O';
        }
    else if (pos2== 5) {
        if (grid[1][1] == 'X' || grid[1][1] == 'O') cout << "PLACE OCCUPIED";
         else  grid[1][1] = 'O';
        }
    else if (pos2 == 6) {
        if (grid[1][2] == 'X' || grid[1][2] == 'O')  cout << "PLACE OCCUPIED";
             else grid[1][2] = 'O';
        }
        else if (pos2 == 7) {
        if (grid[2][0] == 'X' || grid[2][0] == 'O')  cout << "PLACE OCCUPIED";
        else   grid[2][0] = 'O';
         }
          else if (pos2 == 8) {
        if (grid[2][1] == 'X' || grid[2][1] == 'O') cout << "PLACE OCCUPIED";
         else grid[2][1] = 'O';
        }
    else if (pos2 == 9) {
        if (grid[2][2] == 'X' || grid[2][2] == 'O')  cout << "PLACE OCCUPIED";
        else  grid[2][2] = 'O';
        }
    else  cout << "Invalid position";
}
int winner(char (*grid)[3],int row ,int col){
    int f ;
    if(grid[0][0]==grid[0][1]&& grid[0][1]==grid[0][2])
    {
        if(grid[0][0]=='X') return f=1 ; else return f=2; 
    }
    if(grid[1][0]==grid[1][1]&& grid[1][1]==grid[1][2]){
        if(grid[1][0]=='X') return f=1 ; else return f=2 ;
    }
    if(grid[2][0]==grid[2][1]&& grid[2][1]==grid[2][2]){
        if(grid[2][0]=='X') return f=1 ; else return f=2 ;
    }
    if(grid[0][0]==grid[1][0]&& grid[1][0]==grid[2][0]){
        if(grid[2][0]=='X') return f=1 ; else return f=2 ;
    }
    if(grid[0][1]==grid[1][1]&& grid[2][1]==grid[1][1]){
        if(grid[2][1]=='X') return f=1 ; else return f=2 ;
    }
    if(grid[0][2]==grid[1][2]&& grid[1][2]==grid[2][2]){
        if(grid[2][2]=='X') return f=1 ; else return f= 2 ;
    }
    if(grid[0][0]==grid[1][1]&& grid[1][1]==grid[2][2]){
        if(grid[0][0]=='X') return f= 1 ; else return f=2 ;
    }
    if(grid[0][2]==grid[1][1]&& grid[1][1]==grid[2][0]){
        if(grid[2][0]=='X') return f=1 ; else return f=2 ;
    }
    
}

int main(){
    int i ;
    char grid[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    cout<<"----------TIC TAC TOE----------"<<endl;
    display_grid(grid,3,3);
    for( i =0;i<9;i++)
    {
        if(i%2==0){
            int w ;
            cout<<"PLAYER 1 TURN:"<<endl;
            insert_p1(grid, 3, 3);
             display_grid(grid,3,3);
            w= winner(grid,3,3);
            if(w==1){ cout<<"PLAYER 1 WINS"<<endl;
             display_grid(grid,3,3);
             break ;}
        }
        else {
            int w;
            cout<<"PLAYER 2 TURN:"<<endl;
            insert_p2(grid, 3, 3);
             display_grid(grid,3,3);
            w= winner(grid,3,3);
            if(w==2){ cout<<"PLAYER 2 WINS"<<endl;
             display_grid(grid,3,3);
             break ;
        }
             

        }
    }
     if(i==9) cout<<"DRAW" ;

return 0;
}
