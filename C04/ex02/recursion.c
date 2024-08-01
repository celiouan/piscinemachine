#include <stdio.h>

#define NUM_ROOMS 5

// Function to clean rooms using a while loop
void clean_rooms_loop(int start_room, int end_room) {
    int current_room = start_room;
    while (current_room <= end_room) {
        printf("Cleaning Room %d\n", current_room);
        current_room++;
    }
}

// Function to clean rooms using recursion
void clean_rooms_recursive(int current_room, int end_room) {
 	
    if (current_room > end_room) {
        return;
    }
  
    printf("Enter room %d:\n", current_room);
  
    printf("Cleaning Room %d\n", current_room);
    
    clean_rooms_recursive(current_room + 1, end_room);
    printf("Exit room %d:\n", current_room);
    
}

int main() {
    printf("Cleaning rooms using a while loop:\n");
    clean_rooms_loop(1, NUM_ROOMS);
    
    printf("\nCleaning rooms using before recursion:\n");
    clean_rooms_recursive(1, NUM_ROOMS);
    printf("\nCleaning rooms using after recursion:\n");
    
    return 0;
}
