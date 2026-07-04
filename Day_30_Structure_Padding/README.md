### Day 30: Structure Padding & Memory Alignment
* **Folder:** `Day_30_Structure_Padding`
* **File:** `structure_padding.c`
* **What I Learnt:**
  * Understand the internal RAM compilation scam called Structure Padding for data fetch optimization.
    > Processor speed badhane ke liye computer jo khali memory blocks chhorta hai, use samjha.
  * Master compiler controls using `#pragma pack(push, 1)` directives to force strict alignment boundaries.
    > Padding ko temporarily disable kar ke structures ka zero-waste packing layout seekha.
  * Implement `#pragma pack(pop)` statements to restore baseline layout behavior safely.
    > Task khatam hone par settings ko reset karne ka professional syntax process check kiya.
  * Evaluate memory allocation differences directly through raw console byte size footprints.
    > `sizeof` data tags ke zariye 8 bytes aur 5 bytes memory block structure ka differences trace kiya.
