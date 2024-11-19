#include<iostream>
#include<conio.h>
#include <cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int a,b;
    int r1s=0;
    int r2s=0;
    string user1,user2;
    char r1,r2,r3;
    cout<<"\t \t Welcome To Rock , Paper ,Scissor Game \n";
    cout<<"\n \t \t Please Press 1 for single player game and 2 for 2 players \n";
    cin>>a;
    cout<<"Enter the number of rounds want to play : ";
    cin>>b;
     if(a==2)
    {
        system("cls");
        cout<<"\t \t Welcome to 2 Player Rock paper scissor game \n";
        cout<<"\n Enter the 1st user name : \n";
        cin>>user1;
        cout<<"\n  Enter the 2nd user name : \n";
        cin>>user2;
        system("cls");
    }
    else if(a==1)
    {
        system("cls");
        cout<<"\t \t Welcome to 1 Player Rock paper scissor game \n";
        cout<<"\n Enter the your user name : \n";
        cin>>user1;
    }
    getch();
    for(int i=1;i<=b;i++)
    {
    if(a==2)
    {
        cout<<"\t \t PLease enter r for rock, s for scissor and p for paper \n \n";
        cout<<user1<<" ,Please enter your response : ";
        cin>>r1;
        system("cls");
        cout<<"\t \t PLease enter r for rock, s for scissor and p for paper \n \n";
        cout<<user2<<" ,Please enter your response : ";
        cin>>r2;
        system("cls");
    /*1*/    if(r1=='r'&&r2=='r')
        {
            cout<<"\t \t Wow both played very well \n \t \t its a tie \n \t \t both choose Rocks";
            getch();
            
        }
    /*2*/ if(r1=='s'&&r2=='s')
        {
            cout<<"\t \t Wow both played very well \n \t \t its a tie \n \t \t both choose Scissors";
            getch();       
        }
    /*3*/ if(r1=='p'&&r2=='p')
        {
            cout<<"\t \t Wow both played very well \n \t \t its a tie \n \t \t both choose Paper";
            getch();
        }
    /*4*/    if(r1=='r'&&r2=='p')
        {
            cout<<"\t \t Very good "<<user2<<"You wraped "<<user1<<"'s rock and won the game";
            getch();
            r2s++;
        }
    /*5*/     if(r1=='p'&&r2=='r')
        {
            cout<<"\t \t Very good "<<user1<<"You wraped "<<user2<<"'s rock and won the game";
            getch();
            r1s++;
        }
    /*6*/ if(r1=='r'&&r2=='s')
        {
            cout<<"\t \t Very good "<<user1<<"You crushed "<<user2<<"'s scissor and won the game";
            getch();
            r1s++;
        }
    /*7*/   if(r1=='s'&&r2=='r')
        {
            cout<<"\t \t Very good "<<user2<<"You crushed "<<user1<<"'s scissor and won the game";
            getch();
            r2s++;
        }
    /*8*/  if(r1=='p'&&r2=='s')
        {
            cout<<"\t \t Very good "<<user2<<"You sliced through "<<user1<<"'s paper and won the game";
            getch();
            r2s++;
        }
    /*9*/  if(r1=='s'&&r2=='p')
        {
            cout<<"\t \t Very good "<<user1<<"You sliced through "<<user2<<"'s paper and won the game";
            getch();
            r1s++;
        }
        system("cls");
        cout<<"\n \t \t The scores after "<<i<<" rounds is :"<<endl;
        cout<<user1<<"'s score is : "<<r1s<<endl;
        cout<<user2<<"'s score is : "<<r2s<<endl;
        getch();

    }
    else if(a==1)
    {
        system("cls");
        cout<<"\t \t PLease enter r for rock, s for scissor and p for paper \n \n";
        cout<<user1<<" ,Please enter your response : ";
        cin>>r1;
        int x = time(0);
        srand(x);
        int m = rand()%3;
        if(m==0)
        {
            r2 = 'r';
        }
        
        else if(m==1)
        {
            r2 = 's';
        }
        
        else if(m==2)
        {
            r2 = 'p';
        }

           system("cls");
    /*1*/    if(r1=='r'&&r2=='r')
        {
            cout<<"\t \t Wow both played very well \n \t \t its a tie \n \t \t both choose Rocks";
            getch();
            
        }
    /*2*/ if(r1=='s'&&r2=='s')
        {
            cout<<"\t \t Wow both played very well \n \t \t its a tie \n \t \t both choose Scissors";
            getch();       
        }
    /*3*/ if(r1=='p'&&r2=='p')
        {
            cout<<"\t \t Wow both played very well \n \t \t its a tie \n \t \t both choose Paper";
            getch();
        }
    /*4*/    if(r1=='r'&&r2=='p')
        {
            cout<<"\t \t Oops bot wraped your rock and won the game";
            getch();
            r2s++;
        }
    /*5*/     if(r1=='p'&&r2=='r')
        {
            cout<<"\t \t Very good "<<user1<<"You wraped bot's rock and won the game";
            getch();
            r1s++;
        }
    /*6*/ if(r1=='r'&&r2=='s')
        {
            cout<<"\t \t Very good "<<user1<<" You crushed bot's scissor and won the game";
            getch();
            r1s++;
        }
    /*7*/   if(r1=='s'&&r2=='r')
        {
            cout<<"\t \t Oops bot crushed your scissor and won the game";
            getch();
            r2s++;
        }
    /*8*/  if(r1=='p'&&r2=='s')
        {
           cout<<"\t \t Oops bot sliced your paper and won the game";
            getch();
            r2s++;
        }
    /*9*/  if(r1=='s'&&r2=='p')
        {
            cout<<"\t \t Very good "<<user1<<"You sliced through bot's paper and won the game";
            getch();
            r1s++;
        }
        system("cls");
        cout<<"\n \t \t The scores after "<<i<<" rounds is :"<<endl;
        cout<<user1<<"'s score is : "<<r1s<<endl;
        cout<<"bot's score is : "<<r2s<<endl;
        getch();

        
    }
    }

    if(a==2)
    {
     if(r1s==r2s)
    {
        cout<<"Oh its a TIE "<<endl;
    }
    else if(r1s>r2s)
    {
        cout<<endl<<"Very good "<<user1<<" You have won the game by "<<r1s-r2s<<" point";
    }
    else
    {
    cout<<endl<<"Very good "<<user2<<" You have won the game by "<<r2s-r1s<<" point";
    }
    }
    if(a==1)
    {
    if(r1s==r2s)
    {
        cout<<"Oh its a TIE "<<endl;
    }
    else if(r1s>r2s)
    {
        cout<<endl<<"Very good "<<user1<<" You have won the game by "<<r1s-r2s<<" point";
    }
    else
    {
    cout<<endl<<"oops bot have won the game by "<<r2s-r1s<<" point";
    }

    }
    

    
  
    cout<<"\n\t \t Thank you for playing :-)";
    getch();
    return 0;


}