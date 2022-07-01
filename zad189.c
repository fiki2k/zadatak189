/*  Program treba pronaci najveci zajednicki djelitelj od 3 broja pomocu funkcije.  */

#include<stdio.h>
#include<stdlib.h>

int NZD(int m,int n)
{
        int ostatak;
        while(n!=0)
        {
                ostatak=m%n;
                m=n;
                n=ostatak;
        }
        return(m);
}

int main()
{
        int br1,br2,br3,nzd1,nzd2;

        printf("Unesi prvi pozitivan broj : ");
        scanf("%d",&br1);
        printf("\nUnesi drugi pozitivan broj : ");
        scanf("%d",&br2);
        printf("\nUnesi treci pozitivan broj : ");
        scanf("%d",&br3);

        if(br1==0 && br2==0 && br3==0)
        {
                printf("\nNevalja broj");
                exit(0);
        }

        nzd1=NZD(br1,br2);
        nzd2=NZD(br3,nzd1);

        printf("\nNajveci zajednicki djelitelj od [ %d, %d, %d ] je : [ %d ]\n",br1,br2,br3,nzd2);

        return 0;
}
