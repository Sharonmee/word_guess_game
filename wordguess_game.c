#include <stdio.h>
#include <string.h>
#include <stdlib.h>


    // Creating Userprofiles
struct User_profile{
    char name[50];
    int score;
};


int main() {
int score;
int player_max = 1000;
int num_players;
printf("What is the number of players?\n");
scanf("%d",&num_players);

struct User_profile Users[player_max];
int i;
for(i=0; i < num_players; i++){
    printf("What is your name?");
    scanf("%s",&Users[i].name);
    Users[i].score = 0;
}
for(i=0; i < num_players; i++){
    printf("Hey,\" %s\"\n",Users[i].name);
    printf("Your score is \"%d \"\n",Users[i].score);
    Users[i].score = 0;

}

int level;
printf("Which level do you want to play\n1.Easy \n2.Medium \n3.Difficult\n");
scanf("%d",&level);

const char easy_words[5][100]= {"apple","football","school","president","socks"};
const char medium_words[5][100]={"Galaxy", "Tornado","Pyramid","Volcano","Immunity"};
const char difficult_words[5][100]={"Serenity","Nocturnal","Anethesia","Cryptocurrency","Pychosomatic"};


char guess_word[100];
int compare1;


const char *word = easy_words[rand() % 5];

printf("%s",word);


int status1 = strcmp(word,easy_words[0]);
int status2= strcmp(word,easy_words[1]);
int status3 = strcmp(word,easy_words[3]);
int status4= strcmp(word,easy_words[4]);
int status5= strcmp(word,easy_words[5]);
printf("%d",status1);

if (level==1 && status1 != 1){
    printf("This is level %d\n",level);


    printf("I am a fruit, i am sometimes red or green\n");
    scanf("%s",guess_word);
    compare1 = strcmp(guess_word, easy_words[0]);
    if(compare1 == 0){
        printf("Yay, you had it on the first clue\n");
            score+= 20;
        }else{printf("Oops, Try again\n");
        printf("I only thrive in cold areas\n");
        scanf("%s",&guess_word);
        if(compare1 == 0){
            printf("Yay, you had it on the seconnd clue\n");
            score +=8;

        }else{printf("Oops, Try again");
        printf("I caused man to fall in the bible\n");
        scanf("%s",guess_word);
        if (compare1 == 0){
            printf("Finally, you guessed right\n");
            score +=5;
        }else{printf("oops, better luck next time\n");}}
    
    }}
else if (level==1 && status2 != 1){
    printf("This is level %d\n",level);


    printf("I am a fruit, i am sometimes red or green\n");
    scanf("%s",guess_word);
    compare1 = strcmp(guess_word, easy_words[0]);
    if(compare1 == 0){
        printf("Yay, you had it on the first clue\n");
            score+= 20;
        }else{printf("Oops, Try again\n");
        printf("I only thrive in cold areas\n");
        scanf("%s",&guess_word);
        if(compare1 == 0){
            printf("Yay, you had it on the seconnd clue\n");
            score +=8;

        }else{printf("Oops, Try again");
        printf("I caused man to fall in the bible\n");
        scanf("%s",guess_word);
        if (compare1 == 0){
            printf("Finally, you guessed right\n");
            score +=5;
        }else{printf("oops, better luck next time\n");}}
    
    }}
else if (level==1 && status3 != 1){
    printf("This is level %d\n",level);


    printf("I am a fruit, i am sometimes red or green\n");
    scanf("%s",guess_word);
    compare1 = strcmp(guess_word, easy_words[0]);
    if(compare1 == 0){
        printf("Yay, you had it on the first clue\n");
            score+= 20;
        }else{printf("Oops, Try again\n");
        printf("I only thrive in cold areas\n");
        scanf("%s",&guess_word);
        if(compare1 == 0){
            printf("Yay, you had it on the seconnd clue\n");
            score +=8;

        }else{printf("Oops, Try again");
        printf("I caused man to fall in the bible\n");
        scanf("%s",guess_word);
        if (compare1 == 0){
            printf("Finally, you guessed right\n");
            score +=5;
        }else{printf("oops, better luck next time\n");}}
    
    }}
else if (level==1 && status5 != 1){
    printf("This is level %d\n",level);


    printf("I am a fruit, i am sometimes red or green\n");
    scanf("%s",guess_word);
    compare1 = strcmp(guess_word, easy_words[0]);
    if(compare1 == 0){
        printf("Yay, you had it on the first clue\n");
            score+= 20;
        }else{printf("Oops, Try again\n");
        printf("I only thrive in cold areas\n");
        scanf("%s",&guess_word);
        if(compare1 == 0){
            printf("Yay, you had it on the seconnd clue\n");
            score +=8;

        }else{printf("Oops, Try again");
        printf("I caused man to fall in the bible\n");
        scanf("%s",guess_word);
        if (compare1 == 0){
            printf("Finally, you guessed right\n");
            score +=5;
        }else{printf("oops, better luck next time\n");}}
    
    }}
return 0;
}

