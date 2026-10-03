#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

// TODO: return x*x + y*y
int distance_squared(Point point)
{
    return 0;
}

int main(void)
{
    Point points[3] = { { 3, 4 }, { -6, 2 }, { 1, -7 } };
    int count = 3;

    for (int i = 0; i < count; i++) {
        printf("(%d, %d): distance squared = %d\n",
               points[i].x, points[i].y, distance_squared(points[i]));
    }

    int farthest_index = 0;
    // TODO: find the index of the point with the largest distance_squared

    printf("Farthest from origin: (%d, %d)\n", points[farthest_index].x, points[farthest_index].y);
    return 0;
}
