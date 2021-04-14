
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct State
{
    char shortName[10];
    char longName[100];
};

struct City
{
    char stateShortName[10];
    char cityName[100];
    long population;
};

struct State state[100];
int stateCnt = 0;

struct City city[500];
int cityCnt = 0;

int showMenu()
{
    int m;
    printf("\n Do you want to show Menu? Enter 1 or 0 \n");
    scanf("%d", &m);
    return m;
}

void displayAllCityWithLongName()
{
    printf("\n----------------------------------------------------------------------------------------\n");
    printf("City Name\t\t Population \t\t State ShortName \t\t State LongName \t\t");
    printf("\n----------------------------------------------------------------------------------------");
    printf("\n");
    for (int i = 0; i < cityCnt; i++)
    {
        char *cityName = city[i].cityName;
        char *stateShortName = city[i].stateShortName;
        char *stateLongName = "";
        for (int k = 0; k < stateCnt; k++)
        {
            if (strcmp(stateShortName, state[k].shortName) == 0)
            {
                stateLongName = state[k].longName;
                break;
            }
        }
        printf("%s\t\t\t %ld \t\t\t %s \t\t\t %s",
               cityName, city[i].population, stateShortName, stateLongName);
        printf("\n");
    }
    printf("\n----------------------------------------------------------------------------------------\n");
}

void CityByState()
{
    char ch[10];
    printf("Enter State : \n");
    scanf("%s", &ch);

    printf("\n----------------------------------------------------------------------------------------\n");
    printf("City Name\t\t State ShortName \t\t State LongName \t\t");
    printf("\n----------------------------------------------------------------------------------------");
    printf("\n");
    int found = 0;
    for (int i = 0; i < cityCnt; i++)
    {
        char *cityName = city[i].cityName;
        char *stateShortName = city[i].stateShortName;
        if (strcmp(stateShortName, ch) == 0)
        {
            found = 1;
            char *stateLongName = "";
            for (int k = 0; k < stateCnt; k++)
            {
                if (strcmp(ch, state[k].shortName) == 0)
                {
                    stateLongName = state[k].longName;
                    break;
                }
            }
            printf("%s\t\t\t %s \t\t\t %s",
                   cityName, stateShortName, stateLongName);
            printf("\n");
        }
    }
    if (found == 0)
    {

        printf("\n No City found");
    }
    printf("\n----------------------------------------------------------------------------------------\n");
}
void displayCityByUserInput()
{
    char ch[10];
    printf("Enter starting letter of city : \n");
    scanf("%s", &ch);
    int found = 0;
    printf("\n----------------------------------------------------------------------------------------\n");
    printf("City Name\t\t State ShortName \t\t State LongName \t\t");
    printf("\n----------------------------------------------------------------------------------------");
    printf("\n");
    for (int i = 0; i < cityCnt; i++)
    {
        char *cityName = city[i].cityName;
        char *stateShortName = city[i].stateShortName;
        //used strncmp to compare n character in string
        if (strncmp(cityName, ch, 1) == 0)
        {
            found = 1;
            char *stateLongName = "";
            for (int k = 0; k < stateCnt; k++)
            {
                if (strcmp(ch, state[k].shortName) == 0)
                {
                    stateLongName = state[k].longName;
                    break;
                }
            }
            printf("%s\t\t\t %s \t\t\t %s",
                   cityName, stateShortName, stateLongName);
            printf("\n");
        }
    }
    if (found == 0)
    {

        printf("\n No City found");
    }
    printf("\n----------------------------------------------------------------------------------------\n");
}
void displayCityByPopulation()
{
    long num;
    printf("Enter Population : \n");
    scanf("%ld", &num);
    int found = 0;
    printf("\n----------------------------------------------------------------------------------------\n");
    printf("City Name\t\t State ShortName \t\t Population \t\t");
    printf("\n----------------------------------------------------------------------------------------");
    printf("\n");
    for (int i = 0; i < cityCnt; i++)
    {
        char *cityName = city[i].cityName;
        char *stateShortName = city[i].stateShortName;
        //Show city by less than enterd population
        if (city[i].population < num)
        {
            found = 1;
            printf("%s\t\t\t %s \t\t\t %ld",
                   cityName, stateShortName, city[i].population);
            printf("\n");
        }
    }
    if (found == 0)
    {

        printf("\n No City found");
    }
    printf("\n----------------------------------------------------------------------------------------\n");
}
void displayStateAndCity()
{
    for (int k = 0; k < stateCnt; k++)
    {
        printf("\n----------------------------------------------------------------------------------------\n");
        printf("\n City List for  %s ", state[k].longName);
        printf("\n----------------------------------------------------------------------------------------\n");
        printf("City Name\t\t State ShortName \t\t Population \t\t");
        printf("\n----------------------------------------------------------------------------------------");
        printf("\n");
        int found = 0;
        for (int i = 0; i < cityCnt; i++)
        {
            char *cityName = city[i].cityName;
            char *stateShortName = city[i].stateShortName;
            
            if (strcmp(state[k].shortName, stateShortName) == 0)
            {
                found = 1;
                printf("%s\t\t\t %s \t\t\t %ld",
                       cityName, stateShortName, city[i].population);
                printf("\n");
            }
        }
        printf("\n");
        if (found == 0)
        {

            printf("\n No City found");
        }
    }

    printf("\n----------------------------------------------------------------------------------------\n");
}
void addNewCity()
{
    int n;
    printf("How many City you want to add?: \n");
    scanf("%d", &n);

    int cnt = cityCnt + n;
    printf("Add City Details \n");
    for (int i = cityCnt; i < cnt; i++)
    {

        printf("\n Enter City %d  name:   ", (i + 1));
        scanf("%s", &city[i].cityName);
        printf("\n Enter City %d State short name:  ", (i + 1));
        scanf("%s", &city[i].stateShortName);
        printf("\n Enter City %d  population:   ", (i + 1));
        scanf("%ld", &city[i].population);
    }
    cityCnt = cnt;
}
void addNewState()
{
    int n;
    printf("How many State you want to add?: \n");
    scanf("%d", &n);

    int cnt = stateCnt + n;
    printf("Add state %d details: \n", n);
    for (int i = stateCnt; i < cnt; i++)
    {
        // struct Book newBook;
        printf("\n Enter state %d short name:  ", (i + 1));
        scanf("%s", &state[i].shortName);
        printf("\n Enter state %d long name:   ", (i + 1));
        scanf("%s", &state[i].longName);
    }
    stateCnt = cnt;
}
void chooseOption()
{
    int option;
    printf("Select option \n");
    printf("1. Add New State\n");
    printf("2. Add New City\n");
    printf("3. Show all the cities with LongName and CityName\n");
    printf("4. Show all City by State \n");
    printf("5. Find City by name\n");
    printf("6. Show all the cities having population more/less/equal  to user entered value\n");
    printf("7. Show State and its Cites details\n");

    printf("Enter your option \n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        addNewState();
        break;
    case 2:
        addNewCity();
        break;
    case 3:
        displayAllCityWithLongName();
        break;
    case 4:
        CityByState();
        break;
    case 5:
        displayCityByUserInput();
        break;
    case 6:
        displayCityByPopulation();
        break;
         case 7:
        displayStateAndCity();
        break;
    default:
        break;
    }
    int m = showMenu();
    switch (m)
    {
    case 1:
        chooseOption();
        break;
    case 0:
        exit(0);
        break;
    default:
        break;
    }
}

int main()
{
    chooseOption();
    return 0;
}