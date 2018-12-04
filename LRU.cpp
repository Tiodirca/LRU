#include<stdlib.h>
#include<stdio.h>
int main()
{
	int n,i,coloca,j=0,cont1=0,cont2=0,cont3=0,faznd=0;
	printf("digite a quantidade de paginas ");
	scanf("%d", &n);
	int nump[n],me1[n],me2[n],me3[n];
	printf("\ndigite as paginas de paginas ");
	for(i=0;i<n;i++)
		scanf("%d", &nump[i]);
		
			me1[0] = nump[0];
			me2[0] = nump[1];
			me3[0] = nump[2];
			
		for(i=1;i<n;i++)
		{
			me1[i] = 0;
			me2[i] = 0;
			me3[i] = 0;
		}
			
		
			for(i=3;i<n;i++)
			{
				j++;
				coloca = nump[i];
				printf("\n\n**********\n");
				printf("memoria:\n");
				printf("%d  %d  %d ", me1[i-3],me2[i-3],me3[i-3]);
				printf("\nproxima pag %d\n", coloca);
				
				
				 
				if ((coloca == me1[i-3]) ||(coloca == me2[i-3]) ||(coloca== me3[i-3]))
				{
                 printf("\n hit");
                 printf("\n**********\n\n\n");
                 me1[j] = me1[i-3];
                 me2[j] = me2[i-3];
                 me3[j] = me3[i-3];
				 faznd=1;
				 cont1++;cont2++;cont3++;
                }
				
				if(faznd==0)
			    {
						if (coloca != me1[i-3])
						    cont1++;
						if (coloca != me2[i-3])
						{
							cont1++;
							cont2++;
						}
						 
						if(coloca != me3[i-3])
						 {
							cont1++;
							cont2++;
							cont3++;
						}
						 
					
					if((cont1 > cont2) && (cont1 > cont3))
					{
                               printf("\n falha de pg\n\n\n");
                               printf("\n**********\n\n\n");
						me1[i-3] = coloca;
						me1[j] = me1[i-3];
                		me2[j] = me2[i-3];
                		me3[j] = me3[i-3];
						cont1 = 0;
					}
					else if((cont2 > cont1) && (cont2 > cont3))
					{
                          printf("\n falha de pg");
                          printf("\n**********\n\n\n");
						me2[i-3] = coloca;
						me1[j] = me1[i-3];
                		me2[j] = me2[i-3];
                		me3[j] = me3[i-3];
						cont2 = 0;
					}
					else if((cont3 > cont1) && (cont3 > cont2))
					{
                          printf("\n falha de pg");
                          printf("\n**********\n\n\n");
						me3[i-3] = coloca;
						me1[j] = me1[i-3];
                 		me2[j] = me2[i-3];
                 		me3[j] = me3[i-3];
						cont3 = 0;
					}
		    	}
		    	
		    	faznd=0;
			}	
			
				printf("\n\n**********\n");
				printf("memoria fim:\n");
				printf("%d  %d  %d ", me1[i-3],me2[i-3],me3[i-3]);
				printf("\n**********\n");
printf("\n\n\n");
system("pause");
return 0;	
}
