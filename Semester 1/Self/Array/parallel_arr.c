//t Experimenting with parallel array.
//* Refrence: https://www.youtube.com/watch?v=_LDN79j5H5s&list=PL6gx4Cwl9DGAKIXv8Yr6nhGJ9Vlcjyymq&index=40&ab_channel=thenewboston

#include<stdio.h>
#include<stdlib.h>

//Optional Headers:
#include <math.h>   //Math functions
#include <conio.h>  //console input/output

void main(){
    system("cls");
    int player_number[5]={69,420,75,42,7};
    int goals_scored[5]={30,23,38,30,20};
    int matches_played[5]={30,29,20,26,22};
    float ppg[5];
    float best_ppg;
    int best_player;
    for (int i = 0; i < 5; i++){
        ppg[i]=(float)goals_scored[i]/(float)matches_played[i];
        if (ppg[i]>best_ppg){
            best_ppg=ppg[i];
            best_player=player_number[i];
        }
    }
    
    printf("Player\t\tGoals\t\tMatches\t\tPPG\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t\t%d\t\t%d\t\t%.2f\n",player_number[i],goals_scored[i],matches_played[i],ppg[i]);
    }
    printf("\nBest player was %d with a PPG of: %.2f\n\n",best_player,best_ppg );
}