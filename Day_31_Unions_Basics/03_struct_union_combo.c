#include <stdio.h>

// Struct representing a game item.
struct InventoryItem {
  char item_name[20];
  int is_weapon;  // 1 if weapon, 0 if potion.

  // Anonymous Union No name given to the union itself.
  union {
    int weapon_damage;  // Active if it's a weapon.
    float potion_heal;  // Active if it's a potion.
  };
};

int main() {
  struct InventoryItem item1;

  // Setting up a weapon
  snprintf(item1.item_name, sizeof(item1.item_name), "Dragon Sword");
  item1.is_weapon = 1;
  item1.weapon_damage = 85;  // Accessing union member directly.

  printf("Item: %s\n", item1.item_name);
  if (item1.is_weapon) {
    printf("Type: Weapon | Damage: %d\n", item1.weapon_damage);
  } else {
    printf("Type: Potion | Healing: %.1f\n", item1.potion_heal);
  }

  printf("\n---------------------------\n\n");

  // Setting up a potion using the same memory space.
  struct InventoryItem item2;
  snprintf(item2.item_name, sizeof(item2.item_name), "Health Elixir");
  item2.is_weapon = 0;
  item2.potion_heal = 50.5f;  // Reusing that same union memory block.

  printf("Item: %s\n", item2.item_name);
  if (item2.is_weapon) {
    printf("Type: Weapon | Damage: %d\n", item2.weapon_damage);
  } else {
    printf("Type: Potion | Healing: %.1f\n", item2.potion_heal);
  }

  return 0;
}
