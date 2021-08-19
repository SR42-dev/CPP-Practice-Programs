/* Assignment 2 Program 3 */

#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>

class players
{
	int player_id;
	char name[20];
	char category[20];
	int age;
	float avg_run_rate;

	public:
	players()
	{
		player_id=0;
		strcpy(name,"NIL");
		strcpy(category,"NIL");
		age=0;
		avg_run_rate=0;
	}

	players(players &p)
	{
		player_id=p.player_id;
		strcpy(name,p.name);
		strcpy(category,p.category);
		age=p.age;
		if(strcmpi(category,"Batsman")==0||strcmpi(category,"All Rounder")==0)
			avg_run_rate=p.avg_run_rate+10;
		else
			avg_run_rate=p.avg_run_rate;
	}

	players(int id, char nam[20], char cat[20], int age1, float avg)
	{
		player_id=id;
		strcpy(name,nam);
		strcpy(category,cat);
		age=age1;
		avg_run_rate=avg;
	}

	void line()
	{
		cout<<"_________________________________________________________"<<endl;
	}

	void display(players p)
	{
		line();
		cout<<"			  Bangalore Cricet Club"<<endl;
		cout<<"			  	Viveknagar,Bagalore"<<endl;
		line();
		cout<<"Player ID Number       : "<<p.player_id<<endl;
		cout<<"Player Name            : "<<p.name<<endl;
		cout<<"Player Category        : "<<p.category<<endl;
		cout<<"Player Age             : "<<p.age<<endl;
		cout<<"Player Average Run Rate: "<<p.avg_run_rate<<endl;
		line();
	}

	void create()
	{
		int id;
		char nam[20];
		char cat[20];
		int age1;
		float avg;
		cout<<"Enter Player ID"<<endl;
		cin>>id;
		cout<<endl;
		cout<<"Enter Player Name"<<endl;
		gets(nam);
		cout<<endl;
		cout<<"Enter Player Category"<<endl;
		gets(cat);
		cout<<endl;
		cout<<"Enter Player Age"<<endl;
		cin>>age1;
		cout<<endl;
		cout<<"Enter Player Average Run Rate"<<endl;
		cin>>avg;
		cout<<endl;
		players p(id,nam,cat,age1,avg);
		display(p);
	}
};

void main()
{
	players p;
	int ch;
	char c;
	p.create();		
}

