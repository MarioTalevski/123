#include <stdio.h>
#include <string.h>

struct Imenik
{
    char ime[20];
    char prezime[20];
    char grad[20];
    char broj[15];
};

void polni ()
{
    FILE *f = fopen("imenik.txt","a+");
    struct Imenik im;
    printf("Vnesete go imeto             : ");
    scanf("%s",&im.ime);
    printf("Vnesete go prezimeto         : ");
    scanf("%s",&im.prezime);
    printf("Vnesete go gradot            : ");
    scanf("%s",&im.grad);
    printf("Vnesete go telefonskiot broj : ");
    scanf("%s",&im.broj);
    fprintf(f,"%s %s %s %s\n",im.ime, im.prezime, im.grad, im.broj);
    fclose (f);
}
void ispis ()
{
    FILE *f = fopen("imenik.txt","r");
    struct Imenik im;
    int i = 0;
    printf("   Ime  Prezime  Grad  Tel.Broj\n\n");
    while(!feof(f))
    {
        fscanf(f,"%s %s %s %s\n",&im.ime, &im.prezime, &im.grad, &im.broj);
        printf("%d. %s %s %s %s\n",i+1, im.ime, im.prezime, im.grad, im.broj);
        ++i;
    }
}
void prebaruvanje (int n)
{
    FILE *f = fopen("imenik.txt","r");
    struct Imenik im;
    char bara [20];
    int i=0,flag = 1;
    switch (n)
    {
    case 1:
    {
        printf("Vnesete go imeto             : ");
        scanf("%s",&bara);
        while(!feof(f))
        {
            fscanf(f,"%s %s %s %s\n",&im.ime, &im.prezime, &im.grad, &im.broj);
            if(strcmp(im.ime,bara)==0)
            {
                printf("%d. %s %s %s %s\n",i+1, im.ime, im.prezime, im.grad, im.broj);
                ++i;
                flag = 0;
            }
        }
        if (flag) printf("Ne se pronajdeni nikakvi zapisi\n");
    }
    break;
    case 2:
    {
        printf("Vnesete go prezimeto        : ");
        scanf("%s",&bara);
        while(!feof(f))
        {
            fscanf(f,"%s %s %s %s\n",&im.ime, &im.prezime, &im.grad, &im.broj);
            if(strcmp(im.prezime,bara)==0)
            {
                printf("%d. %s %s %s %s\n",i+1, im.ime, im.prezime, im.grad, im.broj);
                ++i;
                flag = 0;
            }
        }
        if (flag) printf("Ne se pronajdeni nikakvi zapisi\n");
    }
    break;
    case 3:
    {
        printf("Vnesete go gradot           : ");
        scanf("%s",&bara);
        while(!feof(f))
        {
            fscanf(f,"%s %s %s %s\n",&im.ime, &im.prezime, &im.grad, &im.broj);
            if(strcmp(im.grad,bara)==0)
            {
                printf("%d. %s %s %s %s\n",i+1, im.ime, im.prezime, im.grad, im.broj);
                ++i;
                flag = 0;
            }
        }
        if (flag) printf("Ne se pronajdeni nikakvi zapisi\n");
    }
    break;
    case 4:
    {
        printf("Vnesete go telefonskiot broj  : ");
        scanf("%s",&bara);
        while(!feof(f))
        {
            fscanf(f,"%s %s %s %s\n",&im.ime, &im.prezime, &im.grad, &im.broj);
            if(strcmp(im.broj,bara)==0)
            {
                printf("%d. %s %s %s %s\n",i+1, im.ime, im.prezime, im.grad, im.broj);
                ++i;
                flag = 0;
            }
        }
        if (flag) printf("Ne se pronajdeni nikakvi zapisi\n");
    }
    }
    fclose (f);
}
void brisenje ()
{
    FILE *f1,*f2;
    f1 = fopen("imenik.txt","r");
    char c;
    int temp = 1,n,i=0;
    ispis ();
    printf("\nVnesete koj red da bidi izbirsen : ");
    scanf("%d", &n);
    f2 = fopen("copy.txt", "w");
    while (c != EOF)
    {
        c = getc(f1);
        if (c == '\n')
            temp++;

        if (temp != n)
            putc(c, f2);

    }
    fclose(f1);
    fclose(f2);
    unlink("imenik.txt");
    rename("copy.txt", "imenik.txt");
}

int main (int argc, char *argv[])
{
    int izbor = -1;
    int n,i;
    int niza [10][10];
    while (izbor!=0)
    {
        printf("-------------------------------------------------------------------\n");
        printf("Pritisnete 1 za vnes, 2 za ispis, 3 za prebaruvanje, 4 za brisenje, 0 za izlez : ");
        scanf("%d",&izbor);
        printf("-------------------------------------------------------------------\n");
        switch(izbor)
        {
        case 1:
            polni();
            break;
        case 2:
            ispis();
            break;
        case 3:
        {
            printf("Vnesi 1 za prebaruvanje po ime, 2 za prebaruvanje po prezime, 3 za prebaruvanje po grad, 4 za prebaruvanje po broj : ");
            scanf("%d",&n);
            printf("-------------------------------------------------------\n");
            prebaruvanje (n);
        }break;
        case 4:
            brisenje ();
            break;
        case 0:
            break;
        default:
            printf("Pogresen vnes\n");
            break;
        }
    }
    return 0;
}
