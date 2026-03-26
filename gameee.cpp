# include <SFML/Graphics>
#include <iostream>

int main(){
sf::Renderwindow window(Videomode(100,60)"hra")

sf::Font font;
font.loadfromFile(arial.tff)

sf::Text hud
hud.setPosition()
hud.setScale()
hud.setFillcolour()
hud.setCharacterSize()

int level
int lastlevel

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
 int bosshealth;
 int playerhealth;

auto levelreset[&](){
 
for(i=0,i<3,iplusplus){
  enemyalive=true
}
player.setposition(120,32)

if(level==1){
  background.setTexture(bgTex1)

for(i=0,1<3,iplusplus){
  enemy[i].setTexture(enemyTex1)
    
enemy[0].setposition()
enemy[1].setposition()
enemy[2].setposition()
      }
}
if(level==2){
  background.setTexture(bgTex2)
 for(i=0,1<3,iplusplus){
  enemy[i].setTexture(enemyTex2)

enemy[0].setposition()
enemy[1].setposition()
enemy[2].setposition()
   }
}
if(level==3){
  background.setTexture(bgTex3)
 for(i=0,1<3,iplusplus){
  enemy[i].setTexture(enemyTex3)

enemy[0].setposition()
enemy[1].setposition()
enemy[2].setposition()
   }
}
if(level==4){
  background.setTexture(bgTex4)
 for(i=0,1<3,iplusplus){
  enemy[i].setTexture(enemyTex2)

enemy[0].setposition()
enemy[1].setposition()
enemy[2].setposition()
   }
}
if(level==5){
  background.setTexture(bgTex5)
 for(i=0,1<3,iplusplus){
  enemy[i].setTexture(enemyTex4)

enemy[0].setposition()
enemy[1].setposition()
enemy[2].setposition()
   }
}
if(level==6){
  background.setTexture(bgTex6)
 for(i=0,1<3,iplusplus){
  enemy[i].setTexture(enemyTex1)

enemy[0].setposition()
enemy[1].setposition()
enemy[2].setposition()
   }
}
aif(level==7){
  background.setTexture(bgTex7)
 for(i=0,1<3,iplusplus){
  enemy[i].setTexture(enemyTex3)

enemy[0].setposition()
enemy[1].setposition()
enemy[2].setposition()
   }
}
if(level==8){
  background.setTexture(bgTex8)
 for(i=0,1<3,iplusplus){
  enemy[i].setTexture(enemyTex2)

enemy[0].setposition()
enemy[1].setposition()
enemy[2].setposition()
   }
}
aif(level==9){
  background.setTexture(bgTex9)
 for(i=0,1<3,iplusplus){
  enemy[i].setTexture(enemyTex1)

enemy[0].setposition()
enemy[1].setposition()
enemy[2].setposition()
   }
}
if(level==lastlevel){
  background.setTexture(bgTex10)
 boss.setPosition()
 bossalive=true
 bosshealth=5
  }
}
 while(window.isOpen()){
  sf::Event event
while(window.pollEvent(event))
  if(ventype==sf::event::close){
  window close();
}
//pohyb

