#include<iostream>
#include<tchar.h>

using namespace std;

class CMyData
{
	public:
		CMyData(){cout<<"CMyData()"<<endl;		}
		
		//copy constructor
	CMyData(const CMyData &rhs)
	{
		
		this->m_nData = rhs.m_nData;
		cout<<"CMyData(const CMyData &)"<<endl;
		
		
	}
	int GetData(void)const{return m_nData;}
	
	void SetData(int nParam){m_nData=nParam;}
	
	private:
		int m_nData=0;
		

};

int _tmain(int argc, _TCHAR* argv[])
{
	CMyData a;
	a.SetData(10);
	
	CMyData b(a);
	
	cout<<b.GetData()<<endl;
return 0;	
}
