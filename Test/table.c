#include <stdio.h>
#include <string.h>

int main() {
    char flowers[9][11][1000] = {
        {"3","Vietnam","10,769,355","11,920,206","3,185,173","3,054,008","10.69","-4.12","64.87","60.67","61.19"},
        {"8","Singapore","2,510,708","2,782,091","699,446","942,262","10.81","34.72","15.12","14.16","18.88"},
        {"21","Myanmar","415,264","642,606","133,832","276,252","54.75","106.42","2.50","3.27","5.53"},
        {"22","Philippines","1,008,453","1,175,520","211,136","205,088","16.57","-2.86","6.07","5.98","4.11"},
        {"24","Cambodia","567,678","684,703","102,341","150,579","20.61","47.14","3.42","3.48","3.02"},
        {"25","Laos","599,792","1,008,782","182,679","146,358","68.19","-19.88","3.61","5.13","2.93"},
        {"29","Indonisia","489,295","955,785","177,649","114,880","95.34","-35.33","2.95","4.86","2.30"},
        {"31","Malaysia","148,127","370,922","28,671","92,947","150.41","224.19","0.89","1.89","1.86"},
        {"65","Brunei","93,128","108,301","30,916","9,050","16.24","-70.73","0.56","0.55","0.18"},
    };

    printf("__________Table of ornamental flowers and flower species from Thailand to ASEAN 2018-2020 (January-March 2020)__________\n");
    printf("                                                  [Value(dollars)]                          [Expansion(%%)]           [Proportion(%%)]\n");
    printf("[Ranking]  [Country]      [2561]       [2562]   [2562(Jan-Mar)]  [2563(Jan-Mar)] [61/62]   [62/63(Jan-Mar)]  [2561]  [2562]  [2563]\n");
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 11; j++) {
            printf("%s ", flowers[i][j]);
            int col_width[11] = {11, 12, 12, 12, 17, 12, 14, 12, 7, 7, 7}; // Adjust column widths as needed
            for (strlen(flowers[i][j]); strlen(flowers[i][j]) < col_width[j]; col_width[j]--) {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("       Asian           16,601,840    19,648,916    4,751,842       4,991,425      18.35            5.04      100.00  100.00  100.00\n");
    printf("       World           134,936,999   132,692,130   33,748,885      30,632,215     -1.66            9.23\n");

    return 0;
}
