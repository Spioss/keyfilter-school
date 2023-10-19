#include <stdio.h>
#include <string.h>

#define maxColumns 42
#define maxCharacters 100
#define true 1
#define false 0

char toLowerCase(char x);
int checkerForNoArgs(int max, char *saved, char element);


char adresses[maxColumns][maxCharacters] = {};
int status = false;

int main(int argc, char *argv[]){

    // ZAPIS Z STDIN DO 2D ARRAYU
    int input, column = 0, character = 0;
    while ((input = getc(stdin)) != EOF)
    {   
        if (input != '\n'){
            adresses[column][character] = input;
            character++;
        }else{
            column++;
            character = 0;
        }

        if(column > maxColumns || character > maxCharacters){

            fprintf(stderr, "File has more Columns or Characters that are set by default!\n");
            return 0;
        }
    }


    // 1 PRIPAD AK UZIVATEL NEZADA HLADANE PISMENKO/KA
    if(argc == 1){
        printf("ENABLE:");
        int step = 1, count = 1;
        char savedAdresses[maxColumns] = {};
        savedAdresses[0] = adresses[0][0];

        while(adresses[step][0] != '\0'){
            if(checkerForNoArgs(maxColumns, savedAdresses, adresses[step][0]) == true){
                savedAdresses[count] = adresses[step][0];
                count++;
            }else{ }
            step++;
        }

        for(unsigned int i = 0; i < strlen(savedAdresses); i++){
            printf(" %c |", savedAdresses[i]);
        } 
        printf("\n");
        return 0;
    }

    column = 0;
    character = 0;
    //char savedChar;
    //int savedColumns[maxColumns];
    while(adresses[column][character] != '\0'){
         if(argv[1][character] == adresses[column][character]){
            status = true;
            //savedChar = argv[1][character];
         }else{ }
        column++;
    }
    
    

    return 0;
}


//if true nenachadza sa tam
int checkerForNoArgs(int max, char *saved, char element){
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
    // while(adresses[columns][characters] != '\0'){
    //     while (adresses[columns][characters] != '\0'){
    //         if(toLowerCase(adresses[columns][characters]) == toLowerCase(argv[1][0])){
    //             printf("%c", adresses[columns][characters]);
    //         }else{ 

    //         }
    //         characters++;
    //     }
    //     characters = 0;
    //     columns++;
    // }