#ifndef CLGAMEOBJECTS_H
#define CLGAMEOBJECTS_H

#include <SDL.h>
#include "clGFXFile.h"


class clGameObjects
{

	enum enum_GAME_OBJECTS
	{
		GAME_OBJECT_BIG_STONE_1 = 1,
		GAME_OBJECT_BIG_STONE_2 = 2,
		GAME_OBJECT_BIG_STONE_3 = 3,
		GAME_OBJECT_BIG_STONE_4 = 4,
		GAME_OBJECT_BIG_STONE_5 = 5,
		GAME_OBJECT_BIG_STONE_6 = 6,
		GAME_OBJECT_BIG_STONE_7 = 7,
		GAME_OBJECT_BIG_STONE_8 = 8,

		GAME_OBJECT_STONE_1 = 9,
		GAME_OBJECT_STONE_2 = 10,
		GAME_OBJECT_STONE_3 = 11,
		GAME_OBJECT_STONE_4 = 12,

		GAME_OBJECT_BOUNDERY_STONE_1 = 13,
		GAME_OBJECT_BOUNDERY_STONE_2 = 14,
		GAME_OBJECT_BOUNDERY_STONE_3 = 15,
		GAME_OBJECT_BOUNDERY_STONE_4 = 16,
		GAME_OBJECT_BOUNDERY_STONE_5 = 17,
		GAME_OBJECT_BOUNDERY_STONE_6 = 18,
		GAME_OBJECT_BOUNDERY_STONE_7 = 19,
		GAME_OBJECT_BOUNDERY_STONE_8 = 20,

		GAME_OBJECT_SMALL_STONE_1 = 21,
		GAME_OBJECT_SMALL_STONE_2 = 22,
		GAME_OBJECT_SMALL_STONE_3 = 23,
		GAME_OBJECT_SMALL_STONE_4 = 24,
		GAME_OBJECT_SMALL_STONE_5 = 25,
		GAME_OBJECT_SMALL_STONE_6 = 26,
		GAME_OBJECT_SMALL_STONE_7 = 27,
		GAME_OBJECT_SMALL_STONE_8 = 28,

		GAME_OBJECT_WRECK_1 = 29,
		GAME_OBJECT_WRECK_2 = 30,
		GAME_OBJECT_WRECK_3 = 31,
		GAME_OBJECT_WRECK_4 = 32,
		GAME_OBJECT_WRECK_5 = 33,
		GAME_OBJECT_GRAVE = 34,

		GAME_OBJECT_PLANT_SMALL_1 = 35,
		GAME_OBJECT_PLANT_SMALL_2 = 36,
		GAME_OBJECT_PLANT_SMALL_3 = 37,

		GAME_OBJECT_MUSHROOM_1 = 38,
		GAME_OBJECT_MUSHROOM_2 = 39,
		GAME_OBJECT_MUSHROOM_3 = 40,

		GAME_OBJECT_TREE_STUMP_1 = 41,
		GAME_OBJECT_TREE_STUMP_2 = 42,
		GAME_OBJECT_TREE_DEAD_1 = 43,
		GAME_OBJECT_TREE_DEAD_2 = 44,

		GAME_OBJECT_CACTUS_1 = 45,
		GAME_OBJECT_CACTUS_2 = 46,
		GAME_OBJECT_CACTUS_3 = 47,
		GAME_OBJECT_CACTUS_4 = 48,

		GAME_OBJECT_BONES = 49,

		GAME_OBJECT_FLOWER_1 = 50,
		GAME_OBJECT_FLOWER_2 = 51,
		GAME_OBJECT_FLOWER_3 = 52,


		GAME_OBJECT_STRUB_SMALL_1 = 53,
		GAME_OBJECT_STRUB_SMALL_2 = 54,
		GAME_OBJECT_STRUB_SMALL_3 = 55,
		GAME_OBJECT_STRUB_SMALL_4 = 56,

		GAME_OBJECT_STRUB_1 = 57,
		GAME_OBJECT_STRUB_2 = 58,
		GAME_OBJECT_STRUB_3 = 59,
		GAME_OBJECT_STRUB_4 = 60,
		GAME_OBJECT_STRUB_5 = 61,

		GAME_OBJECT_REED_BEDS_1 = 62,
		GAME_OBJECT_REED_BEDS_2 = 63,
		GAME_OBJECT_REED_BEDS_3 = 64,
		GAME_OBJECT_REED_BEDS_4 = 65,
		GAME_OBJECT_REED_BEDS_5 = 66,
		GAME_OBJECT_REED_BEDS_6 = 67,

		GAME_OBJECT_TREE_BIRCH_1 = 68,
		GAME_OBJECT_TREE_BIRCH_2 = 69,

		GAME_OBJECT_TREE_ELM_1 = 70,
		GAME_OBJECT_TREE_ELM_2 = 71,

		GAME_OBJECT_TREE_OAK_1 = 72,

		GAME_OBJECT_TREE_UNKNOWN_1 = 73,
		GAME_OBJECT_TREE_UNKNOWN_2 = 74,
		GAME_OBJECT_TREE_UNKNOWN_3 = 75,
		GAME_OBJECT_TREE_UNKNOWN_4 = 76,
		
		//-- unknown: 77

		GAME_OBJECT_TREE_ARECACEAE_1 = 78,
		GAME_OBJECT_TREE_ARECACEAE_2 = 79,

		//-- unknown: 80
		//-- unknown: 81
		//-- unknown: 82
		//-- unknown: 83

		GAME_OBJECT_TREE_SMALL = 84,

		//-- unknown...

		GAME_OBJECT_REEF_SMALL = 111,
		GAME_OBJECT_REEF_MEDIUM = 112,
		GAME_OBJECT_REEF_LARGE = 113,
		GAME_OBJECT_REEF_XLARGE = 114,

		GAME_OBJECT_RES_STONE_01 = 115,
		GAME_OBJECT_RES_STONE_02 = 116,
		GAME_OBJECT_RES_STONE_03 = 117,
		GAME_OBJECT_RES_STONE_04 = 118,
		GAME_OBJECT_RES_STONE_05 = 119,
		GAME_OBJECT_RES_STONE_06 = 120,
		GAME_OBJECT_RES_STONE_07 = 121,
		GAME_OBJECT_RES_STONE_08 = 122,
		GAME_OBJECT_RES_STONE_09 = 123,
		GAME_OBJECT_RES_STONE_10 = 124,
		GAME_OBJECT_RES_STONE_11 = 125,
		GAME_OBJECT_RES_STONE_12 = 126,
		GAME_OBJECT_RES_STONE_13 = 127,

	};


	enum enum_GAME_BUILDINGS
	{
		GAME_BUILDING_Lager = 1,
		GAME_BUILDING_Holzfaeller = 2,
		GAME_BUILDING_Steinbruch = 3,
		GAME_BUILDING_Saegewerk = 4,
		GAME_BUILDING_Foersterhuette = 5,
		GAME_BUILDING_Beobachtungsturm = 6,
		GAME_BUILDING_Kohlemine = 7,
		GAME_BUILDING_Goldmine = 8,
		GAME_BUILDING_Eisenmine = 9,
		GAME_BUILDING_Goldschmelze = 10,
		GAME_BUILDING_Eisenschmelze = 11,
		GAME_BUILDING_Werkzeugschmiede = 12,
		GAME_BUILDING_Waffenschmiede = 13,
		GAME_BUILDING_Weingut = 14,
		GAME_BUILDING_TurmKleiner = 15,
		GAME_BUILDING_TurmGrosser = 16,
		GAME_BUILDING_Muehle = 17,
		GAME_BUILDING_TurmBurg = 18,
		GAME_BUILDING_Kasserne = 19,
		GAME_BUILDING_Baeckerei = 20,
		GAME_BUILDING_Metzger = 21,
		GAME_BUILDING_Destille = 22,
		GAME_BUILDING_Schweinefarm = 23,
		GAME_BUILDING_Getreidefram = 24,
		GAME_BUILDING_Fischerhuette = 25,
		GAME_BUILDING_WohnhausKlein = 26,
		GAME_BUILDING_WohnhausMittel = 27,
		GAME_BUILDING_WohnhausGross = 28,
		GAME_BUILDING_Schwefelmine = 29,
		GAME_BUILDING_Wasserwerk = 30,
		GAME_BUILDING_Katapultwerk = 31,
		GAME_BUILDING_Werft = 32,
		GAME_BUILDING_Anlegestelle = 33,
		GAME_BUILDING_Marktplatz = 34,
		GAME_BUILDING_Heiler = 35,
		GAME_BUILDING_Reisfarm = 36,
		GAME_BUILDING_Edelsteinmine = 37,
		GAME_BUILDING_Brauerei = 38,
		GAME_BUILDING_Koehler = 39,
		GAME_BUILDING_Pulvermacherei = 40,
		GAME_BUILDING_Pyramide = 41,
		GAME_BUILDING_Sphinx = 42,
		GAME_BUILDING_GrosserTempel = 43,
		GAME_BUILDING_kleinerTempel = 44,
		GAME_BUILDING_grosse_Pagode = 45,
		GAME_BUILDING_kleine_Pagode = 46,
		GAME_BUILDING_Ballistenwerkstatt = 47,
		GAME_BUILDING_Kanonenwerkstatt = 48,
		GAME_BUILDING_Eselfarm = 49,
		GAME_BUILDING_grosser_Gong = 50,
		GAME_BUILDING_Impkerei = 51,
		GAME_BUILDING_Metwinzerei = 52,
		GAME_BUILDING_Labortorium = 53,
		GAME_BUILDING_kleiner_Tempel = 54,
		GAME_BUILDING_grosser_Tempel = 55,
		GAME_BUILDING_SchwefelmineAmazonen = 56,
	};

	enum enum_GAME_RESOURCES
	{
		GAME_RESOURCE_Brett = 1,
		GAME_RESOURCE_Stein = 2,
		GAME_RESOURCE_Baumstamm = 3,
		GAME_RESOURCE_Brot = 4,
		GAME_RESOURCE_Kohle = 5,
		GAME_RESOURCE_Golderz = 6,
		GAME_RESOURCE_Eisenerz = 7,
		GAME_RESOURCE_Fisch = 8,
		GAME_RESOURCE_Getreide = 9,
		GAME_RESOURCE_Gold = 10,
		GAME_RESOURCE_Eisen = 11,
		GAME_RESOURCE_Schaufel = 12,
		GAME_RESOURCE_Hammer = 13,
		GAME_RESOURCE_Axt = 14,
		GAME_RESOURCE_Spitzhacke = 15,
		GAME_RESOURCE_Saege = 16,
		GAME_RESOURCE_Angel = 17,
		GAME_RESOURCE_Schwert = 18,
		GAME_RESOURCE_Bogen = 19,
		GAME_RESOURCE_Speer = 20,
		GAME_RESOURCE_Wein = 21,
		GAME_RESOURCE_Mehl = 22,
		GAME_RESOURCE_Schwein = 23,
		GAME_RESOURCE_Fleisch = 24,
		GAME_RESOURCE_Schwefel = 25,
		GAME_RESOURCE_Wasser = 26,
		GAME_RESOURCE_Reis = 27,
		GAME_RESOURCE_Edelsteine = 28,
		GAME_RESOURCE_Bier = 29,
		GAME_RESOURCE_Schiesspulver = 30,
		//-unknown
		GAME_RESOURCE_Sense = 32,
		GAME_RESOURCE_Reisschnaps = 33,
		GAME_RESOURCE_Met = 34,
		GAME_RESOURCE_Honig = 35,
	};


	enum enum_GAME_SETTLERS
	{
		GAME_SETTLER_Traeger = 0,
		GAME_SETTLER_Planierer = 1,
		GAME_SETTLER_Bauarbeiter = 2,
		GAME_SETTLER_Holzfaeller = 3,
		GAME_SETTLER_Steinmetz = 4,
		GAME_SETTLER_Swordsman1 = 5,
		GAME_SETTLER_Saegewerker = 6,
		GAME_SETTLER_Foerster = 7,
		GAME_SETTLER_Archer1 = 8,
		GAME_SETTLER_Schmelzer = 9,
		GAME_SETTLER_Minenarbeiter = 10,
		GAME_SETTLER_Schmied = 11,
		GAME_SETTLER_Mueller = 12,
		GAME_SETTLER_Baecker = 13,
		GAME_SETTLER_Metzger = 14,
		GAME_SETTLER_SpearFighter1 = 15,
		GAME_SETTLER_Bauer = 16,
		GAME_SETTLER_Fischer = 17,
		GAME_SETTLER_Wasserwerker = 18,
		GAME_SETTLER_Werftarbeiter = 19,
		//-20 unknown
		GAME_SETTLER_Heiler = 21,
		GAME_SETTLER_Geologe = 22,
		GAME_SETTLER_Dieb = 23,
		GAME_SETTLER_Koehler = 24,
		GAME_SETTLER_Schnapsbrenner = 25,
		GAME_SETTLER_Brauer = 26,
		GAME_SETTLER_Pulvermacher = 27,
		GAME_SETTLER_Schweinefarmer = 28,
		GAME_SETTLER_Winzer = 29,
		GAME_SETTLER_Archer2 = 30,
		GAME_SETTLER_SpearFighter2 = 31,
		GAME_SETTLER_Swordsman2 = 32,
		GAME_SETTLER_Archer3 = 33,
		GAME_SETTLER_SpearFighter3 = 34,
		GAME_SETTLER_Swordsman3 = 35,
		GAME_SETTLER_Prister = 36,
		//- 37 Unknown
		GAME_SETTLER_Reisbauer = 38,
		GAME_SETTLER_Esel = 39,
		GAME_SETTLER_Pionier = 40,
		GAME_SETTLER_Katapult = 41,
		//- 42 Unknown
		GAME_SETTLER_Handelsschiff = 43,
		GAME_SETTLER_Faehre = 44,
		GAME_SETTLER_Imker = 45,
		GAME_SETTLER_Metwinzer = 46,
		GAME_SETTLER_Alchemist = 47
	};



public:
	clGameObjects();
	~clGameObjects();

	void static load_game_objects(SDL_Renderer *renderer, clGFXFile &gfxObjects, clGFXFile::GFX_ObjectTexture txObjects[255]);
	//void static load_game_buildings_roman(SDL_Renderer *renderer, clGFXFile &gfxObjects, clGFXFile::GFX_ObjectTexture txObjects[255]);
};



#endif