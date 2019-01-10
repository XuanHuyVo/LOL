#include<iostream>
using namespace std;
int main()
{
	float s; 
	float lx; 
	float kv; 
	int sn=0; 
	
	
	cout<<"nhap vao so tien , lai suat, so tien ky vong ";
	cin>>s>>lx>>kv;
	if(s>0 && lx>0 && kv>0)
		{
			while ( s <= kv)
				{
					s=s+(s*lx)/100;
					sn++;
				}
		}
	else do
			{
	 			cout<<"ban da nhap sai vui long nhap lai ";
				cin>>s>>lx>>kv; 
	 		}  while (s<0 || lx<0 || kv<0); 
	while ( s <= kv)
		{
			s=s+(s*lx)/100;
			sn++;
		}
		cout<<"sau "<<sn<<" nam thi ban da nhan duoc so tien la "<<kv<<endl;
		return 0;
}
