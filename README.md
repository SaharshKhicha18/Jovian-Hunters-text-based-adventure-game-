# COMP2113-Group-project
Group No.: 116
Group Members: Saharsh Khicha (3035596383), Darsh Vaghani (3035573393)

Jovian Hunters is an adventure based sci-fi text game. In the game, biohackers have developed monsters that took over (hijack) the world. There are about 12 monsters hiding at unknown waiting to be confronted by the player. The motive of the game is for a player to choose a character and go on the quest to hunt monsters. The monster's league will be crashed when total of 8 monsters are defeated out of 12. The ultimate monster (8th one) holds the diamond 'Kohinoor' that has the powers to restore peace in the world. Defeating this monster leads to Game Victory. During course of the game, the player encounters multiple scenarios where the player can make choices to upgrade his inventory and health in order to prepare and fight the monster. The occurance of all the events including monsters, hospitals, pawnshops and ammunation stores is at random. 

**Generation of random game sets or events**
**Data structures for storing game status**
- The player gets dropped to a random place in the world (e.g. Paris, Hong Kong, Denmark, etc.)
- The player will be granted a set of 3 tools in the beginning of the game at random from an array of numerous tools. (e.g. phone, health kit, gun, chair, car, bicycle, etc.)
- He/she may encounter different scenarios on the way where they can train/ improve health to prepare for the fight with the monster. For instance, the game outputs, "you have just reached near a hospital, would you like to go there?" If the player inputs yes, then it will show the services the hospital can provide, e.g. health kit, healing potion, emergency escape with the ambulance, etc. The player can choose one of the services they desire and it will be stored in the inventory.  
- At random occasions, it encounters the monster. The monster description with ASCII illustration will be outputted. The player will be asked to choose one of the items from his/her inventory to attack the monster. Player has to choose wisely from the options.
- The items in the inventory are assigned with a damaging value. For instance, ‘machine gun’ = 30 health points (hp), ‘knife’ = 10 hp, etc. Similarly, the weapons used by monsters will have their own hp values. At every turn the damage on health will be resulted. The one with health lower than or equal to zero loses. 
- If they lose then game over, otherwise the quest with scenarios and monsters will continue. 
 
**Dynamic memory management**
The health of the player as well as the monster’s health will be continuously updated during the battle. Along with that the inventory based on the scenarios will be dynamically updated as well.
 
**File input/output (e.g., for loading/saving game status)**
After the battle with a monster is won. The game reaches a checkpoint and the player will be prompted to save the game. 
 
**Program codes in multiple files**
Different scenarios will be coded in different files. 

