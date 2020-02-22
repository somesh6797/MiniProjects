#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>

	  void play();
	  void check(char &,int &,char &,char &);
	  void getv(char &,char &,char &);
	  void startgame(char &,char &);
	  void pname(char &,char &);
	  void win1(char &,int &);
	  void win2(char &,int &);
	  void or(char &,char &);
	  void disp(char &);
	  void def(char &);
	  void send(char &a,char &b,char &c,int &z1,char p1[],char p2[]);
	  void endgame();
	  void start();
	  void strct();
	  void line();
	  void s();


	 inline void uphor (char ar[],char &aa,char &bb,char &cc)
			   {aa=ar[0],bb=ar[1],cc=ar[2];}
	 inline void midhor(char ar[],char &aa,char &bb,char &cc)
			   {aa=ar[3],bb=ar[4],cc=ar[5];}
	 inline void lahor (char ar[],char &aa,char &bb,char &cc)
			   {aa=ar[6],bb=ar[7],cc=ar[8];}
	 inline void upver (char ar[],char &aa,char &bb,char &cc)
			   {aa=ar[0],bb=ar[3],cc=ar[6];}
	 inline void midver(char ar[],char &aa,char &bb,char &cc)
			   {aa=ar[1],bb=ar[4],cc=ar[7];}
	 inline void laver (char ar[],char &aa,char &bb,char &cc)
			   {aa=ar[2],bb=ar[5],cc=ar[8];}
	 inline void Ldig  (char ar[],char &aa,char &bb,char &cc)
			   {aa=ar[0],bb=ar[4],cc=ar[8];}
	 inline void Jdig  (char ar[],char &aa,char &bb,char &cc)
			   {aa=ar[2],bb=ar[4],cc=ar[6];}


	  void win1(char pr1[],int &zr1 )
	  {
	  cout<<"----------------::: Congratulations "<<pr1<<"(o) you won!!! :::-----------------\n";
	  zr1=1;
	  getch();
	  }
	  void win2(char pr2[],int &zr2 )
	  {
	  cout<<"----------------::: Congratulations "<<pr2<<"(x) you won!!! :::-----------------\n";
	  zr2=1;
	  getch();
	  }


	  void pname(char name1[], char name2[])
	     {
	      int ps;
	      cout<<"\n\t\t    Hey players!!.. wanna enter names for player";
	      cout<<"\n\t\t Yes enter-(1) and for No anything except characters \n\t\t";
	      cin>>ps;
	      if(ps==1)
		 {
		 cout<<"\n\t\t Enter name for player 1\n\t\t";
		 cin>>name1;
		 cout<<"\n\t\t Enter name for player 2\n\t\t";
		 cin>>name2;
		 }
	      }

	  void s()
	  {
	  cout<<"\n";
	  cout<<"\t\t               "<<endl;
	  cout<<"\t\t                                 "<<endl;
	  cout<<"\t\t                           "<<endl;
	  cout<<"\t\t                               "<<endl;
	  cout<<"\t\t                   "<<endl;
	  }

	  void line()
	      {
	       for(int i=1;i<=80;i++)
		  {
		  cout<<"-";
		  }
	      }

	  void strct()
		{
		cout<<"\t\t\t  a|b|c\n";
		cout<<"\t\t\t  d|e|f\n";
		cout<<"\t\t\t  g|h|i\n";
		}

	  void disp(char a1[])
		{
		cout<<"\n\t\t\t  "  <<a1[0]<<"|"<<a1[1]<<"|"<<a1[2]<<"\n";
		cout<<"  \t\t\t  "  <<a1[3]<<"|"<<a1[4]<<"|"<<a1[5]<<"\n";
		cout<<"  \t\t\t  "  <<a1[6]<<"|"<<a1[7]<<"|"<<a1[8]<<"\n\n";
		}

	  void def(char a1[])
		{
		for(int i=0;i<=8;i++)
		    {
		    a1[i]='-';
		    }
		}

	  void startgame(char namea[10],char nameb[10])
	       {
		//pname(namea,nameb);
		for(int i=1;i<=2;i++)
		   {
		    for(int j=1;j<=80;j++)
		       {
			cout<<"_";
			if(i==2&&j==28)
			  {
			   cout<<" Starting of Game!!.....";
			   j=52;
			  }
			}
			cout<<"\n";
		   }
		   cout<<"----------------------Please start the Tic Tac Toe Game.------------------------\n";
		   cout<<"                       "<<namea<<" is (o) & "<<nameb<<" is (x)                          \n";
		   cout<<"________________________________________________________________________________";
		   cout<<"\n\n\n";
		}

	  void endgame()
	     {
	      clrscr();
	      s();
	      cout<<"\n\n";
	      for(int i=1;i<=3;i++)
		  {
		   for(int j=1;j<=80;j++)
		      {
		       cout<<"_";
		       if(i==2&&j==28)
			  {
			   cout<<" Dead End of Game!!!...";
			   j=51;
			  }
		       }
		       cout<<"\n";
		   }
		   cout<<"-------------------------Thank You for playing game !!--------------------------\n";
		   cout<<"________________________________________________________________________________";
	     }

	     void getv(char &n1,char a1[],char &x1)
		{
		  int i;
		  char j;
		  for(i=0,j='a';i<=8,j<='i';i++,j++)
		     {
		      if(n1==j)
			 {
			 a1[i]=x1;
			 }
		     }
		}


	   void or(char &m,char b[],char &p1)
		{
		 int j;
		 char i;
		 for(j=0,i='a';j<=8,i<='i';j++,i++)
		    {
		    if(m==i)
		       {
			if(b[j]=='x'||b[j]=='o')
			   {
			   p1=0;
			   }
			else
			   p1=1;
		       }
		    }
		 }


	void check(char b1[],int &z11,char p11[],char p22[])
	 {
	 //calls the states

	    char a,b,c;
	    uphor (b1,a,b,c);
		send(a,b,c,z11,p11,p22);
	    midhor(b1,a,b,c);
		send(a,b,c,z11,p11,p22);
	    lahor (b1,a,b,c);
		send(a,b,c,z11,p11,p22);
	    upver (b1,a,b,c);
		send(a,b,c,z11,p11,p22);
	    midver(b1,a,b,c);
		send(a,b,c,z11,p11,p22);
	    laver (b1,a,b,c);
		send(a,b,c,z11,p11,p22);
	    Ldig  (b1,a,b,c);
		send(a,b,c,z11,p11,p22);
	    Jdig  (b1,a,b,c);
		send(a,b,c,z11,p11,p22);

	}


	    void send(char &a,char &b,char &c,int &z1,char p1[],char p2[])
		  {
	      if(a==b&&b==c)
		  {
		    if(a=='x'||b=='o')
		      {
			 if(a=='o')
			    {
			    win1(p1,z1);
			    }
			 else
			    {
			    win2(p2,z1);
			    }
		      }
		  }
		}

		   void start()
		      {
			char n,x,p,a[9];
			int z,y;
			again: clrscr();
			s();//just design purpose
			char namep1[10]="Player1",namep2[10]="Player2";
			startgame(namep1,namep2);//player details and names
			getch();
			clrscr();
			def(a); //set all the square with the '-'
			for(int i=0;i<=8;i++)
				{
				clrscr();
				s();
				cout<<"\n\n";
				line();// specifyes a horizontal line (design)
				cout<<"\n\n\t\t To quit press\"q\"\n ";
				strct();// shows positions
				disp(a);// shows game current board 
				check(a,z,namep1,namep2);//
				if(z==1)
				  {
					z=2;
					cout<<"\n\t\tIf you want to continue to play press 1\n\t\t\t";
					cin>>y;
					if(y==1)
						{
						y=2;
						goto again;
						}
					else
					endgame();
					getch();
					exit(0);
					}

				if(i%2==0)
					{
					cout<<"\n\t\t"<<namep1<<" (o) Where you want to enter\n\t\t\t";
					}
				else
					{
					cout<<"\n\t\t"<<namep2<<" (x) Where you want to enter\n\t\t\t";
					}
				a: cin>>n;
				if(n=='q')
					{
					clrscr();
					endgame();
					getch();
					exit(0);
					}
				if(n=='a'||n=='b'||n=='c'||
				n=='d'||n=='e'||n=='f'||
				n=='g'||n=='h'||n=='i'  )
					{
					or(n,a,p);
					if(p==0)
						{
						gotoxy(17,22);
						cout<<"This is cheating enter in other place \n\t\t\t";
						goto a;
						}
					else
						{
						if(i%2==0)
						{
						x='o';
						}
						else
						x='x';
						}
					}
					else
					  {
						gotoxy(17,21);
						cout<<"\n\t\tEnter valid place value\n\t\t\t";
						goto a;
						}
						getv(n,a,x);
				}/* end of for statement*/
				cout<<"\n-----------------Oooops!! It's Draw, you both have strong mind.----------------- \n";
				cout<<"\n\t\tIf you want to continue to play press 1\n\t\t\t";
				cin>>y;
				if(y==1)
					{
					y=2;
					goto again;
					}
				endgame();
			 }/* end of start() */


void play()
	 {
	  start();
	 }
void main()
{
  play();
}