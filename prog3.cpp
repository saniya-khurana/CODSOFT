#include<iostream>
using namespace std;
void showboard(const char board[3][3]);
void participantmove(char board[3][3], char presentplayer);
bool lookwin(const char board[3][3],char presentplayer);
bool lookdraw(const char board[3][3]);
void player(char &presentlayer);
int main(){
    char board[3][3];
    char presentplayer;
    bool won=false;
    bool draw=false;
    char retry;
    do{
        for(int j=0;j<3;++j){
            for(int k=0;k<3;++k){
                board[j][k] = ' ';
            }
        }
        presentplayer='x';
        won=false;
        draw=false;
        while(!won&&!draw){
            showboard(board);
            participantmove(board,presentplayer);
            won=lookwin(board,presentplayer);
            if(!won){
                draw=lookdraw(board);
                if(!draw){
                    player(presentplayer);

                }

            }

        }
        showboard(board);
        if(won){
            cout<<"player "<<presentplayer<<" won!!"<<endl;

        }
        else if(draw){
            cout<<"Draw!!"<<endl;
        }
        cout<<"Do you want to try once again?(Yes/No)"<<endl;
        cin>>retry;
    }
    while(retry=='y'||retry=='y');
    cout<<"Thankyou for playing !!"<<endl;
    return 0;

}
void showboard(const char board[3][3]){
    cout<<"\n";
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            cout<<board[i][j];
            if(j<2)
            cout<<" | ";

        }
        cout<<"\n";
        if(i<2)
        cout<<"--+---+--\n";

    }
    cout<<endl;

}
void participantmove(char board[3][3],char presentplayer){
    int row,column;
    bool movesvalid=false;
    while(!movesvalid){
        cout<<"participant "<<presentplayer<<",enter your moves(row,column)"<<endl;
        cin>>row>>column;
        row--;
        column--;
        if(row >=0 && row<3 && column>=0 && column<3 && board[row][column]==' '){
            board[row][column]=presentplayer;
            movesvalid=true;
        }
        else{
            cout<<"moves are invalid.Retry.."<<endl;
        }

    }
}
bool lookwin(const char board[3][3],char presentplayer){
    for(int i=0;i<3;++i){
        if((board[i][0]==presentplayer && board[i][1]==presentplayer && board[i][2]==presentplayer)||
        (board[0][i]==presentplayer && board[1][i]==presentplayer && board[2][i]==presentplayer)){
            return true;
        }

    }
    if((board[0][0]==presentplayer && board[1][1]==presentplayer && board[2][2]==presentplayer)||
    (board[0][2]==presentplayer && board[1][1]==presentplayer && board [2][0]==presentplayer)){
    return true;

    }

    return false;
    

}
bool lookdraw(const char board[3][3]){
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            if(board[i][j]==' '){
                return false;
            }
        }
    }
    return true;
}
void player(char &presentplayer){
   if (presentplayer=='x'){
    presentplayer='o';

   }
   else{
    presentplayer='x';
   }
}