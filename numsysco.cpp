// #include<iostream.h>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>

char s[100],c[1],x;
 int l=0,p,u=0,j,base,t=1,bvd,chd;
 float x1,y1,s0=0,z,z1,s2=0,s3=0,w;
 float zs,w6,as,bs,a1s,b1s,ash,bsh;
 int ys,z6s,ts,ss[100],is=1,ps,vs,w1s,cs,w2s,c1s,csh,vsh,w2sh,n;

 float it2doc ()
{
  while(s[l]!='\0')
	{
	 if(s[l]!='.')
	  {l++;}
	 if(s[l]== '.')
		break;
  }
  p=l;
 for(j=p-1; j>=0; j--)
	{
	 c[0]=s[j];
	 x1 = c[0] ;
	  if ((x1==65)||(x1 ==97))
	 { x1= 10; }
	  else if ((x1== 66)||(x1==98))
	 { x1= 11; }
	  else if ((x1== 67)||(x1==99))
	 { x1= 12; }
	  else if ((x1== 68)||(x1==100))
	 { x1= 13;  }
	  else if ((x1== 69)||(x1==101))
	{  x1= 14;  }
	  else if ((x1== 70)||(x1==102))
	{  x1= 15;  }
	  else
	{  x1 = x1-48; } //atof(c); }

	 y1= x1* pow(base,u);
	 u++;
	 s0=s0+y1;
	}


	l++;
	while(s[l]!='\0')
	 {
	  c[0]= s[l];
	  z = c[0];
	  if ((z==65)||(z ==97))
	 { z= 10; }
	  else if ((z== 66)||(z==98))
	 { z= 11; }
	  else if ((z== 67)||(z==99))
	 { z= 12; }
	  else if ((z== 68)||(z==100))
	 { z= 13;  }
	  else if ((z== 69)||(z==101))
	{  z= 14;  }
	  else if ((z== 70)||(z==102))
	{  z= 15;  }
	  else
	{  z = z-48; } //atof(c); }
													  // z = atof(c);

	  z1= z*1/(pow(base,t));
	  s2=s2+z1;
	  t++;
	  l++;
	  }
	s3=s0+s2;

	return s3;
	}


	 int  dotbin()
 {
	b1s=a1s*2;
	c1s=b1s;
	a1s=b1s-c1s;

	return c1s;
	}


 int dotoct ()
 {
	bs=as*8;
	cs=bs;
	as=bs-cs;
	 return cs;
  }


  int dothex ()
 {
	bsh=ash*16;
	csh=bsh;
	ash=bsh-csh;
	 return csh;
  }
	int checkit ()
	{     n=0;
	  while(s[n]!= '\0')
	  {				 if(s[n]=='.')
						 { n++;
						  goto next;}
		 else {     if(base==16)
						{ if ((s[n]== 'A')||(s[n]== 'B')||(s[n]== 'C')||(s[n]== 'D')||(s[n]== 'E')||(s[n]== 'F')||(s[n]== 'a')||(s[n]== 'b')||(s[n]== 'c')||(s[n]== 'd')||
								 (s[n]== 'e')||(s[n]== 'f')||(s[n]== '1')||(s[n]== '2')||(s[n]== '3')||(s[n]== '4')||(s[n]== '5')||(s[n]== '6')||(s[n]== '7')||(s[n]== '8')||(s[n]== '9')||(s[n]== '0'))
								 {chd=0;}
							else { chd=1;}
						}

					 if(base==10)
						 { if ((s[n]=='1')||(s[n]== '2')||(s[n]== '3')||(s[n]== '4')||(s[n]== '5')||(s[n]== '6')||(s[n]== '7')||(s[n]== '8')||(s[n]== '9')||(s[n]== '0'))
								 {chd=0;}
						  else { chd=1;}
					 }

					  if(base==8)
						{   if ((s[n]== '1')||(s[n]== '2')||(s[n]== '3')||(s[n]== '4')||(s[n]== '5')||(s[n]== '6')||(s[n]== '7')||(s[n]== '0'))
								 {chd=0;}
								 else { chd=1;}
						 }

					 if(base==2)
						 {   if ((s[n]== '0') || (s[n]== '1'))
								 {chd=0;}
								 else { chd=1;}
						 }
				 n++;
			}
			if( chd!= 0)
				 { goto term; }
		}

		 next:  while(s[n]!= '\0')
	  {				 if(s[n]=='.')
						{ chd=1;
						n++;}
		 else {     if(base==16)
						{ if ((s[n]== 'A')||(s[n]== 'B')||(s[n]== 'C')||(s[n]== 'D')||(s[n]== 'E')||(s[n]== 'F')||(s[n]== 'a')||(s[n]== 'b')||(s[n]== 'c')||(s[n]== 'd')||
								 (s[n]== 'e')||(s[n]== 'f')||(s[n]== '1')||(s[n]== '2')||(s[n]== '3')||(s[n]== '4')||(s[n]== '5')||(s[n]== '6')||(s[n]== '7')||(s[n]== '8')||(s[n]== '9')||(s[n]== '0'))
								 {chd=0;}
							else { chd=1;}
						}

					 if(base==10)
						 { if ((s[n]=='1')||(s[n]== '2')||(s[n]== '3')||(s[n]== '4')||(s[n]== '5')||(s[n]== '6')||(s[n]== '7')||(s[n]== '8')||(s[n]== '9')||(s[n]== '0'))
								 {chd=0;}
						  else { chd=1;}
					 }

					  if(base==8)
						{   if ((s[n]== '1')||(s[n]== '2')||(s[n]== '3')||(s[n]== '4')||(s[n]== '5')||(s[n]== '6')||(s[n]== '7')||(s[n]== '0'))
								 {chd=0;}
								 else { chd=1;}
						 }

					 if(base==2)
						 {   if ((s[n]== '0') || (s[n]== '1'))
								 {chd=0;}
								 else { chd=1;}
						 }
				 n++;
			}
				if( chd!= 0)
				 { goto term; }
		}
	 term:	  return chd;
}




 void main()
 {     printf("            Welcome to Number System Converter               \n Convert any number( not GREATER than 32750) to other number systems \n(conventional) \n EVEN with DOTTED number.(such as: 123.456 or ABC.DEF) \n \n");
	 printf("WARNING: ");
	printf("You might see WRONG convertion in if you INPUT a number \n GREATER than 32767.00 in DECIMAL value \n ");
	  printf("OTHERWISE Everything's OKAY. You can Totally TRUST ME :) \n \n");
 printf(" B = Binary \n D = Decimal \n H = Hexadecimal \n O = Octal \n");
again :  printf("In which number system you want to input? ");
		  scanf("%c",&x);

		  if ((x=='B')||(x=='b'))
		  {

				printf("In Binary, There should be NO Negative integer (Only 0 & 1),NO Symbols or \n Letters.\n \n");
			 again2: 	printf("Enter a number in BINARY (not GREATER than 111111111111111.00 (15s 1) ");
				printf("\n");
			  scanf("%s",&s);
			  base = 2;
			  bvd =checkit();
			  if(bvd!=0)
				{	printf("Enter a CORRECT Binary number,please.");
				 printf("\n");
				 printf("In Binary, There should be NO Negative integer (Only 0 & 1),NO Symbols or \n Letters. \n \n");
				 goto again2;}
				 else { w= it2doc();}
			}

			else if ((x=='O')||(x=='o'))
		  {
			printf("In Octal, There should be NO Negative integer (Only 0 to 7),NO Symbols or \n Letters. \n \n");
			again3:
			printf("Enter a number in OCTAL (not GREATER than 77777.00 (5s 7)");
			 scanf("%s",&s);
			  base = 8;
			  bvd =checkit();
			  if(bvd!=0)
				{
				printf("Enter a CORRECT Octal number,please.");
				 printf("\n");
				 printf("In Octal, There should be NO Negative integer (Only 0 to 7),NO Symbols or \n Letters. \n \n");
				 goto again3;}
				 else {w= it2doc();}
			}

			 else if((x=='D')||(x=='d'))
		  { printf("In Decimal, There should be NO Negative integer (Only 0 to 9),NO Symbols or \n Letters. \n \n");
			again4:
			 printf("Enter a number in DECIMAL (number GREATER than 35767 will have an MISTAKEN       convertion in BINARY.\n number GREATER than 65535 will have MISTAKEN convertion in other systems.\n Now please Enter ");
			 scanf("%s",&s);
			  base = 10;
			  bvd =checkit();
			  if(bvd!=0)
				{
				printf("Enter a CORRECT Decimal number,please.");
				 printf("\n");
				 printf("In Decimal, There should be NO Negative integer (Only 0 to 9),NO Symbols or \n Letters. \n \n");
				 goto again4;}
				 else {w= atof(s);}
			}

			  else if ((x=='H')||(x=='h'))
		  {  printf("In Hexadecimal, There should be NO Negative integer (Only 0 to 9 and \n A= 10, B= 11, C= 12, D= 13, E= 14,F= 15 ),NO Other Symbols or \n Letters. \n \n");
			again5:
			 printf("Enter a number in HEXADECIMAL (not GREATER than 7FFF.00)");
			 scanf("%s",&s);
			  base = 16;
			  bvd =checkit();
			  if(bvd!=0)
				{
				printf("Enter a CORRECT Hexadecimal number,please.");
				 printf("\n");
				 printf("In Hexadecimal, There should be NO Negative integer (Only 0 to 9 and \n A= 10, B= 11, C= 12, D= 13, E= 14,F= 15 ),NO Other Symbols or \n Letters. \n \n");
				 goto again5;}
				 else {w= it2doc();}
			}
			else {
					printf("Enter a correct syntax \n");
					 printf(" B = Binary \n D = Decimal \n H = Hexadecimal \n O = Octal \n");
					goto again;
					}
	printf("\n");
 if(base!=10)
 {   printf("\n");
 printf(" Decimal is  %.6f (Approximate value) \n",w);
  }

  zs=w;
  ys=zs;
  z6s=ys;
  w= zs-ys;
  as=w;
  a1s=w;
  ash=w;
  if( base!=2)
  {
  printf(" Binary is ");
	while(z6s!=0) {
	  ts=z6s%2;
	  z6s=z6s/2;
	  ss[is]=ts;
	  is++;
	  }
	  // while(z1!=0);

 for(ps=is-1;ps>=1;ps--)
  { printf("%d",ss[ps]);
  }
  printf(".");
  for (vs=1;vs<=6;vs++)
  {
	w1s=dotbin();
	printf("%d",w1s);
	}
	 printf(" (Approximate value)");
 }
	 printf("\n");
  if(base!=8)
{
	 printf(" Octal is %o",ys);
	 printf(".");
	 for (vs=1;vs<=6;vs++)
	 { w2s= dotoct();
		printf("%o",w2s);
	  }
		printf(" (Approximate value)");
		printf("\n");
}

if(base!=16)
{
		printf(" Hexadecimal is %X.",ys);
		for (vsh=1;vsh<=6;vsh++)
	 { w2sh= dothex();
		printf("%X",w2sh);
	  }
	  printf(" (Approximate value) \n \n");
}
	  printf("\n Thanks for trying me.\n");
	  printf(" You think it's awesome??? Okay,Then share to your friends. \n");
	  printf(" © Copyright NumSySCo by MD.Gazzali Fahim \n");
 }