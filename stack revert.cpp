#include<iostream>
using namespace std;
# define size 10;
class stack{
	private:
		int *arr;
		int top;
		int capacity;
		public:
			stack()
			{
				capacity=size;
				arr=new int[capacity];
				top=-1;
			}
			bool isempty()
			{
				if(top==-1)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			bool isfull()
			{
				if((top+1)==capacity)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			bool push(int x)
			{
				if(!isfull())
				{
					arr[++top]=x;
					return true;
				}
				else
				{
					return false;
				}
			}
			bool pop(int& x)
			{
				if(isempty())
				{
				   return false;
				}
				else
				{
					x=arr[top--];
					return true;
				}
			}
};
int main()
{
	stack s1;
	int x=0;
	while(x!=-1)
	{
		cin>>x;
	if(x!=-1)
	{
		s1.push(x);
	}
}
while(!s1.isempty())
{
	s1.pop(x);
	cout<<x<<endl;
}
}
