#include<bits/stdc++.h>

char board[3][3] ;
void display() ;
void player() ;
void won();
int over() ;
int flag=  0  ;
int x ;

using namespace std ;
void gameloadscreen() ;
int main()
{
cout<<"\n\n\t\t\t\t\t Welcome to tic - tac -toe "<<endl;
cout<<"Guidlines : "<<endl;
cout<<"\t Read carefully "<<endl;
cout<<"\t1] Player 1 has symbol 'X' while player 2 has 'O' . "<<endl<<"\t2] Players have to decide who can start by entering first ."<<endl<<"\t3] Player has to enter willing positon which should be null ."<<endl<<"\t4] Enter from 1 to 9 . "<<endl<<"\t5] Any maldiscipline is not allowed ."<<endl;
cout<<"\t\t\t Player 1 (x) : "<<" Click 1 "<<endl;
cout<<"\t\t\t Player 2 (o) : "<<" Click 2"<<endl<<endl;
cout<<"\tEnter the First Player and it's willing positon : "<<endl<<endl;
int k = 1;
while(k)
{
  cin>>x ;
  if(x!=1 && x!=2)
  k=1 ;
  else { k =0 ; break ; }
}
int test = 1 ;
display() ;
 while(over)
 {

    player()  ;
    display() ;
    won() ;
    test = over();
    if(test==0) {
      cout<<"\t\t\t **** Game has been ended ***** "<<endl;
      won() ;
     exit(0) ; }

 }

}


void won()
{
    int i =0 , j=0 ;
    for(i=0;i<3;i++)
    {
      if( ( (board[i][0]==board[i][1])&&(board[i][0]==board[i][2])&&(board[i][0]=='X' ||board[i][0]=='O')) || ((board[0][i]==board[1][i]) && (board[0][i]==board[2][i]) &&  (board[0][i]=='X' ||board[0][i]=='O')) )
      {
        flag = 1 ; }
    }
      if(board[0][0]==board[1][1] && board[0][0]==board[2][2] && (board[0][0]=='X' || board[0][0]=='O') || board[0][2]==board[1][1] && board[0][2]==board[2][0] && (board[0][2]=='X' || board[0][2]=='O'))
      {  flag = 1 ; }

  if(flag==1)
  {
    if(x==2)
        {
          cout<<"\n\n\t\t\t CONGRATULATIONS !"<<endl<<"\t\t\t PlAYER 1 HAS WON THE GAME !"<<endl;
          exit(0) ; }
    else {
           cout<<"\n\n\t\t\t CONGRATULATIONS !"<<endl<<"\t\t\t PlAYER 2 HAS WON THE GAME !"<<endl;
           exit(0) ; }
  }

}

int over()
{
int i =0 , j= 0 ;

for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
    if(board[i][j]!='X' && board[i][j]!='O')
    return 1 ;
  }
}
return 0 ;
}

void player()
{

int ch =0 ;

  if(x==2)
  {


    cout<<" Now Player 2 ( O ) go ahead ! "<<endl;
    int opt = 1 ;

    do
    {   cin>>ch ;
     switch (ch)
    {
    case 1: if(board[0][0]!='O' && board[0][0]!='X')
            { board[0][0]='O' ;
              opt =0 ;
            }
            else { cout<<"Invalid !!"<<endl; opt=1 ;}
            break ;
    case 2: if(board[0][1]!='O' && board[0][1]!='X')
            { board[0][1]='O' ;
              opt =0 ;
            }
            else { cout<<"Invalid !!"<<endl; opt=1 ;}
            break ;
    case 3: if(board[0][2]!='O' && board[0][2]!='X')
            { board[0][2]='O' ;
              opt =0 ;
            }
            else { cout<<"Invalid !!"<<endl; opt=1 ;}
            break ;
    case 4: if(board[1][0]!='O' && board[1][0]!='X')
            { board[1][0]='O' ;
              opt =0 ;
            }
            else { cout<<"Invalid !!"<<endl; opt=1 ;}
            break ;
    case 5: if(board[1][1]!='O' && board[1][1]!='X')
            { board[1][1]='O' ;
              opt =0 ;
            }
            else { cout<<"Invalid !!"<<endl; opt=1 ;}
            break ;
    case 6: if(board[1][2]!='O' && board[1][2]!='X')
            { board[1][2]='O' ;
              opt =0 ;
            }
            else { cout<<"Invalid !!"<<endl; opt=1 ;}
            break ;
    case 7: if(board[2][0]!='O' && board[2][0]!='X')
            { board[2][0]='O' ;
              opt =0 ;
            }
            else { cout<<"Invalid !!"<<endl; opt=1 ;}
            break ;
    case 8: if(board[2][1]!='O' && board[2][1]!='X')
            { board[2][1]='O' ;
              opt =0 ;
            }
            else { cout<<"Invalid !!"<<endl; opt=1 ;}
            break ;

    case 9: if(board[2][2]!='O' && board[2][2]!='X')
            { board[2][2]='O' ;
              opt =0 ;
            }
            else { cout<<"Invalid !!"<<endl; opt=1 ;}
            break ;
    default :
    {  std::cout << "Invalid choice" << '\n';
       opt=1 ;
         }
    }  // switch
  }
    while(opt) ;
    x=1  ;

  }

else if(x==1)
  {
    cout<<" Now Player 1 ( X ) go ahead !  "<<endl;
    int opt = 1 ;

   do
  {   cin>>ch ;
     switch (ch)
  {
    case 1: if(board[0][0]!='O' && board[0][0]!='X')
            { board[0][0]='X' ;
              opt =0 ;
            }
            else { cout<<"Invalid !!"<<endl; opt=1 ;}
            break ;
    case 2: if(board[0][1]!='O' && board[0][1]!='X')
            { board[0][1]='X' ;
              opt =0 ;
            }
            else { cout<<"Invalid !!"<<endl; opt=1 ;}
            break ;
    case 3: if(board[0][2]!='O' && board[0][2]!='X')
            { board[0][2]='X' ;
              opt =0 ;
            }
            else { cout<<"Invalid !!"<<endl; opt=1 ;}
            break ;
    case 4: if(board[1][0]!='O' && board[1][0]!='X')
            { board[1][0]='X' ;
              opt =0 ;
            }
            else { cout<<"Invalid !!"<<endl; opt=1 ;}
            break ;
    case 5: if(board[1][1]!='O' && board[1][1]!='X')
            { board[1][1]='X' ;
              opt =0 ;
            }
            else { cout<<"Invalid !!"<<endl; opt=1 ;}
            break ;
    case 6: if(board[1][2]!='O' && board[1][2]!='X')
            { board[1][2]='X' ;
              opt =0 ;
            }
            else { cout<<"Invalid !!"<<endl; opt=1 ;}
            break ;
    case 7: if(board[2][0]!='O' && board[2][0]!='X')
            { board[2][0]='X' ;
              opt =0 ;
            }
            else { cout<<"Invalid !!"<<endl; opt=1 ;}
            break ;
    case 8: if(board[2][1]!='O' && board[2][1]!='X')
            { board[2][1]='X' ;
              opt =0 ;
            }
            else { cout<<"Invalid !!"<<endl; opt=1 ;}
            break ;

    case 9: if(board[2][2]!='O' && board[2][2]!='X')
            { board[2][2]='X' ;
              opt =0 ;
            }
            else { cout<<"Invalid !!"<<endl; opt=1 ;}
            break ;
    default :
    {  std::cout << "Invalid choice" << '\n';
       opt=1 ;
         }
  }  // switch
}
  while (opt) ;
    x=2  ;
  }

}

void display()
{
   system("cls");
   cout<<"\n\n\n"<<endl;
   cout<<"\t\t\t *********  Tic - Tac - Toe ********* \n\n\n"<<endl<<endl ;
  int i =0 , j=0 ;
  for(i=0;i<3;i++)
  {cout<<"\t\t\t" ;
    for(j=0;j<3;j++)
    {
      cout<<"\t"<<" || "<<board[i][j];
    }

    cout<<"  ||"<<endl<<endl;

  }

}


