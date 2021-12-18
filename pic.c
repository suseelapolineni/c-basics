#include<stdio.h>
void main()
{
	int res;
	int rc,ac,gkc,enc,cc;
	int rs,as,gks,ens,cs;
	printf("enter cutoffs");
	scanf("%d%d%d%d%d",&rc,&ac,&gkc,&enc,&cc);
	printf("enter scores");
           scanf("%d%d%d%d%d",&rs,&as,&gks,&ens,&cs);
           res=rs>=rc&&as>=ac&&gks>=gkc&&ens>=enc&&cs>=cc;
           printf("%d",res);
           
	
}
