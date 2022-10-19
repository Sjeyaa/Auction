#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp,*fp1,*fp2,*fp3;
	fp=fopen("Rcb.txt","w");
	fp1=fopen("Csk.txt","w");
	fp2=fopen("lsg.txt","w");
	fp3=fopen("mi.txt","w");
	
	
	char *str[1000]={"Virat","MSD","Rohit","Bumrah","Ashwin","Jedeja","Chahal","Klrahul","Pant","Dk","Shami","hooda","Hardik","Bhuvi","Harshal","Ruthuraj","Khan","surya","Ishan","Dhawan","Rajat","verma","Bishnoi","Sky","badhoni","deepak","sandy","sanju","ABD","Maxwell","Hash","Rashid","Moeen","Convey","pret","Billings","Roy","Bair","Jonny","wood","Mathe","mark","Buttler","josh"};
	char *cp[1000]={"Virat","MSD","Rohit","Bumrah","Ashwin","Jedeja","Chahal","Klrahul","Pant","Dk","Shami","hooda","Hardik","Bhuvi","Harshal","Ruthuraj","Khan","surya","Ishan","Dhawan"};
	char *ucp[1000]={"Rajat","verma","Bishnoi","Sky","badhoni","deepak","sandy","sanju"};
	char *op[1000]={"ABD","Maxwell","Hash","Rashid","Moeen","Convey","pret","Billings","Roy","Bair","Jonny","wood","Mathe","mark","Buttler","josh"};
	char str3[1000],str4[1000],str1[100],str2[100],lsg[1000],rcb[1000],csk[1000],mi[1000];
	int i,k=0,c=0;
	printf("Auction Players List\n");
	for(i=0;i<44;i++)
	{
		printf("Player %d- %s\n",i+1,str[i]);
	}
	printf("\n");
	printf("Capped Players\n");
	for(i=0;i<20;i++)
	{
		printf("Capped Players %d- %s\n",i+1,cp[i]);
	}
	printf("\n");
	printf("Uncapped Players\n");
	for(i=0;i<8;i++)
	{
		printf("Uncapped Players %d- %s\n",i+1,ucp[i]);
	}
	printf("\n");
	printf("Overseas List\n");
	for(i=0;i<16;i++)
	{
		printf("Overseas Players %d- %s\n",i+1,op[i]);
	}
	printf("\n");
	int j=0,l,m;
	while(j<=11)
    {
    	printf("Team RCB Enter player name: ");
	    scanf("%s",str1);
	    printf("Team CSK Enter player name: ");
	    scanf("%s",str2);
	    printf("Team Lsg Enter player name: ");
	    scanf("%s",str3);
	    printf("Team mi Enter Player name: ");
	    scanf("%s",str4);
	    for(i=0;i<44;i++)
	    {
	        if(strcmp(str1,str[i])==0)
	        {
	        	fprintf(fp,"%s\n",str1);
		    	break;
		    }
	    }
	    for(i=0;i<44;i++)
	    {
	    	if(strcmp(str2,str[i])==0)
	    	{
	    		fprintf(fp1,"%s\n",str2);
	    		break;
			}
		}
		for(i=0;i<44;i++)
	    {
	    	if(strcmp(str3,str[i])==0)
	    	{
	    		fprintf(fp2,"%s\n",str3);
	    		break;
			}
		}
		for(i=0;i<44;i++)
	    {
	    	if(strcmp(str4,str[i])==0)
	    	{
	    		fprintf(fp3,"%s\n",str4);
	    		break;
			}
		}
		j++;
	}
	fclose(fp);
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	fp=fopen("Rcb.txt","r");
	fp1=fopen("Csk.txt","r");
	fp2=fopen("lsg.txt","r");
	fp3=fopen("mi.txt","r");
	printf("RCB team Selected Players\n");
	while(!feof(fp))
	{
	    fscanf(fp,"%s",rcb);
	    printf("RCB Player:%s\n",rcb);
	    
	}
	printf("Csk team Selected Players\n");
	while(!feof(fp1))
	{
		fscanf(fp1,"%s",csk);
		printf("Csk  Player:%s\n",csk);
		
	}
	printf("Csk team Selected Players\n");
	while(!feof(fp2))
	{
		fscanf(fp2,"%s",lsg);
		printf("Lsg  Player:%s\n",lsg);
		
	}
	printf("Csk team Selected Players\n");
	while(!feof(fp3))
	{
		fscanf(fp3,"%s",mi);
		printf("Mi Player:%s\n",mi);
		
	}
	return 0;
}
	
	
	

