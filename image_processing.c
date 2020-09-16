#include <stdio.h>

/*
 * Read an image from the standard input and set the red value of each pixel to
 * zero.
 */
void remove_red()
{
    char header[2];
    int size[2];
    int max;
    int red, green, blue;
    scanf("%s", &header[0]);
    printf("%s\n", header);
    scanf("%d %d", &size[0], &size[1]);
    printf("%d %d\n", size[0], size[1]);
    scanf("%d", &max);
    printf("%d\n", max);
    while (scanf("%d %d %d", &red, &green, &blue) != EOF){
        red = 0;
        printf("%d %d %d\n", red, green, blue);
    }
    
}

/*
 * Read an image from the standard input and convert it from colour to black and white.
 */
void convert_to_black_and_white()
{
    char header[2];
    int size[2];
    int max;
    int red, green, blue;
    int average;
    scanf("%s", &header[0]);
    printf("%s\n", header);
    scanf("%d %d", &size[0], &size[1]);
    printf("%d %d\n", size[0], size[1]);
    scanf("%d", &max);
    printf("%d\n", max);
    while (scanf("%d %d %d", &red, &green, &blue) != EOF){
        average = (red + green + blue)/3;
        printf("%d %d %d\n", average, average, average);
    }
}
/*
 * Read an image from the standard input and convert it to a square image.
 */
void instagram_square()
{
    char header[2];
    int size[2];
    int max;
    int red, green, blue;
    int coloumns;
    int rows;
    int rows_wanted = 0;
    int valid;
    scanf("%s", &header[0]);
    printf("%s\n", header);
    scanf("%d %d", &size[0], &size[1]);
    coloumns = size[0];
    rows = size[1];
    if(rows > coloumns){
        size[1] = size[0];
    }
    else {
        size[0] = size[1];
    }
    printf("%d %d\n", size[0], size[1]);
    scanf("%d", &max);
    printf("%d\n", max);
   if(rows > coloumns){
        while(rows_wanted < coloumns*coloumns && scanf("%d %d %d", &red, &green, &blue) != EOF){
            printf("%d %d %d\n", red, green, blue);
            rows_wanted++;
        }
    }
    else if(coloumns > rows){
        valid = 0;
        while(scanf("%d %d %d", &red, &green, &blue) != EOF){
            if(valid < rows){
                printf("%d %d %d\n", red, green, blue);
                }
            if(valid == coloumns - 1){
                valid = -1;
            }
             valid++;
        }
    }
    else {
        while(scanf("%d %d %d", &red, &green, &blue) != EOF){
        printf("%d %d %d\n", red, green, blue);
        }
    }
}

