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
    printf("�º���: %s\n", character->name);
    printf("Level: %d\n", character->level);
    printf("Exp: %d\n", character->exp);
    printf("HP: %d\n", character->hp);
    printf("Attack: %d\n", character->attack);
}

void attackEnemy(Character *character) {
    int enemyHP = 100;
    int damage = character->attack;
    
    printf("��������!\n");
    
    // ���㹥���˺�
    enemyHP -= damage;
    
    if (enemyHP <= 0) {
        printf("��������!\n");
        character->exp += 50;
        printf("EXP +50\n");
        if (character->exp >= 100) {
            character->level++;
            character->exp -= 100;
            printf("������!ţ������\n");
        }
    } else {
        printf("���˾�ʣ%d HP \n", enemyHP);
    }
}

void explore(Character *character) {
    int event = rand() % 3; // ����0-2֮��������
    
    switch (event) {
        case 0:
            printf("�ҵ��󱦱��� HP +20\n");
            character->hp += 20;
            break;
        case 1:
            printf("ֻ�й�ʺû���ˣ���ְɣ����꣡\n");
            attackEnemy(character);
            break;
        case 2:
            printf("���������� NPC. HP +10, Attack +5\n");
            character->hp += 10;
            character->attack += 5;
            break;
        default:
            break;
    }
}

int main() {
    srand(time(NULL)); // ��������ӳ�ʼ��
    
    Character player;
    strcpy(player.name, "�º���");
    player.level = 1;
    player.exp = 0;
    player.hp = 100;
    player.attack = 10;

    showStatus(&player);
    
    while (player.hp > 0) {
        printf("\nѡһ����:\n");
        printf("1. �治˳�ۣ�Ū����\n");
        printf("2. ��������ƣ�\n");
        printf("3. 886���Ҳ�����\n");
 
        int choice;
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                if (player.hp > 0) {
                    attackEnemy(&player);
                } else {
                    printf("�����ɣ�����.\n");
                }
                break;
            case 2:
                explore(&player);
                break;
            case 3:
                printf("��̫����.\n");
                exit(0);
            default:
                printf("�ӹ�һ��.\n");
                break;
        }
        
        showStatus(&player);
    }
    
    printf("��Ϸ������ϴϴ˯�ɡ�\n");
    return 0;
}
