#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	int n,a,b,c,e=0,i,p,pass,sum,diff,multi,d[50],big,small,temp;
	float div;
	char o;
	re:
	printf("\nENTER THE PASSWORD TO USE THE PROGRAM OR ENTER 0 FOR EXIT : ");
	scanf("%d",&pass);
	if(pass==1234)
		goto loop;
	else if(pass==0)
		exit(0);
	else
	{
		printf("\n\t\tWRONG PASSWORD, TRY AGAIN \n");
		goto re;
	}
	loop:
	system("cls");
    while(1)
    {
        printf("\n\n-------------------------------------------------------------------------------------------------------------------------");
        printf("\n                                   **LIST**\n\n");
        printf("\n                          (1) FOR SIMPLE CALCULATOR");
        printf("\n                          (2) FOR MANUAL CALCULATOR");
        printf("\n                          (3) FOR MULTIPLICATION TABLE");
        printf("\n                          (4) TO FIND SQUARE ROOT OF A NUMBER");
        printf("\n                          (5) TO FIND THE POWER OF A NUMBER");
        printf("\n                          (6) TO FIND THE FACTORIAL OF A NUMBER");
        printf("\n                          (7) TO FIND SUM OF n NUMBERS");
        printf("\n                          (8) TO FIND MULTIPLICATION OF n NUMBERS");
        printf("\n                          (9) TO FIND AVERAGE OF n NUMBERS");
        printf("\n                         (10) TO FIND THE BIGGEST OF n NUMBERS");
        printf("\n                         (11) TO FIND THE SMALLEST OF n NUMBERS");
        printf("\n                         (12) TO CHECK IF A NUMBER IS ODD OR EVEN");
        printf("\n                         (13) TO CHECK IF A NUMBER IS PRIME OR COMPOSITE");
        printf("\n                         (14) TO FIND THE SUM OF INDIVIDUAL DIGITS OF A NUMBER");
        printf("\n                          (0) FOR EXIT");
        printf("\n-------------------------------------------------------------------------------------------------------------------------");
        printf("\n");
        printf("\n                               ENTER A CHOICE : ");
        scanf("%d",&n);
        printf("\n--------------------------------------------------------------------------------------------------------------------------");
        switch(n)
        {
			case 0 :
            exit(0);
            break;
        	case 1 :
            printf("\n\nSIMPLE CALCULATOR\n\n");
            printf("\nENTER THE FIRST NUMBER : ");
            scanf("%d",&a);
            printf("\nENTER ANOTHER NUMBER : ");
            scanf("%d",&b);
            sum=a+b;
            diff=a-b;
            multi=a*b;
            div=(float)a/b;
            printf("\nADDITION : %d",sum);
            printf("\nSUBSTRACTION : %d",diff);
            printf("\nMULTIPLICATION : %d",multi);
            printf("\nDIVISION : %f",div);
            printf("\n\n\tPRESS ANY NUMBER TO GO BACK TO THE LIST : ");
            scanf("%d",&p);
            break;
            case 2 :
            printf("\n\nMANUAL CALCULATOR\n\n");
            printf("\nENTER THE OPERATOR : ");
            scanf("%s",&o);
            printf("\nENTER A NUMBER : ");
            scanf("%d",&a);
            printf("\nENTER ANOTHER NUMBER : ");
            scanf("%d",&b);
            switch(o)
            {
                case '+' :
                printf("\n%d + %d = %d\n",a,b,a+b);
                break;
                case '-' :
                printf("\n%d - %d = %d\n",a,b,a-b);
                break;
                case '*' :
                printf("\n%d * %d = %d\n",a,b,a*b);
                break;
                case '/' :
                printf("\n%d / %d = %d\n",a,b,a/b);
                break;
            }
            printf("\n\n\tPRESS ANY NUMBER TO GO BACK TO THE LIST : ");
            scanf("%d",&p);
            break;
            case 3 :
            printf("\nENTER A NUMBER : ");
            scanf("%d",&a);
            printf("\nMULTIPLICATION TABLE OF %d : ",a);
            for(i=1;i<=10;i++)
            {
                printf("\n%d * %d = %d",a,i,a*i);
            }
            printf("\n\n\tPRESS ANY NUMBER TO GO BACK TO THE LIST : ");
            scanf("%d",&p);
            break;
            case 4 :
            printf("\nENTER THE NUMBER : ");
            scanf("%d",&a);
            b=sqrt(a);
            printf("\nSQUARE ROOT OF THE NUMBER IS : %d\n",b);
            printf("\n\n\tPRESS ANY NUMBER TO GO BACK TO THE LIST : ");
            scanf("%d",&p);
            break;
            case 5 :
            printf("\nENTER THE BASE NUMBER : ");
            scanf("%d",&a);
            printf("\nENTER THE POWER VALUE : ");
            scanf("%d",&b);
            c=pow(a,b);
            printf("\nVALUE : %d\n",c);
            printf("\n\n\tPRESS ANY NUMBER TO GO BACK TO THE LIST : ");
            scanf("%d",&p);
            break;
            case 6 :
            printf("\nENTER THE NUMBER : ");
            scanf("%d",&a);
            b=1;
            for(i=1;i<=a;i++)
            {
                b=b*i;
            }
            printf("\nFACTORIAL : %d\n",b);
            printf("\n\n\tPRESS ANY NUMBER TO GO BACK TO THE LIST : ");
            scanf("%d",&p);
            break;
            case 7 :
            printf("\nHOW MANY NUMBERS : ");
            scanf("%d",&a);
            printf("\nENTER THE NUMBERS : ");
            for(i=1;i<=a;i++)
            {
                printf("\nNUMBER %d : ",i);
                scanf("%d",&d[i]);
            }
            sum=0;
            for(i=1;i<=a;i++)
            {
                sum=sum+d[i];
            }
            printf("\nSUM : %d\n",sum);
            printf("\n\n\tPRESS ANY NUMBER TO GO BACK TO THE LIST : ");
            scanf("%d",&p);
            break;
            case 8 :
            printf("\nHOW MANY NUMBERS : ");
            scanf("%d",&b);
            printf("\nENTER THE NUMBERS : ");
            for(i=1;i<=b;i++)
            {
                printf("\nNUMBER %d : ",i);
                scanf("%d",&d[i]);
            }
            a=1;
            for(i=1;i<=b;i++)
            {
                a=a*d[i];
            }
            printf("\n MULTIPLICATION VALUE : %d\n",a);
            printf("\n\n\tPRESS ANY NUMBER TO GO BACK TO THE LIST : ");
            scanf("%d",&p);
            break;
            case 9 :
            printf("\nHOW MANY NUMBERS : ");
            scanf("%d",&n);
            printf("\nENTER THE NUMBERS : ");
            for(i=0;i<n;i++)
            {
                printf("\nNUMBER %d : ",i+1);
                scanf("%d",&d[i]);
            }
            a=0;
            for(i=0;i<n;i++)
            {
                a=a+d[i];
            }
            div=(float)a/n;
            printf("\nAVERAGE : %f\n",div);
            printf("\n\n\tPRESS ANY NUMBER TO GO BACK TO THE LIST : ");
            scanf("%d",&p);
        	break;
            case 10:
            printf("\nHOW MANY NUMBERS : ");
            scanf("%d",&n);
            printf("\nENTER THE NUMBERS : ");
            for(i=0;i<n;i++)
            {
                printf("\nNUMBER %d : ",i+1);
                scanf("%d",&d[i]);
            }
            big=d[0];
            for(i=1;i<n;i++)
            {
                if(d[i]>big)
                    big=d[i];
            }
            printf("\n\tBIGGEST : %d\n",big);
            printf("\n\n\tPRESS ANY NUMBER TO GO BACK TO THE LIST : ");
            scanf("%d",&p);
            break;
            case 11 :
            printf("\nHOW MANY NUMBERS : ");
            scanf("%d",&n);
            printf("\nENTER THE NUMBERS : ");
            for(i=0;i<n;i++)
            {
                printf("\nNUMBER %d : ",i+1);
                scanf("%d",&d[i]);
            }
            small=d[0];
            for(i=1;i<n;i++)
            {
                if(d[i]<small)
                    small=d[i];
            }
            printf("\n\tSMALLEST : %d\n",small);
            printf("\n\n\tPRESS ANY NUMBER TO GO BACK TO THE LIST : ");
            scanf("%d",&p);
            break;
            case 12 :
            printf("\nENTER THE NUMBER : ");
            scanf("%d",&n);
            if(n%2==0)
                printf("\n\tTHE NUMBER IS EVEN\n");
            else
                printf("\n\tTHE NUMBER IS ODD\n");
            printf("\n\n\tPRESS ANY NUMBER TO GO BACK TO THE LIST : ");
            scanf("%d",&p);
            break;
            case 13 :
            printf("\nENTER THE NUMBER : ");
            scanf("%d",&n);
            for(i=2;i<=n-1;i++)
            {
                if(n%i==0)
                {
                    printf("\n\tTHE NUMBER IS COMPOSITE\n");
                    break;
                }
            }
            if(i==n)
                printf("\n\tTHE NUMBER IS PRIME");
            printf("\n\n\tPRESS ANY NUMBER TO GO BACK TO THE LIST : ");
            scanf("%d",&p);
            break;
            case 14 :
            printf("\nENTER THE NUMBER : ");
            scanf("%d",&n);
            temp=n;
            a=0;
            c=0;
            while(temp!=0)
            {
                b=temp%10;
                c=c+b;
                temp=temp/10;
            }
            printf("\n\nSUM OF ALL DIGITS : %d\n\n",c);
            printf("\n\n\tPRESS ANY NUMBER TO GO BACK TO LIST : ");
            scanf("%d",&p);
           break;
        }
    }
}