### Day 16: Secure String Input (Fgets)
* **Folder:** `Day_16_String_Input`
* **File:** `secure_input.c`
* **What I Learnt:**
  * Learn why scanf is bad for string because it skip text after space.
    > Seekha ke scanf space ke baad text chhor deta hai isliye string ke liye acha nahi hai.
  * Learn about buffer overflow bug in gets function.
    > Gets function ke buffer overflow wale bug ke baare mein seekha.
  * Use fgets with sizeof to make code modern and secure from hacking.
    > Code ko safe aur modern banane ke liye fgets aur sizeof ka istemal seekha.
  * Test array size limit by change size to 10.
    > Array ka size 10 kar ke limit check karne ka tareeqa seekha.

* **Extra Practice File:** `student_report.c`
* **What I Practiced:**
  * Connect loop, if-else, and string input together in one big code.
    > Loop, if-else, aur string input ko ek sath jorna seekha.
  * Fix the getchar bug when loop run again for second student name.
    > Agle student ke naam ke liye input buffer ka bug fix karna seekha.
