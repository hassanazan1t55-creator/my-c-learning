#include <stdio.h>

// Defining a Union (Yahan 'a' aur 'b' ek hi memory share karenge)
union MyUnion {
    char a;    // 1 Byte
    int b;     // 4 Bytes
};

int main() {
    union MyUnion u;
    
    // 1. Check total size of Union (Sabsay bade variable yaani int ke barabar hoga)
    printf("Sir, Union ka total size ha: %d bytes\n", (int)sizeof(u));
    
    // 2. Putting data in 'b'
    u.b = 65; 
    printf("\n[Step 1] u.b mein 65 daala:\n");
    printf("u.b (int) = %d\n", u.b);
    printf("u.a (char) = %c (Aapne notice kiya? 'b' ki wajah se 'a' bhi 'A' ban gaya!)\n", u.a);
    
    // 3. Putting data in 'a' (Yeh 'b' ka data kharab kar dega)
    u.a = 'B'; 
    printf("\n[Step 2] u.a ko badal kar 'B' (66) kiya:\n");
    printf("u.a (char) = %c\n", u.a);
    printf("u.b (int) = %d (Dekho, b ka data change ho gaya!)\n", u.b);
    
    return 0;
}
