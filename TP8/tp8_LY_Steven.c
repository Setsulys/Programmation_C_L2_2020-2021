#define TAILLE_X 512
#define TAILLE_Y 512
#define NB_MAX_POINT 256

typedef struct{
  int x;
  int y;
}Point;

typedef struct{
  Point point;
  int distcarre;
}PointDistance;

typedef struct{
  PointDistance tab[NB_MAX_POINT];
  int nb_point;
}TabPoint;