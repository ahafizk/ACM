#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
	long int byte,sec,bps,rem,ts,tbs,c=0;
//	freopen("input.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	while(scanf("%ld",&byte)==1)
	{
		if(byte==0)break;
		c++;
		if(c>1)cout<<"\n";
		long int tb = 0;

		cout<<"Output for data set "<<c<<","<<" "<<byte<<" bytes:\n";
		cin>>bps;
		tb = bps;
		tbs = bps;
		ts = 1;
		sec = 1;
		while(tb<=byte)
		{
			if(tb==byte&&sec<=5)
			{
				cout<<"Total time: "<<ts<<" seconds\n";
				ts = 0;
				break;
			}
			cin>>bps;
			tb +=bps;
			tbs+=bps;
			ts++;
			sec++;
			
			if(tbs==0&&sec==5){cout<<"   Time remaining: stalled\n";sec=0;tbs=0;}
			if(sec==5&&tb<=byte&&tbs>0)
			{
				
				double db = (double)(byte - tb)/((double)tbs*0.2);
				//rem = ((byte-tb)*5)%tbs;
				//if(rem)db++;
				printf("   Time remaining: %ld seconds\n",(long int)(db+.9999999));
				//if(db>1e-7)db = db+1;
				tbs = 0;
				sec = 0;
			//	cout<<"   Time remaining: "<<ceil(db)<<" seconds\n";
			}
		}
	}
	printf("\n");
	return 0;
}