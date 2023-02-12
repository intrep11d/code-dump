#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void menu();
void clear();
void slowthree();
void enter();
void loading();
void excite();
void end();
void returnstart();
void start();
void intro1();
void intro2();
void else1();
void whoareyou();
void whoareyouelseif();
void choice1();
void choice2();
void whatdoinghereelseif();

void whoareyou()
{
    int intro;
             //void whoareyou!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
            printf("Who are you?\n"); sleep(2);
            printf("[1] A player?\n");
            printf("[2] Nobody bye...\n= ");
        scanf("%d", &intro);
            if(intro==1) //1
            {
                int choice;
                intro1();
                scanf("%d", &choice);
                if(choice==1)
                {
                    choice1();
                }
                else if(choice==2)
                {
                    
                }

            }
            else if  (intro==2) //1
            {
                intro2();                      
            }
            else //1
            {
                else1();
            }
}
void whatdoinghereelseif()
{
    int z;
    system("clear");
    printf("[1] Return to choices?\n");
    printf("[2] End the program\n= ");
    scanf("%d", &z);
        if (z==1)
            {
                intro1();
            }
        else if (z==2)
            {
                end();
            }
        else
            {
                system("clear");
                    printf("Thats not in the options!"); sleep(2);
                whatdoinghereelseif();
            }
}
void choice2()
{
    int z;
    clear();
        printf("Oh"); slowthree(); sleep(1); clear();
        printf("Its ok"); slowthree(); clear();
        printf("Everybody makes mistakes :'("); sleep(3); clear();
        printf("Goodbye then, player"); slowthree();
        printf("It was a nice 10 second to meet you :'D"); sleep(3); clear();
        printf("Creator's comment\n"); sleep(3);
        printf("Look what you did"); slowthree();
        printf("\nYou made the program cry\n"); sleep(2); 
        printf("What a player you are -_-\n"); sleep(3);               
}
void choice1() //choice 1
{
    clear();
        printf("Oh!"); sleep(1); clear();
        printf("Well i thank you in advanced for playing an old fashion game like this one!"); sleep(3); clear();
        printf("Well enough talking! Let's GO!"); getchar(); enter();
        printf("Place: ");
}
void whoareyouelseif() //who are you else if
{
    int x;
    printf("[1] Return to last choices?\n");
        printf("[2] End the program\n =");
        scanf("%d", &x);
        if(x==1)
        {
            system("clear");
            whoareyou();
        }
        else if(x==2)
        {
            end();
        }
        else
        {   
            system("clear");
            printf("Thats not in the choices!"); sleep(3); 
            system("clear");
            whoareyouelseif();
        }
}
void start() //start
{
    system("clear");
        printf("|Program turning on|"); sleep(3); clear();
        printf("     (User."); sleep(1); printf(" Program.)    \n"); sleep(2);
        printf("[Press ENTER to continue]"); getchar(); clear();
    loading(); clear();
    slowthree();
    clear();
        printf("???");
    sleep(3); clear();
        printf("hm?");
    sleep(3); clear();
}

void else1() //else1
{
    clear();
        printf("You have not chosen any of the available selections."); sleep(2); clear();
        printf("Creator's comment\n"); sleep(2);
        printf("W"); sleep(1); printf(" o"); sleep(1); printf(" W"); slowthree(); 
        printf(" There was literally only 2 options -_-"); sleep(3); clear();
    
}
void intro2() //intro2-1
{       
    int x;
        system("clear");
        printf("Huh?"); sleep(2); clear();
        printf("Uhmm"); slowthree(); clear();
        printf("Okay?"); sleep(2); clear();
        printf("Creator's comment\n"); sleep(2);
        printf("Wow"); slowthree(); 
        printf(" What a speed run that was -_-"); sleep(2); clear(); 
        whoareyouelseif();
}
void intro1() //intro1-1
{
    system("clear");
    int choice;
        printf("Oh"); excite();  clear();
        printf("Its been a while since i've had those"); slowthree(); clear();
        printf("Well"); slowthree(); clear();
        printf("What are you doing here? In this unpolished, unfinished, and just thought on the spot Interactive Fiction game?\n"); sleep(3);
        printf("[1] Well i just thought i would play a game like this, yknow? A change of pace is all.\n");
        printf("[2] Oh wait.. Sorry i opened the wrong game :P.\n= ");
}
void returnstart() //go back to the start
{
    int start;
    system("clear");
    printf("[1] Go back to the start?");
    printf("[2] Turn of program");
    scanf("%d", &start);
    if (start==1)
    {
        menu();
    }
    else if (start==2)
    {
        end();
    }
    else
    {
        printf("Thats not in the options!");
        returnstart();
    } 
}
void clear() //clear
{
    system("clear");
}
void slowthree() //3 slow dots
{  
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
}
void enter() //Enter
{
    getchar();
    system("clear");
}
void loading() //loading
{
    printf("Please wait"); sleep(1); printf("."); sleep(1); printf("."); sleep(1); printf("."); sleep(1);
    system("clear");
    printf("Please wait"); printf("."); sleep(1); printf("."); sleep(1); printf("."); sleep(1);
    system("clear");
    printf("Please wait"); printf("."); sleep(1); printf("."); sleep(1); printf("."); sleep(1);
}
void excite() //triple !
{
    printf("!"); sleep(1);
    printf("!"); sleep(1);
    printf("!"); sleep(2); 
}
void end() //end
{
    system("clear");
    printf("The program will now end."); sleep(3); clear();
    printf("Program Ending"); slowthree(); clear();
    printf("Program Ending"); slowthree(); clear();
    printf("Program Ending"); slowthree(); clear();
    printf("|Program has ended|");
}//---------------------------------------------------------------------------------------------------------------
void menu()
    {
        int intro;
            start();
             //void whoareyou!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
            printf("Who are you?\n"); sleep(2);
            printf("[1] A player?\n");
            printf("[2] Nobody bye...\n= ");
        scanf("%d", &intro);
            if(intro==1) //1
            {
                int choice;
                intro1();
                scanf("%d", &choice);
                if(choice==1)
                {
                    choice1();
                }
                else if(choice==2)
                {
                    
                }

            }
            else if  (intro==2) //1
            {
                intro2();                      
            }
            else //1
            {
                else1();
            }
        
    }















void main()
{
    menu();
}