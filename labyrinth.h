#define ROWS 20
#define COLS 40

typedef struct {
    int map[ROWS][COLS];
    bool running;
} Game;

typedef struct {
    int x;
    int y;
} Player;
