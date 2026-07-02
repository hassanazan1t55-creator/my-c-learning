#include <stdio.h>

int main() {
    int i;
    int urdu; 
    int math;
    char name[50];

    // loop run 2 times for 2 students
    // (2 students ke liye loop 2 dafa chalega)
    for (i = 0; i < 2; i++) {
        printf("==========================================\n");
        
        // ask student name
        // (Student ka naam poochna)
        printf("Apna Name Likhe: ");
        fgets(name, sizeof(name), stdin);
        
        // ask marks for both subjects
        // (Dono subjects ke marks poochna)
        printf("Apny Phely Subject Urdu ky marks likho: ");
        scanf("%d", &urdu);
        
        printf("Apny dosry Subject Math ky marks likho: ");
        scanf("%d", &math);
        
        // fix input buffer bug for next loop round
        // (Agle round ke liye memory se Enter saaf karne ka trick)
        while ((getchar()) != '\n');
        
        int grand_total = math + urdu;
        
        // print all student data on screen
        // (Student ka saara data screen par dikhana)
        printf("\nStudent ka Name ha: %s", name);
        printf("Apky Urdu ky marks ha: %d \n", urdu);
        printf("Apky Math ky marks ha: %d\n", math);
        printf("%sky total Marks ha: %d\n", name, grand_total);
        printf("==========================================\n");
        
        // check pass or fail condition
        // (Pass ya fail check karne ka logic)
        if (grand_total >= 100) {
            printf("Mubarak ho ap Pass ha!\n");
        } else {
            printf("Sorry Ap Fail ho gay ha!\n");
        }
    }
    
    return 0;
}
