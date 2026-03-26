 .# include <SFML/Graphics>
#include <iostream>

int main(){
sf::Renderwindow window(Videomode(100,60)"hra")

int level
int last level
sf::Texture playerTex,enemyTex1,enemyTex2,enemyTex3,bossTex
sf::Texture bgTex1,bgTex2,bgTex3,bgTex4,bgTex5,bgTex6,bgTex7,bgTex8,bgTex9,bgTex10

playerTex.loadfromFile("player.png");
enemyTex1.loadfromFile("enemy1.png");
enemyTex2.loadfromFile("enemy2.png");
enemy3Tex3.loadfromFile("enemy3.png");
bossTex.loadfromFile("boss.png");
bg1Tex.loadfromFile("bg1.png");
bg2.loadfromFile("bg2.png");
bg3Tex.loadfromFile("bg3.png");
bg4Tex.loadfromFile("bg4.png");
bg5Tex.loadfromFile("bg5.png");
bg6Tex.loadfromFile("bg6.png");
bg7Tex.loadfromFile("bg7.png");
bg8Tex.loadfromFile("bg8.png");
bg9Tex.loadfromFile("bg9.png");
bg10Tex.loadfromFile("bg10.png");

sf::Sprite player(playerTex);
sf::Sprite enemy[3];
sf::Sprite boss(bossTex);
sf::Sprite background;

player.setscale(0.2,0.2);
boss.setscale(0.3,0.3);

 for(int i=0,i<3,i++){
 enemy[i].setscale(0.2,0.2)
 }

 bool enemyalive[3];
 bool bossalive;
 int boss health;

auto levelreset[&](){
 
player.setposition(120,32)

if(level==1){
  backgroun.setTexture(bg1)

    enemy[0].setposition()
    enemy[1].setposition()
    enemy[2].setposition()
}



                playerTex.loadfromFile("player.png") playerTex.loadfromFile("player.png") playerTex.loadfromFile("player.png")
