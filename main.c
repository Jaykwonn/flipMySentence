#include <stdio.h>
#include <string.h>
#include <time.h>

void FlipMySentence(char* apples);


int main()
{
    int i;
    char Tires[80];
    time_t rawtime = time(NULL);

    strcpy(Tires,"Whitewalls go faster");

    printf ("Tires is located at %p\n",Tires);


    for (i=0; i<10; i++)
    {
       printf ("Tires[%d] = %c at %p\n",i,Tires[i], &Tires[i]);
        //printf ("Tires[%d] = %d at %p\n",i,Tires[i], &Tires[i]);
        //printf ("Tires[%d] = %c at %p\n",i,*(Tires+i), Tires+i);
    }


    FlipMySentence(Tires);

    printf("The reversed string is: '%s' on %s\n",Tires, ctime(&rawtime));

    return 0;
}

void FlipMySentence(char* apples)
{
    int i,j, length=0;
    char temp;

    length = strlen(apples);
    printf("Sentence length =%d\n",length);

    for(i=0, j=length-1; i<j; i++, j--)
    {
        temp = apples[i];
        apples[i] = apples[j];
        apples[j] = temp;
    }

    return;
}
