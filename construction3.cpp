#include<iostream>

using namespace std;

class student{
	int id;
	float mark[5];

	public:

	student(){           //this is default constructor
		id=0;
		for(int i=0;i<5;++i)
			mark[i]=0;
	}
	student(int a, float m[], int n=5){         //parameterised constructor
		id=a;
		for(int i=0;i<n;++i)
			mark[i]=m[i];
	}
	student(student &ob1){       //copy constructor
		id=ob1.id;
		for(int i=0;i<5;++i)
			mark[i]=ob1.mark[i];
	}
	//Setter and Getter functions
	void set_id(int i){id=i;}
	void set_mark(float m[]){
		for(int i=0;i<5;++i)
			mark[i]=m[i];
	}

	int get_id(){return id;}
	float* get_mark(){return mark;}
};

int main(){
	float mark1[5]={10,9,8,10,9}, mark2[5]={8,7,8,6,9}, *mark_ret;

	student ob1(26,mark1);//parameterised

	cout<<"Ob1:\n ID  = "<<ob1.get_id()<<"\n Marks = ";
	mark_ret=ob1.get_mark();
	for(int i=0;i<5;++i)
		cout<<(*(mark_ret + i))<<" ";

	ob1.set_id(100);
	ob1.set_mark(mark2);

	student ob2(ob1);//Copy

	cout<<"\n\nOb2:\n ID  = "<<ob1.get_id()<<"\n Marks = ";
	mark_ret=ob2.get_mark();
	for(int i=0;i<5;++i)
		cout<<(*(mark_ret + i))<<" ";

	return 0;
}



//Ob1:
 //ID  = 26
// Marks = 10 9 8 10 9

//Ob2:
 //ID  = 100
 //Marks = 8 7 8 6 9





