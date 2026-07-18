#include <stdio.h>
#include <stdlib.h>

struct Song {
    struct Song *prev;
    int song_id;
    struct Song *next;
};

void displayPlaylist(struct Song *head) {
    struct Song *temp = head;
    printf("Playlist Queue: NULL <-> ");
    while (temp != NULL) {
        printf("[Song %d] <-> ", temp->song_id);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Add a song to the very end of the playlist queue
void addToQueue(struct Song *head, int id) {
    struct Song *newSong = (struct Song *)malloc(sizeof(struct Song));
    newSong->song_id = id;
    newSong->next = NULL;
    
    struct Song *temp = head;
    // Travel all the way to the last song in the queue
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    temp->next = newSong;    // Hook the old last song forward to our new song
    newSong->prev = temp;    // Hook the new song backward to the old last song
}

int main() {
    // Start the playlist with song 50
    struct Song *head = (struct Song *)malloc(sizeof(struct Song));
    head->prev = NULL; head->song_id = 50; head->next = NULL;

    // Add two more songs to the end of the queue
    addToQueue(head, 60);
    addToQueue(head, 70);

    printf("--- MUSIC PLAYLIST QUEUE ---\n");
    displayPlaylist(head);

    // Free the memory step by step
    free(head->next->next); 
    free(head->next);       
    free(head);             
    
    return 0;
}
