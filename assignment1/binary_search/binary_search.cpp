// binary_search.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

template <typename Iter,typename V>
	bool findd(Iter beg,Iter end,const V& v)
{
	auto mid=beg+(end-beg)/2;
	while((mid !=end) && (*mid !=v))
	{
		if(v<*mid)
			end=mid;
		else
			beg=mid+1;
		mid=beg+(end-beg)/2;
	}
	if (*mid==v)
	{
		cout<<"Yes"<<endl;
	}
	else 
		cout<<"No"<<endl;
	
	return 0;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int a[7]={1,2,3,4,5,6,7};
	vector<int>text(a,a+7);
	auto beg=text.begin();
	auto end=text.end();
	
	
	findd(beg,end,4);
	/*直接使用库函数
	int wanted={2};
	if(std::binary_search(std::begin(text),std::end(text),wanted))
		cout<<wanted<<"is definitely in there - somewhere..."<<endl;
	else
		cout<<wanted<<"cannot be found - maybe you got it wrong..."<<endl;
		*/
	return 0;
}

