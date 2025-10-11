#define ROWS 20
#define COLS 40

typedef struct {
    int tiles[ROWS][COLS];
} Map;

typedef struct {
    int x;
    int y;
} Player;

typedef struct {
    Map map;
    Player player;
    bool running;
} Game;
