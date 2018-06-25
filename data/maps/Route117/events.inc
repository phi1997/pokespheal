Route117_EventObjects:: @ 8383440
	object_event 1, EVENT_OBJ_GFX_WOMAN_1, 0, 13, 13, 3, 8, 0, 0, 0, 0, Route117_EventScript_150D57, 0
	object_event 2, EVENT_OBJ_GFX_LITTLE_BOY_2, 0, 26, 13, 3, 33, 2, 2, 0, 0, Route117_EventScript_150D60, 0
	object_event 3, EVENT_OBJ_GFX_OLD_MAN_2, 0, 47, 4, 3, 8, 0, 0, 0, 0, Route117_EventScript_1B222D, 0
	object_event 4, EVENT_OBJ_GFX_ZIGZAGOON, 0, 33, 3, 3, 1, 1, 1, 0, 0, 0x0, 0
	object_event 5, EVENT_OBJ_GFX_KECLEON_1, 0, 39, 4, 3, 1, 0, 0, 0, 0, 0x0, 0
	object_event 6, EVENT_OBJ_GFX_AZUMARILL, 0, 42, 2, 3, 1, 1, 1, 0, 0, 0x0, 0
	object_event 7, EVENT_OBJ_GFX_PIKACHU, 0, 49, 2, 3, 1, 0, 0, 0, 0, 0x0, 0
	object_event 8, EVENT_OBJ_GFX_RUNNING_TRIATHLETE_M, 0, 35, 7, 3, 28, 7, 0, 1, 4, Route117_EventScript_150E09, 0
	object_event 9, EVENT_OBJ_GFX_WOMAN_3, 0, 31, 11, 3, 23, 0, 0, 1, 3, Route117_EventScript_150DCB, 0
	object_event 10, EVENT_OBJ_GFX_MAN_5, 0, 10, 9, 3, 18, 0, 0, 1, 3, Route117_EventScript_150D8D, 0
	object_event 11, EVENT_OBJ_GFX_BERRY_TREE, 0, 41, 13, 3, 12, 0, 0, 0, 29, S_BerryTree, 0
	object_event 12, EVENT_OBJ_GFX_BERRY_TREE, 0, 42, 13, 3, 12, 0, 0, 0, 28, S_BerryTree, 0
	object_event 13, EVENT_OBJ_GFX_BERRY_TREE, 0, 43, 13, 3, 12, 0, 0, 0, 27, S_BerryTree, 0
	object_event 14, EVENT_OBJ_GFX_ITEM_BALL, 0, 16, 18, 3, 1, 0, 0, 0, 0, Route117_EventScript_1B1598, FLAG_ITEM_ROUTE117_1
	object_event 15, EVENT_OBJ_GFX_CUTTABLE_TREE, 0, 15, 2, 3, 1, 0, 0, 0, 0, S_CuttableTree, FLAG_TEMP_11
	object_event 16, EVENT_OBJ_GFX_ITEM_BALL, 0, 9, 1, 3, 1, 0, 0, 0, 0, Route117_EventScript_1B15A5, FLAG_ITEM_ROUTE117_2
	object_event 17, EVENT_OBJ_GFX_RUNNING_TRIATHLETE_F, 0, 21, 1, 3, 40, 4, 4, 1, 3, Route117_EventScript_150E47, 0
	object_event 18, EVENT_OBJ_GFX_MANIAC, 0, 17, 12, 3, 7, 1, 1, 1, 4, Route117_EventScript_150E85, 0
	object_event 19, EVENT_OBJ_GFX_LASS, 0, 46, 15, 3, 8, 0, 0, 1, 0, Route117_EventScript_150EE2, 0
	object_event 20, EVENT_OBJ_GFX_LASS, 0, 45, 15, 3, 8, 0, 0, 1, 0, Route117_EventScript_150E9C, 0
	object_event 21, EVENT_OBJ_GFX_GIRL_2, 0, 48, 10, 3, 2, 1, 1, 0, 0, Route117_EventScript_150D69, 0

Route117_MapWarps:: @ 8383638
	warp_def 51, 5, 0, 0, MAP_ROUTE117_POKEMON_DAY_CARE

Route117_MapBGEvents:: @ 8383640
	bg_event 16, 6, 0, 0, 0, Route117_EventScript_150D72
	bg_event 49, 12, 0, 0, 0, Route117_EventScript_150D7B
	bg_event 49, 5, 0, 0, 0, Route117_EventScript_150D84
	bg_hidden_item_event 3, 18, 3, ITEM_REPEL, FLAG_HIDDEN_ITEM_48

Route117_MapEvents:: @ 8383670
	map_events Route117_EventObjects, Route117_MapWarps, 0x0, Route117_MapBGEvents