//Het Kanzariya
#include<iostream>
using namespace std;

class Matrix{
public:
	int rows;
	int columns;
	int a[3][3]={1,1,1,2,2,2,3,3,3};
	int b[3][3]={1,1,1,2,2,2,3,3,3};
	Matrix(){
	rows=3;
	columns=3;}
	void no_of_row(int c){
		rows=c;
	}
	void no_of_column(int d){
		columns=d;
	}
	void entry(int r,int c,int d,int e){
	if(e==1){
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
			if(i==r && j==c){
			a[i][j]=d;}
		}
	}
	}
	if(e==0){
	for(int i=0;i<rows;i++){
	for(int j=0;j<columns;j++){
		if(i==r && j==c){
			a[i][j]=d;}
	}
	}
	}
}
	void add(){
	for(int i=0;i<rows;i++){
	for(int j=0;j<columns;j++){
		printf("%d\t",a[i][j]+b[i][j]);}
	 printf("\n");
	}
	}
	void multiply1(){
	int mul[3][3];
	for(int i=0;i<rows;i++){
	for(int j=0;j<columns;j++){
	mul[i][j]=0;
	for(int k=0;k<columns;k++){
	mul[i][j]+=a[i][j]+b[i][j];}
	}}
	for(int i=0;i<rows;i++){
	for(int j=0;j<columns;j++){
		printf("%d\t",mul[i][j]);}
	 printf("\n");
	}
}
};


int main(){
Matrix s,s1;
s1.no_of_row(2);
s1.no_of_column(2);
printf("the addition is\n");
s.add();
s.entry(1,0,3,1);
printf("the addition is\n");
s.add();
printf("the addition is\n");
s1.add();
printf("the multiplication is\n");
s.multiply1();
printf("the multiplication is\n");
s1.multiply1();
return 0;
}
