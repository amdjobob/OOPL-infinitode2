#include "stdafx.h"
#include "barrel.h"


barrel::barrel() {

}

barrel::barrel(std::string type) : type(type) {

}
void barrel::SetBarrelPicPaths(std::vector<std::string> barrelPicPaths) {
	this->barrelPicPaths = barrelPicPaths;
}
void barrel::loadPic() {
	LoadBitmapByString( barrelPicPaths, RGB(255, 255, 255));
}
void barrel::show(double scale) {
	ShowBitmap(scale);
}
void barrel::resetShow(int TOP, int LEFT, int TILE_SIZE, double scale, int moveX, int moveY, int x, int y) {
	SetTopLeft(int(LEFT + moveX + x * TILE_SIZE*scale), int(TOP + moveY + y * TILE_SIZE*scale));
}

////////////////////////////////basicBarrel////////////////////////////
basicBarrel::basicBarrel() {
	SetBarrelPicPaths({ "resources/Barrel_Basic.bmp" });
}
///////////////////////////////sniperBarrel///////////////////////////
sniperBarrel::sniperBarrel() {
	SetBarrelPicPaths({ "resources/Barrel_Sniper.bmp" });
}
///////////////////////////////cannonBarrel///////////////////////////
cannonBarrel::cannonBarrel() {
	SetBarrelPicPaths({ "resources/Barrel_Cannon.bmp" });
}
///////////////////////////////freezingBarrel///////////////////////////
freezingBarrel::freezingBarrel() {
	SetBarrelPicPaths({ "resources/Barrel_Freezing.bmp" });
}
///////////////////////////////blastBarrel///////////////////////////
blastBarrel::blastBarrel() {
	SetBarrelPicPaths({ "resources/Barrel_blast.bmp" });
}
///////////////////////////////minigunBarrel///////////////////////////
minigunBarrel::minigunBarrel() {
	SetBarrelPicPaths({ "resources/Barrel_minigun.bmp" });
}
///////////////////////////////airBarrel///////////////////////////
airBarrel::airBarrel() {
	SetBarrelPicPaths({ "resources/Barrel_air.bmp" });
}
///////////////////////////////venomBarrel///////////////////////////
venomBarrel::venomBarrel() {
	SetBarrelPicPaths({ "resources/Barrel_venom.bmp" });
}
///////////////////////////////venomBarrel///////////////////////////
multishotBarrel::multishotBarrel() {
	SetBarrelPicPaths({ "resources/Barrel_multishot.bmp" });
}
///////////////////////////////venomBarrel///////////////////////////
splashBarrel::splashBarrel() {
	SetBarrelPicPaths({ "resources/Barrel_splash.bmp" });
}