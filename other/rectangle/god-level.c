#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int width;
    int height;
}Rectangle;

Rectangle rectangle(const char width[], const char height[]){
    const Rectangle rec = {atoi(width), atoi(height)};
    return rec;
}

Rectangle handle_arguments(const char *argv[]){
    if (strcmp(argv[1], "--width") == 0 && strcmp(argv[3], "--height") == 0){
        return rectangle(argv[2], argv[4]);
    }
    if (strcmp(argv[1], "--height") == 0 && strcmp(argv[3], "--width") == 0){
        return rectangle(argv[2], argv[4]);
    }
    exit(EXIT_FAILURE);
}

int find_perimeter(Rectangle rec){
    const int perimeter = 2 * (rec.width + rec.height);
    return perimeter;
}

int find_area(Rectangle rec){
    const int area = rec.width * rec.height;
    return area;
}

int main(const int argc, const char *argv[]){
    const Rectangle rectangle = handle_arguments(argv);
    printf("Perimeter : %d\n", find_perimeter(rectangle));
    printf("Area : %d", find_area(rectangle));
    return 0;
}
