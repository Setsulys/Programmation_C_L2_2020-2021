#include <stdio.h>
#include <MLV/MLV_all.h>

#define TAILLE_MAX 20
#define N 1000


typedef struct {
    int x, y;
} Point;

void saisiePoint(Point *p) {
    MLV_wait_mouse(&p->x, &p->y);
}

typedef struct {
    Point points[TAILLE_MAX];
    int taille;
} Polygone;

void dessinePolygone(Polygone p) {
    int i, vx[p.taille], vy[p.taille];

    for (i = 0; i < p.taille; i++) {

        vx[i] = p.points[i].x;

        vy[i] = p.points[i].y;
    }

    MLV_draw_filled_polygon(vx, vy, p.taille, MLV_COLOR_YELLOW);
}

void saisiePolygone(Polygone *p) {
    MLV_Event event = MLV_NONE;

    int x, y;

    p->taille = 0;

    while (event != MLV_KEY && p->taille < TAILLE_MAX) {

        event = MLV_wait_keyboard_or_mouse(NULL, NULL, NULL, &x, &y);

        if (event == MLV_MOUSE_BUTTON) {

            p->points[p->taille] = (Point) {x, y};

            p->taille++;
        }
    }
}

int effacePoint(Polygone *p, int i) {

    int j;

    if (i >= TAILLE_MAX || p->taille <= 3)

        return 0;

    p->taille--;

    for (j = i; j < p->taille; j++)

        p->points[j] = p->points[j + 1];

    return 1;
}

int main(int argc, char *argv[]) {
    
    Polygone p;


    srandom(time(NULL));
    MLV_create_window("Polygône", "", N, N);

    saisiePolygone(&p);
    dessinePolygone(p);
    MLV_update_window();

    while (effacePoint(&p, rand() % (p.taille - 1))) {

        MLV_wait_seconds(1);
        MLV_clear_window(MLV_COLOR_BLACK);
        dessinePolygone(p);
        MLV_update_window();
    }

    MLV_wait_seconds(5);
    return 0;
}