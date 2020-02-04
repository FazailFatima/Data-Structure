#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<ctime>
using namespace std;
class queue{
private:
	int *arr;
	int capacity;
	int front;
	int rear;
	int noe;
public:
	queue(int size)
	{
		capacity = size;
		arr = new int[capacity];
		front = -1;
		rear = -1;
		noe = 0;
	}
	bool isempty()
	{
		if (noe == 0)
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
		if (noe == capacity)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void enque(int x)
	{
		if (!isfull())
		{
			noe++;
			arr[(++front) % capacity] = x;
		}
	}
	int deque()
	{
		if (!isempty())
		{
			noe--;
			return  arr[(++rear) % capacity];
		}
	}
	void print()
	{
		for (int i = (rear + 1); i <= front; i++)
		{
			cout << arr[i%capacity];
		}
	}
	int getsize()
	{
		return noe;
	}
};
int main()
{
	int a, b;
	queue q(100);
	while (0 == 0)
	{
		Sleep(1500);
		srand(time(0));
		a = rand() % 17;
		for (int i = 0; i < a; ++i)
		{
			q.enque(i);
		}
		a=rand() %10;
		for (int i = 0; i < a; ++i)
			q.deque();
			cout << "\n\t\t------------Size of queue------------" << "\n\t\t\t\t" << q.getsize() << endl;
	}
}

