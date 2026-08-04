#include <stdio.h>
#include <stdlib.h>

// Structure for Music Playlist
struct SongNode {
    int song_id;
    struct SongNode *next;
};

int main() {
    // Playlist: 101 -> 102 -> 103
    struct SongNode *song1 = (struct SongNode *)malloc(sizeof(struct SongNode));
    struct SongNode *song2 = (struct SongNode *)malloc(sizeof(struct SongNode));
    struct SongNode *song3 = (struct SongNode *)malloc(sizeof(struct SongNode));

    song1->song_id = 101;
    song1->next = song2;

    song2->song_id = 102;
    song2->next = song3;

    song3->song_id = 103;
    song3->next = NULL;

    printf("Initial Playlist:\n");
    struct SongNode *temp = song1;
    while (temp != NULL) {
        printf("Song ID: %d -> ", temp->song_id);
        temp = temp->next;
    }
    printf("NULL\n\n");

    // Deleting Song 102 from Middle
    struct SongNode *toDelete = song2;
    song1->next = song3; // Bypass song2
    free(toDelete);      // Delete song2 from RAM

    printf("Playlist After Removing Song 102:\n");
    temp = song1;
    while (temp != NULL) {
        printf("Song ID: %d -> ", temp->song_id);
        temp = temp->next;
    }
    printf("NULL\n");

    // Cleanup
    free(song1);
    free(song3);

    return 0;
}
