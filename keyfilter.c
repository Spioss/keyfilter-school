#include <stdio.h>
#include <string.h>

#define maxColumns 43
#define maxCharacters 101
#define true 1
#define false 0

char toLowerCase(char x);
int checker(int max, char *saved, char element);

char adresy[maxColumns][maxCharacters] = {};

int main(int argc, char *argv[]){

    int input, columns = 0, characters = 0;
    (void)argv;
    
    // ZAPIS Z STDIN DO 2D ARRAYU
    while ((input = getc(stdin)) != EOF)
    {   
        if (input != '\n'){
            adresy[columns][characters] = input;
            characters++;
        }else{
            columns++;
            characters = 0;
        }
    }

    // 1 PRIPAD AK UZIVATEL NEZADA HLADA PISMENKO/KA
    if(argc == 1){
        printf("ENABLE:");
        int step = 1, count = 1;
        char saved[maxColumns] = {};
        saved[0] = adresy[0][0];

        while(adresy[step][0] != '\0'){
            if(checker(maxColumns, saved, adresy[step][0]) == true){
                saved[count] = adresy[step][0];
                count++;
            }else{ }
            step++;
        }

        for(unsigned int i = 0; i < strlen(saved); i++){
            printf(" %c |", saved[i]);
        } 
        printf("\n");
        return 0;
    }


    return 0;
}


//if true nenachadza sa tam
int checker(int max, char *saved, char element){
    int output = true;
    for(int step = 0; step < max; step++){
        if(element == saved[step] || element == '\0'){
            return false;
        }else{ }
    }
    return output;
}


char toLowerCase(char x){
    int difference = 'a' - 'A';
    char output = x;
    if(x > 'A' && x < 'Z'){
        output = x + difference;
    }
    return output;
}


    //printing
    // columns = 0;
    // characters = 0;
    // while(adresy[columns][characters] != '\0'){
    //     while (adresy[columns][characters] != '\0'){
    //         if(toLowerCase(adresy[columns][characters]) == toLowerCase(argv[1][0])){
    //             printf("%c", adresy[columns][characters]);
    //         }else{ 

    //         }
    //         characters++;
    //     }
    //     characters = 0;
    //     columns++;
    // }