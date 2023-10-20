#include <stdio.h>
#include <string.h>#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char name[20];
    int level;
    int exp;
    int hp;
    int attack;
} Character;

void showStatus(Character *character) {
    printf("陈汉升: %s\n", character->name);
    printf("Level: %d\n", character->level);
    printf("Exp: %d\n", character->exp);
    printf("HP: %d\n", character->hp);
    printf("Attack: %d\n", character->attack);
}

void attackEnemy(Character *character) {
    int enemyHP = 100;
    int damage = character->attack;
    
    printf("主动出击!\n");
    
    // 计算攻击伤害
    enemyHP -= damage;
    
    if (enemyHP <= 0) {
        printf("主动出击!\n");
        character->exp += 50;
        printf("EXP +50\n");
        if (character->exp >= 100) {
            character->level++;
            character->exp -= 100;
            printf("升级啦!牛逼啦！\n");
        }
    } else {
        printf("敌人就剩%d HP \n", enemyHP);
    }
}

void explore(Character *character) {
    int event = rand() % 3; // 生成0-2之间的随机数
    
    switch (event) {
        case 0:
            printf("找到大宝贝！ HP +20\n");
            character->hp += 20;
            break;
        case 1:
            printf("只有狗屎没有运，打怪吧，少年！\n");
            attackEnemy(character);
            break;
        case 2:
            printf("遇到萧容鱼 NPC. HP +10, Attack +5\n");
            character->hp += 10;
            character->attack += 5;
            break;
        default:
            break;
    }
}

int main() {
    srand(time(NULL)); // 随机数种子初始化
    
    Character player;
    strcpy(player.name, "陈汉升");
    player.level = 1;
    player.exp = 0;
    player.hp = 100;
    player.attack = 10;

    showStatus(&player);
    
    while (player.hp > 0) {
        printf("\n选一个吧:\n");
        printf("1. 真不顺眼，弄他！\n");
        printf("2. 闷声发大财！\n");
        printf("3. 886，我不玩了\n");
 
        int choice;
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                if (player.hp > 0) {
                    attackEnemy(&player);
                } else {
                    printf("入土吧，宝贝.\n");
                }
                break;
            case 2:
                explore(&player);
                break;
            case 3:
                printf("你太菜了.\n");
                exit(0);
            default:
                printf("逃过一劫.\n");
                break;
        }
        
        showStatus(&player);
    }
    
    printf("游戏结束，洗洗睡吧。\n");
    return 0;
}
