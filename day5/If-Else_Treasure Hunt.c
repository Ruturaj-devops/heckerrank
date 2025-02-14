#include <stdio.h>

int main() {
    int path_choice, action_choice, puzzle_answer, chest_choice;

    // Step 1: Path choice
    scanf("%d", &path_choice);
    
    if (path_choice == 1) {
        printf("Player chooses the Left path.\n");
        
        // Step 2: Action choice for Left Path (Swamp)
        scanf("%d", &action_choice);
        
        if (action_choice == 1) {
            printf("Poor choice, Game Over!\n");
        } else if (action_choice == 2) {
            printf("Player found a bridge.\n");
            
            // Step 3: Bridge crossing choice
            scanf("%d", &puzzle_answer);
            if (puzzle_answer == 1) {
                printf("Player crosses the bridge safely.\n");
                
                // Step 4: Final chest choice
                scanf("%d", &chest_choice);
                if (chest_choice == 1) {
                    printf("All that glitters is not gold, Game Over!\n");
                } else if (chest_choice == 2) {
                    printf("All your efforts were for nothing, Game Over!\n");
                } else if (chest_choice == 3) {
                    printf("Congratulations!! You won the treasure.\n");
                }
            } else if (puzzle_answer == 2) {
                printf("Poor luck, Game Over!\n");
            }
        }
    } else if (path_choice == 2) {
        printf("Player chooses the Middle path.\n");
        
        // Step 2: Puzzle answer for Middle Path (Maze)
        scanf("%d", &puzzle_answer);
        if (puzzle_answer == 582) { 
            printf("Player solved the puzzle.\n");
            
            // Step 3: Final chest choice
            scanf("%d", &chest_choice);
            if (chest_choice == 1) {
                printf("All that glitters is not gold, Game Over!\n");
            } else if (chest_choice == 2) {
                printf("All your efforts were for nothing, Game Over!\n");
            } else if (chest_choice == 3) {
                printf("Congratulations!! You won the treasure.\n");
            }
        } else {
            printf("Foolish player, Game Over!\n");
        }
    } else if (path_choice == 3) {
        printf("Player chooses the Right path.\n");
        
        // Step 2: Puzzle answer for Right Path (Vault)
        scanf("%d", &puzzle_answer);
        if (puzzle_answer == 30) { 
            printf("Player solved the puzzle.\n");
            
            // Step 3: Final chest choice
            scanf("%d", &chest_choice);
            if (chest_choice == 1) {
                printf("All that glitters is not gold, Game Over!\n");
            } else if (chest_choice == 2) {
                printf("All your efforts were for nothing, Game Over!\n");
            } else if (chest_choice == 3) {
                printf("Congratulations!! You won the treasure.\n");
            }
        } else {
            printf("Foolish player, Game Over!\n");
        }
    }

    return 0;
}