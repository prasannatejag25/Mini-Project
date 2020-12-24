#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define pi 3.14
void common_conversion();
void complements();
void temperature();
void currency_conversion();
int ConvertOctaltoDecimal(int);
int ConvertHexatoDecimal(char *);
long ConvertDecimalToBinary(int);
long ConvertBinaryToHexOct(int);
void sytem_conversion();
int main()
{
	system("cls");
	char choice;
	int ele=0;
	printf("        UnitConversion Program\n");
	printf("****************************************\n\n");
	printf("    ********************************    \n\n");
	printf("         *********************          \n\n");
	printf("              ***********               \n\n");
	printf("                *******                 \n\n");
	printf("                   **                   \n\n");
	printf("****Please enter your choice (a-f):*****\n\n");
	while(choice!='f')
	{
		printf("\na:Basic Conversions\nb:Complements\nc:Physics Conversions\nd:Currency Conversions\ne:System Conversions\nf:Exit program\n\n");
		fflush(stdin);
		scanf("%c",&choice);
		switch(choice)
		{
			case 'a':{
				common_conversion();
				break;
			}
			case 'b':
				complements();
				break;
			case 'c':
				temperature();
				break;
			case 'd':
			{
				currency_conversion();
				break;
			}
			case 'e':
				sytem_conversion();
				break;
			case 'f':
				break;
			default:
				printf("Please e valid  Choice\n");
 		}
	}
	printf("**   THE END   ***");
	return 0;
}
long ConvertDecimalToBinary(int deci){
	int rem=0,temp=1,binarynum=0;
	
	while(deci!=0) {
		rem=deci%2;
		binarynum=binarynum+rem*temp;
		deci=deci/2;
		temp=temp*10;
	} 														
	return(binarynum);
} 
int ConvertHexatoDecimal(char *hexa) { 
	int dec=0,i=0,j,len,num; 
	len=strlen(hexa); 
	for(j=0;j<len;j++) 
		hexa[j]=toupper(hexa[j]); 
	while(len>0) { 
		if(hexa[i]>='A'&&hexa[i]<='F') {
			num=hexa[i]-'A'+10; 
			dec=dec+(num*pow(16,(len-1))); 
			} 
		else {
			num=hexa[i]-'0'; 
			dec=dec+(num*pow(16,(len-1)));
			} 
		i++;
		len--; 
		} 
	return(dec);
}
int ConvertOctaltoDecimal(int octal) {
	int deci=0,temp,i,num=0;
	temp=octal;
	while(temp!=0) {
		i=temp%10;
		deci=deci+(i*pow(8,num));
		temp=temp/10; 
		num++;
		} 														
	return(deci);
} 
long ConvertBinaryToHexOct(int binary)
{
	
	int oct,number,j,rem,hexa;
	
	printf("enter the number To Convert 1:hexadecimal\n2:Octal number");
	scanf("%d",&number);
	if(number==1){
		while(binary!=0){
			rem=binary%10;
			hexa=hexa+rem*j;
			j=j*2;
			binary=binary/10;
		}
		
		printf(" hexadecimal value: %lX",hexa);
		return hexa;
	}
	else if(number==2){
		while(binary!=0){
			rem=binary%10;
			oct=oct+rem*j;
			j=j*2;
			binary=binary/10;
		}
		return oct;
	}	
	else
		return 1;	
}

void common_conversion(){
	printf("\n\n***Please enter your choice in Common Convertion:**\n\n");
	int element=0;
	char option;
	while(element!=4)
	{
		printf("\n1:Mass Convertion\n2:Length Convertion\n3:Volume Convertion\n4:exit Convertion");
		printf("\nEnter your choice : ");
		scanf("%d",&element);
		fflush(stdin);		
		switch(element)
		{
			case 1:
			{
				char WeightConversion='0';
				while(WeightConversion!='E'){
					printf("\n\nA)grams to kilograms\tB)milligrams to kilograms\tC)pounds to kilograms\tD)kilograms to pounds\tE)Exit weightconversion\n\n");
					printf("Enter your choice : ");
					fflush(stdin);
					scanf("%c",&WeightConversion);
					fflush(stdin);
					switch(WeightConversion) 
					{
						case 'A':{
							do{
								float gm;
								printf("Enter Weight (in grams) : ");
								scanf("%f",&gm);
								printf("%.4fgm=%.4fkg\n",gm,(gm*(0.001)));
								printf("Enter E to Exit Conversion of Grams to KiloGrams : ");
								fflush(stdin);
								scanf("%c",&option);
							}while(option!='E');
							break;
						}
						case 'B': {
							do{
								float mg;
								printf("Enter weight (in milligrams) : ");
								scanf("%f",&mg);
								printf("%.4fmg=%.4fkg\n",mg,(mg*(0.00001)));
								printf("Enter E to Exit Conversion of Grams to Milligrams : ");
								fflush(stdin);
								scanf("%c",&option);
							}while(option!='E');
							break;
						}
						case 'C':{
							do{
								float pound;
								printf("Enter weight (in pounds) : ");
								scanf("%f",&pound);
								printf("%.4fpound=%.4fkg\n",pound,(pound*0.454));
								printf("Enter E to Exit Conversion of Pounds to KiloGrams : ");
								fflush(stdin);
								scanf("%c",&option);
							}while(option!='E');
							break;
						}
							
						case 'D': {
							do{
								float kg;
								printf("Enter weight in kgs\n");
								scanf("%f",&kg);
								printf("%.4fkg=%.4fpounds\n",kg,(kg/0.454));
								printf("conversion in kilograms ended E to exit \n");
								fflush(stdin);
								scanf("%c",&option);
							}while(option!='E');
							break;
						}
						case 'E':
							printf("Mass conversion is  exited\n");
							break;
						default:
							printf("\nInvalid Option\nTry again\n");
					}
				}
				break;	
			}
			case 2:{
				char lengthConversion='0';
				fflush(stdin);
				while(lengthConversion!='E'){
					printf("\n\nA)meters to centimetres\tB)centimetres to kilometers\tC)kilometers to metres\tD)metres to kilometres\tE:EXIT lengthConversion\n\n");
					printf("Enter your choice : ");
					fflush(stdin);
					scanf("%c",&lengthConversion);
					fflush(stdin);
					switch(lengthConversion) 
					{
						case 'A':{
							do{
								float m;
								printf("Enter meters\n");
								scanf("%f",&m);
								printf("%.4fm=%.4fcm\n",m,(m*100));
								printf("conversion in centimeters ended E to exit \n ");
								fflush(stdin);
								scanf("%c",&option);
							}while(option!='E');
							break;
						}
						case 'B': {
							do{
							float cm;
								printf("Enter Centi meters\n");
								scanf("%f",&cm);
								printf("%.4fcm=%.4fkm\n",cm,(cm/1000));
								printf("conversion in centimeters ended E to exit \n");
								fflush(stdin);
								scanf("%c",&option);
							}while(option!='E');
							break;
						}
						case 'C': {
							do{
								float km;
								printf("Enter Kilo meters\n");
								scanf("%f",&km);
								printf("%.4fkm=%.4fm\n",km,(km*1000));
								printf("conversion in kilometers ended E to exit\n");
								fflush(stdin);
								scanf("%c",&option);
							}while(option!='E');
							break;
						}
						case 'D': {
							do{
								float m;
								printf("Enter a value  (in meters) : ");
								scanf("%f",&m);
								printf("%.4fm=%.4fkm\n",m,(m*0.001));
								printf("conversion in meters ended  E to exit\n");
								fflush(stdin);
								scanf("%c",&option);
							}while(option!='E');
							break;
						}
						case 'E':
							printf("Exiting Length Conversion");
							break;
						default: 
						{
							printf("InValid Meter Conversion\n Try Again>>>\n");
						}
					}
				}
				break;
			}
			case 3:
			{
				int volumeconverstion=0;
				while(volumeconverstion!='E'){
					printf("\n\nA)cube\tB)cone\tC)sphere\tD)cyclinder\tE)Exit\n\n");
					printf("Enter your choice : ");
					fflush(stdin);
					scanf("%c",&volumeconverstion);
					fflush(stdin);
					switch(volumeconverstion) 
					{
						case 'A':{
							do{
								float m;
								printf("Enter the (side) of cube : ");
								scanf("%f",&m);
								printf("\nvolume of cube %.4f = %.4fcubicmetres\n",m,(m*m*m));
								printf("conversion in volume cube is ended E to exit \n");
								fflush(stdin);
								scanf("%c",&option);
							}while(option!='E');
							break;
						}
						case 'B':{ 
							do{
								float r,h;
								printf("\nEnter (height and radius) of cone : ");
								scanf("%f%f",&h,&r);
								printf("volume of cone is %.4fcubic metres\n",(pi*r*r*(h/3)));
								printf("conversion in volume cone is ended E to exit \n");
								fflush(stdin);
								scanf("%c",&option);
							}while(option!='E');
							break;
						}
						case 'C': {
							do{
								float r;
								printf("Enter (radus) of sphere : ");
								scanf("%f",&r);
								printf("\nvolme of sphere %.4fm\n",(4/3)*pi*r*r*r);
								fflush(stdin);
								scanf("%c",&option);
							}while(option!='E');
							break;
						}
						case 'D': {
							do{
								float h,r;
								printf("Enter (height and radius) of cyclinder : ");
								scanf("%f%f",&h,&r);
								printf("\nvolume of cyclinder: %.4fcubic meters\n",pi*r*r*h);
								printf("conversion in volume cyclinder  is ended E to exit \n ");
								fflush(stdin);
								scanf("%c",&option);
							}while(option!='E');
							break;
						}
						case 'E':
							printf("Exiting Volume Conversion");
							break;
						default: 
						{
							printf("InValid volume Conversion Choice\n");
						}
					}		
					
				}
				break;
				case 4:
					printf("Closing the program.....");
					break;
				default: 
				{
					printf("InValid Choice\nTry Again....\n");
				}	
			}
		}
	}
}

void currency_conversion(){
	int currencyconvertor=0;
	while(currencyconvertor!=5)
	{
		printf("\n\n1:rupees to Dollar\n2:Dollars to rupees\n3:rupees to Euros\n4:Euros to rupees\n5:Exit currency_conversion\n\n");
		scanf("%d",&currencyconvertor);
		switch(currencyconvertor) 
		{
			case 1:
			{
				float rupe,dollar;
				printf("Enter Amount (in rupes) : ");
				scanf("%f",&rupe);
				dollar=(rupe*0.0149);
				printf("\n%.2f InidanRupees=%f $\n",rupe,dollar);
				break;
			}
			case 2: 
			{
				float rupe,dollar;
				printf("Enter Amount (in Dollars): ");
				scanf("%f",&dollar);
				rupe=(dollar*67.06);
				printf("\n%.2f $=%f InidanRupees\n",dollar,rupe);
				break;
			}
			case 3: 
			{
				float rupe,euro;
				printf("Enter Amount (in rupes) : ");
				scanf("%f",&rupe);
				euro=(float)(rupe*0.0141);
				printf("\n%.2f InidanRupees=%f EUR\n",rupe,euro);
				break;
			}
			case 4: 
			{
				float rupe,euro;
					printf("Enter Amount (in Euro) : ");
				scanf("%f",&euro);
				rupe=(float)(euro*71.1574);
				printf("\n%.2f EUR=%f InidanRupees\n",euro,rupe);
				break; 
			}
			default:
			{
				printf("Please enter valid Currency Choice\n");
			}
		}
	}
}
void sytem_conversion(){
	int ele=0;
	int deci,binary;
	char hexa[20]; 
	int hexoct;
	int octal,decimal;
	while(ele!=5)
	{
		printf("\n1: decimaltobinary\n2:hexatodecimal\n3:binarytohexaoct\t4:octatodeci\t5)exit");
		printf("\nSelect an option : ");
		scanf("%d",&ele);
		switch(ele)
		{
			case 1:
				printf("enter the decimal number : ");
				scanf("%d",&deci);
				binary=ConvertDecimalToBinary(deci);
				printf("Decimal for Binary %d :%d\n",deci,binary);
				break;
			case 2:
				printf("enter the hexadecimal number : "); 
				scanf("%s",hexa); 
				deci=ConvertHexatoDecimal(hexa);
				printf("Decimal for HexaDecimal %s :%d\n",hexa,deci);
				break;
			case 3:
				printf("enter the binary number : ");
				scanf("%d",&binary);
				hexoct=ConvertBinaryToHexOct(binary);
				printf(" \nBinary to hexoct%d :%c\n",binary,hexoct);
				printf("\nBinary to hexoct ended \n ");
				break;
			case 4: 
				printf("Enter the Octal Number not exceed 8 : ");
				scanf("%d",&octal);
				decimal=ConvertOctaltoDecimal(octal);
				printf("Binary Number Octal Number %d : %d\n",octal,decimal);
				printf("\noctal to binary is ended \n ");	
				break;
			default:
				printf("\nInvalid Option\nTry Again...\n");
		}
	}
}
void complements()
#define n 100
{
char binary[n],onescomplement[n],twoscomplement[n];
    int con,e=1;
    printf("Enter the binary number : ");
    scanf("%s",binary);
    for(con=0; con<n; con++)
    {
        if(binary[con] == '1')
        {
            onescomplement[con] = '0';
        }
        else if(binary[con] == '0')
        {
            onescomplement[con] = '1';
        }
    }
    for(con=n-1; con>=0; con--)
    {
        if(onescomplement[con] == '1' && e == 1)
        {
            twoscomplement[con] = '0';
        }
        else if(onescomplement[con] == '0' && e == 1)
        {
            twoscomplement[con] = '1';
            e = 0;
        }
        if((onescomplement[con]=='1' && e==0) || (onescomplement[con]=='0' && e==0))
        {
            twoscomplement[con] = onescomplement[con];
        }
    }
    printf("Given Binary number : %s\n",binary);
    printf("One's complement is %s\n",onescomplement);
    printf("Twos complement = %s\n",twoscomplement);
}
void temperature()
{
    int val=0;
    float celsius,kelvin,fahrenheit;
	while(val!=5){
		printf("1. temperature to Fahrenheit\n2.Fahrenheit to temperature\n3.temperature to Kelvin\n4.Kelvin to temperature5:Exit\n");
		printf("Select an option\n\n");
		scanf("%d",&val);
		switch(val)
		{
			case 1:
				printf("Enter temperature (in Celsius): ");
				scanf("%f", &celsius);
				fahrenheit = (celsius * 9/5) + 32;
				printf("%f °C = %.2f F\n", celsius, fahrenheit);
				break;
			case 2:
				printf("Enter temperature (in Fahrenheit): ");
				scanf("%f",&fahrenheit);
				celsius=(fahrenheit-32)*5/9;
				printf("%.2f F = %f °C\n",fahrenheit,celsius);
				break;
			case 3:
				printf("Enter temperature (in Celsius): ");
				scanf("%f",&celsius);
				kelvin=celsius+273.15;
				printf("%f °C = %.2f K\n",celsius,kelvin);
				break;
			case 4:
				printf("Enter temperature (in Kelvin) : ");
				scanf("%f",&kelvin);
				celsius= kelvin-273.15;
				printf("%.2f K = %.2f °C\n",kelvin,celsius);
				break;
		}
	}
}
