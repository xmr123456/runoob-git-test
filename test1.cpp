#include <iostream>
using namespace std;
int main()
{
	while(1)
	{
		int a,b,c;
		c=0;
		cout<<"输入第一组数:"<<endl;
		cout<<"\t输入第一个数:";
		cin>>a;
		cout<<"\t输入第二个数:";
		cin>>b;
		if(a-b>0)
		{
			c++;
		}
		
		cout<<"输入第二组数:"<<endl;
		cout<<"\t输入第一个数:";
		cin>>a;
		cout<<"\t输入第二个数:";
		cin>>b;
		if(a-b>0)
		{
			c++;
		}
		
		cout<<"输入第三组数:"<<endl;
		cout<<"\t输入第一个数:";
		cin>>a;
		cout<<"\t输入第二个数:";
		cin>>b;
		if(a-b>0)
		{
			c++;
		}
		
		if(c>=2)
		{
			cout<<"输出信号为:"<<1<<endl;
		}
		else
		{
			cout<<"输出信号为:"<<0<<endl;
		}
		
		char flag;
		cout<<"是否继续(y/n):";
		cin>>flag;
		if(flag=='y' || flag=='Y')
		{
			continue;
		}
		else if(flag=='n' || flag=='N')
		{
			break;
		}
	}
	return 0;
}