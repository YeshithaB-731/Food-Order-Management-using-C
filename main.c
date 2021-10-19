/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>


struct order{
    char name[50];
    int order_number;
    int cost;
}p[10000];
int order_count = 0;

int order ()
{   
    int n, in, qu, i;
    printf ("please enter your name: ");
    gets (p[order_count].name);
    p[order_count].order_number = 10000+order_count;
    cost:
    p[order_count].cost = 0;
    phone:
    {
    long long h;
    int count = 0;
    printf("Enter ph number: ");
    scanf("%lld", &h);

    while (h != 0) {
        h /= 10;
        count++;
    }
    if(count!=10){
    printf("invalid ph number\n");
    goto phone;
    }
    else
    { 
        items();
    }
    }
    
    level:
    
    {
        printf ("\nEnter chosen item code\n");
        scanf ("%d", &in);
        getchar();
        switch(in){
    case 1: {
        printf ("Enter the size of pizza: 1.medium  2.large\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        if (i==1) p[order_count].cost += (130*qu);

        else p[order_count].cost += (180*qu);
        break;
    }
    case 2 :{
        printf ("Enter the size of Chicken Pizza: 1. 12inch  2. 14inch  3. 16inch\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        if (i==1) p[order_count].cost += (750*qu);

        else if (i==2) p[order_count].cost += (975*qu);

        else  p[order_count].cost += (1250*qu);

        break;
    }
    case 3 :{
        printf ("Enter the amount of chicken: 1. 1 pcs  2. 4 pcs  3. 10 pcs\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getch();

        if (i==1) p[order_count].cost += (85*qu);

        else if (i==2) p[order_count].cost += (320*qu);

        else  p[order_count].cost += (790*qu);

        break;
    }
    case 4 :{
        printf ("Enter the size of grilled chicken: 1. quarter  2. half  3. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        if (i==1) p[order_count].cost += (70*qu);

        else if (i==2) p[order_count].cost += (140*qu);

        else  p[order_count].cost += (250*qu);

        break;
    }
    case 5 :{
        printf ("Enter the size of Noodles: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        if (i==1) p[order_count].cost += (130*qu);

        else p[order_count].cost += (250*qu);

        break;
    }
    case 6 :{
        printf ("Enter the size of pasta: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        if (i==1) p[order_count].cost += (120*qu);

        else p[order_count].cost += (240*qu);

        break;
    }
    case 7 : {
        printf ("250 ml of OREO SHAKE\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        
        p[order_count].cost += (180*qu);
        break;
    }
    case 8 : {
        printf ("250 ml of Cold Coffee\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].cost += (65*qu);
        break;
    }
    case 9 : {
        printf ("250 ml of Cappuccino\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].cost += (70*qu);
        break;
    }
    case 10 :{
        printf ("Enter the size of Coke: 1. 250 ml  2. 500 ml\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        if (i==1) p[order_count].cost += (20*qu);

        else p[order_count].cost += (30*qu);
        break;
    }
    default : {
        printf ("Invalid selection try again\n");
    }
}
    goto press;
  final:
    {
    coupons();
    char z;
    printf ("\nThank you %s for your order. Your bill is Rs.%d.\nPlease wait while we prepare the food\nEnjoy your meal\nVisit again\nHave a good day!\n", p[order_count].name, p[order_count].cost);
    printf("comments:");
    scanf("%s",&z);
    main();
}

    press:
    printf("press 1 to order more\npress 2 to get the bill\npress 3 to restart\n ");
    scanf("%d",&n);
    if(n==1)
    goto level;
    if(n==3)
    goto cost;
    else
    goto final;
}
}
void coupons()
{
     char q,c,y,Y;
    float d;
    printf("do you have any coupons?(y/n)\n");
    scanf("%c",&q);
    scanf("%c",&q);
    if(q=='y' || q=='Y'){
    printf("enter the coupon code\n");
    scanf("%d",&c);
    if(c==1234 || c==3356 || c==4326 || c==7893)
    printf("Congrats!!You have got 10%% off!!\n");
    p[order_count].cost=p[order_count].cost-(p[order_count].cost*10/100);
    printf("Your bill is %d\n",p[order_count].cost);
    main();
    }
    else{
    printf("coupon does not exist\n");
    printf("Your bill is %d",p[order_count].cost);
    main();
    }
    
}
     
    
void items ()
{
    printf("..................................MENU....................................\n");

    printf("Item Code#   Description-------------------Size--------------------Price(Rs.)\n");

    printf("[1]---------Pizza---------------------medium/large------------------130/180\n");
    printf("[2]---------Chicken Pizza--------------12/14/16inch---------------750/975/1250\n");
    printf("[3]---------Fried Chicken--------------1/4/10 pcs-----------------85/320/790\n");
    printf("[4]---------Grilled Chicken------------quarter/half/full----------70/140/250\n");
    printf("[5]---------Noodles--------------------Half/Full------------------130/250\n");
    printf("[6]---------Pasta----------------------Half/Full------------------120/240\n");
    printf("[7]---------Oreo Shake-----------------250 ml----------------------180\n");
    printf("[8]---------Cold Coffee----------------250 ml----------------------65\n");
    printf("[9]---------Cappuccino-----------------250 ml----------------------70\n");
    printf("[10]---------Coke-----------------------250/500 ml------------------20/30\n\n");

}
int main ()
{
   
    printf ("\t\t     Welcome To Cafe by the Way\n");
    printf ("\n1.Order\n2.Exit the program\n");

        int in;
        scanf ("%d", &in);
        getchar ();
        switch (in){
            case 1 : {
                order ();
                break;
            }
            
            case 2 : {
                printf ("We are closed come back again\n\n");
                return 0;
            }
        }
    }










