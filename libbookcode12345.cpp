#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class book
{
char bookname[30], authorname[30];
float price;
public:
void readbook()
{
cout<<"enter the name of the book: "<<endl;
gets(bookname);
gets(bookname);
cout<<"enter the name of the author: "<<endl;
gets(authorname);
cout<<"enter the price of the book: "<<endl;
cin>>price;

}
void showbook()
{cout<<bookname<<" \t "<<authorname<<" \t "<<price<<endl;
}
};
int main()
{book *b;
int n,i;
cout<<"enter no of books: "<<endl;
cin>>n;
b=new book[n];
for(i=0; i<n; i++)
{b[i].readbook();
}
cout<<"bname \t author \t price"<<endl;
for(i=0; i<n; i++)
{b[i].showbook();

}
return 0;
}
