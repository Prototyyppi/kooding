#include <stdio.h>
void hex_to_bin(unsigned char, int array[]);
int main(void){
    int array[8] = {0};
    unsigned char charri = 0x88;
    //int charri;
    //scanf("%d", &charri);
    //printf("%u\n", charri);
    hex_to_bin(charri, array);
    printf("%d", array[0]);
    printf("%d", array[1]);
    printf("%d", array[2]);
    printf("%d", array[3]);
    printf("%d", array[4]);
    printf("%d", array[5]);
    printf("%d", array[6]);
    printf("%d", array[7]);
    return 0;
}
//perhaps like so
void hex_to_bin(unsigned char charri, int array[]){
    int temporaryarray[8] = {0};
    for(int i = 0; i<8; i++){
        
        if (charri % 2 != 0){
            temporaryarray[i] = 1;
        }
        else{
            temporaryarray[i] = 0;
        }
        //gabba
        charri = charri / 2;
    }
    int k = 7;
    int j = 0;
    for(j = 0; j<8; j++, k--){
        array[j] = temporaryarray[k];
     
    }
}