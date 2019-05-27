//Figure out a way to organize these in a way that is easily manipulated programmatically
//Probably tiles of the same type with different detail will be grouped together in arrays
//Can do this with another class, abstracting individual tiles into groups

//Sprite* spriteName = new Sprite(sheet_xcoord, sheet_ycoord, sheet)
//xcoords and ycoords are in multiples of 48 for 48x48 spritesheets


SpriteSheet* creaturesFrame1 = new SpriteSheet("./resources/monsframe1.png");
SpriteSheet* creaturesFrame2 = new SpriteSheet("./resources/monsframe2.png");
SpriteSheet* portraits = new SpriteSheet("./resources/portraits.png");
SpriteSheet* items = new SpriteSheet("./resources/items.png");
SpriteSheet* tiles = new SpriteSheet("./resources/world.png");
Sprite* wallSprite = new Sprite(0, 0, tiles);	
Sprite* grassSprite = new Sprite(9, 5, tiles);
// Sprite* wallSprite = new Sprite(1, 0, "./resources/world.png");
// Sprite* wallSprite = new Sprite(2, 0, "./resources/world.png");
// Sprite* wallSprite = new Sprite(3, 0, "./resources/world.png");
// Sprite* wallSprite = new Sprite(4, 0, "./resources/world.png");
// Sprite* wallSprite = new Sprite(5, 0, "./resources/world.png");
// Sprite* wallSprite = new Sprite(6, 0, "./resources/world.png");
// Sprite* wallSprite = new Sprite(7, 0, "./resources/world.png");
// Sprite* wallSprite = new Sprite(8, 0, "./resources/world.png");
// Sprite* wallSprite = new Sprite(9, 0, "./resources/world.png");
// Sprite* wallSprite = new Sprite(10, 0, "./resources/world.png");
// Sprite* wallSprite = new Sprite(11, 0, "./resources/world.png");
// Sprite* wallSprite = new Sprite(12, 0, "./resources/world.png");
// Sprite* wallSprite = new Sprite(13, 0, "./resources/world.png");
// Sprite* wallSprite = new Sprite(14, 0, "./resources/world.png");
// Sprite* wallSprite = new Sprite(15, 0, "./resources/world.png");
// Sprite* wallSprite = new Sprite(0, 1, "./resources/world.png");
// Sprite* wallSprite = new Sprite(1, 1, "./resources/world.png");
// Sprite* wallSprite = new Sprite(2, 1, "./resources/world.png");
// Sprite* wallSprite = new Sprite(3, 1, "./resources/world.png");
// Sprite* wallSprite = new Sprite(4, 1, "./resources/world.png");
// Sprite* wallSprite = new Sprite(5, 1, "./resources/world.png");
// Sprite* wallSprite = new Sprite(6, 1, "./resources/world.png");
// Sprite* wallSprite = new Sprite(7, 1, "./resources/world.png");
// Sprite* wallSprite = new Sprite(8, 1, "./resources/world.png");
// Sprite* wallSprite = new Sprite(9, 1, "./resources/world.png");
// Sprite* wallSprite = new Sprite(10, 1, "./resources/world.png");
// Sprite* wallSprite = new Sprite(11, 1, "./resources/world.png");
// Sprite* wallSprite = new Sprite(12, 1, "./resources/world.png");
// Sprite* wallSprite = new Sprite(13, 1, "./resources/world.png");
// Sprite* wallSprite = new Sprite(14, 1, "./resources/world.png");
// Sprite* wallSprite = new Sprite(15, 1, "./resources/world.png");
// Sprite* wallSprite = new Sprite(0, 2, "./resources/world.png");
// Sprite* wallSprite = new Sprite(1, 2, "./resources/world.png");
// Sprite* wallSprite = new Sprite(2, 2, "./resources/world.png");
// Sprite* wallSprite = new Sprite(3, 2, "./resources/world.png");
// Sprite* wallSprite = new Sprite(4, 2, "./resources/world.png");
// Sprite* wallSprite = new Sprite(5, 2, "./resources/world.png");
// Sprite* wallSprite = new Sprite(6, 2, "./resources/world.png");
// Sprite* wallSprite = new Sprite(7, 2, "./resources/world.png");
// Sprite* wallSprite = new Sprite(8, 2, "./resources/world.png");
// Sprite* wallSprite = new Sprite(9, 2, "./resources/world.png");
// Sprite* wallSprite = new Sprite(10, 2, "./resources/world.png");
// Sprite* wallSprite = new Sprite(11, 2, "./resources/world.png");
// Sprite* wallSprite = new Sprite(12, 2, "./resources/world.png");
// Sprite* wallSprite = new Sprite(13, 2, "./resources/world.png");
// Sprite* wallSprite = new Sprite(14, 2, "./resources/world.png");
// Sprite* wallSprite = new Sprite(15, 2, "./resources/world.png");
// Sprite* wallSprite = new Sprite(0, 3, "./resources/world.png");
// Sprite* wallSprite = new Sprite(1, 3, "./resources/world.png");
// Sprite* wallSprite = new Sprite(2, 3, "./resources/world.png");
// Sprite* wallSprite = new Sprite(3, 3, "./resources/world.png");
// Sprite* wallSprite = new Sprite(4, 3, "./resources/world.png");
// Sprite* wallSprite = new Sprite(5, 3, "./resources/world.png");
// Sprite* wallSprite = new Sprite(6, 3, "./resources/world.png");
// Sprite* wallSprite = new Sprite(7, 3, "./resources/world.png");
// Sprite* wallSprite = new Sprite(8, 3, "./resources/world.png");
// Sprite* wallSprite = new Sprite(9, 3, "./resources/world.png");
// Sprite* wallSprite = new Sprite(10, 3, "./resources/world.png");
// Sprite* wallSprite = new Sprite(11, 3, "./resources/world.png");
// Sprite* wallSprite = new Sprite(12, 3, "./resources/world.png");
// Sprite* wallSprite = new Sprite(13, 3, "./resources/world.png");
// Sprite* wallSprite = new Sprite(14, 3, "./resources/world.png");
// Sprite* wallSprite = new Sprite(15, 3, "./resources/world.png");
// Sprite* wallSprite = new Sprite(0, 4, "./resources/world.png");
// Sprite* wallSprite = new Sprite(1, 4, "./resources/world.png");
// Sprite* wallSprite = new Sprite(2, 4, "./resources/world.png");
// Sprite* wallSprite = new Sprite(3, 4, "./resources/world.png");
// Sprite* wallSprite = new Sprite(4, 4, "./resources/world.png");
// Sprite* wallSprite = new Sprite(5, 4, "./resources/world.png");
// Sprite* wallSprite = new Sprite(6, 4, "./resources/world.png");
// Sprite* wallSprite = new Sprite(7, 4, "./resources/world.png");
// Sprite* wallSprite = new Sprite(8, 4, "./resources/world.png");
// Sprite* wallSprite = new Sprite(9, 4, "./resources/world.png");
// Sprite* wallSprite = new Sprite(10, 4, "./resources/world.png");
// Sprite* wallSprite = new Sprite(11, 4, "./resources/world.png");
// Sprite* wallSprite = new Sprite(12, 4, "./resources/world.png");
// Sprite* wallSprite = new Sprite(13, 4, "./resources/world.png");
// Sprite* wallSprite = new Sprite(14, 4, "./resources/world.png");
// Sprite* wallSprite = new Sprite(15, 4, "./resources/world.png");
// Sprite* wallSprite = new Sprite(0, 5, "./resources/world.png");
// Sprite* wallSprite = new Sprite(1, 5, "./resources/world.png");
// Sprite* wallSprite = new Sprite(2, 5, "./resources/world.png");
// Sprite* wallSprite = new Sprite(3, 5, "./resources/world.png");
// Sprite* wallSprite = new Sprite(4, 5, "./resources/world.png");
// Sprite* wallSprite = new Sprite(5, 5, "./resources/world.png");
// Sprite* wallSprite = new Sprite(6, 5, "./resources/world.png");
// Sprite* wallSprite = new Sprite(7, 5, "./resources/world.png");
// Sprite* wallSprite = new Sprite(8, 5, "./resources/world.png");
// Sprite* wallSprite = new Sprite(10, 5, "./resources/world.png");
// Sprite* wallSprite = new Sprite(11, 5, "./resources/world.png");
// Sprite* wallSprite = new Sprite(12, 5, "./resources/world.png");
// Sprite* wallSprite = new Sprite(13, 5, "./resources/world.png");
// Sprite* wallSprite = new Sprite(14, 5, "./resources/world.png");
// Sprite* wallSprite = new Sprite(15, 5, "./resources/world.png");
// Sprite* wallSprite = new Sprite(0, 6, "./resources/world.png");
// Sprite* wallSprite = new Sprite(1, 6, "./resources/world.png");
// Sprite* wallSprite = new Sprite(2, 6, "./resources/world.png");
// Sprite* wallSprite = new Sprite(3, 6, "./resources/world.png");
// Sprite* wallSprite = new Sprite(4, 6, "./resources/world.png");
// Sprite* wallSprite = new Sprite(5, 6, "./resources/world.png");
// Sprite* wallSprite = new Sprite(6, 6, "./resources/world.png");
// Sprite* wallSprite = new Sprite(7, 6, "./resources/world.png");
// Sprite* wallSprite = new Sprite(8, 6, "./resources/world.png");
// Sprite* wallSprite = new Sprite(9, 6, "./resources/world.png");
// Sprite* wallSprite = new Sprite(10, 6, "./resources/world.png");
// Sprite* wallSprite = new Sprite(11, 6, "./resources/world.png");
// Sprite* wallSprite = new Sprite(12, 6, "./resources/world.png");
// Sprite* wallSprite = new Sprite(13, 6, "./resources/world.png");
// Sprite* wallSprite = new Sprite(14, 6, "./resources/world.png");
// Sprite* wallSprite = new Sprite(15, 6, "./resources/world.png");
// Sprite* wallSprite = new Sprite(0, 7, "./resources/world.png");
// Sprite* wallSprite = new Sprite(1, 7, "./resources/world.png");
// Sprite* wallSprite = new Sprite(2, 7, "./resources/world.png");
// Sprite* wallSprite = new Sprite(3, 7, "./resources/world.png");
// Sprite* wallSprite = new Sprite(4, 7, "./resources/world.png");
// Sprite* wallSprite = new Sprite(5, 7, "./resources/world.png");
// Sprite* wallSprite = new Sprite(6, 7, "./resources/world.png");
// Sprite* wallSprite = new Sprite(7, 7, "./resources/world.png");
// Sprite* wallSprite = new Sprite(8, 7, "./resources/world.png");
// Sprite* wallSprite = new Sprite(9, 7, "./resources/world.png");
// Sprite* wallSprite = new Sprite(10, 7, "./resources/world.png");
// Sprite* wallSprite = new Sprite(11, 7, "./resources/world.png");
// Sprite* wallSprite = new Sprite(12, 7, "./resources/world.png");
// Sprite* wallSprite = new Sprite(13, 7, "./resources/world.png");
// Sprite* wallSprite = new Sprite(14, 7, "./resources/world.png");
// Sprite* wallSprite = new Sprite(15, 7, "./resources/world.png");
// Sprite* wallSprite = new Sprite(0, 8, "./resources/world.png");
// Sprite* wallSprite = new Sprite(1, 8, "./resources/world.png");
// Sprite* wallSprite = new Sprite(2, 8, "./resources/world.png");
// Sprite* wallSprite = new Sprite(3, 8, "./resources/world.png");
// Sprite* wallSprite = new Sprite(4, 8, "./resources/world.png");
// Sprite* wallSprite = new Sprite(5, 8, "./resources/world.png");
// Sprite* wallSprite = new Sprite(6, 8, "./resources/world.png");
// Sprite* wallSprite = new Sprite(7, 8, "./resources/world.png");
// Sprite* wallSprite = new Sprite(8, 8, "./resources/world.png");
// Sprite* wallSprite = new Sprite(9, 8, "./resources/world.png");
// Sprite* wallSprite = new Sprite(10, 8, "./resources/world.png");
// Sprite* wallSprite = new Sprite(11, 8, "./resources/world.png");
// Sprite* wallSprite = new Sprite(12, 8, "./resources/world.png");
// Sprite* wallSprite = new Sprite(13, 8, "./resources/world.png");
// Sprite* wallSprite = new Sprite(14, 8, "./resources/world.png");
// Sprite* wallSprite = new Sprite(15, 8, "./resources/world.png");
// Sprite* wallSprite = new Sprite(0, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(1, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(2, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(3, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(4, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(5, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(6, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(7, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(8, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(9, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(10, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(11, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(12, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(13, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(14, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(15, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(0, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(1, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(2, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(3, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(4, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(5, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(6, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(7, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(8, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(9, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(10, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(11, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(12, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(13, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(14, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(15, 9, "./resources/world.png");
// Sprite* wallSprite = new Sprite(0, 10, "./resources/world.png");
// Sprite* wallSprite = new Sprite(1, 10, "./resources/world.png");
// Sprite* wallSprite = new Sprite(2, 10, "./resources/world.png");
// Sprite* wallSprite = new Sprite(3, 10, "./resources/world.png");
// Sprite* wallSprite = new Sprite(4, 10, "./resources/world.png");
// Sprite* wallSprite = new Sprite(5, 10, "./resources/world.png");
// Sprite* wallSprite = new Sprite(6, 10, "./resources/world.png");
// Sprite* wallSprite = new Sprite(7, 10, "./resources/world.png");
// Sprite* wallSprite = new Sprite(8, 10, "./resources/world.png");
// Sprite* wallSprite = new Sprite(9, 10, "./resources/world.png");
// Sprite* wallSprite = new Sprite(10, 10, "./resources/world.png");
// Sprite* wallSprite = new Sprite(11, 10, "./resources/world.png");
// Sprite* wallSprite = new Sprite(12, 10, "./resources/world.png");
// Sprite* wallSprite = new Sprite(13, 10, "./resources/world.png");
// Sprite* wallSprite = new Sprite(14, 10, "./resources/world.png");
// Sprite* wallSprite = new Sprite(15, 10, "./resources/world.png");
// Sprite* wallSprite = new Sprite(0, 11, "./resources/world.png");
// Sprite* wallSprite = new Sprite(1, 11, "./resources/world.png");
// Sprite* wallSprite = new Sprite(2, 11, "./resources/world.png");
// Sprite* wallSprite = new Sprite(3, 11, "./resources/world.png");
// Sprite* wallSprite = new Sprite(4, 11, "./resources/world.png");
// Sprite* wallSprite = new Sprite(5, 11, "./resources/world.png");
// Sprite* wallSprite = new Sprite(6, 11, "./resources/world.png");
// Sprite* wallSprite = new Sprite(7, 11, "./resources/world.png");
// Sprite* wallSprite = new Sprite(8, 11, "./resources/world.png");
// Sprite* wallSprite = new Sprite(9, 11, "./resources/world.png");
// Sprite* wallSprite = new Sprite(10, 11, "./resources/world.png");
// Sprite* wallSprite = new Sprite(11, 11, "./resources/world.png");
// Sprite* wallSprite = new Sprite(12, 11, "./resources/world.png");
// Sprite* wallSprite = new Sprite(13, 11, "./resources/world.png");
// Sprite* wallSprite = new Sprite(14, 11, "./resources/world.png");
// Sprite* wallSprite = new Sprite(15, 11, "./resources/world.png");
// Sprite* wallSprite = new Sprite(0, 12, "./resources/world.png");
// Sprite* wallSprite = new Sprite(1, 12, "./resources/world.png");
// Sprite* wallSprite = new Sprite(2, 12, "./resources/world.png");
// Sprite* wallSprite = new Sprite(3, 12, "./resources/world.png");
// Sprite* wallSprite = new Sprite(4, 12, "./resources/world.png");
// Sprite* wallSprite = new Sprite(5, 12, "./resources/world.png");
// Sprite* wallSprite = new Sprite(6, 12, "./resources/world.png");
// Sprite* wallSprite = new Sprite(7, 12, "./resources/world.png");
// Sprite* wallSprite = new Sprite(8, 12, "./resources/world.png");
// Sprite* wallSprite = new Sprite(9, 12, "./resources/world.png");
// Sprite* wallSprite = new Sprite(10, 12, "./resources/world.png");
// Sprite* wallSprite = new Sprite(11, 12, "./resources/world.png");
// Sprite* wallSprite = new Sprite(12, 12, "./resources/world.png");
// Sprite* wallSprite = new Sprite(13, 12, "./resources/world.png");
// Sprite* wallSprite = new Sprite(14, 12, "./resources/world.png");
// Sprite* wallSprite = new Sprite(15, 12, "./resources/world.png");
// Sprite* wallSprite = new Sprite(0, 13, "./resources/world.png");
// Sprite* wallSprite = new Sprite(1, 13, "./resources/world.png");
// Sprite* wallSprite = new Sprite(2, 13, "./resources/world.png");
// Sprite* wallSprite = new Sprite(3, 13, "./resources/world.png");
// Sprite* wallSprite = new Sprite(4, 13, "./resources/world.png");
// Sprite* wallSprite = new Sprite(5, 13, "./resources/world.png");
// Sprite* wallSprite = new Sprite(6, 13, "./resources/world.png");
// Sprite* wallSprite = new Sprite(7, 13, "./resources/world.png");
// Sprite* wallSprite = new Sprite(8, 13, "./resources/world.png");
// Sprite* wallSprite = new Sprite(9, 13, "./resources/world.png");
// Sprite* wallSprite = new Sprite(10, 13, "./resources/world.png");
// Sprite* wallSprite = new Sprite(11, 13, "./resources/world.png");
// Sprite* wallSprite = new Sprite(12, 13, "./resources/world.png");
// Sprite* wallSprite = new Sprite(13, 13, "./resources/world.png");
// Sprite* wallSprite = new Sprite(14, 13, "./resources/world.png");
// Sprite* wallSprite = new Sprite(15, 13, "./resources/world.png");
// Sprite* wallSprite = new Sprite(0, 14, "./resources/world.png");
// Sprite* wallSprite = new Sprite(1, 14, "./resources/world.png");
// Sprite* wallSprite = new Sprite(2, 14, "./resources/world.png");
// Sprite* wallSprite = new Sprite(3, 14, "./resources/world.png");
// Sprite* wallSprite = new Sprite(4, 14, "./resources/world.png");
// Sprite* wallSprite = new Sprite(5, 14, "./resources/world.png");
// Sprite* wallSprite = new Sprite(6, 14, "./resources/world.png");
// Sprite* wallSprite = new Sprite(7, 14, "./resources/world.png");
// Sprite* wallSprite = new Sprite(8, 14, "./resources/world.png");
// Sprite* wallSprite = new Sprite(9, 14, "./resources/world.png");
// Sprite* wallSprite = new Sprite(10, 14, "./resources/world.png");
// Sprite* wallSprite = new Sprite(11, 14, "./resources/world.png");
// Sprite* wallSprite = new Sprite(12, 14, "./resources/world.png");
// Sprite* wallSprite = new Sprite(13, 14, "./resources/world.png");
// Sprite* wallSprite = new Sprite(14, 14, "./resources/world.png");
// Sprite* wallSprite = new Sprite(15, 14, "./resources/world.png");
// Sprite* wallSprite = new Sprite(0, 15, "./resources/world.png");
// Sprite* wallSprite = new Sprite(1, 15, "./resources/world.png");
// Sprite* wallSprite = new Sprite(2, 15, "./resources/world.png");
// Sprite* wallSprite = new Sprite(3, 15, "./resources/world.png");
// Sprite* wallSprite = new Sprite(4, 15, "./resources/world.png");
// Sprite* wallSprite = new Sprite(5, 15, "./resources/world.png");
// Sprite* wallSprite = new Sprite(6, 15, "./resources/world.png");
// Sprite* wallSprite = new Sprite(7, 15, "./resources/world.png");
// Sprite* wallSprite = new Sprite(8, 15, "./resources/world.png");
// Sprite* wallSprite = new Sprite(9, 15, "./resources/world.png");
// Sprite* wallSprite = new Sprite(10, 15, "./resources/world.png");
// Sprite* wallSprite = new Sprite(11, 15, "./resources/world.png");
// Sprite* wallSprite = new Sprite(12, 15, "./resources/world.png");
// Sprite* wallSprite = new Sprite(13, 15, "./resources/world.png");
// Sprite* wallSprite = new Sprite(14, 15, "./resources/world.png");
// Sprite* wallSprite = new Sprite(15, 15, "./resources/world.png");
// Sprite* wallSprite = new Sprite(0, 16, "./resources/world.png");
// Sprite* wallSprite = new Sprite(1, 16, "./resources/world.png");
// Sprite* wallSprite = new Sprite(2, 16, "./resources/world.png");
// Sprite* wallSprite = new Sprite(3, 16, "./resources/world.png");
// Sprite* wallSprite = new Sprite(4, 16, "./resources/world.png");
// Sprite* wallSprite = new Sprite(5, 16, "./resources/world.png");
// Sprite* wallSprite = new Sprite(6, 16, "./resources/world.png");
// Sprite* wallSprite = new Sprite(7, 16, "./resources/world.png");
// Sprite* wallSprite = new Sprite(8, 16, "./resources/world.png");
// Sprite* wallSprite = new Sprite(9, 16, "./resources/world.png");
// Sprite* wallSprite = new Sprite(10, 16, "./resources/world.png");
// Sprite* wallSprite = new Sprite(11, 16, "./resources/world.png");
// Sprite* wallSprite = new Sprite(12, 16, "./resources/world.png");
// Sprite* wallSprite = new Sprite(13, 16, "./resources/world.png");
// Sprite* wallSprite = new Sprite(14, 16, "./resources/world.png");
// Sprite* wallSprite = new Sprite(15, 16, "./resources/world.png");
// Sprite* wallSprite = new Sprite(0, 17, "./resources/world.png");
// Sprite* wallSprite = new Sprite(1, 17, "./resources/world.png");
// Sprite* wallSprite = new Sprite(2, 17, "./resources/world.png");
// Sprite* wallSprite = new Sprite(3, 17, "./resources/world.png");
// Sprite* wallSprite = new Sprite(4, 17, "./resources/world.png");
// Sprite* wallSprite = new Sprite(5, 17, "./resources/world.png");
// Sprite* wallSprite = new Sprite(6, 17, "./resources/world.png");
// Sprite* wallSprite = new Sprite(7, 17, "./resources/world.png");
// Sprite* wallSprite = new Sprite(8, 17, "./resources/world.png");
// Sprite* wallSprite = new Sprite(9, 17, "./resources/world.png");
// Sprite* wallSprite = new Sprite(10, 17, "./resources/world.png");
// Sprite* wallSprite = new Sprite(11, 17, "./resources/world.png");
// Sprite* wallSprite = new Sprite(12, 17, "./resources/world.png");
// Sprite* wallSprite = new Sprite(13, 17, "./resources/world.png");
// Sprite* wallSprite = new Sprite(14, 17, "./resources/world.png");
// Sprite* wallSprite = new Sprite(15, 17, "./resources/world.png");
// Sprite* wallSprite = new Sprite(0, 18, "./resources/world.png");
// Sprite* wallSprite = new Sprite(1, 18, "./resources/world.png");
// Sprite* wallSprite = new Sprite(2, 18, "./resources/world.png");
// Sprite* wallSprite = new Sprite(3, 18, "./resources/world.png");
// Sprite* wallSprite = new Sprite(4, 18, "./resources/world.png");
// Sprite* wallSprite = new Sprite(5, 18, "./resources/world.png");
// Sprite* wallSprite = new Sprite(6, 18, "./resources/world.png");
// Sprite* wallSprite = new Sprite(7, 18, "./resources/world.png");
// Sprite* wallSprite = new Sprite(8, 18, "./resources/world.png");
// Sprite* wallSprite = new Sprite(9, 18, "./resources/world.png");
// Sprite* wallSprite = new Sprite(10, 18, "./resources/world.png");
// Sprite* wallSprite = new Sprite(11, 18, "./resources/world.png");
// Sprite* wallSprite = new Sprite(12, 18, "./resources/world.png");
// Sprite* wallSprite = new Sprite(13, 18, "./resources/world.png");
// Sprite* wallSprite = new Sprite(14, 18, "./resources/world.png");
// Sprite* wallSprite = new Sprite(15, 18, "./resources/world.png");
// SpriteSetCreature* swordsman_blue = new SpriteSetCreature(0, 0, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* barbarian = new SpriteSetCreature(4, 0, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* rogue = new SpriteSetCreature(8, 0, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* paladin = new SpriteSetCreature(12, 0, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* swordsman_red = new SpriteSetCreature(0, 1, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* mage_red = new SpriteSetCreature(4, 1, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* mage_black = new SpriteSetCreature(8, 1, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* cleric = new SpriteSetCreature(12, 1, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* druid = new SpriteSetCreature(0, 2, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* necromancer = new SpriteSetCreature(4, 2, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* ranger = new SpriteSetCreature(8, 2, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* assassin = new SpriteSetCreature(12, 2, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* sword_goblin = new SpriteSetCreature(0, 3, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* mage_goblin = new SpriteSetCreature(4, 3, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* spear_goblin = new SpriteSetCreature(8, 3, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* ogre = new SpriteSetCreature(12, 3, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* skeleton = new SpriteSetCreature(0, 4, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* armed_skeleton = new SpriteSetCreature(4, 4, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* mage_skeleton = new SpriteSetCreature(8, 4, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* lich = new SpriteSetCreature(12, 4, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* vampire = new SpriteSetCreature(0, 5, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* zombie = new SpriteSetCreature(4, 5, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* eye = new SpriteSetCreature(8, 5, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* black_knight = new SpriteSetCreature(12, 5, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* red_demon = new SpriteSetCreature(0, 6, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* ghost = new SpriteSetCreature(4, 6, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* fairy = new SpriteSetCreature(8, 6, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* blue_demon = new SpriteSetCreature(12, 6, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* dog = new SpriteSetCreature(0, 7, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* cat = new SpriteSetCreature(4, 7, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* bat = new SpriteSetCreature(8, 7, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* snake = new SpriteSetCreature(12, 7, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* spider = new SpriteSetCreature(0, 8, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* rat = new SpriteSetCreature(4, 8, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* ooze = new SpriteSetCreature(8, 8, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* butterfly = new SpriteSetCreature(12, 8, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* man = new SpriteSetCreature(0, 9, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* woman = new SpriteSetCreature(4, 9, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* witch = new SpriteSetCreature(8, 9, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* dragon = new SpriteSetCreature(12, 9, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* blue_king = new SpriteSetCreature(0, 10, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* red_king = new SpriteSetCreature(4, 10, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* reaper = new SpriteSetCreature(8, 10, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* minotaur = new SpriteSetCreature(12, 10, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* bird = new SpriteSetCreature(0, 11, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* mimic = new SpriteSetCreature(4, 11, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* centaur = new SpriteSetCreature(8, 11, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* satyr = new SpriteSetCreature(12, 11, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* angel = new SpriteSetCreature(0, 12, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* axe_dwarf = new SpriteSetCreature(4, 12, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* dagger_dwarf = new SpriteSetCreature(8, 12, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* gryphon = new SpriteSetCreature(12, 12, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* tooth_plant = new SpriteSetCreature(0, 13, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* roach = new SpriteSetCreature(4, 13, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* horse = new SpriteSetCreature(8, 13, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* unicorn = new SpriteSetCreature(12, 13, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* ghoul = new SpriteSetCreature(0, 14, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* jelly = new SpriteSetCreature(4, 14, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* starcursed_mass = new SpriteSetCreature(8, 14, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* flame = new SpriteSetCreature(12, 14, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* giant = new SpriteSetCreature(0, 15, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* ent = new SpriteSetCreature(4, 15, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* golem = new SpriteSetCreature(8, 15, creaturesFrame1, creaturesFrame2);
// SpriteSetCreature* gnat = new SpriteSetCreature(12, 15, creaturesFrame1, creaturesFrame2);