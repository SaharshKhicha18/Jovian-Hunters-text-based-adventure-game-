# COMP2113-Group-project
Group No.: 116
Group Members: Saharsh Khicha (3035596383), Darsh Vaghani (3035573393)

Name of the Game: Jovian Hunters

Mode of play: Single player against computer

Jovian Hunters is an adventure based sci-fi text game. In the game, biohackers have developed monsters that took over (hijack) the world. There are about 12 monsters hiding at unknown places waiting to be confronted by the player. The motive of the game is for a player to choose a character and go on the quest to hunt monsters. The monster's league will be destroyed when total of 8 monsters are defeated out of 12. The ultimate monster (8th one) holds the diamond 'Kohinoor' that has the powers to restore peace in the world. Defeating this monster leads to Game Victory. During course of the game, the player encounters multiple scenarios where the player can make choices to upgrade his inventory and health in order to prepare and fight the monster. The occurance of all the events including monsters, hospitals, pawnshops and ammunation stores is random. 

**The game rules and regulations**

- The player begins a new game with empty inventory, health points of 100, and with character attack power (punches) of 17.
- As the game begins, the player is asked to choose a direction to head to, and on all the directions random occurances of hospital, ammunation store, pawn shop and monsters is set with different probabilites. 
- If the player encounters hosital, ammunationstore or pawnshop, he/she will be prompted with 3 of options chosen randomly from a pool of items to choose from. The items (i.e. First-aid_kit, Silver_knife, etc.) depending on the type will be either added to inventory, or its value will be added to healthpoints.
- The max limit of items inventory can hold is 3 and max health player can have is 120. 
- If the player encounters a monster, then the war between the monster and the player begins. The monsters attacks first, its damage is directly reflected on the player's health. After which it is players's turn to attack, the player can use items from his inventory with varying powers to attack the monsters or simply use a punch with fixed power of 17 to attack the monster. 
- After every time of defeating the monster the game points points are added by 10. After defeating 8 monsters in total, the game points acquired is 80 and the player is the winner of Jovian Hunters.
- If the player gets defeated by the monster, the game is over. 
- After all the random events, such as hospital, monsters, etc. the game is saved with the file name as the player's game name. If the player wishes to continue from there, then he/she can input 2 at the begining menu to reload the game. 
 
**List of functions implemented in the game**

- hospital(): Function that gives 3 options to choose one from a pool of items available at a hospital to either add it to inventory or to increase his/her health points.

- pawnshop(): Function that gives 3 options to choose one from a pool of items available at a pawnshop to either add it to inventory or to increase his/her health points.

- ammunationshop(): Function that gives 3 options to choose one from a pool of items available at a ammunation store to add it to inventory.

- war(): Function that runs the war between the player and a random monster from a pool of monsters. It determines the winner of the battle and also if the game is over or continued. It upadates all the health and power parameters. 

- random(): Function that determines what the players encounters. For instance, hospital, pawnshop, etc. The probabilities of the different situations is also varied. 

- gamecharacters(): Function that takes the player's name for the game or ask to choose from a defaul set of characters in the game. 

- savegame(): Function that after each of the random events, saves the important variables of the player and the monsters defeated. 

- loadgame(): Function that restores the game from the saved game data based on the character name of the previous game.  

- gamemanual(): Function that prints the game instructions. 

- main(): Function controlling the overall game flow. Allowing functionalities like start a new game, load game, view manual, or exit. The function links all the functions defined above in an orderly manner. 


