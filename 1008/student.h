#define MAX 24
#define START_ID 1401001

// 레코드 = 32byte
struct student {
   char name[MAX];
   int id;
   int score;
};