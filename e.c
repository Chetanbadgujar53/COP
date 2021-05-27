#include<stdio.h>
#include<stdlib.h>



/*


typedef enum {TRAINING,PLACEMENT,ADMIN}DEPT;
// typedef to anonymous enum
int main(void)
{
    DEPT d; //d is a variable of type enum
            //DEPT is a nick name given to enum

    d=ADMIN;
    printf("%d \n",d);
    return 0;
}

*/



/*

enum {RED,BLUE,GREEN}; //Anonymous enum
// we can not create variable of type enum inside main()
int main(void)
{
    printf("%d \n",RED);
    return 0;
}


*/
/*

typedef enum departments{ADMIN,TRAINING,SYSTEM}DEPT;

int main(void)
{

     enum departments dreal;//create enum variable using real name

     DEPT d_nick_name;//create enum variable using nick name

     dreal=TRAINING;
     printf("Accessing enum element using real name = %d \n",dreal);

     d_nick_name=SYSTEM;
     printf("Accessing enum element using nick name = %d \n",d_nick_name);


    return 0;
}

*//*
enum colors{RED,GREEN,BLUE};
int main(void)
{
    enum colors clr;// clr is a enum variable 

    clr=RED; // Accessing Enum Element using enum variable
    

    printf("CLR VALUE = %d \n",clr);

    clr=GREEN;
    printf("CLR VALUE = %d \n",clr);

    clr=BLUE;
    printf("CLR VALUE = %d \n",clr);

    //enum variable can point to one element at a time
    //printf("Size = %d \n",sizeof(clr));

    printf("Size = %d \n",sizeof(enum colors));

  
    return 0;
}

*/



/*

enum colors{RED=10,GREY,BLUE,GREEN}; //int constants
int main(void)
{
    //ACCESS ENUM ELEMENTS DIRECTLY BY THEIR NAME
    printf("Red value = %d \n",RED); 
    printf("Grey Value = %d \n",GREY);
    printf("Blue Value = %d \n",BLUE);
    printf("Green Value = %d \n",GREEN);
    return 0;
}
*/

/*
enum colors{RED=10,GREY,BLUE,GREEN}; //int constants
int main(void)
{
    //ACCESS ENUM ELEMENTS DIRECTLY BY THEIR NAME
    printf("Red value = %d \n",RED); 
    printf("Grey Value = %d \n",GREY);
    printf("Blue Value = %d \n",BLUE);
    printf("Green Value = %d \n",GREEN);
    return 0;
}
*/



/*
enum colors{RED,GREY=20,BLUE,GREEN=30};
int main(void)
{
    //ACCESS ENUM ELEMENTS DIRECTLY BY THEIR NAME
    printf("Red value = %d \n",RED); 
    printf("Grey Value = %d \n",GREY);
    printf("Blue Value = %d \n",BLUE);
    printf("Green Value = %d \n",GREEN);
    return 0;
}
*/
/*
enum colors{RED,GREY,BLUE=4,GREEN};
int main(void)
{
    //ACCESS ENUM ELEMENTS DIRECTLY BY THEIR NAME
    printf("Red value = %d \n",RED); 
    printf("Grey Value = %d \n",GREY);
    printf("Blue Value = %d \n",BLUE);
    printf("Green Value = %d \n",GREEN);
    return 0;
}
*/



/*

enum colors{RED=1,GREY=3,BLUE=4,GREEN=7};
int main(void)
{
    //ACCESS ENUM ELEMENTS DIRECTLY BY THEIR NAME
    printf("Red value = %d \n",RED); 
    printf("Grey Value = %d \n",GREY);
    printf("Blue Value = %d \n",BLUE);
    printf("Green Value = %d \n",GREEN);
    return 0;
}
*/



enum colors{RED,GREY,BLUE,GREEN}; //declaration of enum 
//user defined datatype
//enum is enumerated list  
//enum is a keyword
//colors is name of enum 
//RED,GREY,BLUE,GREEN are the elements of enum 
//each element of enum received one integer constant value

int main(void)
{
    //ACCESS ENUM ELEMENTS DIRECTLY BY THEIR NAME
    printf("Red value = %d \n",RED); 
    printf("Grey Value = %d \n",GREY);
    printf("Blue Value = %d \n",BLUE);
    printf("Green Value = %d \n",GREEN);
    return 0;
}
