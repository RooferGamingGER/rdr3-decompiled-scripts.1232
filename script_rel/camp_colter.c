#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	char* sLocal_14 = NULL;
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	struct<3480> Local_18 = { 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1225574343, 0, 0, 0, 0, 2, 2, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 1056964608, 1055622431, 1050253722, 1022739087, 0, -1116355953, 1055286886, 1055286886, 1049582633, 1049247089, 1032805417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 3;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 0;
	var uLocal_3507 = 3;
	var uLocal_3508 = 0;
	var uLocal_3509 = 0;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 0;
	int iLocal_3513 = 0;
	int iLocal_3514 = 0;
	int iLocal_3515 = 0;
	int iLocal_3516 = 0;
	int iLocal_3517 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	Local_18.f_46 = uScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2698))
	{
		func_1(&Local_18);
	}
	func_2();
	func_3();
	func_4();
	func_5();
	func_6(&(Local_18.f_1721));
	func_7(&(Local_18.f_1797));
	func_8(&(Local_18.f_1869));
	func_9();
	func_10(&Local_18);
	while (func_11())
	{
		BUILTIN::WAIT(0);
		bVar0 = func_12(16);
		func_13(&(Local_18.f_1721));
		func_13(&(Local_18.f_1797));
		func_13(&(Local_18.f_1869));
		func_13(&(Local_18.f_1934));
		func_14();
		func_15();
		func_16();
		if (!bVar0)
		{
			if (func_17())
			{
				func_18(Local_18.f_3054, Local_18.f_3055, Global_1357549->f_1900);
			}
		}
		switch (Local_18)
		{
			case 0:
				if (func_19())
				{
					func_20(1);
				}
				break;
			
			case 1:
				func_21(&Local_18);
				func_22();
				func_23();
				func_24();
				func_25();
				func_26();
				func_27(&(Local_18.f_2024), &(Global_40.f_4283.f_415));
				if (!bVar0)
				{
					func_28();
					func_29();
					func_30();
				}
				func_31(&Local_18);
				iVar1 = func_32();
				if (!bVar0 && iVar1 == 1)
				{
					func_33(Local_18.f_45, Local_18.f_46);
					if (func_34(Local_18.f_45))
					{
						func_35(Local_18.f_45, &(Local_18.f_2024));
						func_36(0);
						func_37();
						func_39(func_38(4194304));
					}
				}
				else
				{
					func_40(Local_18.f_45);
				}
				func_41(Global_1898004, Local_18.f_46);
				func_42(&Local_18);
				if (!bVar0)
				{
					func_43(&(Local_18.f_51), &(Local_18.f_2024));
				}
				if (func_38(32768))
				{
					func_44(&(Global_1357549->f_3));
					func_45(&Local_18);
					func_46();
					if (func_47(Local_18.f_45, iVar1))
					{
						func_48(&(Global_1357549->f_1691));
					}
					func_49(&Local_18);
					func_50(32768);
				}
				if (func_51() && func_47(Local_18.f_45, iVar1))
				{
					func_52(Local_18.f_45, &(Global_1357549->f_1691));
				}
				else if (Global_1357549->f_1691 != 0)
				{
					func_48(&(Global_1357549->f_1691));
				}
				break;
			
			case 2:
				func_53(&Local_18, 0);
				func_54("Shutdown camp....", 1, 1);
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		func_55();
	}
	func_53(&Local_18, 0);
	if (func_56() == -1)
	{
	}
	else
	{
		func_57();
	}
}

void func_1(var uParam0)
{
	func_53(uParam0, 1);
	func_58(uParam0->f_46, 1);
	if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
	{
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	int iVar0;
	
	Local_18.f_40 = 0;
	Local_18.f_41 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Local_18.f_14[iVar0] = 0;
		iVar0++;
	}
}

void func_3()
{
	func_60(0, 13548/*func_59*/, 0);
	func_60(1, 13905/*func_61*/, 1);
	func_60(2, 13921/*func_62*/, 1);
	func_60(3, 13984/*func_63*/, 1);
	func_60(4, 14015/*func_64*/, 2);
	func_60(5, 14129/*func_65*/, 16);
	func_60(6, 14264/*func_66*/, 1);
	func_60(7, 14878/*func_67*/, 4);
	func_60(8, 14972/*func_68*/, 1);
	func_60(9, 15102/*func_69*/, 128);
	func_60(10, 15111/*func_70*/, 792);
	func_60(11, 15159/*func_71*/, 1024);
}

void func_4()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_72(32, -1);
		func_73();
		func_74();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
}

void func_5()
{
	func_75(32);
}

void func_6(int* iParam0)
{
	struct<2> Var0;
	
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(iParam0, &Var0, 65);
	func_79(iParam0, 0, 15839/*func_76*/, 15943/*func_77*/, 16382/*func_78*/);
	func_79(iParam0, 1, 16672/*func_80*/, 16718/*func_81*/, 17184/*func_82*/);
	func_79(iParam0, 2, 17214/*func_83*/, 17252/*func_84*/, 17680/*func_85*/);
	func_79(iParam0, 3, 17710/*func_86*/, 17736/*func_87*/, 17815/*func_88*/);
	func_79(iParam0, 4, 17823/*func_89*/, 17977/*func_90*/, 17815/*func_88*/);
	func_91(iParam0, 0);
}

void func_7(int* iParam0)
{
	struct<2> Var0;
	
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(iParam0, &Var0, 65);
	func_79(iParam0, 0, 18049/*func_92*/, 18127/*func_93*/, 17815/*func_88*/);
	func_79(iParam0, 1, 19283/*func_94*/, 19410/*func_95*/, 17815/*func_88*/);
	func_79(iParam0, 2, 17815/*func_88*/, 20252/*func_96*/, 17815/*func_88*/);
	func_79(iParam0, 3, 20410/*func_97*/, 20956/*func_98*/, 17815/*func_88*/);
	func_79(iParam0, 4, 21584/*func_99*/, 21814/*func_100*/, 17815/*func_88*/);
	func_79(iParam0, 5, 22237/*func_101*/, 22270/*func_102*/, 17815/*func_88*/);
	func_79(iParam0, 6, 22987/*func_103*/, 23072/*func_104*/, 17815/*func_88*/);
	func_91(iParam0, 0);
}

void func_8(int* iParam0)
{
	struct<2> Var0;
	
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(iParam0, &Var0, 65);
	func_79(iParam0, 0, 23127/*func_105*/, 23209/*func_106*/, 17815/*func_88*/);
	func_79(iParam0, 1, 23530/*func_107*/, 23566/*func_108*/, 17815/*func_88*/);
	func_79(iParam0, 2, 24035/*func_109*/, 24166/*func_110*/, 24575/*func_111*/);
	func_79(iParam0, 3, 24594/*func_112*/, 24661/*func_113*/, 25065/*func_114*/);
	func_91(iParam0, 0);
}

void func_9()
{
	struct<2> Var0;
	
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(&(Local_18.f_1934), &Var0, 65);
	func_79(&(Local_18.f_1934), 0, 25134/*func_115*/, 25171/*func_116*/, 17815/*func_88*/);
	func_79(&(Local_18.f_1934), 1, 25354/*func_117*/, 25377/*func_118*/, 17815/*func_88*/);
	func_79(&(Local_18.f_1934), 2, 25582/*func_119*/, 25629/*func_120*/, 17815/*func_88*/);
	func_79(&(Local_18.f_1934), 3, 25903/*func_121*/, 25954/*func_122*/, 17815/*func_88*/);
	func_79(&(Local_18.f_1934), 4, 25973/*func_123*/, 26029/*func_124*/, 17815/*func_88*/);
	func_91(&(Local_18.f_1934), 0);
}

void func_10(var uParam0)
{
	uParam0->f_45 = 0;
	uParam0->f_47 = 1;
	uParam0->f_1714 = { func_125(uParam0->f_45) };
	uParam0->f_1717 = 183.5714f;
	func_126(-1833460353, 0, 0, 0, 1, 0, 0, 0);
	func_126(-588172815, 0, 0, 0, 1, 0, 0, 0);
	func_126(-297610092, 0, 0, 0, 1, 0, 0, 0);
	func_126(969632676, 0, 0, 0, 1, 0, 0, 0);
	func_126(1175826463, 0, 0, 0, 1, 0, 0, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(-1833460353, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(-588172815, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(-297610092, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(969632676, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(1175826463, 0);
	OBJECT::_0x7F458B543006C8FE(-1833460353, 18);
	OBJECT::_0x7F458B543006C8FE(-588172815, 18);
	OBJECT::_0x7F458B543006C8FE(-297610092, 18);
	OBJECT::_0x7F458B543006C8FE(969632676, 18);
	OBJECT::_0x7F458B543006C8FE(1175826463, 18);
	if (!func_128(func_127(2)))
	{
		func_126(-2111960098, 0, 0, 0, 1, 0, 0, 0);
		func_126(-6656809, 0, 0, 0, 1, 0, 0, 0);
		func_126(1659012492, 0, 0, 0, 1, 0, 0, 0);
		func_126(1970514606, 0, 0, 0, 1, 0, 0, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(-2111960098, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(-6656809, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(1659012492, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(1970514606, 0);
		OBJECT::_0x7F458B543006C8FE(-2111960098, 18);
		OBJECT::_0x7F458B543006C8FE(-6656809, 18);
		OBJECT::_0x7F458B543006C8FE(1659012492, 18);
		OBJECT::_0x7F458B543006C8FE(1970514606, 18);
	}
	AUDIO::_0x0D7FD6A55FD63AEF(42, 3, 0);
	func_129(1073741824);
	func_130();
}

int func_11()
{
	return 1;
}

int func_12(int iParam0)
{
	switch (func_56())
	{
		case -1:
			return (Global_1357549->f_1494 && iParam0) != 0;
	}
	return 0;
}

void func_13(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (uParam0->f_62 != -1 && uParam0->f_64 == -1)
	{
		Call_Loc((uParam0->f_1[uParam0->f_62 /*3*/])->f_1);
		uParam0->f_64 = StackVal;
	}
	while (uParam0->f_64 != -1)
	{
		if (uParam0->f_62 != -1)
		{
			Call_Loc((uParam0->f_1[uParam0->f_62 /*3*/])->f_2);
		}
		uParam0->f_62 = uParam0->f_64;
		Call_Loc(&uParam0->f_1[uParam0->f_62 /*3*/]);
		Call_Loc((uParam0->f_1[uParam0->f_62 /*3*/])->f_1);
		uParam0->f_64 = StackVal;
		iVar0++;
		if (iVar0 > 10)
		{
		}
	else
	{
		}
	}
}

void func_14()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_38(1) && func_131(0, 0, 1))
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[0])) || !VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[2])))
	{
		return;
	}
	if ((func_132(&Global_1935630, 16384) || func_135(func_134(func_133()), 256)) || STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	iVar0 = func_136(Global_1359489->f_10);
	if (func_137(iVar0, Global_1359489->f_10))
	{
		func_138(iVar0);
	}
	iVar1 = Local_18.f_1712;
	if (func_137((Global_1357549->f_1675[iVar1 /*5*/])->f_3, -1))
	{
		func_138((Global_1357549->f_1675[iVar1 /*5*/])->f_3);
	}
	iVar2 = Local_18.f_1712 + 1;
	if (iVar2 >= 3)
	{
		iVar2 = 0;
	}
	Local_18.f_1712 = iVar2;
}

void func_15()
{
	var uVar0;
	
	if (func_139())
	{
		if (!func_140())
		{
			func_141(1);
			func_142(32);
		}
	}
	else if (func_12(32768))
	{
		if (func_143(&uVar0))
		{
			if (!func_140())
			{
				func_141(1);
			}
			func_144();
			func_145(32);
			func_141(0);
		}
		if (func_140())
		{
			func_141(0);
		}
		if ((func_146() == 7 && func_147()) && !func_148(67))
		{
			if (!func_149(-999503751))
			{
				func_150(-999503751);
			}
			if (!func_149(81053684))
			{
				func_150(81053684);
			}
			if (!func_149(-1719060085))
			{
				func_150(-1719060085);
			}
			if (!func_149(-2061583405))
			{
				func_150(-2061583405);
			}
		}
	}
	else
	{
		if (!func_140())
		{
			func_141(1);
			func_142(32);
		}
		if ((func_146() == 7 && func_147()) && !func_148(67))
		{
			if (func_149(-999503751))
			{
				func_151(-999503751);
			}
			if (func_149(81053684))
			{
				func_151(81053684);
			}
			if (func_149(-1719060085))
			{
				func_151(-1719060085);
			}
			if (func_149(-2061583405))
			{
				func_151(-2061583405);
			}
		}
	}
}

void func_16()
{
	func_152();
}

int func_17()
{
	switch (Local_18.f_51.f_20)
	{
		case 14:
		case 15:
		case 16:
			return 0;
		
		default:
			break;
	}
	return 1;
}

void func_18(float fParam0, float fParam1, float fParam2)
{
	func_153(fParam0, fParam1, fParam2);
	func_155(func_154());
	func_156(MONEY::_MONEY_GET_CASH_BALANCE());
}

int func_19()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (MISC::IS_BIT_SET(Local_18.f_41, iVar1))
		{
		}
		else
		{
			if (!MISC::IS_BIT_SET(Local_18.f_40, iVar1))
			{
				if (func_157(iVar1))
				{
					MISC::SET_BIT(&(Local_18.f_40), iVar1);
					Local_18.f_27[iVar1] = MISC::GET_GAME_TIMER() + 20000;
				}
			}
			if (MISC::IS_BIT_SET(Local_18.f_40, iVar1))
			{
				Call_Loc(&Local_18.f_1[iVar1]);
				if (StackVal)
				{
					MISC::SET_BIT(&(Local_18.f_41), iVar1);
				}
				else if (MISC::GET_GAME_TIMER() > &Local_18.f_27[iVar1])
				{
					MISC::SET_BIT(&(Local_18.f_41), iVar1);
				}
			}
			if (!MISC::IS_BIT_SET(Local_18.f_41, iVar1))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_20(int iParam0)
{
	Local_18 = iParam0;
}

void func_21(int iParam0)
{
	func_158(iParam0);
	func_159(&(Global_1357549->f_3[0]), &(Global_1357549->f_3[2]), &(Global_1357549->f_3[4]), &(Global_1357549->f_3[5]));
	func_160(&(Global_1357549->f_3[2]));
	func_161(iParam0);
	func_162();
	if (func_12(32768))
	{
		if (FIRE::IS_ENTITY_ON_FIRE(Global_35))
		{
			FIRE::STOP_ENTITY_FIRE(Global_35, 1);
		}
		if (!func_38(2048))
		{
			if (!func_12(64))
			{
				func_163(0);
			}
			PLAYER::_0x9461A8FAB0378E5B(PLAYER::PLAYER_ID(), 1);
			if (!func_38(67108864))
			{
				FIRE::_0x24DB6B9F2B719043(0.1f);
			}
		}
	}
	else if (func_38(2048))
	{
		PLAYER::_0x9461A8FAB0378E5B(PLAYER::PLAYER_ID(), 0);
	}
	if (!func_12(32768) && func_38(2048))
	{
		if (!func_12(64))
		{
			func_163(1);
		}
		if (!func_38(67108864))
		{
			FIRE::_0x24DB6B9F2B719043(-1f);
		}
	}
	if (func_38(512))
	{
		if (!func_38(2))
		{
			PAD::DISABLE_CONTROL_ACTION(0, -1616532217, false);
		}
	}
	if (func_164())
	{
		if (!func_12(1024))
		{
			AUDIO::SET_AUDIO_FLAG("EnableIdleMusic", false);
			func_145(1024);
		}
	}
	else if (func_12(1024))
	{
		AUDIO::SET_AUDIO_FLAG("EnableIdleMusic", true);
		func_142(1024);
	}
	if (MISC::GET_GAME_TIMER() <= Global_1357549->f_1892)
	{
		func_165(4194304);
	}
	else
	{
		func_50(4194304);
	}
	if ((((!func_12(262144) && func_166(&(Global_1357549->f_3[2]), Global_36)) && !func_12(4)) && !func_12(2)) && func_146() != 8)
	{
		CAM::_0x632BE8D84846FA56();
	}
	if (Local_18.f_2019 != 0)
	{
		if (!func_38(16777216))
		{
			MAP::_0x1392105DA88BBFFB(Local_18.f_2019, Local_18.f_2019.f_3, Local_18.f_2019.f_4, Local_18.f_2019.f_2, Local_18.f_2019.f_1);
			func_165(16777216);
		}
	}
	else if (func_38(16777216))
	{
		MAP::_0xE057FEA9A22EB3EE(Local_18.f_2019);
		func_50(16777216);
	}
	if (func_167())
	{
		if (!func_135(Local_18.f_47, 64))
		{
			func_168(Local_18.f_47, 64);
		}
	}
	else if (func_135(Local_18.f_47, 64))
	{
		func_169(Local_18.f_47, 64);
	}
	Global_1357549->f_1484 = MISC::GET_GAME_TIMER();
}

void func_22()
{
	char* sVar0;
	float fVar1;
	int iVar2;
	
	if (func_164())
	{
		return;
	}
	if (Global_1357549->f_1658 == 0)
	{
		if ((CLOCK::GET_CLOCK_SECONDS() % 20) != 0)
		{
			return;
		}
	}
	Global_1357549->f_1659[0] = 0;
	Global_1357549->f_1659[1] = 1;
	sVar0 = "script@common@cnv_camp@grief@tent@tentgrief";
	fVar1 = 21f;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_1663[iVar2])) == 0)
		{
			Global_1357549->f_1663[iVar2] = func_170(&(Global_1357549->f_1659[iVar2]));
		}
		switch (Global_1357549->f_1658)
		{
			case 0:
				if (func_171(iVar2))
				{
					if (func_172(iVar2))
					{
						if (func_173(Global_1357549->f_1651[iVar2 /*3*/]))
						{
							if (func_174(Global_1357549->f_1651[iVar2 /*3*/]) > fVar1)
							{
								if (func_175(&(Global_1357549->f_1659[iVar2]), 1, 1) || func_176(&(Global_1357549->f_1659[iVar2]), 8))
								{
									Global_1357549->f_1666 = 0;
									Global_1357549->f_1667 = 0;
									Global_1357549->f_1658 = 1;
								}
							}
							else if (func_174(Global_1357549->f_1651[iVar2 /*3*/]) > (fVar1 - 5f) && Global_1357549->f_1666 == 0)
							{
								Global_1357549->f_1666 = 1;
								func_178(func_177(&(Global_1357549->f_1659[iVar2])), "EXPLAIN_YOURSELF", 272211449, Global_35, 1, 0, 0, 1);
								TASK::TASK_LOOK_AT_ENTITY(func_177(&(Global_1357549->f_1659[iVar2])), Global_35, 2000, 0, 51, 0);
							}
							else if (func_174(Global_1357549->f_1651[iVar2 /*3*/]) > (fVar1 - 12f) && Global_1357549->f_1667 == 0)
							{
								Global_1357549->f_1667 = 1;
								TASK::TASK_LOOK_AT_ENTITY(func_177(&(Global_1357549->f_1659[iVar2])), Global_35, 2000, 0, 51, 0);
								func_178(func_177(&(Global_1357549->f_1659[iVar2])), "INTRUDED_AGAIN", 272211449, Global_35, 1, 0, 0, 1);
							}
							else if (Global_1357549->f_1668 == 0)
							{
								if (func_179())
								{
									Global_1357549->f_1668 = 1;
									func_178(func_177(&(Global_1357549->f_1659[iVar2])), "ITEM_PICKUP_REACT", -128067431, Global_35, 1, 0, 0, 1);
								}
							}
						}
						else
						{
							func_178(func_177(&(Global_1357549->f_1659[iVar2])), "GET_OUT", 272211449, Global_35, 1, 0, 0, 1);
							func_180(Global_1357549->f_1651[iVar2 /*3*/], 0);
						}
					}
					else if (func_173(Global_1357549->f_1651[iVar2 /*3*/]))
					{
						Global_1357549->f_1666 = 0;
						Global_1357549->f_1667 = 0;
						Global_1357549->f_1668 = 0;
						func_181(Global_1357549->f_1651[iVar2 /*3*/]);
					}
				}
				break;
			
			case 1:
				if (func_173(Global_1357549->f_1651[iVar2 /*3*/]))
				{
					if (func_182(&(Global_1357549->f_1659[iVar2])))
					{
						Global_1357549->f_1669 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, 0, false, true);
						ANIMSCENE::LOAD_ANIM_SCENE(Global_1357549->f_1669);
						ANIMSCENE::_0xDF7B5144E25CD3FE(Global_1357549->f_1669, func_183(&(Global_1357549->f_1659[iVar2])));
						Global_1357549->f_1658 = 5;
					}
					else
					{
						func_184(&(Global_1357549->f_1659[iVar2]), 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					}
				}
				break;
			
			case 5:
				if (func_173(Global_1357549->f_1651[iVar2 /*3*/]))
				{
					if (ANIMSCENE::_0x25557E324489393C(Global_1357549->f_1669))
					{
						if (ANIMSCENE::_0x477122B8D05E7968(Global_1357549->f_1669, 1, 0))
						{
							if (ANIMSCENE::_0x23E33CB9F4A3F547(Global_1357549->f_1669, func_183(&(Global_1357549->f_1659[iVar2]))))
							{
								func_185(&(Global_1357549->f_1659[iVar2]));
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Global_1357549->f_1669, func_183(&(Global_1357549->f_1659[iVar2])), true);
								PED::SET_PED_CONFIG_FLAG(Global_35, 174, true);
								ANIMSCENE::START_ANIM_SCENE(Global_1357549->f_1669);
								func_178(func_177(&(Global_1357549->f_1659[iVar2])), "LEAVE_NOW", 272211449, Global_35, 1, 0, 0, 1);
								Global_1357549->f_1658 = 6;
							}
						}
					}
				}
				break;
			
			case 6:
				if (func_173(Global_1357549->f_1651[iVar2 /*3*/]))
				{
					if (ANIMSCENE::_0xCDC5512A407CF08D(Global_1357549->f_1669))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						ANIMSCENE::_0xAE6ADA8FE7E84ACC(Global_1357549->f_1669, func_183(&(Global_1357549->f_1659[iVar2])));
						ANIMSCENE::RESET_ANIM_SCENE(Global_1357549->f_1669, 0);
						ANIMSCENE::_DELETE_ANIM_SCENE(Global_1357549->f_1669);
						TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_177(&(Global_1357549->f_1659[iVar2])), 1030835986);
						PED::SET_PED_CONFIG_FLAG(func_177(&(Global_1357549->f_1659[iVar2])), 40, false);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
						_NAMESPACE48::_0x631CD2D77FDC0316(_NAMESPACE48::_0x32A1E3B83D501096(func_177(&(Global_1357549->f_1659[iVar2]))));
						func_186(&(Global_1357549->f_1659[iVar2]), 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
						func_187(Global_1357549->f_1651[iVar2 /*3*/]);
						Global_1357549->f_1658 = 7;
					}
				}
				break;
			
			case 7:
				if (func_173(Global_1357549->f_1651[iVar2 /*3*/]))
				{
					if (func_174(Global_1357549->f_1651[iVar2 /*3*/]) > 1.5f)
					{
						func_181(Global_1357549->f_1651[iVar2 /*3*/]);
						func_188(&(Global_1357549->f_1659[iVar2]));
						PED::SET_PED_CONFIG_FLAG(Global_35, 174, false);
						Global_1357549->f_1658 = 0;
					}
				}
				break;
		}
		iVar2++;
	}
}

void func_23()
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	switch (Global_1357549->f_11)
	{
		case 0:
			func_189();
			Global_1357549->f_11 = 1;
			break;
		
		case 1:
			func_190();
			break;
		
		case 2:
			break;
	}
}

void func_24()
{
	int iVar0;
	
	iVar0 = func_146();
	if (((iVar0 == 0 || iVar0 == 7) || iVar0 == 4) || iVar0 == 5)
	{
		if (!func_191(1024))
		{
			func_192(1024);
			func_165(-2147483648);
		}
		if (!func_191(64))
		{
			func_192(64);
			func_165(-2147483648);
		}
		if (iVar0 == 7)
		{
			if (!func_38(131072))
			{
				func_165(131072);
				func_165(-2147483648);
			}
		}
	}
	else if (func_164() && !func_193())
	{
		if (!func_191(64))
		{
			func_192(64);
			func_165(-2147483648);
		}
	}
	else if (func_38(-2147483648))
	{
		if (func_191(1024))
		{
			func_194(1024);
		}
		if (func_191(64))
		{
			func_194(64);
		}
		if (func_38(131072))
		{
			func_50(131072);
		}
		func_50(-2147483648);
	}
}

void func_25()
{
	if (func_12(32768) && !func_38(2048))
	{
		if (func_38(4096))
		{
			return;
		}
		if (MISC::GET_GAME_TIMER() < Local_18.f_50)
		{
			return;
		}
		if (func_131(0, 0, 1))
		{
			return;
		}
		func_165(4096);
	}
	if (func_38(4096))
	{
		if (MISC::GET_GAME_TIMER() < Local_18.f_50)
		{
			return;
		}
		if (!func_195())
		{
			return;
		}
		if (!func_38(8192))
		{
			func_196();
			Local_18.f_50 = MISC::GET_GAME_TIMER() + 5500;
			func_165(8192);
		}
		else
		{
			func_197();
			func_198();
			Local_18.f_50 = (MISC::GET_GAME_TIMER() + 120000);
		}
	}
}

void func_26()
{
}

void func_27(var uParam0, var uParam1)
{
	if (uParam1->f_5 == -15)
	{
		func_199(&(uParam1->f_5));
	}
	if (func_200(uParam1->f_5) && func_201(uParam1->f_5))
	{
		func_202(uParam0, uParam1);
		func_199(&(uParam1->f_5));
	}
}

void func_28()
{
	if (func_203(2))
	{
		if (func_204())
		{
			if (func_148(15))
			{
				if (func_148(4) && !func_148(37))
				{
					if (!func_205(605) && !func_206(605))
					{
						func_207(605, 0);
					}
				}
				else if (func_148(43))
				{
					if (!func_205(605) && !func_206(605))
					{
						func_207(605, 0);
					}
				}
			}
		}
		if (func_147() && func_148(73))
		{
			if (!func_205(606) && !func_206(606))
			{
				func_207(606, 0);
			}
		}
	}
	if (func_208() && !func_205(538))
	{
		if ((MAP::DOES_BLIP_EXIST(Local_18.f_51.f_14) && MAP::DOES_BLIP_EXIST(Local_18.f_51.f_15)) && MAP::DOES_BLIP_EXIST(Local_18.f_51.f_13))
		{
			func_207(538, 0);
		}
	}
}

void func_29()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		iVar1 = 0;
		while (iVar1 < 15)
		{
			switch ((Local_18.f_3057[iVar1 /*21*/])->f_3)
			{
				case 0:
					if (func_38(4))
					{
						if (func_209(&(Local_18.f_3057[iVar1 /*21*/])))
						{
							func_210(Local_18.f_3057[iVar1 /*21*/], 1, 1);
						}
					}
					else if (VOLUME::_0x92A78D0BEDB332A3((Local_18.f_3057[iVar1 /*21*/])->f_4))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, (Local_18.f_3057[iVar1 /*21*/])->f_4, false, 0))
						{
							if (!func_211((Local_18.f_3057[iVar1 /*21*/])->f_6))
							{
								if (!func_209(&(Local_18.f_3057[iVar1 /*21*/])))
								{
									Local_18.f_3057[iVar1 /*21*/] = func_213(func_212(), (Local_18.f_3057[iVar1 /*21*/])->f_16, (Local_18.f_3057[iVar1 /*21*/])->f_4, 2, 1, 0, (Local_18.f_3057[iVar1 /*21*/])->f_17, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
									if ((iVar1 == 0 || iVar1 == 8) || iVar1 == 4)
									{
										func_214(&(Local_18.f_3057[iVar1 /*21*/]), 26, 1, 1);
									}
									if ((Local_18.f_3057[iVar1 /*21*/])->f_18 != -1)
									{
										func_215(&(Local_18.f_3057[iVar1 /*21*/]), (Local_18.f_3057[iVar1 /*21*/])->f_18, 0, 1);
									}
								}
								else if (((Local_18.f_3057[iVar1 /*21*/])->f_17 == 0 && func_216(&(Local_18.f_3057[iVar1 /*21*/]), 1)) || ((Local_18.f_3057[iVar1 /*21*/])->f_17 != 0 && func_217(&(Local_18.f_3057[iVar1 /*21*/]), 1)))
								{
									func_210(Local_18.f_3057[iVar1 /*21*/], 1, 1);
									(Local_18.f_3057[iVar1 /*21*/])->f_3 = 1;
								}
							}
						}
					}
					break;
				
				case 1:
					if (func_218(Global_35, 0, 1, 1) == -160924582)
					{
						WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_LOOK_AT_COORD(0, (Local_18.f_3057[iVar1 /*21*/])->f_6, -1, 1, 51, 1);
					TASK::TASK_PAUSE(0, 400);
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, (Local_18.f_3057[iVar1 /*21*/])->f_6, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
					TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
					(Local_18.f_3057[iVar1 /*21*/])->f_3 = 2;
					break;
				
				case 2:
					if (!CAM::DOES_CAM_EXIST((Local_18.f_3057[iVar1 /*21*/])->f_5))
					{
						if (!func_211((Local_18.f_3057[iVar1 /*21*/])->f_9))
						{
							(Local_18.f_3057[iVar1 /*21*/])->f_5 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, (Local_18.f_3057[iVar1 /*21*/])->f_9, (Local_18.f_3057[iVar1 /*21*/])->f_12, (Local_18.f_3057[iVar1 /*21*/])->f_15, false, 2);
						}
					}
					if ((Local_18.f_3057[iVar1 /*21*/])->f_19 != -1)
					{
						func_219(iVar1);
						if (func_209((Local_18.f_3057[iVar1 /*21*/])->f_1))
						{
							if (func_220(iVar1))
							{
							}
							else
							{
								if (func_211((Local_18.f_3057[iVar1 /*21*/])->f_9))
								{
									if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
									{
										CAM::SET_GAMEPLAY_COORD_HINT((Local_18.f_3057[iVar1 /*21*/])->f_6, -1, 2000, 2000, 0);
									}
								}
								else if (CAM::DOES_CAM_EXIST((Local_18.f_3057[iVar1 /*21*/])->f_5))
								{
									if (!CAM::IS_CAM_RENDERING((Local_18.f_3057[iVar1 /*21*/])->f_5))
									{
										CAM::SET_CAM_ACTIVE((Local_18.f_3057[iVar1 /*21*/])->f_5, true);
										CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
									}
								}
								func_221(iVar1);
								HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 2, 1, 799218720, (Local_18.f_3057[iVar1 /*21*/])->f_20, 0);
								if (func_209((Local_18.f_3057[iVar1 /*21*/])->f_2))
								{
									if (func_222((Local_18.f_3057[iVar1 /*21*/])->f_2, 1))
									{
										if ((Local_18.f_3057[iVar1 /*21*/])->f_19 != -1)
										{
											iVar2 = 0;
											while (iVar2 < 15)
											{
												(Local_18.f_3057[iVar2 /*21*/])->f_3 = 0;
												func_210(Local_18.f_3057[iVar2 /*21*/], 1, 1);
												func_210(&((Local_18.f_3057[iVar2 /*21*/])->f_1), 1, 1);
												func_210(&((Local_18.f_3057[iVar2 /*21*/])->f_2), 1, 1);
												iVar2++;
											}
										}
										(Local_18.f_3057[iVar1 /*21*/])->f_3 = 4;
									}
								}
								Jump @1081; //curOff = 1059
								Jump @1081; //curOff = 1062
								func_223(Local_18.f_3057[iVar1 /*21*/]);
							}
							iVar1++;
						}
					}
			}
		}
	}

void func_30()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_224(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
	}
	else
	{
		iVar0 = PED::_0x4C8B59171957BCF7(PLAYER::PLAYER_PED_ID());
	}
	if (func_225(iVar0))
	{
		if (func_226(iVar0) && func_227(iVar0))
		{
			if (Global_1357549->f_1897 != iVar0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1897))
				{
					func_228();
				}
				func_229(iVar0, Local_18.f_45, 1);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1897) && Global_1357549->f_1897 == iVar0)
		{
			func_228();
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1897) && Global_1357549->f_1897 != iVar0) && func_224(PLAYER::PLAYER_PED_ID()))
		{
			iVar1 = func_230(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 2);
			if (TASK::_0x841475AC96E794D1(iVar1))
			{
				if (func_231(iVar0, TASK::_0xA8452DD321607029(iVar1, 1), 1) < 8f)
				{
					if (!func_205(604))
					{
						func_207(604, 0);
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1897))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_1357549->f_1897) && func_225(Global_1357549->f_1897))
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1357549->f_1897.f_1))
			{
				if (!MAP::_0x9FA00E2FC134A9D0(Global_1357549->f_1897))
				{
					Global_1357549->f_1897.f_1 = MAP::_0x23F74C2FDA6E7C61(-1230993421, Global_1357549->f_1897);
					MAP::_0x662D364ABF16DE2F(Global_1357549->f_1897.f_1, 287169430);
					MAP::_0x662D364ABF16DE2F(Global_1357549->f_1897.f_1, -201249929);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1357549->f_1897.f_1, "BLIP_CAMP_HORSE");
				}
			}
			else if (MAP::GET_BLIP_FROM_ENTITY(Global_1357549->f_1897) != Global_1357549->f_1897.f_1)
			{
				MAP::REMOVE_BLIP(&(Global_1357549->f_1897.f_1));
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(Global_1357549->f_1897.f_1))
			{
				MAP::REMOVE_BLIP(&(Global_1357549->f_1897.f_1));
			}
			if (Global_40.f_4283.f_567)
			{
				func_228();
			}
		}
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1357549->f_1897.f_1))
	{
		MAP::REMOVE_BLIP(&(Global_1357549->f_1897.f_1));
	}
}

void func_31(var uParam0)
{
	if (((func_232(-1461741225, 1) || func_232(-404697685, 1)) || func_232(1674863702, 1)) || func_232(-1917134080, 1))
	{
		return;
	}
	if (func_233())
	{
		if (!func_173(&(uParam0->f_3480)))
		{
			func_234();
			func_180(&(uParam0->f_3480), 0);
		}
		if (func_174(&(uParam0->f_3480)) > 10f && !func_164())
		{
			func_235();
		}
	}
}

int func_32()
{
	return Global_40.f_4283.f_4;
}

void func_33(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_236(iParam0);
	if (iVar0 != -1)
	{
		if (!func_237(19, 4))
		{
			if (VOLUME::_0x92A78D0BEDB332A3((Global_1914319->f_3[19 /*446*/])->f_26))
			{
				VOLUME::_0x43F867EF5C463A53((Global_1914319->f_3[19 /*446*/])->f_26);
			}
			switch (iParam0)
			{
				case 1:
					iVar1 = VOLUME::_CREATE_VOLUME_BOX(-142.2027f, -23.89317f, 95.0883f, 0f, 0f, -19.50431f, 2f, 1.8f, 5f);
					break;
				
				case 2:
					iVar1 = VOLUME::_CREATE_VOLUME_BOX(674.9565f, -1251.201f, 43.0152f, 0f, 0f, -101.9433f, 2f, 1.8f, 5f);
					break;
				
				case 3:
					iVar1 = VOLUME::_CREATE_VOLUME_BOX(1874.646f, -1859.152f, 41.8f, 0f, 0f, -99.40799f, 2f, 1.8f, 5f);
					break;
				
				case 6:
					iVar1 = VOLUME::_CREATE_VOLUME_BOX(2365.858f, 1346.675f, 105.1305f, 0f, 0f, -22.49011f, 2f, 1.8f, 5f);
					break;
			}
			func_238(19, 16384);
			func_238(19, 32768);
			func_239(19, -1, &(Global_1357549->f_3[4]), iParam1, iVar1, 0, 12, -1082130432, 0, 0);
		}
		if (func_240(iVar0))
		{
			func_241(iVar0, 19, 0, 1);
		}
	}
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_35(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_38(8))
	{
		if (!uParam1->f_1029)
		{
			func_242(uParam1);
			uParam1->f_1029 = 1;
		}
		return;
	}
	else if (uParam1->f_1029)
	{
		uParam1->f_1029 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_243(iParam0, iVar1, (*uParam1)[iVar1 /*257*/], &iVar0);
		iVar1++;
	}
}

void func_36(int iParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 60) == 0 || iParam0)
	{
		Local_18.f_3054 = func_244(Local_18.f_2024[0 /*257*/]);
		Local_18.f_3055 = func_244(Local_18.f_2024[2 /*257*/]);
		Local_18.f_3056 = func_244(Local_18.f_2024[1 /*257*/]);
		Global_1357549->f_1899 = func_245();
		Global_1357549->f_1900 = func_246(Local_18.f_3056, Global_1357549->f_1899);
	}
}

void func_37()
{
	if (func_12(8192) || func_247())
	{
		func_248(1000);
		return;
	}
	if (Local_18.f_51.f_20 != 0)
	{
		func_248(1000);
		return;
	}
	if (func_249(Local_18.f_51.f_1, 1) || func_249(Local_18.f_51.f_6, 1))
	{
		func_248(1000);
		return;
	}
}

int func_38(int iParam0)
{
	switch (func_56())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return 0;
}

void func_39(bool bParam0)
{
	HUD::_0x4CC5F2FC1332577F(-950624750);
	if (bParam0 && func_250())
	{
		func_251();
	}
	else
	{
		func_252();
	}
}

void func_40(int iParam0)
{
	int iVar0;
	
	iVar0 = func_236(iParam0);
	if (iVar0 != -1)
	{
		if (func_237(19, 4))
		{
			func_253(19);
		}
		if (!func_240(iVar0))
		{
			func_241(iVar0, 19, 1, 1);
		}
	}
}

void func_41(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	if ((BUILTIN::VDIST(Global_36, 0f, 0f, 0f) <= 5f || func_132(&Global_1935630, 16384)) || func_132(&Global_1935630, 8388608))
	{
		return;
	}
	if (func_254(uParam0, 1))
	{
		return;
	}
	uParam0->f_63++;
	if (uParam0->f_63 < 10)
	{
		return;
	}
	uParam0->f_63 = 0;
	bVar0 = false;
	bVar1 = ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT());
	bVar2 = func_255();
	iVar3 = 0;
	while (iVar3 < uParam0->f_61)
	{
		switch (((*uParam0)[iVar3 /*3*/])->f_1)
		{
			case 1:
				if (VOLUME::_0x92A78D0BEDB332A3(uParam0[iVar3 /*3*/]))
				{
					if (VOLUME::_0xF256A75210C5C0EB(uParam0[iVar3 /*3*/], Global_36))
					{
						if (!bVar1 && !bVar2)
						{
							if ((!func_256((*uParam0)[iVar3 /*3*/], 1) && func_257(iParam1)) && !func_258(iParam1, 16))
							{
								func_260(iParam1, func_259(), -1, 0, -1, 0);
								func_261((*uParam0)[iVar3 /*3*/], 1);
							}
							func_262(iParam1, 0);
						}
						bVar0 = true;
					}
				}
				break;
			
			default:
				break;
		}
		iVar3++;
	}
	if (func_56() == -1)
	{
		if (func_263() != bVar0)
		{
			iVar4 = 0;
			if (bVar0)
			{
				iVar4 = 2;
			}
			else
			{
				iVar4 = 1;
			}
			func_264();
			func_265(Global_1310750->f_16071, 0, iVar4, 0, 0);
		}
	}
	func_266(bVar0);
	if (func_56() == -1)
	{
		func_268((iParam1 == func_267() && bVar0));
	}
}

void func_42(var uParam0)
{
	int iVar0;
	
	if ((func_269(((*Global_1835011)[1 /*74*/])->f_1, 1) && !func_128(((*Global_1835011)[3 /*74*/])->f_1)) && !func_270(3))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3515) && !func_271(Global_1360165[1 /*1157*/], 0))
		{
			STREAMING::REQUEST_MODEL(732106831, false);
			if (STREAMING::HAS_MODEL_LOADED(732106831))
			{
				iLocal_3515 = OBJECT::CREATE_OBJECT(732106831, -1316.738f, 2435.906f, 308.547f, false, false, false, false, false);
				ENTITY::SET_ENTITY_COORDS(iLocal_3515, -1316.738f, 2435.906f, 308.547f, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_3515, 156.925f);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_3515, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(732106831);
			}
		}
		else if (!iLocal_3517)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_1360165[1 /*1157*/]);
			if (iVar0 != 0 && INTERIOR::IS_INTERIOR_READY(iVar0))
			{
				iLocal_3517 = 1;
				INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_3515, iVar0, -1877620321);
				ENTITY::SET_ENTITY_COORDS(iLocal_3515, -1316.738f, 2435.906f, 308.547f, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_3515, 156.925f);
			}
		}
	}
	else
	{
		func_272();
	}
	func_130();
}

void func_43(int* iParam0, var uParam1)
{
	if (func_273())
	{
		func_274(iParam0);
		func_275(0, 0);
		func_276();
	}
	func_277(iParam0);
	func_278(iParam0, uParam1);
	func_279(iParam0);
	func_280(iParam0, uParam1);
	if (!func_282(func_281()))
	{
		return;
	}
	func_283(iParam0);
}

void func_44(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0[2];
	if (VOLUME::_0x92A78D0BEDB332A3(iVar0))
	{
		func_284(iVar0);
		POPULATION::_0x74C2B3DC0B294102(iVar0);
		POPULATION::_0xA1CFB35069D23C23(iVar0);
		COMPANION::_0x7274F84B1501B523(iVar0);
	}
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0[iVar1]))
		{
			func_285(uParam0[iVar1]);
		}
		iVar1++;
	}
}

void func_45(var uParam0)
{
	int iVar0;
	int iVar1;
	
	uParam0->f_1713 = 11;
	iVar0 = 0;
	Global_1357549->f_3[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Colter volCampAreas[CVA_INNER]");
	func_286(Global_1357549->f_3[0], &iVar0, 0, -1347.246f, 2403.319f, 317.4772f, 0f, 0f, -25f, 5.5f, 9.5f, 50f, -1612834106, 0);
	func_286(Global_1357549->f_3[0], &iVar0, 0, -1357.996f, 2425.153f, 324.614f, 0f, 0f, -19f, 8.604f, 6.25f, 50f, -1612834106, 0);
	func_286(Global_1357549->f_3[0], &iVar0, 0, -1321.26f, 2438.339f, 326.5326f, 0f, 0f, -27f, 13f, 6.5f, 50f, -1612834106, 0);
	func_286(Global_1357549->f_3[0], &iVar0, 0, -1353.447f, 2439.784f, 325.5793f, 0f, 0f, -20f, 14f, 8.75f, 50f, -1612834106, 0);
	func_286(Global_1357549->f_3[0], &iVar0, 0, -1349.552f, 2445.316f, 328.9378f, 0f, 0f, -19.5f, 4f, 5f, 50f, -1612834106, 0);
	Global_1357549->f_3[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Colter volCampAreas[CVA_WALK]");
	func_286(Global_1357549->f_3[1], &iVar0, 1, -1341.959f, 2421.997f, 322.0112f, 0f, 0f, -24.44765f, 34.02826f, 35.58308f, 35.03152f, 665633627, 0);
	Global_1357549->f_3[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Colter volCampAreas[CVA_OUTER]");
	Global_1357549->f_3[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Colter volCampAreas[CVA_OUTER_THRESHOLD]");
	func_286(Global_1357549->f_3[2], Global_1357549->f_3[3], 2, -1338.848f, 2440.223f, 325.2181f, 0f, 0f, -11.98408f, 39.34594f, 63.21424f, 35f, 665633627, 0);
	Global_1357549->f_3[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Colter volCampAreas[CVA_SURROUNDING]");
	Global_1357549->f_3[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Colter volCampAreas[CVA_SURROUNDING_THRESHOLD]");
	func_286(Global_1357549->f_3[4], Global_1357549->f_3[5], 4, -1367.268f, 2369.489f, 335.6791f, 0f, 0f, -57.00001f, 24f, 52f, 40f, 665633627, 0);
	func_286(Global_1357549->f_3[4], Global_1357549->f_3[5], 4, -1338.716f, 2437.717f, 338.0552f, 0f, 0f, -9.000002f, 55f, 88f, 40f, 665633627, 0);
	func_286(Global_1357549->f_3[4], Global_1357549->f_3[5], 4, -1302.44f, 2414.538f, 326.3339f, 0f, 0f, -36f, 82f, 142f, 61f, -1612834106, 0);
	Global_1357549->f_3[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1356.208f, 2443.04f, 308.2236f, 0f, 0f, -20.05581f, 5.638631f, 3.954793f, 2.642971f, "Colter volCampAreas[CVA_PROPERTY]");
	iLocal_3513 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1340.843f, 2427.755f, 309.0234f, 0f, 0f, -9.80633f, 10.52594f, 42.87149f, 7.160387f, "Colter - volMuster");
	iVar1 = 0;
	func_287(&iVar1, 4);
	func_287(&iVar1, 5);
	func_287(&iVar1, 0);
	func_287(&iVar1, 15);
	COMPANION::_0x3CAAD93FA5B9579A(iLocal_3513, 2, iVar1);
	iLocal_3514 = VOLUME::_0x0EB78C2B156635B1(-1612834106, -1316.67f, 2436.004f, 310.4444f, 0f, 0f, -28.99999f, 1f, 2f, 4f);
}

void func_46()
{
}

int func_47(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 7:
			if (iParam1 == 1)
			{
				return 1;
			}
			break;
		
		case 8:
			return func_148(73);
	}
	return 0;
}

void func_48(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_4))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_4));
	}
	MISC::CLEAR_BIT(&(uParam0->f_1), 2);
	func_288(uParam0);
	func_289(uParam0);
	if (MISC::IS_BIT_SET(uParam0->f_1, 6))
	{
		func_290(1, uParam0);
	}
	if (uParam0->f_6 != -1)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&(uParam0->f_6), 0);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_5))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_5);
	}
	func_291(uParam0);
}

void func_49(var uParam0)
{
	int iVar0;
	int iVar1;
	
	VOLUME::_0xFD010A2154B40676(&(Global_1357549->f_3[2]), 1030835986);
	VOLUME::_0xFD010A2154B40676(&(Global_1357549->f_3[3]), 1030835986);
	if (uParam0->f_1713 != 0)
	{
		VOLUME::_0xB469CFD9E065EB99(&(Global_1357549->f_3[4]), uParam0->f_1713);
	}
	iVar0 = &Global_1357549->f_3[2];
	POPULATION::_0x18262CAFEBB5FBE1(iVar0, 0, 4787584, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iVar0, 0, 4787584, 0, -1, -1, 0);
	func_292(iVar0, 0);
	func_293(&(Global_1357549->f_3[4]), 0, 0, 0);
	func_294(iVar0, 0);
	func_295(iVar0, 0, 0);
	iVar1 = 0;
	func_287(&iVar1, 0);
	func_287(&iVar1, 14);
	func_287(&iVar1, 16);
	COMPANION::_0x3CAAD93FA5B9579A(iVar0, 2, iVar1);
	func_296(Local_18.f_47, Local_18.f_1714, Local_18.f_1717, &(Global_1357549->f_3[6]));
}

void func_50(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 - (Global_1357549->f_1495 && iParam0));
			break;
	}
}

bool func_51()
{
	return Global_40.f_4283.f_322 > 1;
}

void func_52(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	switch (*uParam1)
	{
		case 0:
			if (func_297(iParam0))
			{
				func_298(iParam0, uParam1);
				func_299(uParam1, 2);
			}
			break;
		
		case 2:
			if (func_297(iParam0))
			{
				if (!MISC::IS_BIT_SET(uParam1->f_1, 2))
				{
					if (MISC::IS_BIT_SET(uParam1->f_1, 5))
					{
						func_289(uParam1);
					}
					if (!MISC::IS_BIT_SET(uParam1->f_1, 3))
					{
						func_300(uParam1);
					}
					if ((!ENTITY::IS_ENTITY_DEAD(Global_35) && VOLUME::_0x92A78D0BEDB332A3(uParam1->f_5)) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam1->f_5, true, 0))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 613911080, false);
					}
					if (!PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (MISC::IS_BIT_SET(uParam1->f_1, 4))
						{
							func_301(uParam1->f_8, 0);
							MISC::CLEAR_BIT(&(uParam1->f_1), 4);
						}
					}
					else if (!MISC::IS_BIT_SET(uParam1->f_1, 4))
					{
						func_301(uParam1->f_8, 1);
						MISC::SET_BIT(&(uParam1->f_1), 4);
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam1->f_1, 3))
					{
						func_288(uParam1);
					}
					if (!MISC::IS_BIT_SET(uParam1->f_1, 5))
					{
						func_302(uParam1);
					}
					if ((ENTITY::IS_ENTITY_DEAD(Global_35) || !VOLUME::_0x92A78D0BEDB332A3(uParam1->f_5)) || !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam1->f_5, true, 0))
					{
						MISC::CLEAR_BIT(&(uParam1->f_1), 2);
					}
					PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
					PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
					PAD::DISABLE_CONTROL_ACTION(0, -2131587435, false);
					PAD::DISABLE_CONTROL_ACTION(0, 255439828, false);
					HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(1842627646, "BLIP_CAMP_HITCH", 1, 0, 0, 0);
				}
			}
			else
			{
				if (MISC::IS_BIT_SET(uParam1->f_1, 5))
				{
					func_289(uParam1);
				}
				if (MISC::IS_BIT_SET(uParam1->f_1, 3))
				{
					func_288(uParam1);
				}
				if (MISC::IS_BIT_SET(uParam1->f_1, 2))
				{
					MISC::CLEAR_BIT(&(uParam1->f_1), 2);
				}
			}
			if (MISC::IS_BIT_SET(uParam1->f_1, 3))
			{
				if (!MISC::IS_BIT_SET(uParam1->f_1, 4))
				{
					if (func_217(uParam1->f_8, 1))
					{
						if (func_303(&iVar0))
						{
							func_304(uParam1->f_8, 1);
							MISC::SET_BIT(&(uParam1->f_1), 2);
						}
						else
						{
							switch (iVar0)
							{
								case -1:
									break;
								
								case 0:
									if (!func_205(611))
									{
										func_305("TF_CAMP_HITCH_MANAGE_HORSES_NO_HORSES", 10000, 0, 0, 0, 1);
										func_306(611);
									}
									break;
								
								case 1:
									if (!func_205(612))
									{
										func_305("TF_CAMP_HITCH_MANAGE_HORSES_HORSE_DEAD", 10000, 0, 0, 0, 1);
										func_306(612);
									}
									break;
								
								case 2:
									if (!func_307())
									{
										if (iParam0 == 7 || iParam0 == 8)
										{
											func_305("TF_CAMP_HITCH_MANAGE_HORSES_UNAVAILABLE_RANCH", 10000, 0, 0, 0, 1);
										}
										else
										{
											func_305("TF_CAMP_HITCH_MANAGE_HORSES_UNAVAILABLE_CAMP", 10000, 0, 0, 0, 1);
										}
									}
									break;
							}
						}
					}
				}
			}
			if (MISC::IS_BIT_SET(uParam1->f_1, 5))
			{
				if (func_222(uParam1->f_10, 1))
				{
					MISC::SET_BIT(&(uParam1->f_1), 7);
					MISC::CLEAR_BIT(&(uParam1->f_1), 2);
					func_290(0, uParam1);
					func_289(uParam1);
					func_299(uParam1, 3);
					return;
				}
				if (func_222(uParam1->f_11, 1))
				{
					uParam1->f_7 = 0;
					MISC::CLEAR_BIT(&(uParam1->f_1), 2);
					MISC::CLEAR_BIT(&(uParam1->f_1), 7);
					func_290(0, uParam1);
					func_289(uParam1);
					func_299(uParam1, 3);
					return;
				}
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (func_222(&(uParam1->f_12[iVar1]), 1))
					{
						uParam1->f_7 = func_308(iVar1);
						MISC::CLEAR_BIT(&(uParam1->f_1), 2);
						MISC::CLEAR_BIT(&(uParam1->f_1), 7);
						func_290(0, uParam1);
						func_289(uParam1);
						func_299(uParam1, 3);
						return;
					}
					iVar1++;
				}
				if (func_222(uParam1->f_9, 1))
				{
					func_289(uParam1);
					MISC::CLEAR_BIT(&(uParam1->f_1), 2);
				}
			}
			break;
		
		case 3:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(800);
				}
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(Global_35, func_309(iParam0), true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, func_310(iParam0));
				if (MISC::IS_BIT_SET(uParam1->f_1, 7))
				{
					func_299(uParam1, 6);
				}
				else
				{
					func_299(uParam1, 4);
				}
			}
			break;
		
		case 4:
			if (!MISC::IS_BIT_SET(uParam1->f_1, 1))
			{
				if (uParam1->f_7 != 0)
				{
					func_311(uParam1->f_7);
				}
				func_313(func_312(iParam0, -1), 0.5f, 1, 1, 0, 0, 0);
				uParam1->f_7 = -1;
				MISC::SET_BIT(&(uParam1->f_1), 1);
				return;
			}
			if (func_314(iParam0, uParam1))
			{
				func_315(0);
				func_316();
				if (func_317(0) == 0)
				{
					func_318(0, 5);
				}
				ENTITY::SET_ENTITY_COORDS(Global_35, func_309(iParam0), true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, func_310(iParam0));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				uParam1->f_2 = MISC::GET_GAME_TIMER() + 500;
				func_299(uParam1, 5);
			}
			break;
		
		case 6:
			if (!MISC::IS_BIT_SET(uParam1->f_1, 8))
			{
				if (func_319())
				{
					func_320();
				}
				func_321(2);
				func_323(func_322(iParam0));
				PLAYER::_0xD2CB0FB0FDCB473D(PLAYER::PLAYER_ID(), 0);
				MISC::CLEAR_AREA(func_322(iParam0), 0.4f, 2442122);
				MISC::SET_BIT(&(uParam1->f_1), 8);
			}
			if (func_324(func_322(iParam0), 0f, 1))
			{
				PHYSICS::ACTIVATE_PHYSICS(Global_1900383->f_393);
				ENTITY::SET_ENTITY_COORDS(Global_35, func_309(iParam0), true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, func_310(iParam0));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				MISC::CLEAR_BIT(&(uParam1->f_1), 8);
				MISC::CLEAR_BIT(&(uParam1->f_1), 7);
				uParam1->f_2 = MISC::GET_GAME_TIMER() + 500;
				func_299(uParam1, 5);
			}
			break;
		
		case 5:
			if (MISC::GET_GAME_TIMER() > uParam1->f_2)
			{
				func_290(1, uParam1);
				func_299(uParam1, 7);
			}
			break;
		
		case 7:
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			else
			{
				uParam1->f_3 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_1), 2);
				func_299(uParam1, 2);
			}
			break;
	}
}

void func_53(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 473, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 474, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 475, false);
	func_252();
	HUD::_0x8BC7C1F929D07BF3(-950624750);
	if (func_38(2097152) && PED::GET_PED_CONFIG_FLAG(Global_35, 334, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 334, false);
		func_50(2097152);
	}
	func_325(uParam0);
	func_326(uParam0);
	func_142(235110816);
	if (!func_164())
	{
		if (!func_12(64))
		{
			func_327(1);
			func_328(0);
		}
		if (bParam1 == 0)
		{
			func_329(1, -1);
		}
		MISC::_0x1096603B519C905F("");
		if (!PED::_0xA911EE21EDF69DAF(PLAYER::PLAYER_PED_ID()) && !(func_330(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), 0) && PED::_0xA911EE21EDF69DAF(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()))))
		{
			PED::_0x9851DE7AEC10B4E1(func_331(func_146()), func_332(), 1, 0);
		}
	}
	if (func_333(4))
	{
		func_334(0);
	}
	PLAYER::_0x9461A8FAB0378E5B(PLAYER::PLAYER_ID(), 0);
	func_335(1, 0, 1103626240);
	if (!func_12(16777216))
	{
		func_336();
		func_142(16777216);
	}
	if (!func_12(2048))
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
		func_142(2048);
	}
	if (func_12(32))
	{
		func_141(1);
		func_142(32);
	}
	if (func_38(1073741824))
	{
		func_50(1073741824);
	}
	func_337(&(uParam0->f_51));
	func_338();
	func_339(uParam0->f_46);
	AUDIO::SET_AUDIO_FLAG("EnableIdleMusic", false);
	func_340(uParam0->f_46, 4);
	func_340(uParam0->f_46, 8);
	func_266(0);
	if (func_56() == -1)
	{
		func_268(0);
	}
	if (func_341(32))
	{
		func_142(4);
		func_142(2);
		func_342(32);
		iVar0 = 0;
		while (iVar0 < &Global_1360165)
		{
			if (!func_343(iVar0) && func_344(iVar0, 0))
			{
				func_345(iVar0);
			}
			iVar0++;
		}
	}
	if (Local_18.f_1721.f_62 == 3)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
		func_89();
		func_346();
	}
	if (func_267() == uParam0->f_46)
	{
		func_347(bParam1);
		func_194(1073741824);
		func_348(0, 0, 0);
	}
	if (func_349(uParam0->f_46, &uVar2, &iVar3, 0, 0))
	{
		iVar1 = uVar2;
		while (iVar1 <= iVar3)
		{
			if (!func_350(iVar1, 0))
			{
				func_351(iVar1);
			}
			iVar1++;
		}
	}
	iVar4 = 0;
	while (iVar4 < 2)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_1663[iVar4])))
		{
			VOLUME::_0x43F867EF5C463A53(&(Global_1357549->f_1663[iVar4]));
		}
		iVar4++;
	}
	func_352();
	func_353();
	func_354(uParam0);
	func_355(uParam0);
	func_356();
	func_357();
	func_358();
	func_198();
	func_359(0);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(func_331(func_146()), 100f);
	if (func_341(8))
	{
		func_360(0);
		func_342(8);
	}
	if (!func_12(64))
	{
		func_163(1);
	}
	if (func_361(1))
	{
		TASK::_0x816A3ACD265E2297(1361896662, 1);
		func_362(1);
	}
	if (func_361(8192))
	{
		TASK::_0x816A3ACD265E2297(-2146271366, 1);
		func_362(8192);
	}
	iVar5 = func_363(7);
	if (ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		PED::SET_PED_CONFIG_FLAG(iVar5, 419, false);
	}
	func_142(229376);
	func_50(2560);
	Global_1357549->f_1896 = 0;
	PED::_0x0ADA3EC589E1736E();
	if (func_364(func_259()))
	{
		func_365(func_259(), 8);
	}
	func_366(&(Local_18.f_2024));
	func_367(&(Local_18.f_2024));
	func_368(&(Local_18.f_2024));
	Local_18.f_43 = 0;
	func_48(&(Global_1357549->f_1691));
	func_369();
	if (Local_18.f_2019 != 0 && func_38(16777216))
	{
		MAP::_0xE057FEA9A22EB3EE(Local_18.f_2019);
		func_50(16777216);
	}
	if (!func_38(67108864))
	{
		FIRE::_0x24DB6B9F2B719043(-1f);
	}
	if (func_38(-2147483648))
	{
		if (func_191(1024))
		{
			func_194(1024);
		}
		if (func_191(64))
		{
			func_194(64);
		}
		if (func_38(131072))
		{
			func_50(131072);
		}
		func_50(-2147483648);
	}
	if (func_146() == 2 || func_146() == 3)
	{
		if (func_370(13, 0) > 1)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-180755040);
		}
	}
	func_371(8);
	func_371(16);
	func_372(Global_1935630, 8388608);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
}

void func_54(char* sParam0, int iParam1, int iParam2)
{
}

void func_55()
{
	if (func_12(32768))
	{
		func_165(2048);
	}
	else
	{
		func_50(2048);
	}
	if (func_38(4194304))
	{
		func_165(8388608);
	}
	else
	{
		func_50(8388608);
	}
}

int func_56()
{
	return Global_1572887->f_12;
}

void func_57()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_58(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_56() != -1)
	{
		return 1;
	}
	if (!func_373(iParam0))
	{
		return 1;
	}
	if (func_349(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1897950->f_1 < iVar0 || Global_1897950->f_1 > iVar1)
		{
			Global_1897950->f_1 = iVar0;
		}
		while (true)
		{
			if (!func_374(Global_1897950->f_1, 16))
			{
				func_375(Global_1897950->f_1, 0);
			}
			Global_1897950->f_1++;
			iVar2++;
			if (Global_1897950->f_1 > iVar1)
			{
				Global_1897950->f_1 = -1;
				return 1;
			}
			if (iVar2 >= 20 && !bParam1)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_59()
{
	int iVar0;
	char cVar1[64];
	
	MISC::_0x9BF2C0C568C61641(1);
	if (func_364(func_376(Local_18.f_46)))
	{
		func_365(func_376(Local_18.f_46), 4);
	}
	if (func_38(32768))
	{
		func_50(32768);
	}
	func_379(func_378(func_377(Local_18.f_46)));
	iVar0 = func_380(func_146());
	func_381(iVar0, 1137976064, 1120952528, -1, 1, 1, 0);
	func_382(Local_18.f_45, Global_40.f_4283.f_4, &(Local_18.f_2019));
	func_264();
	func_45(&Local_18);
	func_49(&Local_18);
	func_383(Global_1898004);
	func_384(Global_1898004, &(Global_1357549->f_3[2]), 1);
	if ((ENTITY::DOES_ENTITY_EXIST(Global_35) && PED::_0xA911EE21EDF69DAF(Global_35)) || (ENTITY::DOES_ENTITY_EXIST(PED::GET_MOUNT(Global_35)) && PED::_0xA911EE21EDF69DAF(PED::GET_MOUNT(Global_35))))
	{
		func_145(33554432);
		func_385(17, -2147483648, 1, -1);
		StringCopy(&cVar1, func_386(func_146()), 64);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
		{
			func_387(17, cVar1, 2);
		}
	}
	if (func_146() == 2 || func_146() == 3)
	{
		if (func_370(13, 0) > 1)
		{
			STREAMING::REQUEST_MODEL(-180755040, false);
		}
	}
	func_388();
	return 1;
}

void func_60(int iParam0, int iParam1, int iParam2)
{
	Local_18.f_1[iParam0] = iParam1;
	Local_18.f_14[iParam0] = iParam2;
}

int func_61()
{
	return func_389(Local_18.f_46);
}

int func_62()
{
	if (func_34(Local_18.f_45))
	{
		if (!MISC::IS_BIT_SET(Local_18.f_43, 1))
		{
			func_390(&(Local_18.f_2024));
			MISC::SET_BIT(&(Local_18.f_43), 1);
		}
		return func_391(&(Local_18.f_2024));
	}
	return 1;
}

int func_63()
{
	if (!MISC::IS_BIT_SET(Local_18.f_43, 4))
	{
		MISC::SET_BIT(&(Local_18.f_43), 4);
	}
	return 1;
}

int func_64()
{
	if (func_146() == 2 || func_146() == 3)
	{
		if (func_370(13, 0) > 1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(-180755040))
			{
				return 0;
			}
		}
	}
	if (func_392())
	{
		if (!func_131(0, 0, 1))
		{
			func_393(func_331(func_146()), func_332(), 0);
			func_394(func_331(func_146()), func_332(), 0);
		}
		return 1;
	}
	return 0;
}

int func_65()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_18.f_3479 == -1)
	{
		func_395(Local_18.f_45, 1, 1);
		Local_18.f_3479 = 0;
	}
	if (func_396(Local_18.f_45))
	{
		iVar0 = func_397(Local_18.f_45);
		iVar1 = 0;
		while (iVar1 < 6)
		{
			func_398(iVar0, Local_18.f_3479, iVar1, 1, 1);
			iVar1++;
		}
		iVar2 = Local_18.f_3479;
		iVar2++;
		Local_18.f_3479 = iVar2;
		if (Local_18.f_3479 >= 26)
		{
			Local_18.f_3479 = -1;
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_66()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	
	uVar0 = func_399();
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_400(iVar1))
		{
			Local_18.f_3402[iVar1] = _NAMESPACE48::_0xA00DF706C60173D1(func_401(iVar1));
			STREAMING::REQUEST_MODEL(&(Local_18.f_3402[iVar1]), false);
			iVar2++;
			if (uVar0 && func_402(iVar1, 32768, 1))
			{
				Local_18.f_3430[iVar1] = _NAMESPACE48::_0xA00DF706C60173D1(func_403(iVar1, 1));
				Local_18.f_3430[iVar1] = &Local_18.f_3430[iVar1];
				STREAMING::REQUEST_MODEL(&(Local_18.f_3430[iVar1]), false);
				iVar2++;
				if (STREAMING::HAS_MODEL_LOADED(&(Local_18.f_3430[iVar1])) && &Local_18.f_3374[iVar1] == 0)
				{
					iVar3 = func_404(iVar1);
					if (PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iVar3, &(Local_18.f_3430[iVar1])))
					{
						Local_18.f_3374[iVar1] = PED::_REQUEST_METAPED_OUTFIT(&(Local_18.f_3430[iVar1]), iVar3);
					}
				}
			}
		}
		if ((iVar2 - Local_18.f_44) > 5)
		{
			Local_18.f_44 = iVar2;
			return 0;
		}
		iVar1++;
	}
	if (Global_40.f_4283.f_567)
	{
		Local_18.f_3478 = func_405();
		if (Local_18.f_3478 != 0)
		{
			STREAMING::REQUEST_MODEL(Local_18.f_3478, false);
			iVar2++;
		}
	}
	if (func_406(Local_18.f_45))
	{
		iVar4 = 0;
		while (iVar4 < 3)
		{
			Global_1357549->f_1675[iVar4 /*5*/] = func_407(iVar4);
			if (&Global_1357549->f_1675[iVar4 /*5*/] == 0)
			{
			}
			else
			{
				Local_18.f_3458[iVar4] = _NAMESPACE48::_0xA00DF706C60173D1(&(Global_1357549->f_1675[iVar4 /*5*/]));
				if (&Local_18.f_3458[iVar4] != 0)
				{
					STREAMING::REQUEST_MODEL(&(Local_18.f_3458[iVar4]), false);
					iVar2++;
					if ((iVar2 - Local_18.f_44) > 5)
					{
						Local_18.f_44 = iVar2;
						return 0;
					}
				}
			}
			iVar4++;
		}
	}
	if (func_349(Local_18.f_46, &uVar6, &iVar7, 0, 1))
	{
		iVar5 = uVar6;
		while (iVar5 <= iVar7)
		{
			if (!func_408(iVar5))
			{
			}
			else if (func_374(iVar5, 32) && Local_18.f_46 != 22)
			{
			}
			else if (iVar8 < 15)
			{
				Local_18.f_3462[iVar8] = _NAMESPACE48::_0xA00DF706C60173D1(func_409(iVar5));
				if (&Local_18.f_3462[iVar8] != 0)
				{
					STREAMING::REQUEST_MODEL(&(Local_18.f_3462[iVar8]), false);
					iVar2++;
					iVar8++;
					if ((iVar2 - Local_18.f_44) > 5)
					{
						Local_18.f_44 = iVar2;
						return 0;
					}
				}
			}
			iVar5++;
		}
	}
	return 1;
}

int func_67()
{
	if (func_34(Local_18.f_45))
	{
		if (!MISC::IS_BIT_SET(Local_18.f_43, 2))
		{
			func_410(Local_18.f_45, &(Local_18.f_2024));
			func_411(&(Local_18.f_2024), &(Global_40.f_4283.f_415));
			MISC::SET_BIT(&(Local_18.f_43), 2);
		}
		return func_412(&(Local_18.f_2024), &(Global_40.f_4283.f_415));
	}
	return 1;
}

int func_68()
{
	bool bVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(Local_18.f_43, 3))
	{
		Local_18.f_42 = MISC::GET_GAME_TIMER() + 15000;
		Global_1357549->f_2 = 0;
		func_413();
		MISC::SET_BIT(&(Local_18.f_43), 3);
	}
	bVar0 = false;
	if (func_414(&Local_18))
	{
		bVar0 = true;
	}
	else if (MISC::GET_GAME_TIMER() > Local_18.f_42)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_415(Local_18.f_46, 4);
		iVar1 = 0;
		while (iVar1 < 27)
		{
			func_416(iVar1, 4, 1);
			iVar1++;
		}
		return 1;
	}
	return 0;
}

int func_69()
{
	return 1;
}

int func_70()
{
	func_417(&Local_18);
	func_46();
	func_418(&(Local_18.f_51));
	func_419();
	func_420();
	func_36(1);
	func_413();
	func_421();
	return 1;
}

int func_71()
{
	if (func_422(32))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(500);
		}
		func_423(32);
	}
	func_325(&Local_18);
	func_326(&Local_18);
	if (!func_12(2048))
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(4000);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 473, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 474, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 475, true);
	func_424(&(Global_1391438->f_5), 32, 1);
	func_425();
	AUDIO::SET_AUDIO_FLAG("EnableIdleMusic", true);
	func_426(0);
	func_415(Local_18.f_46, 8);
	func_165(1073741824);
	return 1;
}

void func_72(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_57();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_73()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	iVar1 = MISC::GET_GAME_TIMER();
	iVar2 = NETWORK::NETWORK_GET_TIMEOUT_TIME();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (MISC::GET_GAME_TIMER() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			func_57();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				
				case 1:
					func_57();
					break;
				
				case 2:
					func_57();
					break;
				
				case 4:
					func_57();
					break;
				
				case 3:
					func_57();
					break;
				
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_57();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_57();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_57();
		}
		if (func_56() == 0)
		{
			if (func_427())
			{
				func_57();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_57();
	}
	return 1;
}

void func_74()
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar0++;
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				
				case 1:
					func_57();
					break;
				
				case 2:
					func_57();
					break;
				
				case 4:
					func_57();
					break;
				
				case 3:
					func_57();
					break;
				
				default:
					break;
			}
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return;
		}
		if (iVar0 >= 3600)
		{
			func_57();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_75(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_40.f_4283.f_2 = (Global_40.f_4283.f_2 || iParam0);
			break;
	}
}

void func_76()
{
	if (func_341(8))
	{
		func_360(0);
		func_342(8);
	}
	if (func_341(4))
	{
		func_163(1);
		func_342(4);
	}
	Local_18.f_1718 = 0;
	if (ITEMSET::IS_ITEMSET_VALID(Local_18.f_1718.f_1))
	{
		ITEMSET::DESTROY_ITEMSET(Local_18.f_1718.f_1);
	}
	if (func_341(32))
	{
		func_342(32);
	}
	Local_18.f_1718.f_1 = ITEMSET::CREATE_ITEMSET(false);
}

int func_77()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (func_232(180573150, 1))
	{
		return -1;
	}
	if (func_12(4))
	{
		return -1;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return -1;
	}
	if (PED::_0x5407B7288D0478B7(Global_35, 516) == 0)
	{
		return -1;
	}
	if (PED::_0x336B3D200AB007CB(Global_35, Global_36, 100f, 512) == 0)
	{
		return -1;
	}
	if (func_131(0, 0, 1))
	{
		return -1;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-443368600) > 0)
	{
		return -1;
	}
	bVar0 = ((Local_18.f_45 == 7 || Local_18.f_45 == 8) || Local_18.f_45 == 4);
	if (!func_341(1))
	{
		if (LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID()))
		{
			if (bVar0)
			{
				func_305("RANCH_LAW_WARN", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_305("CAMP_LAW_WARN", 10000, 0, 0, 0, 1);
			}
		}
		else if (bVar0)
		{
			func_305("RANCH_COMBAT_WARN", 10000, 0, 0, 0, 1);
		}
		else
		{
			func_305("CAMP_COMBAT_WARN", 10000, 0, 0, 0, 1);
		}
		func_428(1);
	}
	if (!bVar0)
	{
		func_429();
	}
	if (func_38(512))
	{
		if (bVar0)
		{
			func_429();
			return 2;
		}
		else
		{
			return 1;
		}
	}
	if (Global_1357549->f_1497 != -1)
	{
		iVar1 = func_177(Global_1357549->f_1497);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar2 = func_430(Local_18.f_1718.f_1);
			iVar3 = 0;
			while (iVar3 < iVar2)
			{
				iVar4 = MISC::_0x3FFB15534067DCD4(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, Local_18.f_1718.f_1));
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iVar1, iVar4, 17))
				{
					if (bVar0)
					{
						func_429();
						return 2;
					}
					else
					{
						return 1;
					}
				}
				iVar3++;
			}
		}
	}
	return -1;
}

void func_78()
{
	if (Local_18.f_45 == 7 || Local_18.f_45 == 8)
	{
		if (LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID()))
		{
			func_305("RANCH_LAW_GRIEF", 10000, 0, 0, 0, 1);
			func_431(2, 158959085, 0, "RANCH_LAW_HON", 0, 0, 1065353216, 0);
		}
		else
		{
			func_305("RANCH_COMBAT_GRIEF", 10000, 0, 0, 0, 1);
			func_431(2, 158959085, 0, "RANCH_COMBAT_HON", 0, 0, 1065353216, 0);
		}
	}
	else if (LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID()))
	{
		func_305("CAMP_LAW_GRIEF", 10000, 0, 0, 0, 1);
		func_431(2, 158959085, 0, "CAMP_LAW_HON", 0, 0, 1065353216, 0);
	}
	else
	{
		func_305("CAMP_COMBAT_GRIEF", 10000, 0, 0, 0, 1);
		func_431(2, 158959085, 0, "CAMP_COMBAT_HON", 0, 0, 1065353216, 0);
	}
	func_432();
}

void func_79(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	iParam0->f_1[iVar0 /*3*/] = iParam2;
	(iParam0->f_1[iVar0 /*3*/])->f_1 = iParam3;
	(iParam0->f_1[iVar0 /*3*/])->f_2 = iParam4;
}

void func_80()
{
	func_145(4);
	func_145(2);
	func_428(32);
	Local_18.f_1718.f_2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
}

int func_81()
{
	int iVar0;
	struct<7> Var1;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	vector3 vVar25;
	
	func_433();
	func_434();
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (func_131(0, 0, 1))
	{
		return 0;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-443368600) > 0)
	{
		return 0;
	}
	if (MISC::GET_GAME_TIMER() < Local_18.f_1718.f_2)
	{
		return -1;
	}
	iVar0 = func_430(Local_18.f_1718.f_1);
	if (iVar0 == 0)
	{
		return 3;
	}
	Var1.f_8 = -1082130432;
	iVar21 = 0;
	while (iVar21 < iVar0)
	{
		iVar22 = MISC::_0x3FFB15534067DCD4(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar21, Local_18.f_1718.f_1));
		if (ENTITY::IS_ENTITY_DEAD(iVar22))
		{
		}
		else
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
			{
				case 0:
					iVar23 = 21030;
					break;
				
				case 1:
					iVar23 = 14284;
					break;
				
				case 2:
					iVar23 = 65478;
					break;
				
				case 3:
					iVar23 = 6884;
					break;
				
				case 4:
					iVar23 = 56200;
					break;
				
				case 5:
					iVar23 = 0;
					break;
			}
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
			{
				case 0:
					iVar24 = -183018591;
					break;
				
				case 1:
					iVar24 = 1676963302;
					break;
			}
			vVar25 = { func_435(func_331(func_146()), 50f, 2f) };
			Var1.f_14 = 1;
			Var1.f_13 = 0;
			Var1.f_16 = 1;
			Var1.f_18 = 1;
			Var1.f_19 = 0;
			Var1.f_12 = 1;
			Var1.f_7 = 200f;
			Var1.f_10 = iVar22;
			Var1 = { vVar25 };
			Var1.f_3 = { PED::GET_PED_BONE_COORDS(iVar22, iVar23, 0f, 0f, 0f) };
			Var1.f_6 = iVar24;
			MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var1);
			ENTITY::_SET_ENTITY_HEALTH(iVar22, 0, 0);
			if (iVar0 <= 1)
			{
				Local_18.f_1718.f_2 = MISC::GET_GAME_TIMER() + 4000;
			}
			else
			{
				Local_18.f_1718.f_2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000));
			}
		}
		else
		{
			iVar21++;
		}
	}
	return -1;
}

void func_82()
{
	Local_18.f_3373 = -1;
	func_142(2);
	func_142(4);
	func_342(32);
}

void func_83()
{
	func_145(4);
	func_145(2);
	func_428(32);
	Local_18.f_1718.f_2 = MISC::GET_GAME_TIMER() + 5000;
}

int func_84()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar20;
	int iVar21;
	
	func_433();
	func_434();
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (func_131(0, 0, 1))
	{
		return 0;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-443368600) > 0)
	{
		return 0;
	}
	iVar0 = func_430(Local_18.f_1718.f_1);
	if (iVar0 == 0)
	{
		return 3;
	}
	if (MISC::GET_GAME_TIMER() < Local_18.f_1718.f_2)
	{
		return -1;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = MISC::_0x3FFB15534067DCD4(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Local_18.f_1718.f_1));
		if (ENTITY::IS_ENTITY_DEAD(iVar2))
		{
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_35, iVar2, 1, 1))
		{
			ENTITY::_SET_ENTITY_HEALTH(Global_35, 0, iVar2);
			func_142(4);
			func_142(2);
			return -1;
		}
		iVar1++;
	}
	if (!func_341(16))
	{
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			iVar20 = MISC::_0x3FFB15534067DCD4(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Local_18.f_1718.f_1));
			if (ENTITY::IS_ENTITY_DEAD(iVar20))
			{
			}
			else
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
				{
					case 0:
						iVar21 = 21030;
						break;
					
					case 1:
						iVar21 = 14284;
						break;
					
					case 2:
						iVar21 = 65478;
						break;
					
					case 3:
						iVar21 = 6884;
						break;
					
					case 4:
						iVar21 = 56200;
						break;
					
					case 5:
						iVar21 = 0;
						break;
				}
				Var3.f_14 = 1;
				Var3.f_6 = 0;
				Var3.f_4 = 1500;
				Var3.f_5 = 0;
				Var3.f_7 = 1;
				Var3.f_10 = 1;
				Var3.f_11 = 1f;
				Var3.f_1 = { PED::GET_PED_BONE_COORDS(Global_35, iVar21, 0f, 0f, 0f) };
				Var3.f_15 = 1;
				WEAPON::_0x5230D3F6EE56CFE6(iVar20, 0);
				TASK::TASK_SHOOT_WITH_WEAPON(iVar20, &Var3);
			}
			iVar1++;
		}
		func_428(16);
	}
	return -1;
}

void func_85()
{
	Local_18.f_3373 = -1;
	func_142(2);
	func_142(4);
	func_342(32);
}

void func_86()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
	CAM::DO_SCREEN_FADE_OUT(3000);
}

int func_87()
{
	func_433();
	if (func_131(0, 0, 1) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-443368600) > 0)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		return 0;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 4;
	}
	return -1;
}

void func_88()
{
}

void func_89()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		TASK::TASK_DISMOUNT_ANIMAL(Global_35, 16, 0, 0, 0, 0);
	}
	PLAYER::_0x8674D138391FFB1B(PLAYER::GET_PLAYER_INDEX(), 1);
	vVar2 = { func_436(func_146(), &uVar0, &uVar1) };
	func_437(vVar2, uVar1, uVar0, 0);
	func_438(0);
	func_439();
	func_440(6);
	func_441(4096);
	Global_1310720->f_6 = 1;
	Global_1310720->f_17 = 8;
	iVar5 = 0;
	while (iVar5 < 27)
	{
		iVar6 = func_177(iVar5);
		if (ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			PED::_0x06D26A96CA1BCA75(iVar6, 1, 0f, 0);
		}
		iVar5++;
	}
	func_442();
}

int func_90()
{
	func_433();
	if (func_195())
	{
		func_346();
		return 0;
	}
	return -1;
}

void func_91(int* iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	*iParam0 = iVar0;
	func_443(iParam0);
}

void func_92()
{
	Local_18.f_1786 &= 8193;
	Local_18.f_1786.f_1 = 0;
	Local_18.f_1786.f_2 = 0;
	Local_18.f_1786.f_3 = 0;
	Local_18.f_1786.f_5 = 0;
	Local_18.f_1786.f_7 = 0;
	Local_18.f_1786.f_8 = 0;
	Local_18.f_1786.f_10 = -1;
}

int func_93()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	
	if (func_38(64) && func_38(32))
	{
		return -1;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return -1;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[4])))
	{
		return -1;
	}
	if (func_361(1))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[4]), false, 0))
		{
			TASK::_0x816A3ACD265E2297(1361896662, 1);
			func_362(1);
		}
	}
	if (func_361(8192))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[4]), false, 0))
		{
			TASK::_0x816A3ACD265E2297(-2146271366, 1);
			func_362(8192);
		}
	}
	if (func_361(4096))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[4]), false, 0))
		{
			func_362(4096);
		}
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[5]), false, 0))
	{
		return -1;
	}
	if (func_361(4096))
	{
		func_444(0);
	}
	bVar0 = false;
	if (func_445(Global_35, &(Local_18.f_1786.f_7), &bVar0))
	{
		if (bVar0)
		{
			if (!func_38(64))
			{
				func_446(2);
			}
		}
		else if (!func_38(32))
		{
			func_446(4);
		}
	}
	else if (func_447(Global_35, &(Local_18.f_1786.f_7), &bVar0))
	{
		if (bVar0)
		{
			if (!func_38(64))
			{
				func_446(32);
			}
		}
		else if (!func_38(32))
		{
			func_446(64);
		}
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		Local_18.f_1786.f_5 = PED::GET_MOUNT(Global_35);
		if (func_445(Local_18.f_1786.f_5, &(Local_18.f_1786.f_8), &bVar0))
		{
			if (bVar0)
			{
				if (!func_38(64))
				{
					func_446(8);
				}
			}
			else if (!func_38(32))
			{
				func_446(16);
			}
		}
	}
	else if (TASK::_0xEFC4303DDC6E60D3(Global_35))
	{
		Local_18.f_1786.f_5 = TASK::_0xED1F514AF4732258(Global_35);
		if (func_445(Local_18.f_1786.f_5, &(Local_18.f_1786.f_8), &bVar0))
		{
			if (bVar0)
			{
				if (!func_38(64))
				{
					func_446(8);
				}
			}
			else if (!func_38(32))
			{
				func_446(16);
			}
		}
	}
	else
	{
		Local_18.f_1786.f_5 = func_363(0);
		if (func_330(Local_18.f_1786.f_5, 0) && func_448(Local_18.f_1786.f_5, 2043986356))
		{
			if (func_445(Local_18.f_1786.f_5, &(Local_18.f_1786.f_8), &bVar0))
			{
				if (bVar0)
				{
					if (!func_38(64))
					{
						func_446(8);
					}
				}
				else if (!func_38(32))
				{
					func_446(16);
				}
			}
		}
	}
	bVar1 = false;
	Local_18.f_1786.f_6 = func_363(1);
	if ((func_330(Local_18.f_1786.f_6, 0) && Local_18.f_1786.f_5 != Local_18.f_1786.f_6) && func_448(Local_18.f_1786.f_6, 2043986356))
	{
		bVar1 = true;
	}
	else
	{
		Local_18.f_1786.f_6 = func_363(0);
		if ((func_330(Local_18.f_1786.f_6, 0) && Local_18.f_1786.f_5 != Local_18.f_1786.f_6) && func_448(Local_18.f_1786.f_6, 2043986356))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (func_445(Local_18.f_1786.f_6, &(Local_18.f_1786.f_9), &bVar0))
		{
			if (bVar0)
			{
				func_446(2048);
			}
			else
			{
				func_446(1024);
			}
		}
	}
	if (((((((func_361(2) || func_361(4)) || func_361(8)) || func_361(16)) || func_361(32)) || func_361(64)) || func_361(2048)) || func_361(1024))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
		if (func_449())
		{
			return 6;
		}
		else
		{
			return 1;
		}
	}
	if (!func_361(4096) && func_449())
	{
		iVar2 = func_363(1);
		if (func_445(iVar2, &uVar3, &bVar0))
		{
			func_446(4096);
		}
		else
		{
			iVar2 = func_363(0);
			if (func_445(iVar2, &uVar3, &bVar0))
			{
				func_446(4096);
			}
		}
	}
	if ((!func_361(1) && !func_361(4096)) && !func_38(64))
	{
		TASK::_0x816A3ACD265E2297(1361896662, 0);
		func_446(1);
	}
	if ((!func_361(8192) && !func_361(4096)) && !func_38(32))
	{
		TASK::_0x816A3ACD265E2297(-2146271366, 0);
		func_446(8192);
	}
	return -1;
}

void func_94()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0);
	Local_18.f_1786.f_10 = func_450(1, 8);
	Local_18.f_1786.f_2 = MISC::GET_GAME_TIMER() + 3000;
	if ((func_361(2) || func_361(8)) || func_361(32))
	{
		func_207(535, 0);
	}
	if ((func_361(4) || func_361(16)) || func_361(64))
	{
		func_207(536, 0);
	}
}

int func_95()
{
	int iVar0;
	
	if ((func_361(8) || func_361(16)) || func_361(64))
	{
		func_451(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584, 100, 0, 0);
	}
	if (func_361(2048) || func_361(1024))
	{
		func_451(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584, 100, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 5;
	}
	if (Local_18.f_1786.f_10 == -1)
	{
		return 2;
	}
	if (MISC::GET_GAME_TIMER() > Local_18.f_1786.f_2)
	{
		return 2;
	}
	iVar0 = func_177(Local_18.f_1786.f_10);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		Local_18.f_1786.f_10 = func_450(1, 8);
		return -1;
	}
	if (MISC::GET_GAME_TIMER() < Local_18.f_1786.f_1)
	{
		return -1;
	}
	if (!func_361(128))
	{
		if (func_178(iVar0, "GENERIC_ANGRY_REACTION", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_446(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
		if (func_178(iVar0, "GENERIC_SHOCKED_DISBELIEF", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_446(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
		if (func_178(iVar0, "STOP_THAT", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_446(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
		if (func_178(iVar0, "STOP_THAT_ANNOYED", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_446(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
		if (func_178(iVar0, "CUT_THAT_OUT", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_446(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
		if (func_178(iVar0, "GENERIC_INTERRUPT", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_446(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
	}
	else if (!func_361(256))
	{
		if ((func_361(2) || func_361(8)) || func_361(32))
		{
			if (func_178(iVar0, "GREET_PLAYER_DEAD_BODY", -1323320425, Global_35, 0, 0, 0, 1))
			{
				func_446(256);
				return 2;
			}
			if (func_178(iVar0, "GREET_PLAYER_DEAD_BODY_INNOCENT", -1323320425, Global_35, 0, 0, 0, 1))
			{
				func_446(256);
				return 2;
			}
			if (func_178(iVar0, "GREET_PLAYER_DEAD_BODY_LONGTIME", -1323320425, Global_35, 0, 0, 0, 1))
			{
				func_446(256);
				return 2;
			}
		}
		if ((func_361(4) || func_361(16)) || func_361(64))
		{
			if (func_178(iVar0, "GREET_PLAYER_HOGTIED_BODY", -1323320425, Global_35, 0, 0, 0, 1))
			{
				func_446(256);
				return 2;
			}
			if (func_178(iVar0, "GREET_PLAYER_HOGTIED_BODY_INNOCENT", -1323320425, Global_35, 0, 0, 0, 1))
			{
				func_446(256);
				return 2;
			}
		}
		if (func_178(iVar0, "SHAME_ON_YOU", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_446(256);
			return 2;
		}
		if (func_178(iVar0, "KNOCKOUT_WARNING", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_446(256);
			return 2;
		}
	}
	return -1;
}

int func_96()
{
	bool bVar0;
	
	bVar0 = true;
	if ((func_361(8) || func_361(16)) || func_361(64))
	{
		bVar0 = func_451(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584, 100, 0, 0);
	}
	if (func_361(2048) || func_361(1024))
	{
		bVar0 = func_451(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584, 100, 0, 0);
	}
	if (bVar0)
	{
		if (func_452(3072))
		{
			return 4;
		}
		else
		{
			return 3;
		}
	}
	return -1;
}

void func_97()
{
	int iVar0;
	
	if (((func_361(2) || func_361(4)) || func_361(8)) || func_361(16))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (func_361(2) || func_361(4))
		{
			if (PED::_0xA911EE21EDF69DAF(Global_35))
			{
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, Local_18.f_1786.f_7, 0f, 0f, 0f, 1073741824, 1);
			}
			if (func_361(4))
			{
				if (PED::_0x3AA24CCC0D451379(Local_18.f_1786.f_7))
				{
					ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_7, 1, 1);
					TASK::_TASK_CUT_FREE_HOGTIED_TARGET_PED(0, Local_18.f_1786.f_7);
				}
			}
		}
		if (func_361(8) || func_361(16))
		{
			func_451(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584, 100, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_5) && !ENTITY::IS_ENTITY_DEAD(Local_18.f_1786.f_5))
			{
				if (PED::_0xA911EE21EDF69DAF(Local_18.f_1786.f_5))
				{
					if (TASK::_0xEFC4303DDC6E60D3(Global_35))
					{
						TASK::_0xED27560703F37258(0);
					}
					if (!PED::IS_PED_ON_MOUNT(Global_35))
					{
						TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, Local_18.f_1786.f_8);
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, Local_18.f_1786.f_8, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_18.f_1786.f_5, 0f, -1.5f, 0f), 1f, 8);
					}
					else
					{
						TASK::TASK_DUMP_CARRIABLE_FROM_PARENT(0, Local_18.f_1786.f_5, Local_18.f_1786.f_8);
						if (func_361(16))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_18.f_1786.f_5, 0f, 3f, 0f), 1f, 20000, 0.25f, false, 40000f);
						}
						TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
					}
				}
			}
			if (func_361(16))
			{
				if (PED::_0x3AA24CCC0D451379(Local_18.f_1786.f_8))
				{
					ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_8, 1, 1);
					TASK::_TASK_CUT_FREE_HOGTIED_TARGET_PED(0, Local_18.f_1786.f_8);
				}
			}
		}
		func_453(Global_35, &iVar0, 0, 0, 1, 1);
		Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
	}
	if (func_361(32) || func_361(64))
	{
		func_451(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584, 100, 0, 0);
		PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
		PED::SET_PED_RESET_FLAG(Global_35, 295, true);
	}
}

int func_98()
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 5;
	}
	if (func_361(128) || func_361(256))
	{
		if (!func_361(512))
		{
			if (func_178(Global_35, "PLAYER_REACTION_CAUGHT_OUT", 1017772929, 0, 0, 0, 0, 1))
			{
				func_446(512);
			}
		}
	}
	if (func_361(2048) || func_361(1024))
	{
		func_451(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584, 100, 0, 0);
	}
	func_451(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584, 100, 0, 0);
	if ((((Local_18.f_1786.f_1 > MISC::GET_GAME_TIMER() || func_448(Global_35, -208384378)) || func_448(Global_35, -1619621311)) || func_448(Global_35, 724175444)) || func_448(Global_35, 242628503))
	{
		return -1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_7))
	{
		if (TASK::_0x0CCFE72B43C9CF96(Local_18.f_1786.f_7))
		{
			TASK::_0x9EBD34958AB6F824(Local_18.f_1786.f_7);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_18.f_1786.f_7))
		{
			TASK::TASK_SMART_FLEE_COORD(Local_18.f_1786.f_7, func_454(Local_18.f_45), 999f, -1, false, 1077936128);
		}
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_7, 0, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_7, 2, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_7, 3, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_8))
	{
		if (TASK::_0x0CCFE72B43C9CF96(Local_18.f_1786.f_8))
		{
			TASK::TASK_HORSE_ACTION(Local_18.f_1786.f_5, 1, 0, 0);
			TASK::_0x9EBD34958AB6F824(Local_18.f_1786.f_8);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_18.f_1786.f_8))
		{
			TASK::TASK_SMART_FLEE_COORD(Local_18.f_1786.f_8, func_454(Local_18.f_45), 999f, -1, false, 1077936128);
		}
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_8, 0, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_8, 2, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_8, 3, 0);
	}
	if (func_361(2048) || func_361(1024))
	{
		return 4;
	}
	if (!func_361(1) && !func_38(64))
	{
		TASK::_0x816A3ACD265E2297(1361896662, 0);
		func_446(1);
	}
	if (!func_361(8192) && !func_38(32))
	{
		TASK::_0x816A3ACD265E2297(-2146271366, 0);
		func_446(8192);
	}
	return 5;
}

void func_99()
{
	int iVar0;
	
	func_451(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584, 100, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_6) && !ENTITY::IS_ENTITY_DEAD(Local_18.f_1786.f_6))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_9))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			}
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, Local_18.f_1786.f_9);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, Local_18.f_1786.f_9, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_18.f_1786.f_6, 0f, -1.5f, 0f), 1f, 8);
			if (func_361(16))
			{
				if (PED::_0x3AA24CCC0D451379(Local_18.f_1786.f_9))
				{
					ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_9, 1, 1);
					TASK::_TASK_CUT_FREE_HOGTIED_TARGET_PED(0, Local_18.f_1786.f_9);
				}
			}
			func_453(Global_35, &iVar0, 0, 0, 1, 1);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 500;
		}
	}
}

int func_100()
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 5;
	}
	func_451(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584, 100, 0, 0);
	if (func_361(128) || func_361(256))
	{
		if (!func_361(512))
		{
			if (func_178(Global_35, "PLAYER_REACTION_CAUGHT_OUT", 1017772929, 0, 0, 0, 0, 1))
			{
				func_446(512);
			}
		}
	}
	if ((((Local_18.f_1786.f_1 > MISC::GET_GAME_TIMER() || func_448(Global_35, -208384378)) || func_448(Global_35, -1619621311)) || func_448(Global_35, 724175444)) || func_448(Global_35, 242628503))
	{
		return -1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_9))
	{
		if (TASK::_0x0CCFE72B43C9CF96(Local_18.f_1786.f_9))
		{
			TASK::TASK_HORSE_ACTION(Local_18.f_1786.f_6, 1, 0, 0);
			TASK::_0x9EBD34958AB6F824(Local_18.f_1786.f_9);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_18.f_1786.f_9))
		{
			TASK::TASK_SMART_FLEE_COORD(Local_18.f_1786.f_9, func_454(Local_18.f_45), 999f, -1, false, 1077936128);
		}
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_9, 0, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_9, 2, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_9, 3, 0);
	}
	if (!func_361(1) && !func_38(64))
	{
		TASK::_0x816A3ACD265E2297(1361896662, 0);
		func_446(1);
	}
	if (!func_361(8192) && !func_38(32))
	{
		TASK::_0x816A3ACD265E2297(-2146271366, 0);
		func_446(8192);
	}
	return 5;
}

void func_101()
{
	Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
}

int func_102()
{
	if (MISC::GET_GAME_TIMER() > Local_18.f_1786.f_1)
	{
		if (func_361(2))
		{
			func_362(2);
			func_431(3, -1972216640, 0, "CAMP_DBODY_HON", 0, 0, 1065353216, 0);
			if (((((func_361(8) || func_361(16)) || func_361(32)) || func_361(64)) || func_361(2048)) || func_361(1024))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (func_361(4))
		{
			func_362(4);
			func_431(3, -1972216640, 0, "CAMP_HOGT_HON", 0, 0, 1065353216, 0);
			if (((((func_361(8) || func_361(16)) || func_361(32)) || func_361(64)) || func_361(2048)) || func_361(1024))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (func_361(8))
		{
			func_362(8);
			func_431(3, -1972216640, 0, "CAMP_DBODY_HON", 0, 0, 1065353216, 0);
			if (((func_361(32) || func_361(64)) || func_361(2048)) || func_361(1024))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (func_361(16))
		{
			func_362(16);
			func_431(3, -1972216640, 0, "CAMP_HOGT_HON", 0, 0, 1065353216, 0);
			if (((func_361(32) || func_361(64)) || func_361(2048)) || func_361(1024))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (func_361(2048))
		{
			func_362(2048);
			func_431(3, -1972216640, 0, "CAMP_DBODY_HON", 0, 0, 1065353216, 0);
			if (func_361(32) || func_361(64))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (func_361(1024))
		{
			func_362(1024);
			func_431(3, -1972216640, 0, "CAMP_HOGT_HON", 0, 0, 1065353216, 0);
			if (func_361(32) || func_361(64))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (func_361(32))
		{
			func_362(32);
			func_431(3, -1972216640, 0, "CAMP_DBODY_HON", 0, 0, 1065353216, 0);
		}
		if (func_361(64))
		{
			func_362(64);
			func_431(3, -1972216640, 0, "CAMP_HOGT_HON", 0, 0, 1065353216, 0);
		}
		return 0;
	}
	return -1;
}

void func_103()
{
	vector3 vVar0;
	vector3 vVar3;
	
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
	vVar0 = { func_455() };
	vVar0.f_2 = 0f;
	vVar0 = { vVar0 * Vector(20f, 20f, 20f) };
	vVar3 = { Global_36 - vVar0 };
	TASK::TASK_SMART_FLEE_COORD(Global_35, vVar3, 2000f, -1, 8388608, 1f);
}

int func_104()
{
	if (!func_456(Global_35, &(Global_1357549->f_3[4]), 1, 0))
	{
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
		return 0;
	}
	return -1;
}

void func_105()
{
	Local_18.f_1862 = 0;
	Local_18.f_1862.f_1 = 0;
	Local_18.f_1862.f_2 = 0;
	Local_18.f_1862.f_3 = -1;
	Local_18.f_1862.f_5 = func_457();
	if (Local_18.f_1862.f_4 != -1)
	{
		func_458(Local_18.f_1862.f_4, 256);
	}
	Local_18.f_1862.f_4 = -1;
}

int func_106()
{
	vector3 vVar0;
	var uVar3;
	
	if (func_38(1))
	{
		if (func_131(0, 0, 1))
		{
			return -1;
		}
		else
		{
			func_50(1);
		}
	}
	if ((func_132(&Global_1935630, 16384) || func_135(func_134(func_133()), 256)) || STREAMING::_0x99F92061EFE908BA())
	{
		return -1;
	}
	if (Local_18.f_1721.f_62 > 0)
	{
		return -1;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return -1;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[0])))
	{
		return -1;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[0]), false, 0))
	{
		return -1;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (func_459(func_146(), &vVar0, &uVar3) && BUILTIN::VDIST2(vVar0, Global_36) < 4f)
		{
			return -1;
		}
		Local_18.f_1862.f_5 = PED::GET_MOUNT(Global_35);
		func_460(1);
	}
	if (TASK::_0xEFC4303DDC6E60D3(Global_35))
	{
		Local_18.f_1862.f_5 = TASK::_0xED1F514AF4732258(Global_35);
		func_460(2);
	}
	if (!func_461(1) && !func_461(2))
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_1862.f_5) || ENTITY::IS_ENTITY_DEAD(Local_18.f_1862.f_5))
	{
		return -1;
	}
	return 1;
}

void func_107()
{
	Local_18.f_1862.f_3 = func_450(1, 8);
	Local_18.f_1862.f_1 = MISC::GET_GAME_TIMER() + 1500;
}

int func_108()
{
	int iVar0;
	
	PAD::DISABLE_CONTROL_ACTION(0, -1453452184, false);
	if (func_38(1))
	{
		if (func_131(0, 0, 1))
		{
			return 0;
		}
	}
	if (func_132(&Global_1935630, 16384) || STREAMING::_0x99F92061EFE908BA())
	{
		return 0;
	}
	if (Local_18.f_1721.f_62 > 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 184, true);
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[0]), false, 0))
	{
		return 0;
	}
	if (func_461(1))
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			return 3;
		}
	}
	if (func_461(2))
	{
		if (!TASK::_0xEFC4303DDC6E60D3(Global_35))
		{
			return 3;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_1862.f_5) || ENTITY::IS_ENTITY_DEAD(Local_18.f_1862.f_5))
	{
		return 0;
	}
	if (Local_18.f_1862.f_3 == -1)
	{
		return 2;
	}
	if (MISC::GET_GAME_TIMER() > Local_18.f_1862.f_1)
	{
		return 2;
	}
	iVar0 = func_177(Local_18.f_1862.f_3);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		Local_18.f_1862.f_3 = func_450(1, 8);
		return -1;
	}
	if (!func_461(4))
	{
		if (func_178(iVar0, "RIDING_HORSE_IN_CAMP", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_460(4);
			return 2;
		}
		if (func_178(iVar0, "SHAME_ON_YOU", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_460(4);
			return 2;
		}
		if (func_178(iVar0, "SHAME_ON_YOU_DOWN", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_460(4);
			return 2;
		}
		if (func_178(iVar0, "PLAYER_ACTING_WEIRD", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_460(4);
			return 2;
		}
		if (func_178(iVar0, "PLAYER_ACTING_WEIRD_DOWN", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_460(4);
			return 2;
		}
	}
	return -1;
}

void func_109()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0);
	if (!func_463(func_462(44)) && func_146() != 0)
	{
		func_207(533, 0);
	}
	Local_18.f_1862.f_4 = func_464(Local_18.f_1862.f_5);
	if (Local_18.f_1862.f_4 != -1)
	{
		func_465(Local_18.f_1862.f_4, 256);
	}
	Local_18.f_1862.f_1 = MISC::GET_GAME_TIMER();
	if (func_146() != 0)
	{
		Local_18.f_1862.f_1 += 1200;
	}
}

int func_110()
{
	PAD::DISABLE_CONTROL_ACTION(0, -1453452184, false);
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 184, true);
	if (func_132(&Global_1935630, 16384) || STREAMING::_0x99F92061EFE908BA())
	{
		return 0;
	}
	if (!func_461(4))
	{
		if (func_38(1))
		{
			if (func_131(0, 0, 1))
			{
				return 0;
			}
		}
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[0]), false, 0))
		{
			return 0;
		}
	}
	if (func_461(1))
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0f, true, false);
			return 3;
		}
	}
	if (func_461(2))
	{
		if (!TASK::_0xEFC4303DDC6E60D3(Global_35))
		{
			return 3;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_1862.f_5) || ENTITY::IS_ENTITY_DEAD(Local_18.f_1862.f_5))
	{
		return 0;
	}
	func_451(Local_18.f_1862.f_5, &(Local_18.f_1862.f_2), 32, 0, 0, 1084227584, 100, 0, 0);
	if (MISC::GET_GAME_TIMER() < Local_18.f_1862.f_1)
	{
		return -1;
	}
	if (func_461(4))
	{
		if (!func_461(8))
		{
			if (func_178(Global_35, "DEFUSE_ARGUMENT_TOUGH", 1017772929, 0, 0, 0, 0, 1))
			{
				func_460(8);
				Local_18.f_1862.f_1 = MISC::GET_GAME_TIMER() + 1000;
				return -1;
			}
		}
	}
	if (func_461(1))
	{
		if (!func_448(Global_35, 501393341))
		{
			TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
		}
	}
	if (func_461(2))
	{
		if (!func_461(64))
		{
			TASK::_0xED27560703F37258(Global_35);
			func_460(64);
		}
	}
	return -1;
}

void func_111()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
}

void func_112()
{
	PED::SET_PED_CONFIG_FLAG(Local_18.f_1862.f_5, 419, true);
	PED::SET_PED_CONFIG_FLAG(Local_18.f_1862.f_5, 412, true);
	PED::SET_PED_CONFIG_FLAG(Local_18.f_1862.f_5, 355, true);
	Local_18.f_1862.f_1 = MISC::GET_GAME_TIMER() + 10000;
}

int func_113()
{
	if (func_461(1) && !func_461(32))
	{
		if (func_466(Global_35, Local_18.f_1862.f_5, 1, 1) > 2f || MISC::GET_GAME_TIMER() > Local_18.f_1862.f_1)
		{
			Local_18.f_1862.f_1 = MISC::GET_GAME_TIMER() + 10000;
			func_467(1);
		}
		else
		{
			return -1;
		}
	}
	ENTITY::_0xC3ABCFBC7D74AFA5(Local_18.f_1862.f_5, 6, 1);
	if (func_38(1))
	{
		if (func_131(0, 0, 1))
		{
			return 0;
		}
	}
	if (func_132(&Global_1935630, 16384) || STREAMING::_0x99F92061EFE908BA())
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_1862.f_5) || ENTITY::IS_ENTITY_DEAD(Local_18.f_1862.f_5))
	{
		return 0;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 184, true);
	if (!func_461(16))
	{
		if (func_178(Global_35, "SPURS_HORSE", 1017772929, 0, 0, 0, 0, 1))
		{
			func_460(16);
		}
	}
	if (MISC::GET_GAME_TIMER() > Local_18.f_1862.f_1)
	{
		return 0;
	}
	if (!TASK::_0x841475AC96E794D1(Local_18.f_1862.f_6))
	{
		Local_18.f_1862.f_6 = func_468();
	}
	if (TASK::_0x841475AC96E794D1(Local_18.f_1862.f_6))
	{
		if (!func_461(32))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_18.f_1862.f_5, TASK::_0xA8452DD321607029(Local_18.f_1862.f_6, 1), 1.5f, 35000, 0.25f, false, 40000f);
			func_460(32);
		}
		if (ENTITY::IS_ENTITY_AT_COORD(Local_18.f_1862.f_5, TASK::_0xA8452DD321607029(Local_18.f_1862.f_6, 1), 0.5f, 0.5f, 2f, false, true, 0))
		{
			return 0;
		}
	}
	return -1;
}

void func_114()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1862.f_5) && !ENTITY::IS_ENTITY_DEAD(Local_18.f_1862.f_5))
	{
		PED::SET_PED_CONFIG_FLAG(Local_18.f_1862.f_5, 419, false);
		PED::SET_PED_CONFIG_FLAG(Local_18.f_1862.f_5, 412, false);
	}
}

void func_115()
{
	Local_18.f_1934.f_65 = 0;
	Local_18.f_1934.f_66 = 0;
	GRAPHICS::_0x5199405EABFBD7F0("CamTransitionBlinkSlow");
	func_469();
}

int func_116()
{
	if (func_470())
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.5f)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 203, true);
		}
	}
	if (!func_471())
	{
		return -1;
	}
	if (!PED::_0xA911EE21EDF69DAF(Global_35))
	{
		return -1;
	}
	Local_18.f_1934.f_66 = PED::_0xD806CD2A4F2C2996(Global_35);
	if ((ENTITY::DOES_ENTITY_EXIST(Local_18.f_1934.f_66) && ENTITY::IS_ENTITY_A_PED(Local_18.f_1934.f_66)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Local_18.f_1934.f_66)))
	{
		return -1;
	}
	else if (func_472(Local_18.f_1934.f_66))
	{
		Local_18.f_1934.f_83 = 1;
	}
	else if (func_473(Global_35))
	{
		Local_18.f_1934.f_84 = 1;
	}
	return 1;
}

void func_117()
{
	Local_18.f_1934.f_79 = GRAPHICS::_0xB958D97A0DFAA0C2("CamTransitionBlinkSlow");
}

int func_118()
{
	float fVar0;
	
	if (!func_471())
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_1934.f_66))
	{
		return 0;
	}
	if (PED::_0xD806CD2A4F2C2996(Global_35) != Local_18.f_1934.f_66)
	{
		return 0;
	}
	if (PED::IS_PED_IN_MELEE_COMBAT(Global_35))
	{
		return -1;
	}
	if (func_470())
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.5f)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 203, true);
		}
	}
	if (!func_474(Global_35))
	{
		return -1;
	}
	if (func_448(Global_35, -208384378))
	{
		return -1;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	fVar0 = BUILTIN::VDIST2(Global_36, func_475(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_6, Local_18.f_1934.f_67));
	if (fVar0 > 3f)
	{
		return 2;
	}
	return 3;
}

void func_119()
{
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
	GRAPHICS::ANIMPOSTFX_PLAY("CamTransitionBlinkSlow");
	func_180(&(Local_18.f_1934.f_80), 1);
}

int func_120()
{
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CamTransitionBlinkSlow") && GRAPHICS::_0xFBF161FCFEC8589E("CamTransitionBlinkSlow", 2, 0, &(Local_18.f_1934.f_79)))
	{
		ENTITY::_0x203BEFFDBE12E96A(PLAYER::PLAYER_PED_ID(), func_475(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_6, Local_18.f_1934.f_67), func_476(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_9, Local_18.f_1934.f_67.f_3), 1, true, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_476(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_10, Local_18.f_1934.f_67.f_4), 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(func_476(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_11, Local_18.f_1934.f_67.f_5), 1f);
		TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, Local_18.f_1934.f_66, 0f, 0f, 0f, 1073741824, 33);
		return 4;
	}
	if (func_173(&(Local_18.f_1934.f_80)) && func_477(&(Local_18.f_1934.f_80)) > 5000)
	{
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		return 0;
	}
	return -1;
}

void func_121()
{
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
	TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, Local_18.f_1934.f_66, 0f, 0f, 0f, 1073741824, 33);
}

int func_122()
{
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	return 4;
}

void func_123()
{
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	if (Local_18.f_1934.f_79)
	{
		GRAPHICS::_0xA201A3D0AC087C37("CamTransitionBlinkSlow");
		Local_18.f_1934.f_79 = 0;
	}
	func_180(&(Local_18.f_1934.f_80), 1);
}

int func_124()
{
	float fVar0;
	var uVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	vector3 vVar11;
	
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	if (!PED::_0xA911EE21EDF69DAF(Global_35))
	{
		vVar4 = { ENTITY::GET_ENTITY_COORDS(Local_18.f_1934.f_66, true, false) };
		if (MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(vVar4.x, vVar4.y, (vVar4.z + 10f), &fVar0, &uVar1))
		{
			if (vVar4.z < fVar0)
			{
				vVar7 = { func_475(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_6, Local_18.f_1934.f_67) };
				fVar10 = func_476(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_9, Local_18.f_1934.f_67.f_3);
				vVar11 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar7, fVar10, 0f, 0.75f, 0f) };
				vVar11.f_2 = fVar0;
				ENTITY::SET_ENTITY_COORDS(Local_18.f_1934.f_66, vVar11, true, false, true, true);
				ENTITY::_0x9587913B9E772D29(Local_18.f_1934.f_66, 0);
			}
		}
		if (!func_474(PLAYER::PLAYER_PED_ID()))
		{
			if (Local_18.f_1934.f_83 && func_282(Local_18.f_45))
			{
				func_207(615, 1);
			}
			else if (Local_18.f_45 == 8 || Local_18.f_45 == 7)
			{
				func_207(617, 1);
			}
			else
			{
				func_207(616, 1);
			}
			Local_18.f_1934.f_83 = 0;
			Local_18.f_1934.f_84 = 0;
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			return 0;
		}
	}
	if (func_173(&(Local_18.f_1934.f_80)) && func_477(&(Local_18.f_1934.f_80)) > 5000)
	{
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		return 0;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	return -1;
}

Vector3 func_125(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1356.339f, 2443.121f, 308.1876f;
		
		case 1:
			return -125.85f, -39.9599f, 96.0908f;
		
		case 2:
			return 654.1f, -1245.5f, 43.5f;
		
		case 3:
			return 1905.086f, -1861.727f, 46.3492f;
		
		case 5:
			return 2222.172f, -772.852f, 42.662f;
		
		case 6:
			return 2342.779f, 1359.049f, 106.3936f;
		
		case 4:
			return 1422.625f, -7332.473f, 80.5977f;
		
		case 7:
			return -2592.702f, 453.0722f, 146.4588f;
		
		case 8:
			return -1639.306f, -1361.465f, 83.3963f;
	}
	return 0f, 0f, 0f;
}

void func_126(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_478(iParam0, 0, 0);
	if (func_479(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_480(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_481(iParam0, 1);
			}
			else
			{
				func_482(iParam0, 1);
			}
		}
		else
		{
			func_483(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_484())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

int func_127(int iParam0)
{
	return ((*Global_1835011)[iParam0 /*74*/])->f_1;
}

bool func_128(int iParam0)
{
	int iVar0;
	
	iVar0 = func_485(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_129(int iParam0)
{
	if (!func_486(iParam0))
	{
		Global_1392040 = (Global_1392040 || iParam0);
	}
}

void func_130()
{
	if (!func_131(0, 0, 1))
	{
		if (!iLocal_3516)
		{
			func_487(-1019727725);
			iLocal_3516 = 1;
		}
	}
	else if (iLocal_3516)
	{
		func_488(-1019727725);
		iLocal_3516 = 0;
	}
}

int func_131(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (Global_1572887->f_12 != -1)
	{
		if ((iParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((iParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_489())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (iParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_490(&(Global_1898164->f_1[0 /*5*/]));
		if (func_491(iVar0) && func_492(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_493(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		
		case 1:
			return iParam0 & 1 == 0;
		
		case 4:
			return iParam0 & 2 == 0;
		
		case 6:
			return iParam0 & 4 == 0;
		
		case 2:
			return iParam0 & 16 == 0;
		
		case 5:
			return iParam0 & 32 == 0;
		
		case 9:
			return iParam0 & 64 == 0;
		
		case 8:
			return iParam0 & 8 == 0;
		
		case 10:
			return iParam0 & 512 == 0;
		
		case 3:
			return iParam0 & 128 == 0;
		
		case 11:
			return iParam0 & 256 == 0;
		
		default:
			break;
	}
	return 0;
}

bool func_132(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_133()
{
	return Global_1894899->f_2;
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 7;
		
		case 79:
			return 0;
		
		case 43:
			return 1;
		
		case 98:
			return 2;
		
		case 58:
			return 3;
		
		case 71:
			return 4;
		
		case 4:
			return 5;
		
		case 76:
			return 8;
		
		case 9:
			return 6;
		
		case 5:
			return 9;
		
		case 38:
			return 10;
		
		case 105:
			return 11;
		
		case 92:
			return 12;
		
		case 78:
			return 13;
		
		case 26:
			return 14;
		
		case 37:
			return 15;
		
		case 115:
			return 16;
		
		default:
			break;
	}
	return -1;
}

bool func_135(int iParam0, int iParam1)
{
	if (!func_494(iParam0))
	{
		return false;
	}
	return (Global_40.f_9384[iParam0 /*2*/] && iParam1) != 0;
}

int func_136(int iParam0)
{
	if (!func_495(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_70))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70 = 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
}

int func_137(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_448(iParam0, 713668775))
	{
		return 0;
	}
	if (((func_448(iParam0, -76381094) || func_448(iParam0, -1098463898)) || func_448(iParam0, 993674639)) || TASK::GET_IS_TASK_ACTIVE(iParam0, 7))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(iParam0, &(Global_1357549->f_3[0]), false, 0))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(iParam0))
	{
		return 1;
	}
	if (!PED::_IS_MOUNT_SEAT_FREE(iParam0, -1))
	{
		return 0;
	}
	if (iParam1 != -1 && func_496(iParam1))
	{
		return 0;
	}
	return 1;
}

void func_138(int iParam0)
{
	int iVar0;
	
	iVar0 = func_468();
	if (!TASK::_0x841475AC96E794D1(iVar0))
	{
		return;
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, TASK::_0xA8452DD321607029(iVar0, 1), 1.5f, 20000, 0.25f, false, 40000f);
}

bool func_139()
{
	return Global_1949598->f_1;
}

bool func_140()
{
	return func_497();
}

void func_141(bool bParam0)
{
	if (bParam0 == func_140())
	{
		return;
	}
	if (bParam0)
	{
		func_151(81053684);
		if (!func_499(func_498(0)))
		{
			func_151(-525676072);
		}
	}
	else
	{
		func_150(81053684);
		func_150(-525676072);
	}
	Global_1946804->f_2792 = bParam0;
}

void func_142(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

int func_143(var uParam0)
{
	if (-1829635046 == func_500(81053684))
	{
		if (func_501(uParam0))
		{
			return 1;
		}
	}
	else if (func_502(-525676072, uParam0))
	{
		if (func_501(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_144()
{
	int iVar0;
	
	if (!func_497())
	{
		return 0;
	}
	if (!func_501(&iVar0))
	{
		return 0;
	}
	if (!func_503(iVar0))
	{
		return 0;
	}
	return func_504(iVar0, 0);
}

void func_145(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

int func_146()
{
	return Global_40.f_4283;
}

int func_147()
{
	if (func_56() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

bool func_148(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_269(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

bool func_149(int iParam0)
{
	return func_506(func_505(iParam0));
}

void func_150(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_507(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_508(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_509(func_505(iParam0), 6);
}

void func_151(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_507(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_508(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_510(func_505(iParam0), 6);
}

void func_152()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_38(16);
	bVar1 = Global_1357549->f_1485 > BUILTIN::TO_FLOAT(5400);
	bVar2 = func_12(32768);
	if ((!bVar0 && bVar2) && bVar1)
	{
		func_165(16);
		func_431(2, -549508280, 0, 0, 0, 0, 1065353216, 0);
	}
	if (bVar0 && !bVar2)
	{
		func_50(16);
		Global_1357549->f_1485 = 0f;
	}
}

void func_153(float fParam0, float fParam1, float fParam2)
{
	struct<16> Var0;
	
	Var0 = { func_511(fParam0, fParam1, fParam2) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1357549->f_1886.f_1, &Var0);
}

int func_154()
{
	return Global_40.f_4283.f_324;
}

void func_155(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_512(iParam0, &iVar0, &iVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1357549->f_1886.f_2, iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1357549->f_1886.f_2.f_1, iVar1);
}

void func_156(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_512(iParam0, &iVar0, &iVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1357549->f_1886.f_4, iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1357549->f_1886.f_4.f_1, iVar1);
}

int func_157(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (MISC::IS_BIT_SET(&(Local_18.f_14[iParam0]), iVar0))
		{
			if (!MISC::IS_BIT_SET(Local_18.f_41, iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_158(var uParam0)
{
	func_513(uParam0, &(Global_1357549->f_3[2]), &(Global_1357549->f_3[3]), 0);
	func_514(&(Global_1357549->f_3[2]));
	if (((!func_12(64) && !func_341(4)) && !func_132(&Global_1935630, 4194304)) && VOLUME::_0xF256A75210C5C0EB(&(Global_1357549->f_3[2]), Global_36))
	{
		func_163(0);
	}
	if (uParam0->f_49)
	{
		func_515(uParam0);
	}
	else
	{
		func_516(uParam0);
	}
}

void func_159(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0) && VOLUME::_0xF256A75210C5C0EB(iParam0, Global_36))
	{
		if (!func_12(1073741824))
		{
			func_145(1073741824);
		}
	}
	else if (func_12(1073741824))
	{
		func_142(1073741824);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iParam1) && VOLUME::_0xF256A75210C5C0EB(iParam1, Global_36))
	{
		if (!func_12(32768))
		{
			func_145(32768);
		}
	}
	else if (func_12(32768))
	{
		func_142(32768);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iParam2) && VOLUME::_0xF256A75210C5C0EB(iParam2, Global_36))
	{
		if (!func_38(512))
		{
			func_165(512);
		}
	}
	else if (func_38(512))
	{
		func_50(512);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iParam3) && VOLUME::_0xF256A75210C5C0EB(iParam3, Global_36))
	{
		if (!func_38(1024))
		{
			func_165(1024);
		}
	}
	else if (func_38(1024))
	{
		func_50(1024);
	}
}

void func_160(int iParam0)
{
	int iVar0;
	int iVar1[2];
	int iVar4;
	
	iVar1[0] = 0;
	iVar1[1] = 1;
	iVar4 = 0;
	while (iVar4 < iVar1)
	{
		iVar0 = func_363(&(iVar1[iVar4]));
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VOLUME::_0x92A78D0BEDB332A3(iParam0)) && VOLUME::_0xF256A75210C5C0EB(iParam0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false)))
		{
			func_517(&(iVar1[iVar4]), 1);
		}
		else
		{
			func_517(&(iVar1[iVar4]), 0);
		}
		iVar4++;
	}
}

void func_161(var uParam0)
{
	if (!func_38(33554432))
	{
		if (func_38(1024))
		{
			func_165(33554432);
			POPULATION::_0xC6DCC2A3A8825C85(0);
		}
	}
	else
	{
		POPULATION::_0x8EC7CD701F872F87(0f, 4270208, 0, 0, -1, -1);
		POPULATION::_0x8EC7CD701F872F87(0.3f, 1760, 0, 0, -1, -1);
		if (!func_38(512))
		{
			POPULATION::_0xBC90BDF4E5228EA1();
			func_50(33554432);
		}
	}
}

void func_162()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (((MISC::GET_FRAME_COUNT() % 15) != 0 || func_518(4)) || func_164())
	{
		return;
	}
	iVar0 = func_146();
	vVar1 = { func_454(iVar0) };
	fVar4 = 50f;
	if ((iVar0 == 7 || iVar0 == 8) || iVar0 == 3)
	{
		fVar4 = 150f;
	}
	iVar5 = _NAMESPACE49::_0xBA2C49EA6A8D24FF(vVar1, fVar4, 0, 1, 0);
	iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar5);
	if (((!ENTITY::DOES_ENTITY_EXIST(iVar5) || !ENTITY::DOES_ENTITY_EXIST(iVar6)) || !MISC::_0x5170DDA6D63ACAAA(iVar6)) || ENTITY::IS_ENTITY_ON_SCREEN(iVar5))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(iVar6, 186, false);
	ENTITY::SET_ENTITY_COORDS(iVar5, 523.9103f, -6.4477f, 110.8692f, false, false, false, true);
	_NAMESPACE49::_0x9D16896F0DBE78A2(523.9103f, -6.4477f, 110.8692f, 2.5f);
}

void func_163(bool bParam0)
{
	func_327(bParam0);
	func_328(!bParam0);
}

bool func_164()
{
	return Global_1898164->f_163;
}

void func_165(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 || iParam0);
			break;
	}
}

bool func_166(int iParam0, vector3 vParam1)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return false;
	}
	return VOLUME::_0xF256A75210C5C0EB(iParam0, vParam1);
}

bool func_167()
{
	return func_370(10, 0) >= 3;
}

void func_168(int iParam0, int iParam1)
{
	if (!func_494(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0 /*2*/] = (Global_40.f_9384[iParam0 /*2*/] || iParam1);
}

void func_169(int iParam0, int iParam1)
{
	if (!func_494(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0 /*2*/] = (&Global_40.f_9384[iParam0 /*2*/] - (Global_40.f_9384[iParam0 /*2*/] && iParam1));
}

int func_170(int iParam0)
{
	switch (func_146())
	{
		case 2:
			return func_519(iParam0);
		
		case 1:
			return func_520(iParam0);
		
		case 6:
			return func_521(iParam0);
		
		case 3:
			return func_522(iParam0);
	}
	return 0;
}

int func_171(int iParam0)
{
	if (func_523())
	{
		return 0;
	}
	if (AUDIO::_0x54B187F111D9C6F8(Global_35, 0))
	{
		return 0;
	}
	if (func_330(func_177(&(Global_1357549->f_1659[iParam0])), 0))
	{
		if (PED::_0x9337183FDA2E9035(func_177(&(Global_1357549->f_1659[iParam0])), PLAYER::PLAYER_ID()) || PED::_0xA454D234E45BB6E5(func_177(&(Global_1357549->f_1659[iParam0])), PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (func_179())
	{
		return 0;
	}
	return 1;
}

int func_172(int iParam0)
{
	int iVar0;
	
	iVar0 = func_177(&(Global_1357549->f_1659[iParam0]));
	if (func_330(iVar0, 0) && func_175(&(Global_1357549->f_1659[iParam0]), 1, 1))
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_1663[iParam0])))
		{
			if (func_456(Global_35, &(Global_1357549->f_1663[iParam0]), 1, 0) && func_456(iVar0, &(Global_1357549->f_1663[iParam0]), 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_173(var uParam0)
{
	return func_524(*uParam0, 1);
}

float func_174(var uParam0)
{
	if (!func_173(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_525(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_526() - uParam0->f_1);
}

int func_175(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_527(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		return func_528(iParam0, 26, 1);
	}
	if (bParam2)
	{
		if (!func_330(func_177(iParam0), 0))
		{
			return 0;
		}
	}
	if (!func_529(iParam0, 1, 0))
	{
		return 0;
	}
	if (func_528(iParam0, 44, 1))
	{
		return 0;
	}
	return 1;
}

int func_176(int iParam0, int iParam1)
{
	if (!func_527(iParam0))
	{
		return 0;
	}
	if ((((*Global_1360165)[iParam0 /*1157*/])->f_140 && iParam1) != 0)
	{
		return 1;
	}
	if ((((*Global_1360165)[iParam0 /*1157*/])->f_141 && iParam1) != 0)
	{
		return 1;
	}
	return 0;
}

int func_177(int iParam0)
{
	if (!func_527(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

bool func_178(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;
	
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_530(iParam0, &Var0);
}

int func_179()
{
	int iVar0;
	
	iVar0 = TASK::_0xD04241BBF6D03A5E(Global_35);
	if (TASK::_0x841475AC96E794D1(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_180(var uParam0, int iParam1)
{
	if (iParam1 || !func_173(uParam0))
	{
		func_187(uParam0);
	}
}

void func_181(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_182(int iParam0)
{
	if (!func_495(iParam0))
	{
		return false;
	}
	if (!func_343(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

char* func_183(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	if (func_146() == 3)
	{
		if (iParam0 == 0)
		{
			sVar0 = "PL_DUTCH";
		}
		else
		{
			sVar0 = "PL_JOHN_SHADY";
		}
	}
	else if (iParam0 == 0)
	{
		sVar0 = "PL_DUTCH";
	}
	else
	{
		sVar0 = "PL_JOHN";
	}
	return sVar0;
}

int func_184(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	if (!func_495(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_11)
	{
		case 0:
			if (func_528(iParam0, 2, 1))
			{
				func_416(iParam0, 2, 1);
			}
			if (func_402(iParam0, 16, 1))
			{
				if ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD()
				{
					if (bParam14)
					{
						func_531(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1360165)[iParam0 /*1157*/])->f_129, false))
					{
					}
					else
					{
						func_186(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_330(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (func_330(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						func_532(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_531(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_533(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_531(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_533(iParam0, 1);
			}
			else
			{
				return 0;
			}
		
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = (Global_40.f_4942[iParam0 /*60*/])->f_4;
				}
			}
			if (!func_528(iParam0, 44, 0))
			{
				func_531(iParam0, 44, 0);
			}
			if (func_534(iParam0, vVar0, iParam13, 0, 1, bParam17, bParam20, -1, 1, 0))
			{
				func_533(iParam0, 2);
			}
			break;
		
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_416(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			_NAMESPACE48::_0x6759BEE6762E140B(((*Global_1360165)[iParam0 /*1157*/])->f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			func_535(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_536(iParam0, 0, 0, 1);
			}
			func_416(iParam0, 33, 1);
			func_416(iParam0, 34, 1);
			func_416(iParam0, 29, 1);
			if (!func_211(vVar0) && iParam7)
			{
				func_533(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_533(iParam0, 4);
			}
			else
			{
				func_533(iParam0, 5);
			}
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						func_532(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_537(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::_0x0C3CB2E600C8977D(Global_1360165[iParam0 /*1157*/], 1))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], 1, 0);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_533(iParam0, 4);
			}
			else
			{
				func_533(iParam0, 5);
			}
			break;
		
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = (Global_40.f_4942[iParam0 /*60*/])->f_4;
					}
				}
				if (func_538(iParam0, iParam13))
				{
					if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
					{
						func_539(iParam0, iParam13, 0);
						func_540(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_528(iParam0, 25, 0))
						{
							func_416(iParam0, 25, 0);
						}
						func_531(iParam0, 66, 0);
						func_533(iParam0, 5);
						((*Global_1360165)[iParam0 /*1157*/])->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_533(iParam0, 5);
				}
				func_531(iParam0, 28, 1);
			}
			else
			{
				func_533(iParam0, 5);
			}
			break;
		
		case 5:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
			{
				func_533(iParam0, 6);
			}
			break;
		
		case 6:
			if (func_330(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					func_541(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_542(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_533(iParam0, 7);
		
		case 7:
			func_535(iParam0, bParam9, bParam15, 0);
			func_543(iParam0, 4, bParam11);
			func_544(iParam0);
			if (bParam20)
			{
				if (func_545(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_546(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			(Global_40.f_4942[iParam0 /*60*/])->f_4 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
			func_533(iParam0, 0);
			func_547(iParam0, 16, 1);
			func_416(iParam0, 44, 1);
			((*Global_1360165)[iParam0 /*1157*/])->f_1156 = 0;
			((*Global_1360165)[iParam0 /*1157*/])->f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

void func_185(int iParam0)
{
	func_548(iParam0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1357549->f_1669, "ARTHUR", Global_35, 0);
	if (iParam0 == 0)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_177(0), 0, 1);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1357549->f_1669, "DUTCH", func_177(0), 0);
	}
	else
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_177(1), 0, 1);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1357549->f_1669, "JOHN", func_177(1), 0);
	}
	func_549(iParam0);
}

void func_186(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (!func_495(iParam0))
	{
		return;
	}
	if (func_343(iParam0))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_129 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_531(iParam0, 56, 1);
		func_180(&(Global_1359489->f_40), 1);
	}
	func_550(iParam0, 0);
	func_543(iParam0, 4, 0);
	func_551(iParam0);
	func_544(iParam0);
	func_416(iParam0, 37, 1);
	bVar0 = func_330(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_552(iParam0, 0);
	bVar2 = _NAMESPACE48::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_528(iParam0, 64, 1))
	{
		func_416(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_416(iParam0, 33, 1);
		func_416(iParam0, 34, 1);
		func_553(iParam0, 1056964608, -1, 1061158912);
		func_535(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_531(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_531(iParam0, 35, 1);
			if (bParam8)
			{
				func_531(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_554(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		}
		if (bVar2)
		{
			_NAMESPACE48::_0xBB68908CD11AEBDC(iVar1);
		}
		func_416(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_531(iParam0, 33, 1);
		func_535(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_180(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_181(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
		}
		if (bParam9)
		{
			func_531(iParam0, 34, 1);
		}
	}
	if (iParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_555(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_528(iParam0, 45, 1))
	{
		func_416(iParam0, 45, 1);
	}
	func_556(iParam0, 16, 1);
	func_416(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_330(func_136(iParam0), 0))
		{
			func_557(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_187(var uParam0)
{
	func_558(uParam0, 0f);
}

void func_188(int iParam0)
{
	if (func_146() == 3 && iParam0 == 0)
	{
		OBJECT::_0x1BC47A9DEDC8DF5D(58833085, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(-629053815, 0);
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(58833085);
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(-629053815);
	}
	if (func_146() == 3 && iParam0 == 1)
	{
		OBJECT::_0x1BC47A9DEDC8DF5D(1163459288, 0);
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(1163459288);
	}
}

void func_189()
{
	Global_1357549->f_12[0 /*14*/] = 1;
	(Global_1357549->f_12[0 /*14*/])->f_1 = 970924250;
	(Global_1357549->f_12[0 /*14*/])->f_2 = { -148.3662f, -26.0562f, 95.8773f };
	(Global_1357549->f_12[0 /*14*/])->f_5 = 1935100224;
	(Global_1357549->f_12[0 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[1 /*14*/] = 1;
	(Global_1357549->f_12[1 /*14*/])->f_1 = 970924250;
	(Global_1357549->f_12[1 /*14*/])->f_2 = { -148.0154f, -13.4206f, 95.314f };
	(Global_1357549->f_12[1 /*14*/])->f_5 = -274058460;
	(Global_1357549->f_12[1 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[2 /*14*/] = 1;
	(Global_1357549->f_12[2 /*14*/])->f_1 = 970924250;
	(Global_1357549->f_12[2 /*14*/])->f_2 = { -125.0946f, -21.7405f, 95.1253f };
	(Global_1357549->f_12[2 /*14*/])->f_5 = 1935100224;
	(Global_1357549->f_12[2 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[8 /*14*/] = 1;
	(Global_1357549->f_12[8 /*14*/])->f_1 = -1166561064;
	(Global_1357549->f_12[8 /*14*/])->f_2 = { -132.0545f, -31.1304f, 95.9688f };
	(Global_1357549->f_12[8 /*14*/])->f_5 = -274058460;
	(Global_1357549->f_12[8 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[7 /*14*/] = 1;
	(Global_1357549->f_12[7 /*14*/])->f_1 = 172011504;
	(Global_1357549->f_12[7 /*14*/])->f_2 = { -132.1342f, -30.8928f, 95.6164f };
	(Global_1357549->f_12[7 /*14*/])->f_5 = 319326044;
	(Global_1357549->f_12[7 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[6 /*14*/] = 1;
	(Global_1357549->f_12[6 /*14*/])->f_1 = -1365193577;
	(Global_1357549->f_12[6 /*14*/])->f_2 = { -132.1342f, -30.8928f, 95.6164f };
	(Global_1357549->f_12[6 /*14*/])->f_5 = 319326044;
	(Global_1357549->f_12[6 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[4 /*14*/] = 1;
	(Global_1357549->f_12[4 /*14*/])->f_1 = 172011504;
	(Global_1357549->f_12[4 /*14*/])->f_2 = { -129.8749f, -30.5768f, 95.5843f };
	(Global_1357549->f_12[4 /*14*/])->f_5 = -843424619;
	(Global_1357549->f_12[4 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[5 /*14*/] = 1;
	(Global_1357549->f_12[5 /*14*/])->f_1 = -1166561064;
	(Global_1357549->f_12[5 /*14*/])->f_2 = { -129.8767f, -30.3077f, 95.6024f };
	(Global_1357549->f_12[5 /*14*/])->f_5 = -1753113092;
	(Global_1357549->f_12[5 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[9 /*14*/] = 1;
	(Global_1357549->f_12[9 /*14*/])->f_1 = -1166561064;
	(Global_1357549->f_12[9 /*14*/])->f_2 = { -131.4675f, -31.6383f, 97.1984f };
	(Global_1357549->f_12[9 /*14*/])->f_5 = 219115318;
	(Global_1357549->f_12[9 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[12 /*14*/] = 1;
	(Global_1357549->f_12[12 /*14*/])->f_1 = 163126540;
	(Global_1357549->f_12[12 /*14*/])->f_2 = { -116.1046f, -36.3356f, 95.1647f };
	(Global_1357549->f_12[12 /*14*/])->f_5 = -1200234060;
	(Global_1357549->f_12[12 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[13 /*14*/] = 2;
	(Global_1357549->f_12[13 /*14*/])->f_1 = 1802272784;
	(Global_1357549->f_12[13 /*14*/])->f_2 = { 690.5589f, -1253.308f, 43.9556f };
	(Global_1357549->f_12[13 /*14*/])->f_5 = 1935100224;
	(Global_1357549->f_12[13 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[14 /*14*/] = 2;
	(Global_1357549->f_12[14 /*14*/])->f_1 = -1010466481;
	(Global_1357549->f_12[14 /*14*/])->f_2 = { 691.5306f, -1258.313f, 44.2328f };
	(Global_1357549->f_12[14 /*14*/])->f_5 = -843424619;
	(Global_1357549->f_12[14 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[15 /*14*/] = 2;
	(Global_1357549->f_12[15 /*14*/])->f_1 = 1084869405;
	(Global_1357549->f_12[15 /*14*/])->f_2 = { 673.365f, -1269.473f, 44.0022f };
	(Global_1357549->f_12[15 /*14*/])->f_5 = -916457800;
	(Global_1357549->f_12[15 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[16 /*14*/] = 2;
	(Global_1357549->f_12[16 /*14*/])->f_1 = 1802272784;
	(Global_1357549->f_12[16 /*14*/])->f_2 = { 675.5692f, -1269.244f, 45.3696f };
	(Global_1357549->f_12[16 /*14*/])->f_5 = -916457800;
	(Global_1357549->f_12[16 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[17 /*14*/] = 2;
	(Global_1357549->f_12[17 /*14*/])->f_1 = -850189983;
	(Global_1357549->f_12[17 /*14*/])->f_2 = { 676.3393f, -1250.768f, 43.8081f };
	(Global_1357549->f_12[17 /*14*/])->f_5 = 1935100224;
	(Global_1357549->f_12[17 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[18 /*14*/] = 2;
	(Global_1357549->f_12[18 /*14*/])->f_1 = 2108368013;
	(Global_1357549->f_12[18 /*14*/])->f_2 = { 662.1107f, -1256.578f, 42.7845f };
	(Global_1357549->f_12[18 /*14*/])->f_5 = 319326044;
	(Global_1357549->f_12[18 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[19 /*14*/] = 2;
	(Global_1357549->f_12[19 /*14*/])->f_1 = 2728487;
	(Global_1357549->f_12[19 /*14*/])->f_2 = { 661.0519f, -1259.052f, 43.1332f };
	(Global_1357549->f_12[19 /*14*/])->f_5 = -1200234060;
	(Global_1357549->f_12[19 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[20 /*14*/] = 2;
	(Global_1357549->f_12[20 /*14*/])->f_1 = 1128417383;
	(Global_1357549->f_12[20 /*14*/])->f_2 = { 672.6604f, -1241.364f, 43.4735f };
	(Global_1357549->f_12[20 /*14*/])->f_5 = -843424619;
	(Global_1357549->f_12[20 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[21 /*14*/] = 2;
	(Global_1357549->f_12[21 /*14*/])->f_1 = 1802272784;
	(Global_1357549->f_12[21 /*14*/])->f_2 = { 674.6741f, -1238.333f, 43.6628f };
	(Global_1357549->f_12[21 /*14*/])->f_5 = 1935100224;
	(Global_1357549->f_12[21 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[22 /*14*/] = 2;
	(Global_1357549->f_12[22 /*14*/])->f_1 = 1802272784;
	(Global_1357549->f_12[22 /*14*/])->f_2 = { 656.9509f, -1234.653f, 45.8639f };
	(Global_1357549->f_12[22 /*14*/])->f_5 = 1566690690;
	(Global_1357549->f_12[22 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[23 /*14*/] = 2;
	(Global_1357549->f_12[23 /*14*/])->f_1 = 2108368013;
	(Global_1357549->f_12[23 /*14*/])->f_2 = { 653.0373f, -1246.106f, 44.595f };
	(Global_1357549->f_12[23 /*14*/])->f_5 = 480074467;
	(Global_1357549->f_12[23 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[24 /*14*/] = 2;
	(Global_1357549->f_12[24 /*14*/])->f_1 = 2108368013;
	(Global_1357549->f_12[24 /*14*/])->f_2 = { 650.8378f, -1252.101f, 43.1323f };
	(Global_1357549->f_12[24 /*14*/])->f_5 = 436323736;
	(Global_1357549->f_12[24 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[25 /*14*/] = 2;
	(Global_1357549->f_12[25 /*14*/])->f_1 = 2108368013;
	(Global_1357549->f_12[25 /*14*/])->f_2 = { 650.781f, -1252.204f, 43.132f };
	(Global_1357549->f_12[25 /*14*/])->f_5 = 436323736;
	(Global_1357549->f_12[25 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[26 /*14*/] = 2;
	(Global_1357549->f_12[26 /*14*/])->f_1 = 1049842342;
	(Global_1357549->f_12[26 /*14*/])->f_2 = { 652.8052f, -1253.324f, 43.6418f };
	(Global_1357549->f_12[26 /*14*/])->f_5 = -274058460;
	(Global_1357549->f_12[26 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[27 /*14*/] = 2;
	(Global_1357549->f_12[27 /*14*/])->f_1 = 1034009086;
	(Global_1357549->f_12[27 /*14*/])->f_2 = { 652.6848f, -1253.207f, 43.2953f };
	(Global_1357549->f_12[27 /*14*/])->f_5 = 319326044;
	(Global_1357549->f_12[27 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[36 /*14*/] = 3;
	(Global_1357549->f_12[36 /*14*/])->f_1 = 414622870;
	(Global_1357549->f_12[36 /*14*/])->f_2 = { 1878.206f, -1864.335f, 43.5632f };
	(Global_1357549->f_12[36 /*14*/])->f_5 = -274058460;
	(Global_1357549->f_12[36 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[37 /*14*/] = 3;
	(Global_1357549->f_12[37 /*14*/])->f_1 = 414622870;
	(Global_1357549->f_12[37 /*14*/])->f_2 = { 1872.988f, -1881.333f, 44.1306f };
	(Global_1357549->f_12[37 /*14*/])->f_5 = -916457800;
	(Global_1357549->f_12[37 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[38 /*14*/] = 3;
	(Global_1357549->f_12[38 /*14*/])->f_1 = 414622870;
	(Global_1357549->f_12[38 /*14*/])->f_2 = { 1883.117f, -1885.653f, 43.7719f };
	(Global_1357549->f_12[38 /*14*/])->f_5 = 480074467;
	(Global_1357549->f_12[38 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[39 /*14*/] = 3;
	(Global_1357549->f_12[39 /*14*/])->f_1 = 1079213989;
	(Global_1357549->f_12[39 /*14*/])->f_2 = { 1875.758f, -1881.731f, 42.8273f };
	(Global_1357549->f_12[39 /*14*/])->f_5 = -916457800;
	(Global_1357549->f_12[39 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[28 /*14*/] = 2;
	(Global_1357549->f_12[28 /*14*/])->f_1 = -160392273;
	(Global_1357549->f_12[28 /*14*/])->f_2 = { 652.6238f, -1253.39f, 43.6368f };
	(Global_1357549->f_12[28 /*14*/])->f_5 = 319326044;
	(Global_1357549->f_12[28 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[29 /*14*/] = 2;
	(Global_1357549->f_12[29 /*14*/])->f_1 = 1049842342;
	(Global_1357549->f_12[29 /*14*/])->f_2 = { 653.7182f, -1253.372f, 44.8718f };
	(Global_1357549->f_12[29 /*14*/])->f_5 = 219115318;
	(Global_1357549->f_12[29 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[31 /*14*/] = 2;
	(Global_1357549->f_12[31 /*14*/])->f_1 = 1034009086;
	(Global_1357549->f_12[31 /*14*/])->f_2 = { 654.2183f, -1251.526f, 43.2551f };
	(Global_1357549->f_12[31 /*14*/])->f_5 = -843424619;
	(Global_1357549->f_12[31 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[34 /*14*/] = 3;
	(Global_1357549->f_12[34 /*14*/])->f_1 = 414622870;
	(Global_1357549->f_12[34 /*14*/])->f_2 = { 1889.558f, -1879.846f, 42.6053f };
	(Global_1357549->f_12[34 /*14*/])->f_5 = 1935100224;
	(Global_1357549->f_12[34 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[35 /*14*/] = 3;
	(Global_1357549->f_12[35 /*14*/])->f_1 = 414622870;
	(Global_1357549->f_12[35 /*14*/])->f_2 = { 1875.46f, -1860.001f, 42.5923f };
	(Global_1357549->f_12[35 /*14*/])->f_5 = -274058460;
	(Global_1357549->f_12[35 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[32 /*14*/] = 3;
	(Global_1357549->f_12[32 /*14*/])->f_1 = 414622870;
	(Global_1357549->f_12[32 /*14*/])->f_2 = { 1868.881f, -1874.209f, 42.3693f };
	(Global_1357549->f_12[32 /*14*/])->f_5 = 1935100224;
	(Global_1357549->f_12[32 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[33 /*14*/] = 3;
	(Global_1357549->f_12[33 /*14*/])->f_1 = 964593693;
	(Global_1357549->f_12[33 /*14*/])->f_2 = { 1869.735f, -1870.672f, 42.18f };
	(Global_1357549->f_12[33 /*14*/])->f_5 = -843424619;
	(Global_1357549->f_12[33 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[30 /*14*/] = 2;
	(Global_1357549->f_12[30 /*14*/])->f_1 = 1049842342;
	(Global_1357549->f_12[30 /*14*/])->f_2 = { 654.0408f, -1251.324f, 43.2742f };
	(Global_1357549->f_12[30 /*14*/])->f_5 = -1753113092;
	(Global_1357549->f_12[30 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[10 /*14*/] = 1;
	(Global_1357549->f_12[10 /*14*/])->f_1 = -1611076340;
	(Global_1357549->f_12[10 /*14*/])->f_2 = { -118.1006f, -34.2279f, 94.8062f };
	(Global_1357549->f_12[10 /*14*/])->f_5 = 319326044;
	(Global_1357549->f_12[10 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[11 /*14*/] = 1;
	(Global_1357549->f_12[11 /*14*/])->f_1 = 970924250;
	(Global_1357549->f_12[11 /*14*/])->f_2 = { -108.722f, -41.1198f, 97.1374f };
	(Global_1357549->f_12[11 /*14*/])->f_5 = -916457800;
	(Global_1357549->f_12[11 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[3 /*14*/] = 1;
	(Global_1357549->f_12[3 /*14*/])->f_1 = -1920340119;
	(Global_1357549->f_12[3 /*14*/])->f_2 = { -121.9807f, -22.507f, 95.3463f };
	(Global_1357549->f_12[3 /*14*/])->f_5 = -843424619;
	(Global_1357549->f_12[3 /*14*/])->f_6 = 0f;
}

void func_190()
{
	int iVar0;
	
	iVar0 = Global_1357549->f_573;
	if (iVar0 >= 0 && iVar0 < 40)
	{
		if (func_146() == &Global_1357549->f_12[iVar0 /*14*/])
		{
			if ((Global_1357549->f_12[iVar0 /*14*/])->f_7 == 0)
			{
				if (STREAMING::_IS_IMAP_ACTIVE((Global_1357549->f_12[iVar0 /*14*/])->f_1) && func_559() == 0)
				{
					(Global_1357549->f_12[iVar0 /*14*/])->f_7 = ENTITY::_0x6F3068258A499E52((Global_1357549->f_12[iVar0 /*14*/])->f_5, (Global_1357549->f_12[iVar0 /*14*/])->f_2, 15);
				}
			}
			if ((Global_1357549->f_12[iVar0 /*14*/])->f_7 != 0)
			{
				if (!(Global_1357549->f_12[iVar0 /*14*/])->f_10)
				{
					(Global_1357549->f_12[iVar0 /*14*/])->f_10 = ENTITY::_0x1FF441D7954F8709((Global_1357549->f_12[iVar0 /*14*/])->f_7);
					if ((Global_1357549->f_12[iVar0 /*14*/])->f_10)
					{
						(Global_1357549->f_12[iVar0 /*14*/])->f_8 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA((Global_1357549->f_12[iVar0 /*14*/])->f_7));
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1357549->f_573 == iVar0 || (Global_1357549->f_12[iVar0 /*14*/])->f_9)
		{
			if ((Global_1357549->f_12[iVar0 /*14*/])->f_10)
			{
				func_560(iVar0);
			}
		}
		iVar0++;
	}
	Global_1357549->f_573++;
	if (Global_1357549->f_573 >= 40)
	{
		Global_1357549->f_573 = 0;
	}
}

bool func_191(int iParam0)
{
	return (Global_1359489->f_16 && iParam0) != 0;
}

void func_192(int iParam0)
{
	Global_1359489->f_16 = (Global_1359489->f_16 || iParam0);
}

int func_193()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0 /*5*/] != -1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_194(int iParam0)
{
	Global_1359489->f_16 = (Global_1359489->f_16 - (Global_1359489->f_16 && iParam0));
}

int func_195()
{
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		return 0;
	}
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
	{
		return 0;
	}
	if (func_139())
	{
		return 0;
	}
	if (func_38(1048576))
	{
		return 0;
	}
	return 1;
}

void func_196()
{
	char* sVar0;
	struct<16> Var1;
	
	sVar0 = func_561(func_146());
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	Var1 = { func_511(Local_18.f_3054, Local_18.f_3055, Global_1357549->f_1900) };
	func_563(sVar0, MISC::_CREATE_VAR_STRING(10, "CAMP_INFO_SUPPLIES", func_562(&Var1, 109029619)), 4000, 0, 0, 0, 0, 1);
}

void func_197()
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	sVar0 = func_561(func_146());
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	iVar1 = func_154();
	sVar2 = MISC::_0x2B6846401D68E563((BUILTIN::TO_FLOAT(iVar1) * 0.01f), 2);
	func_563(sVar0, MISC::_CREATE_VAR_STRING(10, "CAMP_INFO_FUNDS", func_562(sVar2, 109029619)), 4000, 0, 0, 0, 0, 1);
}

void func_198()
{
	func_50(4096);
	func_50(8192);
}

void func_199(int iParam0)
{
	int iVar1;
	
	if (*iParam0 == -15)
	{
		*iParam0 = func_564();
	}
	if (func_565())
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(18, 27);
	}
	else
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(7, 21);
	}
	func_566(iParam0, 0, 0, iVar1, 0, 0, 0, 0);
}

bool func_200(int iParam0)
{
	return iParam0 != -15;
}

bool func_201(int iParam0)
{
	return &Global_1899515 > iParam0;
}

void func_202(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	if (!func_567(uParam0, uParam1))
	{
		return;
	}
	iVar1 = 0;
	bVar2 = false;
	while (!bVar2 && iVar1 < 20)
	{
		iVar1++;
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		if (func_568(iVar0) && func_569((*uParam0)[iVar0 /*257*/], (*uParam1)[iVar0]))
		{
			bVar2 = true;
		}
	}
	if (iVar1 >= 20)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 50)
	{
		iVar1++;
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, ((*uParam0)[iVar0 /*257*/])->f_253);
		if (!MISC::IS_BIT_SET(uParam1[iVar0], iVar3))
		{
			MISC::SET_BIT((*uParam1)[iVar0], iVar3);
			return;
		}
	}
	if (iVar1 >= 50)
	{
		return;
	}
}

bool func_203(int iParam0)
{
	return func_570(Global_35, iParam0);
}

int func_204()
{
	if (func_56() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

bool func_205(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_56() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

bool func_206(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_571(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return MISC::IS_BIT_SET(iVar2, iVar1);
}

void func_207(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	func_571(iParam0, &iVar0, &iVar1);
	if (!func_572(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_573(iVar0, iVar1);
}

int func_208()
{
	return func_12(1073741824);
}

bool func_209(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (((*Global_1945938)[iParam0 /*18*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3);
}

void func_210(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 && !func_209(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_574(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_575(iVar0);
	*uParam0 = 0;
}

int func_211(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

char* func_212()
{
	return "INSPECT";
}

int func_213(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_576(iVar0, 2))
		{
			if (iParam2 == ((*Global_1945938)[iVar0 /*18*/])->f_10 && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_577(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

void func_214(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 && !func_209(iParam0))
	{
		return;
	}
	iVar0 = func_574(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_215(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 && !func_209(iParam0))
	{
		return;
	}
	iVar0 = func_574(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

bool func_216(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 && !func_209(iParam0))
	{
		return false;
	}
	iVar0 = func_574(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_217(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 && !func_209(iParam0))
	{
		return false;
	}
	iVar0 = func_574(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_218(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_219(int iParam0)
{
	if (!func_209((Local_18.f_3057[iParam0 /*21*/])->f_1))
	{
		(Local_18.f_3057[iParam0 /*21*/])->f_1 = func_578(func_212(), -1384133541, 1710877787, 0);
		func_215((Local_18.f_3057[iParam0 /*21*/])->f_1, 799218720, 0, 1);
	}
}

int func_220(int iParam0)
{
	bool bVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = func_579((Local_18.f_3057[iParam0 /*21*/])->f_1, 1, 1);
	uVar1 = func_579((Local_18.f_3057[iParam0 /*21*/])->f_1, 0, 1);
	if (bVar0 || uVar1)
	{
		func_210(&((Local_18.f_3057[iParam0 /*21*/])->f_1), 1, 1);
		iVar2 = iParam0;
		iVar3 = 0;
		while (iVar3 < 15)
		{
			if (bVar0)
			{
				iVar2++;
				if (iVar2 >= 15)
				{
					iVar2 = 0;
				}
			}
			else
			{
				iVar2 = (iVar2 - 1);
				if (iVar2 < 0)
				{
					iVar2 = 14;
				}
			}
			if ((Local_18.f_3057[iVar2 /*21*/])->f_19 == (Local_18.f_3057[iParam0 /*21*/])->f_19)
			{
				func_580(iParam0, iVar2);
				return 1;
			}
			iVar3++;
		}
	}
	return 0;
}

void func_221(int iParam0)
{
	if (!func_209((Local_18.f_3057[iParam0 /*21*/])->f_2))
	{
		(Local_18.f_3057[iParam0 /*21*/])->f_2 = func_582(func_581(), 359624985, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		func_215((Local_18.f_3057[iParam0 /*21*/])->f_2, 799218720, 0, 1);
	}
}

bool func_222(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 && !func_209(iParam0))
	{
		return false;
	}
	iVar0 = func_574(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_223(var uParam0)
{
	if (uParam0->f_3 != 0)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_5))
		{
			if (CAM::IS_CAM_RENDERING(uParam0->f_5))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			}
			CAM::DESTROY_CAM(uParam0->f_5, false);
		}
		if (func_209(uParam0->f_2))
		{
			func_210(&(uParam0->f_2), 1, 1);
		}
		if (func_209(uParam0->f_1))
		{
			func_210(&(uParam0->f_1), 1, 1);
		}
		if (func_209(*uParam0))
		{
			func_210(uParam0, 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			TASK::TASK_CLEAR_LOOK_AT(Global_35);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
		uParam0->f_3 = 0;
	}
}

int func_224(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return 0;
}

int func_225(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if ((((iParam0 == func_363(0) || iParam0 == func_363(1)) || iParam0 == func_363(2)) || iParam0 == func_363(3)) || iParam0 == func_363(4))
	{
		return 0;
	}
	if (func_583() < 1)
	{
		return 0;
	}
	return 1;
}

bool func_226(int iParam0)
{
	return func_570(iParam0, 2);
}

int func_227(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x34D6AC1157C8226C(iParam0, -1805387726))
	{
		return 1;
	}
	return 0;
}

void func_228()
{
	struct<7> Var0;
	
	Global_40.f_4283.f_567 = { Var0 };
	func_584();
	Global_1357549->f_1897 = 0;
}

void func_229(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_1357549->f_1897 = iParam0;
	}
	Global_40.f_4283.f_567 = 1;
	Global_40.f_4283.f_567.f_1 = uParam1;
	Global_40.f_4283.f_567.f_2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	Global_40.f_4283.f_567.f_5 = ENTITY::GET_ENTITY_HEADING(iParam0);
	Global_40.f_4283.f_567.f_6 = func_585(iParam0);
	func_586(iParam0);
}

int func_230(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	if (func_211(vParam0))
	{
		return 0;
	}
	if (iParam3 == 7)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = ITEMSET::CREATE_ITEMSET(true);
	TASK::_0xB8E213D02F37947D(&(Global_1357549->f_3[iParam3]), iVar2, -1805387726, 1, 1, 0, 0);
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar2);
	iVar4 = 0;
	fVar5 = 9999.99f;
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar0 = ITEMSET::GET_INDEXED_SCENARIO_POINT_INDEX_IN_ITEMSET(iVar4, iVar2);
		if (TASK::_0x0CC36D4156006509(iVar0))
		{
			vVar7 = { TASK::_0xA8452DD321607029(iVar0, 1) };
			if (!func_211(vVar7))
			{
				fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar7, true);
				if (fVar6 < fVar5)
				{
					fVar5 = fVar6;
					iVar1 = iVar0;
				}
			}
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar2);
	return iVar1;
}

float func_231(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_232(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		return func_587(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_233()
{
	return &Global_1935436 == 2;
}

void func_234()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0 /*5*/] != -1)
		{
			if ((Global_1327590->f_19547[iVar0 /*5*/])->f_1 < 5)
			{
				func_588(iVar0);
			}
		}
		iVar0++;
	}
}

void func_235()
{
	if (!Global_1935436->f_18.f_1)
	{
		Global_1935436->f_18.f_1 = 1;
	}
}

int func_236(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 56;
		
		case 2:
			return 57;
		
		case 3:
			return 58;
		
		case 6:
			return 59;
		
		default:
			break;
	}
	return -1;
}

bool func_237(int iParam0, int iParam1)
{
	if (!func_589(iParam0))
	{
		return false;
	}
	return ((Global_1914319->f_3[iParam0 /*446*/])->f_7 && iParam1) != 0;
}

void func_238(int iParam0, int iParam1)
{
	func_590(&((Global_1914319->f_3[iParam0 /*446*/])->f_5), iParam1);
}

void func_239(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	
	if (iParam0 == 11)
	{
		return;
	}
	iVar0 = func_591(iParam3, iParam0);
	vVar1 = { func_592(iVar0) };
	vVar4 = { func_593(iVar0) };
	if (func_211(vVar1))
	{
		return;
	}
	if (!func_594(19, 16384))
	{
		if (!func_408(iParam1))
		{
			return;
		}
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam2))
	{
		return;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_253(iParam0);
	(Global_1914319->f_3[iParam0 /*446*/])->f_22 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_11 = { vVar1 };
	if (func_211(vVar4))
	{
		(Global_1914319->f_3[iParam0 /*446*/])->f_11 = { vVar1 };
	}
	else
	{
		(Global_1914319->f_15936[iVar0 /*6*/])->f_2 = { vVar4 };
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_10 = iVar0;
	(Global_1914319->f_3[iParam0 /*446*/])->f_25 = iParam2;
	(Global_1914319->f_3[iParam0 /*446*/])->f_26 = iParam4;
	(Global_1914319->f_3[iParam0 /*446*/])->f_28 = iParam5;
	(Global_1914319->f_3[iParam0 /*446*/])->f_29 = iParam9;
	(Global_1914319->f_3[iParam0 /*446*/])->f_9 = iParam3;
	(Global_1914319->f_3[iParam0 /*446*/])->f_409 = iParam8;
	if (func_595(iVar0) || func_596(iVar0, iParam0))
	{
		switch (iVar0)
		{
			case 29:
				iVar7 = 770563571;
				break;
			
			case 61:
				iVar7 = 922959422;
				break;
			
			case 73:
				iVar7 = 646741747;
				break;
			
			case 43:
				iVar7 = -1159824322;
				break;
			
			case 41:
				iVar7 = 327042733;
				break;
		}
		(Global_1914319->f_3[iParam0 /*446*/])->f_20 = func_597(5, (Global_1914319->f_3[iParam0 /*446*/])->f_10, 2, iVar7);
	}
	*(Global_1393529->f_114[iParam0 /*3*/]) = { 0f, 0f, 0f };
	Global_1393529->f_220[iParam0] = 0f;
	Global_1393529->f_569[iParam0] = 0;
	StringCopy(Global_1393529->f_288[iParam0 /*8*/], "", 64);
	if (fParam7 <= 0f)
	{
		fParam7 = func_598(iParam0);
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_19 = fParam7;
	(Global_1914319->f_3[iParam0 /*446*/])->f_8 = iParam6;
	if (!func_599(iParam0, iParam1))
	{
	}
	switch (iParam0)
	{
		case 1:
		case 2:
			func_600(iParam3);
			break;
		
		case 10:
			func_601(iParam3);
			break;
		
		case 18:
			func_602();
			break;
		
		case 9:
			func_603();
			break;
		
		case 22:
			func_604();
			break;
	}
	func_605((Global_1914319->f_3[iParam0 /*446*/])->f_10);
	func_606(iParam0, 16);
	func_607(iParam0, 4);
	VOLUME::_0x748C5F51A18CB8F0(1);
}

bool func_240(int iParam0)
{
	return func_608(iParam0, 32);
}

void func_241(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (func_609(iParam0))
		{
			return;
		}
	}
	if (bParam2)
	{
		if (!func_610(iParam0, 4))
		{
			func_611(iParam0, 4);
		}
	}
	else
	{
		func_612(iParam0, 4);
	}
	func_613(iParam0);
}

void func_242(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_614((*uParam0)[iVar0 /*257*/]);
		func_615((*uParam0)[iVar0 /*257*/]);
		func_616((*uParam0)[iVar0 /*257*/]);
		MISC::SET_BIT(&(((*uParam0)[iVar0 /*257*/])->f_254), 0);
		iVar0++;
	}
}

void func_243(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!func_617(iParam0, iParam1))
	{
		if (uParam2->f_255 != 0)
		{
			func_614(uParam2);
			func_615(uParam2);
			func_616(uParam2);
		}
		return;
	}
	iVar0 = func_618(iParam1);
	if (*uParam2 != iParam1 || uParam2->f_1 != iVar0)
	{
		func_614(uParam2);
		func_615(uParam2);
		func_616(uParam2);
		*uParam2 = iParam1;
		uParam2->f_1 = iVar0;
		MISC::SET_BIT(&(uParam2->f_254), 0);
	}
	if (uParam2->f_256 != &Global_40.f_4283.f_415[iParam1])
	{
		MISC::SET_BIT(&(uParam2->f_254), 0);
		MISC::CLEAR_BIT(&(uParam2->f_254), 4);
		uParam2->f_256 = &Global_40.f_4283.f_415[iParam1];
	}
	if (MISC::IS_BIT_SET(uParam2->f_254, 0))
	{
		if (!MISC::IS_BIT_SET(uParam2->f_254, 1))
		{
			func_619(iParam1, uParam2);
		}
		else if (!MISC::IS_BIT_SET(uParam2->f_254, 2))
		{
			if (func_620(uParam2))
			{
				func_621(iParam0, iParam1, iVar0, uParam2);
			}
		}
		else if (!MISC::IS_BIT_SET(uParam2->f_254, 3))
		{
			func_622(uParam2, Global_40.f_4283.f_415[iParam1]);
		}
		else if (!MISC::IS_BIT_SET(uParam2->f_254, 4))
		{
			func_623(uParam2, Global_40.f_4283.f_415[iParam1], iParam3);
		}
		else
		{
			func_615(uParam2);
			func_616(uParam2);
			MISC::CLEAR_BIT(&(uParam2->f_254), 0);
		}
		return;
	}
	iVar1 = 0;
	while (iVar1 < uParam2->f_253)
	{
		if (!MISC::IS_BIT_SET(uParam2->f_255, iVar1) || MISC::IS_BIT_SET(&(Global_40.f_4283.f_415[iParam1]), iVar1))
		{
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(&(uParam2->f_9[iVar1 /*9*/])))
			{
				MISC::SET_BIT(Global_40.f_4283.f_415[iParam1], iVar1);
				MISC::CLEAR_BIT(&(uParam2->f_255), iVar1);
				func_248(5000);
			}
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(&(uParam2->f_9[iVar1 /*9*/])))
			{
				MISC::SET_BIT(Global_40.f_4283.f_415[iParam1], iVar1);
				MISC::CLEAR_BIT(&(uParam2->f_255), iVar1);
				func_248(5000);
			}
		}
		iVar1++;
	}
	uParam2->f_256 = &Global_40.f_4283.f_415[iParam1];
}

float func_244(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (*uParam0 == 4)
	{
		return 0f;
	}
	iVar2 = 0;
	while (iVar2 < uParam0->f_253)
	{
		if ((uParam0->f_9[iVar2 /*9*/])->f_8 != 0 && !func_624((uParam0->f_9[iVar2 /*9*/])->f_8))
		{
			iVar1++;
		}
		else if (!MISC::IS_BIT_SET(&(Global_40.f_4283.f_415[*uParam0]), iVar2))
		{
			iVar0++;
		}
		iVar2++;
	}
	fVar3 = (BUILTIN::TO_FLOAT(iVar0) / IntToFloat((uParam0->f_253 - iVar1)));
	return (fVar3 * 100f);
}

float func_245()
{
	int iVar0;
	
	iVar0 = func_625();
	return func_627((IntToFloat(iVar0) * func_626()), 100f);
}

float func_246(float fParam0, float fParam1)
{
	return ((fParam0 / 2f) + (fParam1 / 2f));
}

int func_247()
{
	if (func_330(Global_35, 0))
	{
		if (PED::_0x34D6AC1157C8226C(Global_35, 1855656219))
		{
			return 1;
		}
	}
	return 0;
}

void func_248(int iParam0)
{
	Global_1357549->f_1892 = (MISC::GET_GAME_TIMER() + iParam0);
}

bool func_249(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 && !func_209(iParam0))
	{
		return false;
	}
	iVar0 = func_574(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_250()
{
	if (HUD::IS_HUD_HIDDEN())
	{
		return 0;
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return 0;
	}
	if (func_628())
	{
		return 0;
	}
	if (func_232(180573150, 1))
	{
		return 0;
	}
	if (func_232(-404697685, 1))
	{
		return 0;
	}
	return 1;
}

void func_251()
{
	HUD::_0x4CC5F2FC1332577F(1670279562);
}

void func_252()
{
	HUD::_0x8BC7C1F929D07BF3(1670279562);
}

void func_253(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_408((Global_1914319->f_3[iParam0 /*446*/])->f_21) && func_629((Global_1914319->f_3[iParam0 /*446*/])->f_21))
	{
		func_630((Global_1914319->f_3[iParam0 /*446*/])->f_21, 0, 1, 0, 0);
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_11 = { 0f, 0f, 0f };
	(Global_1914319->f_3[iParam0 /*446*/])->f_21 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_22 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_17 = 0;
	(Global_1914319->f_3[iParam0 /*446*/])->f_1 = 0;
	if (PED::_0x91A5F9CBEBB9D936((Global_1914319->f_3[iParam0 /*446*/])->f_34))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA((Global_1914319->f_3[iParam0 /*446*/])->f_34, false);
	}
	func_631((Global_1914319->f_3[iParam0 /*446*/])->f_10, 0);
	func_606(iParam0, 536870912);
	iVar1 = func_632(iParam0);
	if (iVar1 >= 15)
	{
		(Global_1914319->f_3[iParam0 /*446*/])->f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_633(&((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/]));
			(Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/] = 0;
			((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_1 = { 0f, 0f, 0f };
			((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_4 = 0f;
			((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_5 = 0;
			iVar0++;
		}
		(Global_1914319->f_3[iParam0 /*446*/])->f_408 = 0;
	}
	if ((Global_1914319->f_3[iParam0 /*446*/])->f_440 != 0)
	{
		_NAMESPACE71::_0x2F901291EF177B02((Global_1914319->f_3[iParam0 /*446*/])->f_440, 0);
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_23 = 0;
	func_634(iParam0);
	(Global_1914319->f_3[iParam0 /*446*/])->f_10 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_9 = -1;
	func_635(iParam0, 0);
}

bool func_254(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_255()
{
	return func_132(&Global_1935630, 4096);
}

bool func_256(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_257(int iParam0)
{
	if (!func_373(iParam0))
	{
		return false;
	}
	return ((((*Global_1888801)[iParam0 /*35*/])->f_20 == 1 || ((*Global_1888801)[iParam0 /*35*/])->f_20 == 2) && !func_636(iParam0));
}

bool func_258(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (((*Global_1888801)[iParam0 /*35*/])->f_21 && iParam1) != 0;
}

int func_259()
{
	return Global_1897952->f_41;
}

void func_260(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	var uVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	float fVar7;
	char* sVar8;
	char* sVar9;
	char* sVar10;
	
	if (!func_637())
	{
		return;
	}
	sVar1 = func_638(iParam0, iParam1, iParam2, iParam4, iParam5, bParam3, &uVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_639(iParam4))
	{
		if (func_373(iParam0))
		{
			iParam4 = func_640(func_376(iParam0));
		}
		else
		{
			iParam4 = func_640(iParam1);
		}
	}
	if (func_639(iParam4))
	{
		iVar3 = func_641(iParam4);
	}
	if (uVar0 && bParam3)
	{
		sVar2 = func_643(func_642(iParam2));
	}
	else if ((func_644(iParam1, 2) || func_645(iParam4, 2)) && !Global_1894899->f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1894899->f_9 = 1;
	}
	else if ((func_373(iParam0) && func_646(iParam0, 16777216)) && !Global_1894899->f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899->f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1894899->f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1894899->f_9 = 1;
	}
	else
	{
		iVar4 = func_647(func_564());
		iVar5 = func_648(func_564());
		if (iVar5 < 10)
		{
			StringConCat(&sVar6, "0", 8);
		}
		StringIntConCat(&sVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_649(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&sVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, func_562(&sVar6, 109029619), sVar9, func_562(&sVar10, 109029619));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_649(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&sVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, func_562(&sVar6, 109029619), func_562(&sVar10, 109029619));
		}
		Global_1894899->f_9 = 0;
	}
	Global_1934266->f_148 = func_563(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_261(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_262(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_56() == 0)
	{
		return;
	}
	if (func_650(128))
	{
		return;
	}
	if (!func_651(iParam0))
	{
		return;
	}
	if (func_646(iParam0, 32))
	{
		return;
	}
	func_415(iParam0, 32);
	func_652(Global_1935630, 8192);
	func_654(func_653(-1532769513, -36357794), 1);
	switch (func_376(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_654(func_653(-1532769513, 213519508), 1);
			break;
		
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_654(func_653(-1532769513, 242571679), 1);
			break;
		
		case 3:
		case 10:
			func_654(func_653(-1532769513, 1349449307), 1);
			break;
		
		case 4:
		case 9:
			func_654(func_653(-1532769513, 1140362070), 1);
			break;
		
		case 8:
			func_654(func_653(-1532769513, -172330899), 1);
			break;
		
		case 13:
		case 14:
		case 15:
		case 16:
			func_654(func_653(-1532769513, -910218296), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			MAP::_0xD8C7162AB2E2AF45(1822876181);
			break;
		
		case 1:
			MAP::_0xD8C7162AB2E2AF45(1092217275);
			break;
		
		case 2:
			MAP::_0xD8C7162AB2E2AF45(1855549007);
			MAP::_0xD8C7162AB2E2AF45(1542246539);
			break;
		
		case 6:
			MAP::_0xD8C7162AB2E2AF45(-237206861);
			break;
		
		case 7:
			MAP::_0xD8C7162AB2E2AF45(276890716);
			break;
		
		case 9:
			MAP::_0xD8C7162AB2E2AF45(-353968602);
			break;
		
		case 10:
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			break;
		
		case 11:
			MAP::_0xD8C7162AB2E2AF45(-496244122);
			break;
		
		case 12:
			MAP::_0xD8C7162AB2E2AF45(-678676588);
			break;
		
		case 15:
			MAP::_0xD8C7162AB2E2AF45(-732274047);
			break;
		
		case 16:
			MAP::_0xD8C7162AB2E2AF45(-12216052);
			break;
		
		case 17:
			MAP::_0xD8C7162AB2E2AF45(-1456731677);
			break;
		
		case 21:
			MAP::_0xD8C7162AB2E2AF45(-2086563810);
			break;
		
		case 22:
			MAP::_0xD8C7162AB2E2AF45(221661572);
			break;
		
		case 24:
			MAP::_0xD8C7162AB2E2AF45(222265732);
			break;
		
		case 25:
			MAP::_0xD8C7162AB2E2AF45(-1484929764);
			break;
		
		case 26:
			MAP::_0xD8C7162AB2E2AF45(1104975149);
			break;
		
		case 27:
			MAP::_0xD8C7162AB2E2AF45(235472255);
			break;
		
		case 28:
			MAP::_0xD8C7162AB2E2AF45(-1337880478);
			break;
		
		case 29:
			MAP::_0xD8C7162AB2E2AF45(-1813267128);
			break;
		
		case 30:
			MAP::_0xD8C7162AB2E2AF45(-1941572412);
			break;
		
		case 31:
			MAP::_0xD8C7162AB2E2AF45(1006072805);
			break;
		
		case 121:
			MAP::_0xD8C7162AB2E2AF45(929640770);
			break;
		
		case 122:
			MAP::_0xD8C7162AB2E2AF45(1603579970);
			break;
		
		case 124:
			MAP::_0xD8C7162AB2E2AF45(-1332669948);
			break;
		
		case 123:
			MAP::_0xD8C7162AB2E2AF45(-1807212021);
			break;
		
		case 34:
			MAP::_0xD8C7162AB2E2AF45(-1347759053);
			break;
		
		case 36:
			MAP::_0xD8C7162AB2E2AF45(-918096609);
			break;
		
		case 114:
			MAP::_0xD8C7162AB2E2AF45(1728445882);
			break;
		
		case 37:
			MAP::_0xD8C7162AB2E2AF45(-507075109);
			break;
		
		case 40:
			MAP::_0xD8C7162AB2E2AF45(462373845);
			break;
		
		case 42:
			MAP::_0xD8C7162AB2E2AF45(-1727895786);
			break;
		
		case 43:
			MAP::_0xD8C7162AB2E2AF45(1826504111);
			break;
		
		case 44:
			MAP::_0xD8C7162AB2E2AF45(1714554710);
			break;
		
		case 45:
			MAP::_0xD8C7162AB2E2AF45(-91026072);
			break;
		
		case 54:
			MAP::_0xD8C7162AB2E2AF45(893855320);
			break;
		
		case 55:
			MAP::_0xD8C7162AB2E2AF45(326709244);
			break;
		
		case 49:
			MAP::_0xD8C7162AB2E2AF45(653799702);
			break;
		
		case 62:
			MAP::_0xD8C7162AB2E2AF45(415864829);
			break;
		
		case 64:
			MAP::_0xD8C7162AB2E2AF45(-1836330842);
			break;
		
		case 65:
			MAP::_0xD8C7162AB2E2AF45(648073069);
			break;
		
		case 66:
			MAP::_0xD8C7162AB2E2AF45(770074951);
			break;
		
		case 68:
			MAP::_0xD8C7162AB2E2AF45(-1276637644);
			break;
		
		case 71:
			MAP::_0xD8C7162AB2E2AF45(-431488293);
			break;
		
		case 72:
			MAP::_0xD8C7162AB2E2AF45(-1101810198);
			break;
		
		case 74:
			MAP::_0xD8C7162AB2E2AF45(-1344767066);
			break;
		
		case 77:
			MAP::_0xD8C7162AB2E2AF45(1472232821);
			break;
		
		case 79:
			MAP::_0xD8C7162AB2E2AF45(-1368676121);
			break;
		
		case 63:
			MAP::_0xD8C7162AB2E2AF45(-33677540);
			break;
		
		case 80:
			MAP::_0xD8C7162AB2E2AF45(1602161184);
			MAP::_0xD8C7162AB2E2AF45(-443207523);
			MAP::_0xD8C7162AB2E2AF45(-683043834);
			break;
		
		case 82:
			MAP::_0xD8C7162AB2E2AF45(147256338);
			MAP::_0xD8C7162AB2E2AF45(-134804027);
			MAP::_0xD8C7162AB2E2AF45(2027689141);
			break;
		
		case 83:
			MAP::_0xD8C7162AB2E2AF45(-161135375);
			break;
		
		case 85:
			MAP::_0xD8C7162AB2E2AF45(1625008147);
			break;
		
		case 86:
			MAP::_0xD8C7162AB2E2AF45(121074776);
			break;
		
		case 87:
			MAP::_0xD8C7162AB2E2AF45(1876184276);
			break;
		
		case 89:
			MAP::_0xD8C7162AB2E2AF45(458479023);
			break;
		
		case 91:
			MAP::_0xD8C7162AB2E2AF45(85299473);
			break;
		
		case 96:
			MAP::_0xD8C7162AB2E2AF45(-1150244084);
			break;
		
		case 98:
			MAP::_0xD8C7162AB2E2AF45(759314201);
			break;
		
		case 99:
			MAP::_0xD8C7162AB2E2AF45(2063457042);
			break;
		
		case 100:
			MAP::_0xD8C7162AB2E2AF45(1877776161);
			break;
		
		case 102:
			MAP::_0xD8C7162AB2E2AF45(2143316225);
			break;
		
		case 104:
			MAP::_0xD8C7162AB2E2AF45(-1623232489);
			MAP::_0xD8C7162AB2E2AF45(-1393093729);
			break;
		
		case 106:
			MAP::_0xD8C7162AB2E2AF45(1354284392);
			break;
		
		case 107:
			MAP::_0xD8C7162AB2E2AF45(-1430883057);
			break;
		
		case 109:
			MAP::_0xD8C7162AB2E2AF45(820139809);
			break;
		
		case 112:
			MAP::_0xD8C7162AB2E2AF45(1561007383);
			MAP::_0xD8C7162AB2E2AF45(-960425936);
			break;
	}
	if (bParam1)
	{
		func_415(iParam0, 64);
	}
}

bool func_263()
{
	return (Global_1894899 & 1 != 0 && func_133() != -1);
}

void func_264()
{
	if (!func_655(&Global_1327479))
	{
		return;
	}
	if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40)))
	{
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40)))
		{
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40));
		}
	}
	func_656(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_265(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
	}
	if (func_657() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_655(iVar1) && !func_658(iVar1, iParam2)) && (!bParam3 || !func_659(iVar1))) && (!bParam4 || !func_660(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_661(iVar0);
			}
		}
		iVar0++;
	}
}

void func_266(bool bParam0)
{
	bool bVar0;
	
	bVar0 = Global_1894899 & 1 != false;
	if (bVar0 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_1894899 |= 1;
		STATS::_0xDA26263C07CCE9C2(1);
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 1);
		STATS::_0xDA26263C07CCE9C2(0);
	}
}

int func_267()
{
	return Global_40.f_4283.f_1;
}

void func_268(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 2;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 2);
	}
}

int func_269(int iParam0, bool bParam1)
{
	switch (func_485(iParam0))
	{
		case 5:
			return 1;
		
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_270(int iParam0)
{
	int iVar0;
	
	if (!func_662(iParam0))
	{
		return 0;
	}
	iVar0 = func_663(func_462(iParam0));
	if (!func_664(iVar0))
	{
		return 0;
	}
	return func_665(iVar0, 4);
}

int func_271(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return 1;
}

void func_272()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3515))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3515);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(732106831);
		iLocal_3517 = 0;
	}
}

bool func_273()
{
	return Global_1357549->f_1616;
}

void func_274(var uParam0)
{
	uParam0->f_1424 = 0;
}

void func_275(int iParam0, bool bParam1)
{
	Global_1357549->f_1616 = iParam0;
	if (bParam1)
	{
	}
}

void func_276()
{
	if (func_146() != 2 && func_146() != 1)
	{
		return;
	}
}

void func_277(var uParam0)
{
	bool bVar0;
	
	if ((MISC::GET_FRAME_COUNT() % 30) != 0)
	{
		return;
	}
	bVar0 = false;
	if (((((Global_1357549->f_1672 == -774242862 || Global_1357549->f_1672 == -2100684454) || Global_1357549->f_1672 == -1167047117) || Global_1357549->f_1672 == 396444962) || Global_1357549->f_1672 == -498064062) || Global_1357549->f_1672 == 513694516)
	{
		if (func_232(-666548248, 1) == 0)
		{
			bVar0 = true;
			func_381(-666548248, 1017034651, 1120952528, -1, 1, 1, 0);
		}
	}
	else
	{
		func_666(-666548248, 1, 0);
	}
	if (bVar0)
	{
		if (func_209(uParam0->f_1))
		{
			func_667(uParam0->f_1, "MONEY_LOANSHARK_ALL_DEBTS", 1);
		}
	}
	if (Global_1357549->f_1672 == 0)
	{
		if (func_668(-774242862, 0, 0) >= 1)
		{
			func_669(-774242862, -62869733);
			return;
		}
		if (func_668(-2100684454, 0, 0) >= 1)
		{
			func_669(-2100684454, -62869733);
			return;
		}
		if (func_668(-1167047117, 0, 0) >= 1)
		{
			func_669(-1167047117, -62869733);
			return;
		}
		if (func_668(396444962, 0, 0) >= 1)
		{
			func_669(396444962, -62869733);
			return;
		}
		if (func_668(-498064062, 0, 0) >= 1)
		{
			func_669(-498064062, -62869733);
			return;
		}
		if (func_668(513694516, 0, 0) >= 1)
		{
			func_669(513694516, -62869733);
			return;
		}
	}
}

void func_278(int* iParam0, var uParam1)
{
	vector3 vVar0;
	float fVar3;
	bool bVar4;
	
	vVar0 = { func_670(func_281()) };
	fVar3 = 5f;
	if (func_211(vVar0))
	{
		return;
	}
	if ((func_671(26) == 0 || func_164()) && !func_12(8))
	{
		func_672(iParam0);
		return;
	}
	if (func_232(-1461741225, 1))
	{
		func_672(iParam0);
		return;
	}
	if (func_32() != 1)
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(*iParam0) && !func_247())
	{
		if (!func_12(8))
		{
			*iParam0 = MAP::_0x554D9D53F696D002(168093330, vVar0);
			MAP::_0x662D364ABF16DE2F(*iParam0, 1046501997);
			MAP::SET_BLIP_SPRITE(*iParam0, -1954662204, true);
			MAP::SET_BLIP_FLASH_TIMER(*iParam0, 66, -1);
			func_673(*iParam0, func_267());
		}
	}
	func_674(iParam0, uParam1);
	if (!TASK::_0x841475AC96E794D1(iParam0->f_863))
	{
		if ((CLOCK::GET_CLOCK_SECONDS() % 15) == 0)
		{
			iParam0->f_863 = TASK::_0xF533D68FF970D190(vVar0, 1855656219, fVar3, 1, 0);
		}
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_866))
	{
		STREAMING::REQUEST_MODEL(-62869733, false);
		if (STREAMING::HAS_MODEL_LOADED(-62869733))
		{
			iParam0->f_866 = TASK::_0x7467165EE97D3C68(iParam0->f_863);
			func_675(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_866))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_866, true);
			}
		}
		return;
	}
	if (PED::_0x9C54041BB66BCF9E(Global_35, iParam0->f_863) || func_12(67108864))
	{
		return;
	}
	if (iParam0->f_856 == 0)
	{
		if (func_12(8192) == 0)
		{
			if (!func_209(iParam0->f_1))
			{
				if (Global_1357549->f_1672 == 0)
				{
					iParam0->f_1 = func_678("GIVE_TITHE", -719620017, func_676(func_281()), func_677(), 3, 1, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
					func_215(iParam0->f_1, 736625733, 0, 1);
				}
				else if (func_679())
				{
					iParam0->f_1 = func_678("ITEM_TITHE", -719620017, func_676(func_281()), func_677(), 3, 1, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
					func_667(iParam0->f_1, "MONEY_LOANSHARK_ALL_DEBTS", 1);
					func_215(iParam0->f_1, 736625733, 0, 1);
				}
				else
				{
					iParam0->f_1 = func_678("ITEM_TITHE", -719620017, func_676(func_281()), func_677(), 3, 1, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
					func_681(iParam0->f_1, "ITEM_TITHE", func_680(Global_1357549->f_1672), 1);
					func_215(iParam0->f_1, 736625733, 0, 1);
				}
			}
		}
	}
	if (func_231(Global_35, func_676(func_281()), 1) <= (func_677() + 0.25f))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
		HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 736625733, func_682(), 0);
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		bVar4 = false;
		if ((((func_683() || func_684()) || PED::_0xA911EE21EDF69DAF(Global_35)) || func_473(Global_35)) || func_685())
		{
			bVar4 = true;
		}
		if (func_209(iParam0->f_1))
		{
			func_301(iParam0->f_1, bVar4);
		}
		if (func_209(iParam0->f_6))
		{
			func_301(iParam0->f_6, bVar4);
		}
	}
	if (iParam0->f_856)
	{
		if (func_209(iParam0->f_855) == 0)
		{
			iParam0->f_855 = func_686("BACK_TITHE", 814057702, Global_35, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		}
		else if (func_222(iParam0->f_855, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND("Back", "HUD_Camp_Status_Sounds", true, 0);
			func_210(&(iParam0->f_855), 1, 1);
			func_210(&(iParam0->f_883), 1, 1);
			func_210(&(iParam0->f_884), 1, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
			iParam0->f_856 = 0;
		}
	}
	if (func_687(iParam0->f_1, 1) || iParam0->f_2 == 1)
	{
		iParam0->f_2 = 1;
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
		if (func_209(iParam0->f_1))
		{
			func_688(iParam0->f_1, 0, 1);
		}
		if (func_209(iParam0->f_6))
		{
			func_688(iParam0->f_6, 0, 1);
		}
		if (func_173(&(iParam0->f_870)) == 0)
		{
			func_180(&(iParam0->f_870), 0);
		}
		if (((func_689(Global_35, 1, 0, 0) == joaat("weapon_unarmed") && func_689(Global_35, 0, 1, 0) == joaat("weapon_unarmed")) && func_690() == 0) && PED::_0xA911EE21EDF69DAF(Global_35) == 0)
		{
			if (PED::_0x9C54041BB66BCF9E(Global_35, iParam0->f_863) == 0)
			{
				if (func_174(&(iParam0->f_870)) > 0f)
				{
					func_145(8192);
					TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
					AUDIO::PLAY_SOUND_FRONTEND("Give_To_Gang", "HUD_Donate_Sounds", true, 0);
					func_691(iParam0);
					iParam0->f_2 = 0;
					func_75(128);
					func_672(iParam0);
				}
			}
		}
		else
		{
			WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
			func_558(&(iParam0->f_870), -0.75f);
		}
	}
}

void func_279(int* iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_211(func_692(func_281())) == 0)
	{
		if (func_231(Global_35, func_692(func_281()), 1) < 20f && !func_147())
		{
			if (iParam0->f_4 == 1)
			{
				iParam0->f_4 = 0;
				if (func_205(256) == 0)
				{
					func_207(256, 0);
				}
				else if (func_205(257) == 0)
				{
					func_207(257, 0);
				}
			}
		}
	}
	switch (func_146())
	{
		case 1:
			iVar0 = 56;
			break;
		
		case 2:
			iVar0 = 57;
			break;
		
		case 6:
			iVar0 = 59;
			break;
		
		case 3:
			iVar0 = 58;
			break;
	}
	if (iVar0 != -1)
	{
		if (func_12(33554432))
		{
			if (!func_232(-692943180, 1))
			{
				func_381(-692943180, 195285667, 1120952528, 2, 1, 1, 0);
			}
		}
		else if (func_232(-692943180, 1))
		{
			func_666(-692943180, 1, 0);
		}
		if (func_693(iParam0))
		{
			if (func_608(iVar0, 16384))
			{
				func_694(iVar0, 16384);
			}
		}
		else if (func_608(iVar0, 16384) == 0)
		{
			func_695(iVar0, 16384);
		}
	}
}

void func_280(int* iParam0, var uParam1)
{
	if (func_32() == 1)
	{
		func_696(&(iParam0->f_14), ((*uParam1)[2 /*257*/])->f_255);
		func_696(&(iParam0->f_15), ((*uParam1)[0 /*257*/])->f_255);
		func_696(&(iParam0->f_13), ((*uParam1)[1 /*257*/])->f_255);
	}
	else
	{
		func_697(iParam0);
	}
}

int func_281()
{
	switch (func_56())
	{
		case -1:
			return Global_40.f_4283;
	}
	return -1;
}

int func_282(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_283(int* iParam0)
{
	vector3 vVar0[24];
	
	if (Global_1357549->f_1671 == -1)
	{
		return;
	}
	switch (Global_1357549->f_1671)
	{
		case 0:
			StringCopy(&cVar0, "DONATE_M_SMALL", 24);
			break;
		
		case 1:
			StringCopy(&cVar0, "DONATE_M_MID", 24);
			break;
		
		case 2:
			StringCopy(&cVar0, "DONATE_M_BIG", 24);
			break;
		
		case 3:
			StringCopy(&cVar0, "DONATE_FOOD", 24);
			break;
		
		case 4:
			StringCopy(&cVar0, "DONATE_SUPP", 24);
			break;
		
		case 5:
			StringCopy(&cVar0, "DONATE_REMIND", 24);
			break;
		
		case 6:
			StringCopy(&cVar0, "DONATE_LOW", 24);
			break;
		
		case 7:
			StringCopy(&cVar0, "ASK_ABIGAIL", 24);
			func_698(&(iParam0->f_1325), func_177(13), "ABIGAIL", 0);
			break;
		
		case 8:
			StringCopy(&cVar0, "GIVE_ABIGAIL", 24);
			func_698(&(iParam0->f_1325), func_177(13), "ABIGAIL", 0);
			break;
		
		case 10:
			StringCopy(&cVar0, "ASK_JACK1", 24);
			func_698(&(iParam0->f_1325), func_177(14), "JACK", 0);
			break;
		
		case 11:
			StringCopy(&cVar0, "GIVE_JACK1", 24);
			func_698(&(iParam0->f_1325), func_177(14), "JACK", 0);
			break;
		
		case 13:
			StringCopy(&cVar0, "ASK_JACK2", 24);
			func_698(&(iParam0->f_1325), func_177(14), "JACK", 0);
			break;
		
		case 14:
			StringCopy(&cVar0, "GIVE_JACK2", 24);
			func_698(&(iParam0->f_1325), func_177(14), "JACK", 0);
			break;
		
		case 16:
			StringCopy(&cVar0, "ASK_CHARLES1", 24);
			func_698(&(iParam0->f_1325), func_177(7), "CHARLES_SMITH", 0);
			break;
		
		case 17:
			StringCopy(&cVar0, "GIVE_CHARLES1", 24);
			func_698(&(iParam0->f_1325), func_177(7), "CHARLES_SMITH", 0);
			break;
		
		case 18:
			StringCopy(&cVar0, "THANK_CHARLES1", 24);
			func_698(&(iParam0->f_1325), func_177(7), "CHARLES_SMITH", 0);
			break;
		
		case 19:
			StringCopy(&cVar0, "ASK_CHARLES2", 24);
			func_698(&(iParam0->f_1325), func_177(7), "CHARLES_SMITH", 0);
			break;
		
		case 20:
			StringCopy(&cVar0, "GIVE_CHARLES2", 24);
			func_698(&(iParam0->f_1325), func_177(7), "CHARLES_SMITH", 0);
			break;
		
		case 21:
			StringCopy(&cVar0, "THANK_CHARLES2", 24);
			func_698(&(iParam0->f_1325), func_177(7), "CHARLES_SMITH", 0);
			break;
		
		case 22:
			StringCopy(&cVar0, "ASK_CHARLES3", 24);
			func_698(&(iParam0->f_1325), func_177(7), "CHARLES_SMITH", 0);
			break;
		
		case 23:
			StringCopy(&cVar0, "GIVE_CHARLES3", 24);
			func_698(&(iParam0->f_1325), func_177(7), "CHARLES_SMITH", 0);
			break;
		
		case 24:
			StringCopy(&cVar0, "THANK_CHARLES3", 24);
			func_698(&(iParam0->f_1325), func_177(7), "CHARLES_SMITH", 0);
			break;
		
		case 25:
			StringCopy(&cVar0, "ASK_CHARLES4", 24);
			func_698(&(iParam0->f_1325), func_177(7), "CHARLES_SMITH", 0);
			break;
		
		case 26:
			StringCopy(&cVar0, "GIVE_CHARLES4", 24);
			func_698(&(iParam0->f_1325), func_177(7), "CHARLES_SMITH", 0);
			break;
		
		case 27:
			StringCopy(&cVar0, "THANK_CHARLES4", 24);
			func_698(&(iParam0->f_1325), func_177(7), "CHARLES_SMITH", 0);
			break;
		
		case 28:
			StringCopy(&cVar0, "ASK_SUSAN1", 24);
			func_698(&(iParam0->f_1325), func_177(19), "SUSAN", 0);
			break;
		
		case 29:
			StringCopy(&cVar0, "GIVE_SUSAN1", 24);
			func_698(&(iParam0->f_1325), func_177(19), "SUSAN", 0);
			break;
		
		case 30:
			StringCopy(&cVar0, "THANK_SUSAN1", 24);
			func_698(&(iParam0->f_1325), func_177(19), "SUSAN", 0);
			break;
		
		case 31:
			StringCopy(&cVar0, "ASK_SUSAN2", 24);
			func_698(&(iParam0->f_1325), func_177(19), "SUSAN", 0);
			break;
		
		case 32:
			StringCopy(&cVar0, "GIVE_SUSAN2", 24);
			func_698(&(iParam0->f_1325), func_177(19), "SUSAN", 0);
			break;
		
		case 33:
			StringCopy(&cVar0, "THANK_SUSAN2", 24);
			func_698(&(iParam0->f_1325), func_177(19), "SUSAN", 0);
			break;
		
		case 34:
			StringCopy(&cVar0, "ASK_SWANSON", 24);
			func_698(&(iParam0->f_1325), func_177(21), "SWANSON", 0);
			break;
		
		case 35:
			StringCopy(&cVar0, "GIVE_SWANSON", 24);
			func_698(&(iParam0->f_1325), func_177(21), "SWANSON", 0);
			break;
		
		case 36:
			StringCopy(&cVar0, "THANK_SWANSON", 24);
			func_698(&(iParam0->f_1325), func_177(21), "SWANSON", 0);
			break;
		
		case 37:
			StringCopy(&cVar0, "ASK_PEARSON1", 24);
			func_698(&(iParam0->f_1325), func_177(17), "PEARSON", 0);
			break;
		
		case 38:
			StringCopy(&cVar0, "GIVE_PEARSON1", 24);
			func_698(&(iParam0->f_1325), func_177(17), "PEARSON", 0);
			break;
		
		case 39:
			StringCopy(&cVar0, "THANK_PEARSON1", 24);
			func_698(&(iParam0->f_1325), func_177(17), "PEARSON", 0);
			break;
		
		case 40:
			StringCopy(&cVar0, "ASK_PEARSON2", 24);
			func_698(&(iParam0->f_1325), func_177(17), "PEARSON", 0);
			break;
		
		case 41:
			StringCopy(&cVar0, "GIVE_PEARSON2", 24);
			func_698(&(iParam0->f_1325), func_177(17), "PEARSON", 0);
			break;
		
		case 42:
			StringCopy(&cVar0, "THANK_PEARSON2", 24);
			func_698(&(iParam0->f_1325), func_177(17), "PEARSON", 0);
			break;
		
		case 43:
			StringCopy(&cVar0, "ASK_JAVIER", 24);
			func_698(&(iParam0->f_1325), func_177(2), "JAVIER", 0);
			break;
		
		case 44:
			StringCopy(&cVar0, "GIVE_JAVIER", 24);
			func_698(&(iParam0->f_1325), func_177(2), "JAVIER", 0);
			break;
		
		case 45:
			StringCopy(&cVar0, "THANK_JAVIER", 24);
			func_698(&(iParam0->f_1325), func_177(2), "JAVIER", 0);
			break;
		
		case 46:
			StringCopy(&cVar0, "ASK_BILL", 24);
			func_698(&(iParam0->f_1325), func_177(3), "BILL", 0);
			break;
		
		case 47:
			StringCopy(&cVar0, "GIVE_BILL", 24);
			func_698(&(iParam0->f_1325), func_177(3), "BILL", 0);
			break;
		
		case 48:
			StringCopy(&cVar0, "THANK_BILL", 24);
			func_698(&(iParam0->f_1325), func_177(3), "BILL", 0);
			break;
		
		case 49:
			StringCopy(&cVar0, "ASK_SEAN", 24);
			func_698(&(iParam0->f_1325), func_177(8), "SEAN", 0);
			break;
		
		case 50:
			StringCopy(&cVar0, "GIVE_SEAN", 24);
			func_698(&(iParam0->f_1325), func_177(8), "SEAN", 0);
			break;
		
		case 51:
			StringCopy(&cVar0, "THANK_SEAN", 24);
			func_698(&(iParam0->f_1325), func_177(8), "SEAN", 0);
			break;
		
		case 82:
			StringCopy(&cVar0, "ASK_KIERAN", 24);
			func_698(&(iParam0->f_1325), func_177(10), "KIERAN", 0);
			break;
		
		case 83:
			StringCopy(&cVar0, "GIVE_KIERAN", 24);
			func_698(&(iParam0->f_1325), func_177(10), "KIERAN", 0);
			break;
		
		case 84:
			StringCopy(&cVar0, "THANK_KIERAN", 24);
			func_698(&(iParam0->f_1325), func_177(10), "KIERAN", 0);
			break;
		
		case 88:
			StringCopy(&cVar0, "ASK_TILLY", 24);
			func_698(&(iParam0->f_1325), func_177(22), "TILLY", 0);
			break;
		
		case 89:
			StringCopy(&cVar0, "GIVE_TILLY", 24);
			func_698(&(iParam0->f_1325), func_177(22), "TILLY", 0);
			break;
		
		case 90:
			StringCopy(&cVar0, "THANK_TILLY", 24);
			func_698(&(iParam0->f_1325), func_177(22), "TILLY", 0);
			break;
		
		case 52:
			StringCopy(&cVar0, "ASK_LENNY1", 24);
			func_698(&(iParam0->f_1325), func_177(9), "LENNY", 0);
			break;
		
		case 53:
			StringCopy(&cVar0, "GIVE_LENNY1", 24);
			func_698(&(iParam0->f_1325), func_177(9), "LENNY", 0);
			break;
		
		case 54:
			StringCopy(&cVar0, "THANK_LENNY1", 24);
			func_698(&(iParam0->f_1325), func_177(9), "LENNY", 0);
			break;
		
		case 55:
			StringCopy(&cVar0, "ASK_LENNY2", 24);
			func_698(&(iParam0->f_1325), func_177(9), "LENNY", 0);
			break;
		
		case 56:
			StringCopy(&cVar0, "GIVE_LENNY2", 24);
			func_698(&(iParam0->f_1325), func_177(9), "LENNY", 0);
			break;
		
		case 57:
			StringCopy(&cVar0, "THANK_LENNY2", 24);
			func_698(&(iParam0->f_1325), func_177(9), "LENNY", 0);
			break;
		
		case 58:
			StringCopy(&cVar0, "ASK_MARY1", 24);
			func_698(&(iParam0->f_1325), func_177(15), "MARYBETH", 0);
			break;
		
		case 59:
			StringCopy(&cVar0, "GIVE_MARY1", 24);
			func_698(&(iParam0->f_1325), func_177(15), "MARYBETH", 0);
			break;
		
		case 60:
			StringCopy(&cVar0, "THANK_MARY1", 24);
			func_698(&(iParam0->f_1325), func_177(15), "MARYBETH", 0);
			break;
		
		case 61:
			StringCopy(&cVar0, "ASK_MARY2", 24);
			func_698(&(iParam0->f_1325), func_177(15), "MARYBETH", 0);
			break;
		
		case 62:
			StringCopy(&cVar0, "GIVE_MARY2", 24);
			func_698(&(iParam0->f_1325), func_177(15), "MARYBETH", 0);
			break;
		
		case 63:
			StringCopy(&cVar0, "THANK_MARY2", 24);
			func_698(&(iParam0->f_1325), func_177(15), "MARYBETH", 0);
			break;
		
		case 91:
			StringCopy(&cVar0, "ASK_UNCLE", 24);
			func_698(&(iParam0->f_1325), func_177(4), "UNCLE", 0);
			break;
		
		case 92:
			StringCopy(&cVar0, "GIVE_UNCLE", 24);
			func_698(&(iParam0->f_1325), func_177(4), "UNCLE", 0);
			break;
		
		case 93:
			StringCopy(&cVar0, "THANK_UNCLE", 24);
			func_698(&(iParam0->f_1325), func_177(4), "UNCLE", 0);
			break;
		
		case 94:
			StringCopy(&cVar0, "ASK_TRELW", 24);
			func_698(&(iParam0->f_1325), func_177(23), "TRELAWNY", 0);
			break;
		
		case 95:
			StringCopy(&cVar0, "GIVE_TRELW", 24);
			func_698(&(iParam0->f_1325), func_177(23), "TRELAWNY", 0);
			break;
		
		case 96:
			StringCopy(&cVar0, "THANK_TRELW", 24);
			func_698(&(iParam0->f_1325), func_177(23), "TRELAWNY", 0);
			break;
		
		case 64:
			StringCopy(&cVar0, "ASK_HOSEA1", 24);
			func_698(&(iParam0->f_1325), func_177(5), "HOSEA", 0);
			break;
		
		case 65:
			StringCopy(&cVar0, "GIVE_HOSEA1", 24);
			func_698(&(iParam0->f_1325), func_177(5), "HOSEA", 0);
			break;
		
		case 66:
			StringCopy(&cVar0, "THANK_HOSEA1", 24);
			func_698(&(iParam0->f_1325), func_177(5), "HOSEA", 0);
			break;
		
		case 67:
			StringCopy(&cVar0, "ASK_HOSEA2", 24);
			func_698(&(iParam0->f_1325), func_177(5), "HOSEA", 0);
			break;
		
		case 68:
			StringCopy(&cVar0, "GIVE_HOSEA2", 24);
			func_698(&(iParam0->f_1325), func_177(5), "HOSEA", 0);
			break;
		
		case 69:
			StringCopy(&cVar0, "THANK_HOSEA2", 24);
			func_698(&(iParam0->f_1325), func_177(5), "HOSEA", 0);
			break;
		
		case 70:
			StringCopy(&cVar0, "ASK_KAREN", 24);
			func_698(&(iParam0->f_1325), func_177(20), "KAREN", 0);
			break;
		
		case 71:
			StringCopy(&cVar0, "GIVE_KAREN", 24);
			func_698(&(iParam0->f_1325), func_177(20), "KAREN", 0);
			break;
		
		case 72:
			StringCopy(&cVar0, "THANK_KAREN", 24);
			func_698(&(iParam0->f_1325), func_177(20), "KAREN", 0);
			break;
		
		case 73:
			StringCopy(&cVar0, "ASK_DUTCH", 24);
			func_698(&(iParam0->f_1325), func_177(0), "DUTCH", 0);
			break;
		
		case 74:
			StringCopy(&cVar0, "GIVE_DUTCH", 24);
			func_698(&(iParam0->f_1325), func_177(0), "DUTCH", 0);
			break;
		
		case 75:
			StringCopy(&cVar0, "THANK_DUTCH", 24);
			func_698(&(iParam0->f_1325), func_177(0), "DUTCH", 0);
			break;
		
		case 76:
			StringCopy(&cVar0, "ASK_MICAH", 24);
			func_698(&(iParam0->f_1325), func_177(6), "MICAH_BELL", 0);
			break;
		
		case 77:
			StringCopy(&cVar0, "GIVE_MICAH", 24);
			func_698(&(iParam0->f_1325), func_177(6), "MICAH_BELL", 0);
			break;
		
		case 78:
			StringCopy(&cVar0, "THANK_MICAH", 24);
			func_698(&(iParam0->f_1325), func_177(6), "MICAH_BELL", 0);
			break;
		
		case 79:
			StringCopy(&cVar0, "ASK_SADIE", 24);
			func_698(&(iParam0->f_1325), func_177(11), "SADIE_ADLER", 0);
			break;
		
		case 80:
			StringCopy(&cVar0, "GIVE_SADIE", 24);
			func_698(&(iParam0->f_1325), func_177(11), "SADIE_ADLER", 0);
			break;
		
		case 81:
			StringCopy(&cVar0, "THANK_SADIE", 24);
			func_698(&(iParam0->f_1325), func_177(11), "SADIE_ADLER", 0);
			break;
		
		case 85:
			StringCopy(&cVar0, "ASK_MOLLY", 24);
			func_698(&(iParam0->f_1325), func_177(16), "MOLLY", 0);
			break;
		
		case 86:
			StringCopy(&cVar0, "GIVE_MOLLY", 24);
			func_698(&(iParam0->f_1325), func_177(16), "MOLLY", 0);
			break;
		
		case 87:
			StringCopy(&cVar0, "THANK_MOLLY", 24);
			func_698(&(iParam0->f_1325), func_177(16), "MOLLY", 0);
			break;
		
		case 97:
			StringCopy(&cVar0, "CPGEN_DTBOX1", 24);
			func_698(&(iParam0->f_1325), func_177(0), "DUTCH", 0);
			func_699(&(iParam0->f_1325), cVar0, 0, -1, 0, 0);
			Global_1357549->f_1671 = -1;
			return;
	}
	Global_1357549->f_1671 = -1;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		func_699(&(iParam0->f_1325), cVar0, 0, -1, 0, 0);
	}
}

void func_284(int iParam0)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0x74C2B3DC0B294102(iParam0);
	POPULATION::_0xA1CFB35069D23C23(iParam0);
}

void func_285(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

void func_286(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, vector3 vParam9, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	int iVar11;
	
	if (iParam2 < 0 || iParam2 > 4)
	{
		return;
	}
	iVar0 = func_700(iParam2, 1);
	iVar1 = func_700(iParam2, 0);
	bVar4 = (iParam2 == 0 || iParam2 == 2);
	if (iVar0 != 7)
	{
		if (iVar0 != -1)
		{
			func_701(&iVar2, vParam3, vParam6, vParam9, iVar0, iParam12, iParam13, bVar4);
			VOLUME::_0x6E0D3C3F828DA773(*uParam0, iVar2);
		}
	}
	if (iVar1 != 7)
	{
		if (iVar1 != -1)
		{
			func_701(&iVar3, vParam3, vParam6, vParam9, iVar1, iParam12, iParam13, bVar4);
			VOLUME::_0x6E0D3C3F828DA773(*uParam0, iVar3);
		}
	}
	if (*iParam1 != 0 && VOLUME::_0x92A78D0BEDB332A3(*iParam1))
	{
		fVar5 = func_702(iParam2);
		fVar6 = func_703((vParam9.x - fVar5), 0.1f);
		fVar7 = func_703((vParam9.y - fVar5), 0.1f);
		vVar8 = { fVar6, fVar7, vParam9.z };
		iVar11 = VOLUME::_CREATE_VOLUME_BY_HASH(iParam12, vParam3, vParam6, vVar8);
		VOLUME::_0x6E0D3C3F828DA773(*iParam1, iVar11);
	}
}

void func_287(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(1, iVar0));
}

void func_288(var uParam0)
{
	if (func_209(uParam0->f_8))
	{
		func_210(&(uParam0->f_8), 1, 1);
	}
	MISC::CLEAR_BIT(&(uParam0->f_1), 3);
}

void func_289(var uParam0)
{
	int iVar0;
	
	if (func_209(uParam0->f_10))
	{
		func_210(&(uParam0->f_10), 1, 1);
	}
	if (func_209(uParam0->f_11))
	{
		func_210(&(uParam0->f_11), 1, 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_209(&(uParam0->f_12[iVar0])))
		{
			func_210(uParam0->f_12[iVar0], 1, 1);
		}
		iVar0++;
	}
	if (func_209(uParam0->f_9))
	{
		func_210(&(uParam0->f_9), 1, 1);
	}
	MISC::CLEAR_BIT(&(uParam0->f_1), 5);
}

void func_290(bool bParam0, var uParam1)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bParam0, 0, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&(uParam1->f_1), 2);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam1->f_1), 2);
	}
}

void func_291(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_12[iVar0] = 0;
		iVar0++;
	}
}

void func_292(int iParam0, bool bParam1)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 2228479, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 2228479, 16384, 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, iParam0);
	}
}

void func_293(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_704(&iParam1, 8192);
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_294(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_295(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 1048576;
	if (bParam1)
	{
		iVar0 |= 131072;
	}
	if (bParam2)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_296(int iParam0, vector3 vParam1, var uParam4, int iParam5)
{
	if (!func_494(iParam0))
	{
		return;
	}
	if (func_211(vParam1))
	{
		return;
	}
	(Global_1395601->f_5[iParam0 /*28*/])->f_15 = { vParam1 };
	(Global_1395601->f_5[iParam0 /*28*/])->f_18 = uParam4;
	(Global_1395601->f_5[iParam0 /*28*/])->f_23 = iParam5;
	if (VOLUME::_0x92A78D0BEDB332A3(iParam5))
	{
	}
	if (!func_131(242, 1, 1))
	{
		func_705(iParam0, 1);
	}
	func_706(iParam0);
	func_707(iParam0, 1);
	(Global_40.f_9384[iParam0 /*2*/])->f_1 = func_564();
}

int func_297(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_131(0, 0, 1))
	{
		return 0;
	}
	if (iParam0 == 7)
	{
		if (!func_148(60))
		{
			return 0;
		}
	}
	return 1;
}

void func_298(int iParam0, var uParam1)
{
	vector3 vVar0;
	
	func_291(uParam1);
	vVar0 = { func_708(iParam0) };
	uParam1->f_5 = VOLUME::_CREATE_VOLUME_CYLINDER(vVar0, 0f, 0f, 0f, 2.25f, 2.25f, 2f);
	uParam1->f_6 = GRAPHICS::_0xFA50F79257745E74(vVar0, 2f, 1, 36, 0);
	if (MAP::DOES_BLIP_EXIST(uParam1->f_4))
	{
		MAP::REMOVE_BLIP(&(uParam1->f_4));
	}
	uParam1->f_4 = MAP::_0x554D9D53F696D002(1687768444, func_708(iParam0));
	MAP::_0x662D364ABF16DE2F(uParam1->f_4, 287169430);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_4, "BLIP_CAMP_HITCH");
	MAP::SET_BLIP_FLASH_TIMER(uParam1->f_4, 68, -1);
	func_673(uParam1->f_4, func_267());
}

void func_299(var uParam0, int iParam1)
{
	if (iParam1 == *uParam0)
	{
		return;
	}
	*uParam0 = iParam1;
	MISC::CLEAR_BIT(&(uParam0->f_1), 1);
}

void func_300(var uParam0)
{
	uParam0->f_8 = func_213("BLIP_CAMP_HITCH", 1940454787, uParam0->f_5, 1, 0, 0, 4, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
	MISC::SET_BIT(&(uParam0->f_1), 3);
}

void func_301(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_209(iParam0))
	{
		return;
	}
	iVar0 = func_574(iParam0);
	HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iVar0 /*18*/])->f_3, !bParam1);
}

void func_302(var uParam0)
{
	if (func_709())
	{
		uParam0->f_11 = func_710(uParam0);
		HUD::_UIPROMPT_SET_GROUP(func_711(uParam0->f_11), 1842627646, 0);
	}
	else if (func_712())
	{
		uParam0->f_10 = func_213("CAMP_HITCH_SADDLE", 1940454787, uParam0->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
		HUD::_UIPROMPT_SET_GROUP(func_711(uParam0->f_10), 1842627646, 0);
	}
	if (func_713(2) == 2)
	{
		func_714(2, -1384133541, uParam0);
	}
	if (func_713(3) == 2)
	{
		func_714(3, 1710877787, uParam0);
	}
	if (func_713(4) == 2)
	{
		func_714(4, 1141111167, uParam0);
	}
	uParam0->f_9 = func_213("SHOP_EXIT", 992265328, uParam0->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
	HUD::_UIPROMPT_SET_GROUP(func_711(uParam0->f_9), 1842627646, 0);
	MISC::SET_BIT(&(uParam0->f_1), 5);
}

int func_303(var uParam0)
{
	*uParam0 = -1;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0;
	}
	if (func_712())
	{
		return 1;
	}
	if (func_713(2) == 2)
	{
		return 1;
	}
	if (func_713(3) == 2)
	{
		return 1;
	}
	if (func_713(4) == 2)
	{
		return 1;
	}
	if (func_709())
	{
		return 1;
	}
	else if (!func_715())
	{
		*uParam0 = 0;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(func_363(0)) && func_226(func_363(0)))
	{
		*uParam0 = 2;
	}
	else if (func_716(0) || (ENTITY::DOES_ENTITY_EXIST(func_363(0)) && ENTITY::IS_ENTITY_DEAD(func_363(0))))
	{
		*uParam0 = 1;
	}
	return 0;
}

void func_304(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 && !func_209(iParam0))
	{
		return;
	}
	iVar0 = func_574(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

var func_305(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;
	
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_306(int iParam0)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 <= -1 || iParam0 >= 630)
	{
		return;
	}
	func_571(iParam0, &uVar0, &uVar1);
	func_717(&uVar0, &uVar1);
}

bool func_307()
{
	int iVar0;
	
	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) <= 4);
}

int func_308(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		
		case 1:
			return 3;
		
		case 2:
			return 4;
		
		default:
			break;
	}
	return -1;
}

Vector3 func_309(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -108.5488f, -31.9591f, 94.9533f;
		
		case 2:
			return 703.402f, -1230.448f, 44.2554f;
		
		case 3:
			return 1848.78f, -1838.562f, 42.1948f;
		
		case 5:
			return 2277.974f, -753.376f, 41.0869f;
		
		case 6:
			return 2370.903f, 1339.88f, 105.1385f;
		
		case 7:
			return -2591.979f, 464.4913f, 145.3082f;
		
		case 8:
			if (!func_718())
			{
				return -1663.893f, -1331.753f, 82.9211f;
			}
			else
			{
				return -1642.401f, -1376.996f, 82.9705f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_310(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 302.5949f;
		
		case 2:
			return 25.2604f;
		
		case 3:
			return 296.4873f;
		
		case 5:
			return 318.2845f;
		
		case 6:
			return 350.6767f;
		
		case 7:
			return 320.8711f;
		
		case 8:
			if (!func_718())
			{
				return 102.5146f;
			}
			else
			{
				return 76.6876f;
			}
			break;
	}
	return 0f;
}

void func_311(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = func_719();
	func_720(0, iParam0);
	func_721(0, 1);
	if (bVar0)
	{
		func_721(iParam0, 2);
		if (func_722(iParam0))
		{
			func_723(iParam0);
		}
	}
	else
	{
		iVar1 = func_363(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			func_724(iVar1);
			PED::_0xCC8CA3E88256E58F(iVar1, 0, 1, 1, 1, 1);
		}
		func_725(iParam0);
		func_726(iParam0);
		func_721(iParam0, 0);
	}
	if (func_727() == 0)
	{
		func_728(0);
		func_321(0);
	}
}

Vector3 func_312(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case -1:
					return -106.1076f, -31.1365f, 94.9429f;
				
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-106.1076f, -31.1365f, 94.9429f, func_729(iParam0), 0.75f, 0f, 0f);
				
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-106.1076f, -31.1365f, 94.9429f, func_729(iParam0), -0.75f, 0f, 0f);
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case -1:
					return 702.1609f, -1228.529f, 44.1236f;
				
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(702.1609f, -1228.529f, 44.1236f, func_729(iParam0), 0.75f, 0f, 0f);
				
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(702.1609f, -1228.529f, 44.1236f, func_729(iParam0), -0.75f, 0f, 0f);
				
				default:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case -1:
					return 1850.179f, -1838.022f, 42.1198f;
				
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(1850.179f, -1838.022f, 42.1198f, func_729(iParam0), 0.75f, 0f, 0f);
				
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(1850.179f, -1838.022f, 42.1198f, func_729(iParam0), -0.75f, 0f, 0f);
				
				default:
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case -1:
					return 2279.944f, -751.8282f, 40.9738f;
				
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(2279.944f, -751.8282f, 40.9738f, func_729(iParam0), 0.75f, 0f, 0f);
				
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(2279.944f, -751.8282f, 40.9738f, func_729(iParam0), -0.75f, 0f, 0f);
				
				default:
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case -1:
					return 2371.779f, 1341.602f, 105.1376f;
				
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(2371.779f, 1341.602f, 105.1376f, func_729(iParam0), 0.75f, 0f, 0f);
				
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(2371.779f, 1341.602f, 105.1376f, func_729(iParam0), -0.75f, 0f, 0f);
				
				default:
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case -1:
					return -2590.321f, 464.9799f, 145.1713f;
				
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-2590.321f, 464.9799f, 145.1713f, func_729(iParam0), 0.75f, 0f, 0f);
				
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-2590.321f, 464.9799f, 145.1713f, func_729(iParam0), -0.75f, 0f, 0f);
				
				default:
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case -1:
					if (!func_718())
					{
						return -1665.684f, -1332.361f, 82.8786f;
					}
					else
					{
						return -1644.99f, -1376.751f, 82.9679f;
					}
					break;
				
				case 0:
					if (!func_718())
					{
						return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1665.684f, -1332.361f, 82.8786f, func_729(iParam0), 0.75f, 0f, 0f);
					}
					else
					{
						return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1644.99f, -1376.751f, 82.9679f, func_729(iParam0), 0.75f, 0f, 0f);
					}
					break;
				
				case 1:
					if (!func_718())
					{
						return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1665.684f, -1332.361f, 82.8786f, func_729(iParam0), -0.75f, 0f, 0f);
					}
					else
					{
						return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1644.99f, -1376.751f, 82.9679f, func_729(iParam0), -0.75f, 0f, 0f);
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_313(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	
	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_314(int iParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar13;
	int iVar16;
	struct<11> Var17;
	
	if (!func_730())
	{
		return 1;
	}
	vVar0 = { func_312(iParam0, -1) };
	if (func_211(vVar0))
	{
		return 0;
	}
	iVar6 = func_363(0);
	iVar7 = func_363(1);
	bVar8 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iVar7))
	{
		if (func_731(iVar7, vVar0, 2f, 1, 0))
		{
			bVar8 = true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar6) && PED::_0xA0BC8FAED8CFEB3C(iVar6))
	{
		if (PED::_0xB676EFDA03DADA52(iVar6, 1) != 0 || PED::GET_MOUNT(Global_35) == iVar6)
		{
			return 1;
		}
		func_732();
		func_733();
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar6, 0, 1);
		MISC::CLEAR_AREA(vVar0, 1f, 2442122);
		if (bVar8)
		{
			vVar3 = { func_312(iParam0, 1) };
		}
		else
		{
			vVar3 = { vVar0 };
		}
		ENTITY::SET_ENTITY_COORDS(iVar6, vVar3, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iVar6, func_729(iParam0));
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iVar6, vVar0, 0.25f, -1, 0, 0, 0, 0);
		iVar9 = TASK::_0xF533D68FF970D190(vVar0, -1805387726, 0.5f, 0, 0);
		if (TASK::_0x841475AC96E794D1(iVar9))
		{
			vVar10 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(TASK::_0x7467165EE97D3C68(iVar9), func_734(2, 1)) };
			PHYSICS::_0x06AADE17334F7A40(iVar6, vVar10);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar7) && bVar8)
		{
			vVar3 = { func_312(iParam0, 0) };
			ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar7, func_729(iParam0));
			TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iVar7, vVar0, 0.25f, -1, 0, 0, 0, 0);
			if (TASK::_0x841475AC96E794D1(iVar9))
			{
				vVar13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(TASK::_0x7467165EE97D3C68(iVar9), func_734(2, 0)) };
				PHYSICS::_0x06AADE17334F7A40(iVar7, vVar13);
			}
		}
		uParam1->f_3 = iVar6;
		return 1;
	}
	Var17.f_10 = 7;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_3))
	{
		Var17.f_10 = 0;
		Var17.f_6 = { vVar0 };
		Var17.f_9 = 0f;
		Var17.f_1 = 0;
		Var17 = 1;
		Var17.f_2 = 1;
		iVar6 = func_735(&iVar16, &Var17);
		switch (iVar16)
		{
			case 0:
				return 0;
			
			case 1:
				return 1;
			
			case 2:
				break;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_315(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_722(iParam0))
	{
		return;
	}
	iVar0 = func_363(iParam0);
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar4 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1));
		if (!ENTITY::IS_ENTITY_A_PED(iVar4))
		{
		}
		else
		{
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4);
			if (!PED::IS_PED_HUMAN(iVar5))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4))
			{
			}
			else
			{
				ENTITY::_0x0D0DB2B6AF19A987(&iVar4);
			}
		}
		iVar3++;
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
}

void func_316()
{
	int iVar0;
	
	iVar0 = func_363(0);
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 136, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 136, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 312, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 312, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 113, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 113, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 301, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 367, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 367, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 72, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 72, false);
	}
	if (!PED::_0x2C76FA0E01681F8D(iVar0, 0))
	{
		PED::_0xAE6004120C18DF97(iVar0, 0, 1);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
	if (FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48))
	{
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, false);
	}
	if (ENTITY::_0x083D497D57B7400F(iVar0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(iVar0))
	{
		ENTITY::SET_ENTITY_VISIBLE(iVar0, true);
	}
	if (!ENTITY::_0x75DF9E73F2F005FD(iVar0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
	}
}

int func_317(int iParam0)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372;
}

void func_318(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	
	if (iParam1 == -1)
	{
		return;
	}
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (iParam0 != 0)
	{
		if (!func_671(43))
		{
			return;
		}
	}
	iVar0 = func_737(iParam0);
	if (func_738(iVar0) || func_739(iVar0))
	{
		return;
	}
	iVar1 = func_317(iParam0);
	if (iVar1 >= func_740(iVar0))
	{
		return;
	}
	if (func_741(iParam0, iParam1))
	{
		return;
	}
	if (func_742(iParam0, iParam1))
	{
		return;
	}
	fVar2 = func_743(iParam0, iParam1);
	fVar3 = func_744(iParam1);
	fVar3 = (fVar3 * (1f + Global_40.f_11095.f_68));
	switch (iParam1)
	{
		case 1:
			iVar4 = func_363(iParam0);
			if (func_745(iVar4, 0))
			{
				fVar3 = (fVar3 * 0.5f);
			}
			(Global_1900383->f_317.f_2[iParam0 /*5*/])->f_2 = ((Global_1900383->f_317.f_2[iParam0 /*5*/])->f_2 + fVar3);
			break;
		
		case 2:
		case 3:
			if (func_746())
			{
				fVar3 = (fVar3 * 2f);
			}
			(Global_1900383->f_317.f_2[iParam0 /*5*/])->f_2 = ((Global_1900383->f_317.f_2[iParam0 /*5*/])->f_2 + fVar3);
			break;
		
		case 4:
			(Global_1900383->f_317.f_2[iParam0 /*5*/])->f_4 = ((Global_1900383->f_317.f_2[iParam0 /*5*/])->f_4 + fVar3);
			break;
		
		case 5:
			if (iVar1 < 1)
			{
				fVar5 = func_747(iParam0);
				fVar6 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
				fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1 + 1));
				fVar3 = (fVar7 - (fVar6 + fVar5));
			}
			else
			{
				fVar3 = 0f;
			}
			break;
		
		default:
			func_748(iParam1, fVar3);
			break;
	}
	func_749(iParam0, fVar3);
	func_750(iParam0, iParam1, (fVar2 + fVar3));
}

int func_319()
{
	int iVar0;
	
	iVar0 = func_751();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_320()
{
	int iVar0;
	
	iVar0 = func_751();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_752(0);
}

void func_321(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

Vector3 func_322(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -107.3742f, -33.2291f, 94.9708f;
		
		case 2:
			return 704.5956f, -1229.202f, 44.2563f;
		
		case 3:
			return 1848.884f, -1836.363f, 42.333f;
		
		case 5:
			return 2277.335f, -751.5715f, 41.0714f;
		
		case 6:
			return 2369.604f, 1340.72f, 105.1302f;
		
		case 7:
			return -2590.858f, 468.7466f, 145.054f;
		
		case 8:
			if (!func_718())
			{
				return -1664.295f, -1330.149f, 82.9397f;
			}
			else
			{
				return -1646.427f, -1375.833f, 82.9658f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_323(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_324(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (func_319())
	{
		func_753();
		func_320();
	}
	iVar0 = func_754();
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		STREAMING::REQUEST_MODEL(iVar0, false);
		return 0;
	}
	iVar1 = OBJECT::CREATE_OBJECT(iVar0, vParam0, true, true, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	func_752(iVar1);
	bVar2 = false;
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
	{
		bVar2 = true;
	}
	bVar3 = false;
	if (ENTITY::_0x88AD6CC10D8D35B2(iVar1))
	{
		bVar3 = true;
	}
	if (!bVar2 || !bVar3)
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
	}
	ENTITY::SET_ENTITY_HEADING(iVar1, fParam3);
	if (bParam4)
	{
		ENTITY::_0x9587913B9E772D29(iVar1, 0);
	}
	TASK::_0xF0B4F759F35CC7F5(iVar1, 822715387, 0, 0, 0);
	return 1;
}

void func_325(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (&uParam0->f_3374[iVar0] != 0)
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(&(uParam0->f_3374[iVar0]));
			uParam0->f_3374[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_326(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		func_755(uParam0->f_3402[iVar0]);
		func_755(uParam0->f_3430[iVar0]);
		iVar0++;
	}
	func_755(&(uParam0->f_3478));
	iVar1 = 0;
	while (iVar1 < 3)
	{
		func_755(uParam0->f_3458[iVar1]);
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 15)
	{
		func_755(uParam0->f_3462[iVar2]);
		iVar2++;
	}
}

void func_327(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_372(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_652(Global_1935630, 4194304);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

int func_328(bool bParam0)
{
	if (!bParam0 && func_756(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

void func_329(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_757(&Global_0, 8);
	}
	if (!func_758() || func_56() != -1)
	{
		return;
	}
	func_757(&Global_0, 1);
}

int func_330(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_759(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_759(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_759(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_759(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_759(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_759(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_759(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_759(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

Vector3 func_331(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1343.699f, 2429.397f, 307.0626f;
		
		case 1:
			return -123.1805f, -28.8611f, 94.8478f;
		
		case 2:
			return 667.9077f, -1252.78f, 42.9221f;
		
		case 3:
			return 1880.807f, -1873.231f, 41.8094f;
		
		case 4:
			return 1422.625f, -7332.473f, 80.5977f;
		
		case 5:
			return 2254.96f, -758.12f, 41.75f;
		
		case 6:
			return 2351.282f, 1362.077f, 104.9752f;
		
		case 7:
			return -2593.21f, 453.9533f, 145.9973f;
		
		case 8:
			return func_760();
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_332()
{
	int iVar0;
	
	iVar0 = func_267();
	switch (iVar0)
	{
		case 79:
			return 50f;
		
		case 58:
			return 50f;
		
		case 71:
			return 50f;
		
		case 43:
			return 50f;
		
		case 4:
			return 50f;
		
		case 9:
			return 50f;
		
		case 22:
			return 120f;
		
		case 98:
			return 60f;
		
		case 37:
			return 120f;
	}
	return 25f;
}

int func_333(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			if ((Global_1898077->f_1 == 1 || Global_1898077->f_1 == 3) || Global_1898077->f_1 == 4)
			{
				return 1;
			}
			break;
		
		case 2:
			if ((((Global_1898077->f_1 == 2 || Global_1898077->f_1 == 5) || Global_1898077->f_1 == 1) || Global_1898077->f_1 == 3) || Global_1898077->f_1 == 4)
			{
				return 1;
			}
			break;
		
		case 5:
			if (((Global_1898077->f_1 == 5 || Global_1898077->f_1 == 1) || Global_1898077->f_1 == 3) || Global_1898077->f_1 == 4)
			{
				return 1;
			}
			break;
		
		case 3:
			if (Global_1898077->f_1 == 3 || Global_1898077->f_1 == 4)
			{
				return 1;
			}
			break;
		
		case 4:
			if (Global_1898077->f_1 == 4)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_334(bool bParam0)
{
	int iVar0;
	
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_56() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_761(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_762();
		Global_1898077->f_9 = func_763(Global_1894899->f_2);
		func_764(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

void func_335(int iParam0, bool bParam1, float fParam2)
{
	func_765(iParam0, bParam1, fParam2);
}

void func_336()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (&Global_1934765->f_275[iVar0 /*2*/] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			Global_1934765->f_286 = (Global_1934765->f_286 + (Global_1934765->f_275[iVar0 /*2*/])->f_1);
			Global_1934765->f_275[iVar0 /*2*/] = 0;
			(Global_1934765->f_275[iVar0 /*2*/])->f_1 = 0;
			func_766();
			return;
		}
		iVar0++;
	}
}

void func_337(int* iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	func_672(iParam0);
	func_767(iParam0);
	func_697(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_11))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_11));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_12))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_12));
	}
	if (func_768())
	{
		INTERIOR::CLEAR_ROOM_FOR_ENTITY(iParam0->f_864);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_864))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("ledger_ct");
		OBJECT::DELETE_OBJECT(&(iParam0->f_864));
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_33);
	HUD::_0xAA03F130A637D923("CPGENAU");
	func_769(iParam0->f_1426, &iVar0, &uVar1, &uVar2, &uVar3);
	Global_1357549->f_1723 = 0;
	func_543(iVar0, 512, 0);
	if (((func_281() == 1 || func_281() == 2) || func_281() == 3) || func_281() == 6)
	{
		func_770(&(iParam0->f_1428));
	}
}

void func_338()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if ((Global_1357549->f_12[iVar0 /*14*/])->f_7 != 0)
		{
			ENTITY::_0xD2B9C78537ED5759((Global_1357549->f_12[iVar0 /*14*/])->f_7);
			(Global_1357549->f_12[iVar0 /*14*/])->f_7 = 0;
			(Global_1357549->f_12[iVar0 /*14*/])->f_10 = 0;
			(Global_1357549->f_12[iVar0 /*14*/])->f_8 = 0;
		}
		iVar0++;
	}
}

void func_339(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((Global_1914319->f_3[iVar0 /*446*/])->f_9 == iParam0)
		{
			func_253(iVar0);
		}
		iVar0++;
	}
}

void func_340(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (&Global_23117[iParam0 /*11*/] - (Global_23117[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0 /*11*/] = (&Global_1058888->f_40615[iParam0 /*11*/] - (Global_1058888->f_40615[iParam0 /*11*/] && iParam1));
}

bool func_341(int iParam0)
{
	return (Local_18.f_1718 && iParam0) == iParam0;
}

void func_342(int iParam0)
{
	Local_18.f_1718 = (Local_18.f_1718 - (Local_18.f_1718 && iParam0));
}

bool func_343(int iParam0)
{
	return func_402(iParam0, 16, 1);
}

bool func_344(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_177(iParam0);
	if (bParam1)
	{
		if (!func_330(iVar0, 0))
		{
			return false;
		}
	}
	return PED::IS_PED_GROUP_MEMBER(iVar0, func_771(), 1);
}

void func_345(int iParam0)
{
	int iVar0;
	struct<15> Var1;
	
	if (!func_495(iParam0))
	{
		return;
	}
	if (!func_344(iParam0, 0))
	{
	}
	func_772(iParam0);
	Global_1359489->f_15 = func_773(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == iParam0)
		{
			(*Global_1359489)[iVar0] = -1;
		}
		iVar0++;
	}
	func_774();
	func_416(iParam0, 32, 1);
	if (func_330(Global_1360165[iParam0 /*1157*/], 0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, false);
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, false);
		Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
		Var1.f_12 = 8;
		Var1.f_3 = Global_1360165[iParam0 /*1157*/];
		Var1.f_7 = func_133();
		Var1.f_8 = 0;
		Var1.f_11 = 10;
		Var1.f_14 = Global_1360165[iParam0 /*1157*/];
		MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	}
}

void func_346()
{
	func_381(-505205920, 1017034651, -469960592, 4, 1, 1, 1);
	func_775(544);
	func_775(595);
	func_775(548);
	func_776(0);
	func_776(19);
	func_777(1, 1, 0);
	func_778();
}

void func_347(bool bParam0)
{
	int iVar0;
	
	if (func_56() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1360165)
	{
		if ((!func_343(iVar0) && !func_779(iVar0)) && iVar0 != Global_1357549->f_1497)
		{
			if ((!func_528(iVar0, 33, 1) || !ENTITY::DOES_ENTITY_EXIST(Global_1360165[iVar0 /*1157*/])) || !ENTITY::IS_ENTITY_ON_SCREEN(Global_1360165[iVar0 /*1157*/]))
			{
				func_780(iVar0, 0, 0, 1, bParam0);
			}
		}
		iVar0++;
	}
}

void func_348(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (bParam0)
	{
		func_145(4096);
		if (iParam1 && VOLUME::_0x92A78D0BEDB332A3(iParam2))
		{
			iVar0 = 0;
			while (iVar0 < 27)
			{
				if (func_330(func_136(iVar0), 0))
				{
					if (!func_496(iVar0))
					{
						if (func_402(iVar0, 32768, 1))
						{
							_NAMESPACE48::_0x7B204F88F6C3D287(func_781(iVar0, 0));
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		func_142(4096);
	}
}

int func_349(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	
	bVar0 = func_56() != -1;
	switch (iParam0)
	{
		case 76:
			*uParam1 = 0;
			if (bParam3)
			{
				*uParam2 = 47;
			}
			else
			{
				*uParam2 = 63;
			}
			if (bVar0)
			{
				*uParam2 = 5;
			}
			break;
		
		case 105:
			*uParam1 = 69;
			if (bParam3)
			{
				*uParam2 = 127;
			}
			else
			{
				*uParam2 = 136;
			}
			if (bVar0)
			{
				*uParam2 = 72;
			}
			break;
		
		case 5:
			*uParam1 = 137;
			*uParam2 = 324;
			if (bVar0)
			{
				*uParam2 = 142;
			}
			break;
		
		case 61:
			*uParam1 = 380;
			*uParam2 = 381;
			if (bVar0)
			{
				*uParam2 = 380;
			}
			break;
		
		case 78:
			*uParam1 = 382;
			*uParam2 = 431;
			if (bVar0)
			{
				*uParam2 = 384;
			}
			break;
		
		case 92:
			*uParam1 = 443;
			*uParam2 = 471;
			if (bVar0)
			{
				*uParam2 = 443;
			}
			break;
		
		case 26:
			*uParam1 = 472;
			if (bParam3)
			{
				*uParam2 = 500;
			}
			else
			{
				*uParam2 = 502;
			}
			if (bVar0)
			{
				*uParam2 = 472;
			}
			break;
		
		case 38:
			*uParam1 = 508;
			*uParam2 = 553;
			if (bVar0)
			{
				*uParam2 = 509;
			}
			break;
		
		case 68:
			*uParam1 = 554;
			*uParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 65:
			*uParam1 = 566;
			*uParam2 = 588;
			if (bVar0)
			{
				*uParam2 = 566;
			}
			break;
		
		case 69:
			*uParam1 = 589;
			if (bParam3)
			{
				*uParam2 = 598;
			}
			else
			{
				*uParam2 = 612;
			}
			if (bVar0)
			{
				*uParam2 = 590;
			}
			break;
		
		case 75:
			*uParam1 = 503;
			*uParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 93:
			*uParam1 = 613;
			*uParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 95:
			*uParam1 = 626;
			*uParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 97:
			*uParam1 = 642;
			*uParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 3:
			*uParam1 = 644;
			*uParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 6:
			*uParam1 = 657;
			*uParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 32:
			*uParam1 = 325;
			*uParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 82:
			*uParam1 = 659;
			if (bParam3)
			{
				*uParam2 = 673;
			}
			else
			{
				*uParam2 = 690;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 35:
			*uParam1 = 691;
			*uParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 56:
			*uParam1 = 701;
			*uParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 22:
			if (bParam4)
			{
				*uParam1 = 715;
			}
			else
			{
				*uParam1 = 715;
			}
			*uParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 110:
			*uParam1 = 724;
			*uParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 64:
			*uParam1 = 736;
			*uParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 66:
			*uParam1 = 745;
			*uParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 70:
			*uParam1 = 751;
			*uParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 77:
			*uParam1 = 731;
			*uParam2 = 732;
			break;
		
		case 96:
			*uParam1 = 741;
			*uParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 29:
			*uParam1 = 744;
			*uParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 100:
			*uParam1 = 755;
			*uParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 102:
			*uParam1 = 764;
			*uParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 72:
			*uParam1 = 733;
			*uParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 124:
			*uParam1 = 791;
			*uParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 86:
			*uParam1 = 768;
			*uParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 126:
			*uParam1 = 773;
			*uParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 120:
			*uParam1 = 432;
			*uParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 115:
			*uParam1 = 345;
			*uParam2 = 375;
			if (bVar0)
			{
				*uParam2 = 375;
			}
			break;
		
		case 125:
			*uParam1 = 376;
			*uParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 116:
			*uParam1 = 783;
			*uParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 21:
			*uParam1 = 780;
			*uParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 42:
			*uParam1 = 794;
			*uParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 89:
			*uParam1 = 799;
			*uParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 23:
			*uParam1 = 801;
			*uParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 28:
			*uParam1 = 802;
			*uParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 101:
			*uParam1 = 804;
			*uParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 117:
			*uParam1 = 507;
			*uParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 11:
			*uParam1 = 807;
			*uParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		case 128:
			*uParam1 = 834;
			*uParam2 = 857;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *uParam2 == -1)
	{
		return 0;
	}
	return 1;
}

int func_350(int iParam0, int iParam1)
{
	if (func_56() != -1)
	{
		return 0;
	}
	if (!func_408(iParam0))
	{
		return 0;
	}
	if (!func_629(iParam0) && iParam1)
	{
		return 0;
	}
	return func_374(iParam0, 1);
}

int func_351(int iParam0)
{
	int iVar0;
	
	if (!func_408(iParam0))
	{
		return 0;
	}
	if (!func_782(func_409(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_783(iParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(_NAMESPACE48::_0x31C70A716CAE1FEE(func_783(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _NAMESPACE48::_0x31C70A716CAE1FEE(func_783(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	_NAMESPACE48::_0x7B204F88F6C3D287(func_783(iParam0));
	return 1;
}

void func_352()
{
	if (func_330(Global_35, 0))
	{
		PED::_0x86F0B6730C32AC14(Global_35, 0);
	}
	if (func_330(func_177(0), 0))
	{
		PED::_0x86F0B6730C32AC14(func_177(0), 0);
	}
	if (func_330(func_177(16), 0))
	{
		PED::_0x86F0B6730C32AC14(func_177(16), 0);
	}
}

void func_353()
{
	int iVar0[3];
	int iVar4;
	
	iVar0[0] = 67198036;
	iVar0[1] = -1656481590;
	iVar0[2] = -1670262487;
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (STREAMING::_IS_IMAP_ACTIVE(&(iVar0[iVar4])))
		{
			STREAMING::_REMOVE_IMAP(&(iVar0[iVar4]));
		}
		iVar4++;
	}
}

void func_354(var uParam0)
{
	if (uParam0->f_49 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_48))
	{
		VEHICLE::DELETE_VEHICLE(&(uParam0->f_48));
	}
	func_44(&(Global_1357549->f_3));
}

void func_355(var uParam0)
{
	func_784(0.775f, 0.2f, 0.025f, 0f);
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_3514))
	{
		VOLUME::_0x43F867EF5C463A53(iLocal_3514);
	}
	func_272();
	func_785(1073741824);
	OBJECT::_0x0C0A373D181BF900(-1833460353);
	OBJECT::_0x0C0A373D181BF900(-588172815);
	OBJECT::_0x0C0A373D181BF900(-297610092);
	OBJECT::_0x0C0A373D181BF900(969632676);
	OBJECT::_0x0C0A373D181BF900(1175826463);
	OBJECT::_0x0C0A373D181BF900(-6656809);
	OBJECT::_0x0C0A373D181BF900(-2111960098);
	OBJECT::_0x0C0A373D181BF900(1659012492);
	OBJECT::_0x0C0A373D181BF900(1970514606);
}

void func_356()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_330((Global_1357549->f_1675[iVar0 /*5*/])->f_3, 0))
		{
			if (!func_786((Global_1357549->f_1675[iVar0 /*5*/])->f_3) && !ENTITY::DOES_ENTITY_EXIST(PED::_0xB676EFDA03DADA52((Global_1357549->f_1675[iVar0 /*5*/])->f_3, 0)))
			{
				bVar1 = false;
				if (!ENTITY::_0x88AD6CC10D8D35B2((Global_1357549->f_1675[iVar0 /*5*/])->f_3))
				{
					PED::_0xF008E0BA1FE1D644(1);
					bVar1 = true;
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY((Global_1357549->f_1675[iVar0 /*5*/])->f_3, true, true);
				}
				_NAMESPACE48::_0x7B204F88F6C3D287((Global_1357549->f_1675[iVar0 /*5*/])->f_4);
				if (bVar1)
				{
					PED::_0x7D4E70A67A651C71(1);
				}
				_NAMESPACE48::_0xFCC6DB8DBE709BC8((Global_1357549->f_1675[iVar0 /*5*/])->f_4);
			}
		}
		iVar0++;
	}
}

void func_357()
{
	if (Global_40.f_4283.f_567)
	{
		func_787(&(Global_1357549->f_1897));
	}
}

void func_358()
{
	if (Global_1357549->f_1832 != -1 && AUDIO::IS_STREAM_PLAYING(Global_1357549->f_1832))
	{
		AUDIO::STOP_STREAM(Global_1357549->f_1832);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1357549->f_1841)))
	{
		AUDIO::_0x9D746964E0CF2C5F(&(Global_1357549->f_1841), &(Global_1357549->f_1833));
	}
	func_181(&(Global_1357549->f_1845));
	Global_1357549->f_1832 = -1;
	func_142(1048576);
}

void func_359(bool bParam0)
{
	if (bParam0)
	{
		HUD::_0x4CC5F2FC1332577F(-1618603322);
		func_145(8388608);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(-1618603322);
		func_142(8388608);
	}
}

void func_360(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, bParam0);
}

bool func_361(int iParam0)
{
	return (Local_18.f_1786 && iParam0) == iParam0;
}

void func_362(int iParam0)
{
	Local_18.f_1786 = (Local_18.f_1786 - (Local_18.f_1786 && iParam0));
}

int func_363(int iParam0)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

bool func_364(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_365(int iParam0, int iParam1)
{
	(*Global_1897952)[iParam0 /*2*/] = (Global_1897952[iParam0 /*2*/] || iParam1);
}

void func_366(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_614((*uParam0)[iVar0 /*257*/]);
		iVar0++;
	}
}

void func_367(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_615((*uParam0)[iVar0 /*257*/]);
		iVar0++;
	}
}

void func_368(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_616((*uParam0)[iVar0 /*257*/]);
		iVar0++;
	}
}

void func_369()
{
	if (!Global_1894899->f_186)
	{
		VEHICLE::_0xF5FFB08976911B50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

int func_370(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 5:
				return Global_40.f_4283.f_320;
			
			default:
				break;
		}
	}
	switch (iParam0)
	{
		case 0:
			return Global_40.f_4283.f_313;
		
		case 1:
			return Global_40.f_4283.f_316;
		
		case 2:
			return Global_40.f_4283.f_317;
		
		case 12:
			return Global_40.f_4283.f_315;
		
		case 13:
			return Global_40.f_4283.f_314;
		
		case 14:
			return Global_40.f_4283.f_322;
		
		case 3:
			return Global_40.f_4283.f_318;
		
		case 4:
			return Global_40.f_4283.f_319;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 15:
			return Global_40.f_4283.f_321;
		
		default:
			break;
	}
	return 1;
}

void func_371(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1496 = (Global_1357549->f_1496 - (Global_1357549->f_1496 && iParam0));
			break;
	}
}

void func_372(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_373(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_374(int iParam0, int iParam1)
{
	if (func_56() != -1)
	{
		return false;
	}
	if (!func_408(iParam0))
	{
		return false;
	}
	return (Global_24886[iParam0 /*2*/] && iParam1) != 0;
}

int func_375(int iParam0, bool bParam1)
{
	if (!func_408(iParam0))
	{
		return 0;
	}
	if (!func_374(iParam0, 2))
	{
		return 0;
	}
	if (func_409(iParam0) == 0)
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_783(iParam0)))
	{
		return 1;
	}
	if (func_374(iParam0, 1) && !bParam1)
	{
		func_788(iParam0, 128);
		return 1;
	}
	func_789(iParam0, 129);
	func_790(iParam0);
	_NAMESPACE48::_0xFC77C5B44D5FF7C0(func_783(iParam0));
	func_791(iParam0, 0);
	return 1;
}

int func_376(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 116)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

int func_377(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		
		case 4:
			return 5;
		
		case 79:
			return 6;
		
		case 43:
			return 0;
		
		case 98:
			return 2;
		
		case 58:
			return 4;
		
		case 71:
			return 1;
		
		case 9:
			return 3;
		
		case 22:
			return 7;
		
		case 37:
			return 8;
		
		default:
			break;
	}
	return -1;
}

int func_378(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 150;
		
		case 4:
			return 30;
		
		case 5:
		case 6:
			return 150;
		
		case 7:
		case 8:
			return 50;
		
		default:
			break;
	}
	return 150;
}

void func_379(int iParam0)
{
	int iVar0;
	
	if (iParam0 > 150)
	{
		iParam0 = 150;
	}
	if (iParam0 > (Global_1934765->f_286 - 150))
	{
	}
	if (func_792(&iVar0))
	{
		if ((Global_1934765->f_275[iVar0 /*2*/])->f_1 != iParam0)
		{
			Global_1934765->f_286 = (Global_1934765->f_286 + (Global_1934765->f_275[iVar0 /*2*/])->f_1);
			(Global_1934765->f_275[iVar0 /*2*/])->f_1 = iParam0;
			Global_1934765->f_286 = (Global_1934765->f_286 - iParam0);
			STREAMING::_0x2F9AC754FE179D58(func_793());
		}
		return;
	}
	iVar0 = func_794();
	if (iVar0 == -1)
	{
		return;
	}
	(Global_1934765->f_275[iVar0 /*2*/])->f_1 = iParam0;
	Global_1934765->f_275[iVar0 /*2*/] = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1934765->f_286 = (Global_1934765->f_286 - iParam0);
	STREAMING::_0x2F9AC754FE179D58(func_793());
}

int func_380(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -850999370;
		
		case 1:
			return -807742826;
		
		case 2:
			return 866755445;
		
		case 3:
			return 2082303678;
		
		case 4:
			return 1349313303;
		
		case 5:
			return 1267596926;
		
		case 6:
			return 676394410;
		
		case 7:
			return -1190705999;
		
		case 8:
			return -1802212639;
		
		default:
			break;
	}
	return 176656832;
}

int func_381(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_795(iParam0);
	uVar3 = func_796(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_2 = iParam1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_3 = uVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_564();
				func_566(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_1 = iVar1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_4 = iVar2;
			func_797(iParam0, 1);
			if (func_798(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if ((Global_40.f_4283.f_6[iVar4 /*5*/])->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_799(Global_40.f_4283.f_6[iVar4 /*5*/], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_800(1, iParam0);
				}
				else
				{
					func_801(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_382(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			*uParam2 = 1442468227;
			uParam2->f_3 = 665f;
			uParam2->f_4 = 2490f;
			uParam2->f_2 = 0;
			break;
		
		case 1:
			*uParam2 = 297498058;
			uParam2->f_3 = -120f;
			uParam2->f_4 = -30f;
			uParam2->f_2 = 0;
			switch (iParam1)
			{
				case 0:
					uParam2->f_1 = 1;
					break;
				
				case 2:
					uParam2->f_1 = 2;
					break;
			}
			break;
		
		case 2:
			*uParam2 = -2041482106;
			uParam2->f_3 = 671.5f;
			uParam2->f_4 = -1250f;
			uParam2->f_2 = 0;
			switch (iParam1)
			{
				case 0:
					uParam2->f_1 = 1;
					break;
				
				case 2:
					uParam2->f_1 = 2;
					break;
			}
			break;
		
		case 3:
			*uParam2 = -1322422742;
			uParam2->f_3 = 1881f;
			uParam2->f_4 = -1859.5f;
			uParam2->f_2 = 0;
			switch (iParam1)
			{
				case 0:
					uParam2->f_1 = 1;
					break;
			}
			break;
		
		case 4:
			*uParam2 = 0;
			uParam2->f_3 = 0f;
			uParam2->f_4 = 0f;
			uParam2->f_2 = 0;
			break;
		
		case 5:
			*uParam2 = 188702764;
			uParam2->f_3 = 2260f;
			uParam2->f_4 = -780f;
			uParam2->f_2 = 0;
			break;
		
		case 6:
			*uParam2 = 833544090;
			uParam2->f_3 = 2350f;
			uParam2->f_4 = 1350f;
			uParam2->f_2 = 0;
			switch (iParam1)
			{
				case 0:
					uParam2->f_1 = 1;
					break;
			}
			break;
		
		case 7:
			*uParam2 = 0;
			uParam2->f_3 = 0f;
			uParam2->f_4 = 0f;
			uParam2->f_2 = 0;
			break;
		
		case 8:
			*uParam2 = 0;
			uParam2->f_3 = 0f;
			uParam2->f_4 = 0f;
			uParam2->f_2 = 0;
			break;
	}
}

void func_383(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_61 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		(*uParam0)[iVar0 /*3*/] = 0;
		((*uParam0)[iVar0 /*3*/])->f_1 = 0;
		((*uParam0)[uParam0->f_61 /*3*/])->f_2 = 0;
		iVar0++;
	}
	uParam0->f_61 = 0;
}

void func_384(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return;
	}
	if (!func_802(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61 /*3*/] = iParam1;
	((*uParam0)[uParam0->f_61 /*3*/])->f_1 = iParam2;
	((*uParam0)[uParam0->f_61 /*3*/])->f_2 = 0;
	uParam0->f_61++;
}

int func_385(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_495(iParam0))
	{
		return 0;
	}
	if (!bParam2)
	{
		if (func_803(iParam0, iParam1, 0))
		{
			return 0;
		}
	}
	if (iParam3 == -1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_140 = (((*Global_1360165)[iParam0 /*1157*/])->f_140 || iParam1);
	}
	else
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_141 = (((*Global_1360165)[iParam0 /*1157*/])->f_141 || iParam1);
		((*Global_1360165)[iParam0 /*1157*/])->f_142 = &Global_1899515;
		func_566(&(((*Global_1360165)[iParam0 /*1157*/])->f_142), 0, 0, iParam3, 0, 0, 0, 0);
	}
	return 1;
}

char* func_386(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "horseshoeOverlook/hso_animal_pearson";
		
		case 2:
			return "clemensPoint/clm_animal_pearson";
		
		case 3:
			return "shadyBelle/shb_animal_pearson";
		
		case 6:
			return "beaverHollow/bvh_animal_pearson";
		
		default:
			break;
	}
	return "";
}

int func_387(int iParam0, char[32] cParam1, int iParam9)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1))
	{
		return 0;
	}
	if (!func_527(iParam0))
	{
		return 0;
	}
	iVar0 = func_401(iParam0);
	if (iVar0 != 0 && func_804(iParam0))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_39 = { cParam1 };
		_NAMESPACE48::_0x187D65F3AEC5D679(iVar0, &cParam1);
		func_531(iParam0, 17, 1);
		if (iParam9 != -1)
		{
			iVar1 = func_564();
			func_566(&iVar1, 0, 0, iParam9, 0, 0, 0, 0);
			(Global_40.f_4942[iParam0 /*60*/])->f_46 = iVar1;
			(Global_40.f_4942[iParam0 /*60*/])->f_49 = 4;
		}
		else
		{
			(Global_40.f_4942[iParam0 /*60*/])->f_46 = -15;
			(Global_40.f_4942[iParam0 /*60*/])->f_49 = 0;
		}
		((*Global_1360165)[iParam0 /*1157*/])->f_56 = 1;
		return 1;
	}
	return 0;
}

void func_388()
{
}

int func_389(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_267();
	if (iParam0 != iVar0)
	{
		return 1;
	}
	vVar1 = { func_805(iParam0, 1) };
	if (func_211(vVar1))
	{
		return 0;
	}
	STREAMING::_0xA8432A14D4DC2101(vVar1);
	if (STREAMING::_0xDA8B2EAF29E872E2(vVar1))
	{
		return 1;
	}
	return 0;
}

void func_390(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		func_619(iVar1, (*uParam0)[iVar0 /*257*/]);
		iVar0++;
	}
}

int func_391(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_620((*uParam0)[iVar0 /*257*/]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_392()
{
	if (func_148(2))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-470125497, true);
	}
	else
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-470125497, false);
	}
	return 1;
}

void func_393(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_394(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 512;
	if (iParam4 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam4 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam4 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam4 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam4 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_395(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	
	func_806(iParam0);
	iVar1 = func_397(iParam0);
	vVar2 = { func_805(iVar1, 1) };
	if (func_146() == iParam0)
	{
		vVar5 = { func_454(iParam0) };
		fVar8 = func_807(iParam0);
		func_808(iParam0, bParam1);
		if (!func_809(vVar5))
		{
			func_810(vVar5, fVar8, "CaravanCamp", 0, 0, 4, 0, -1082130432);
		}
		func_811(iParam0);
		if (func_396(iParam0))
		{
			iVar0 = func_812(iParam0);
			if (func_32() != 2)
			{
				if (func_813(iVar0))
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(iVar0))
					{
						STREAMING::_REQUEST_IMAP(iVar0);
					}
				}
			}
			else if (func_813(iVar0))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar0))
				{
					STREAMING::_REMOVE_IMAP(iVar0);
				}
			}
			func_814(iParam0);
		}
		func_815(iParam0, 1);
		if (!bParam2)
		{
			func_816(iParam0, iVar1, 1, 1);
		}
	}
	else
	{
		func_817(iParam0, &iVar0);
		if (func_809(vVar2))
		{
			func_818(vVar2, 0);
		}
		func_815(iParam0, 0);
		if (!bParam2)
		{
			func_816(iParam0, iVar1, 0, 0);
		}
	}
}

int func_396(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			return 1;
	}
	return 0;
}

int func_397(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		
		case 5:
			return 4;
		
		case 6:
			return 79;
		
		case 0:
			return 43;
		
		case 2:
			return 98;
		
		case 4:
			return 58;
		
		case 1:
			return 71;
		
		case 3:
			return 9;
		
		case 7:
			return 22;
		
		case 8:
			return 37;
		
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

void func_398(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char cVar0[64];
	struct<8> Var8;
	
	MemCopy(&cVar0, {((*Global_1888801)[iParam0 /*35*/])->f_22}, 8);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, func_819(iParam1), 64);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, func_820(iParam2), 64);
	Var8 = { cVar0 };
	StringConCat(&Var8, "_setup", 64);
	if (TASK::DOES_SCENARIO_GROUP_EXIST(&Var8))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED(&Var8, bParam4);
	}
	else if (bParam4)
	{
		bParam3 = true;
	}
	if (TASK::DOES_SCENARIO_GROUP_EXIST(&cVar0))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED(&cVar0, bParam3);
	}
}

bool func_399()
{
	return (func_821() && !func_12(4096));
}

int func_400(int iParam0)
{
	if (!func_527(iParam0))
	{
		return 0;
	}
	if (!func_529(iParam0, 1, 0))
	{
		if (func_822(iParam0))
		{
			if (!func_402(iParam0, 512, 1) || !func_823(iParam0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_401(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -177936449;
		
		case 0:
			return -1758735922;
		
		case 6:
			return -680519380;
		
		case 3:
			return 263744889;
		
		case 7:
			return 351057032;
		
		case 4:
			return 1172283326;
		
		case 2:
			return -1046310682;
		
		case 5:
			return 652984488;
		
		case 8:
			return 1389665576;
		
		case 9:
			return -1066280913;
		
		case 13:
			return 1975793632;
		
		case 14:
			return -1887627202;
		
		case 15:
			return 1851096281;
		
		case 16:
			return 47402526;
		
		case 17:
			return 1762683397;
		
		case 18:
			return -1154551809;
		
		case 19:
			return -333682158;
		
		case 20:
			return 1465089966;
		
		case 21:
			return 511213393;
		
		case 22:
			return -1214580355;
		
		case 23:
			return -1397900723;
		
		case 10:
			return 541398842;
		
		case 24:
			return -1960060437;
		
		case 25:
			return 1634371177;
		
		case 26:
			return -1308114737;
		
		case 11:
			return 683250525;
		
		case 12:
			return -814958461;
	}
	return 0;
}

bool func_402(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_527(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

int func_403(int iParam0, bool bParam1)
{
	if (!func_527(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_127 != 0)
	{
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	switch (iParam0)
	{
		case 3:
			return -698095578;
		
		case 7:
			return 230221572;
		
		case 0:
			return 47961446;
		
		case 5:
			return 1268955201;
		
		case 2:
			return 2103924091;
		
		case 1:
			return 1554677062;
		
		case 9:
			return 984702223;
		
		case 6:
			return -1825091419;
		
		case 11:
			return 948152617;
		
		case 8:
			return 795059774;
		
		case 23:
			return -1880884094;
		
		case 20:
			return 849012978;
		
		case 4:
			return 404801781;
		
		case 10:
			return -1094022447;
		
		case 26:
			return -1484815615;
		
		case 12:
		case 14:
			return 0;
		
		default:
			break;
	}
	if (bParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_127 = func_824(iParam0);
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	return 0;
}

int func_404(int iParam0)
{
	return 1268180497;
}

int func_405()
{
	int iVar0;
	struct<15> Var1;
	struct<10> Var30;
	struct<4> Var44;
	
	iVar0 = -352578118;
	Var1.f_9 = -1591664384;
	Var30.f_9 = -1591664384;
	Var44 = { func_825(0) };
	if (!func_826(Var44, iVar0, &Var30, 0, 0))
	{
		return 0;
	}
	if (!func_827(&Var30, &Var1))
	{
		return 0;
	}
	return Var1.f_14;
}

int func_406(int iParam0)
{
	if (func_12(4096))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
		
		case 5:
			if (func_148(44))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_407(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -784953535;
		
		case 1:
			return -543937540;
		
		case 2:
			return 893704044;
	}
	return 0;
}

bool func_408(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_409(int iParam0)
{
	if (!func_408(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

void func_410(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		func_621(iParam0, iVar1, func_618(iVar1), (*uParam1)[iVar0 /*257*/]);
		iVar0++;
	}
}

void func_411(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_622((*uParam0)[iVar0 /*257*/], (*uParam1)[iVar0]);
		iVar0++;
	}
}

int func_412(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_828((*uParam0)[iVar0 /*257*/], (*uParam1)[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_413()
{
}

int func_414(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch (Global_1357549->f_2)
	{
		case 0:
			if (uParam0->f_46 != func_267())
			{
				return 1;
			}
			if (func_829())
			{
				Global_1357549->f_2 = 1;
			}
			else
			{
				return 0;
			}
		
		case 1:
			if (func_830(uParam0->f_46, 0))
			{
				Global_1357549->f_2 = 2;
			}
			else
			{
				return 0;
			}
		
		case 2:
			if (func_831(uParam0->f_46))
			{
				Global_1357549->f_2 = 3;
			}
			else
			{
				return 0;
			}
		
		case 3:
			if (func_832(uParam0))
			{
				Global_1357549->f_2 = 4;
			}
			else
			{
				return 0;
			}
		
		case 4:
			if (func_833(uParam0))
			{
				Global_1357549->f_2 = 5;
			}
			else
			{
				return 0;
			}
		
		case 5:
			iVar0 = 0;
			while (iVar0 < 27)
			{
				func_416(iVar0, 4, 1);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < 3)
			{
				(Global_1357549->f_1675[iVar1 /*5*/])->f_2 = 0;
				iVar1++;
			}
			Global_1357549->f_2 = 0;
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_415(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (Global_23117[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1058888->f_40615[iParam0 /*11*/] = (Global_1058888->f_40615[iParam0 /*11*/] || iParam1);
	}
}

void func_416(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		if (!func_527(iParam0))
		{
			return;
		}
	}
	func_834(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_417(var uParam0)
{
}

void func_418(var uParam0)
{
	var uVar0;
	var uVar1;
	char* sVar2;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (func_32() == 1)
	{
		func_835(uParam0);
	}
	uParam0->f_859 = 1;
	if (Global_1357549->f_1721 == 0)
	{
		uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549->f_1724, "camp_detail");
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar1, func_836(0));
		Global_1357549->f_1726[0 /*3*/] = uVar0;
		(Global_1357549->f_1726[0 /*3*/])->f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "label", 1820034266);
		(Global_1357549->f_1726[0 /*3*/])->f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "value_string", 0);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1357549->f_1725, 0, "camp_item", uVar0);
		uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549->f_1724, "camp_detail");
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar1, func_836(1));
		Global_1357549->f_1726[1 /*3*/] = uVar0;
		(Global_1357549->f_1726[1 /*3*/])->f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "label", 156970377);
		(Global_1357549->f_1726[1 /*3*/])->f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "value_string", 0);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1357549->f_1725, 1, "camp_item", uVar0);
		uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549->f_1724, "camp_detail");
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar1, func_836(2));
		Global_1357549->f_1726[2 /*3*/] = uVar0;
		(Global_1357549->f_1726[2 /*3*/])->f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "label", -609488505);
		(Global_1357549->f_1726[2 /*3*/])->f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "value_string", 0);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1357549->f_1725, 2, "camp_item", uVar0);
		uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549->f_1724, "camp_detail");
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar1, func_836(3));
		Global_1357549->f_1726[3 /*3*/] = uVar0;
		(Global_1357549->f_1726[3 /*3*/])->f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "label", 1967383862);
		(Global_1357549->f_1726[3 /*3*/])->f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "value_string", 0);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1357549->f_1725, 3, "camp_item", uVar0);
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 31)
		{
			if (&Global_40.f_4283.f_335[iVar4] == 1)
			{
				func_837(&sVar2, iVar4);
				uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549->f_1724, "camp_detail");
				uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar1, func_836(iVar4 + 4));
				Global_1357549->f_1726[iVar4 + 4 /*3*/] = uVar0;
				(Global_1357549->f_1726[iVar4 + 4 /*3*/])->f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "label", MISC::GET_HASH_KEY(&sVar2));
				(Global_1357549->f_1726[iVar4 + 4 /*3*/])->f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "value", 0);
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1357549->f_1725, iVar4 + 4, "camp_item", uVar0);
			}
			iVar4++;
		}
		Global_1357549->f_1721 = 1;
	}
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 < 31)
	{
		func_838(iVar7, &iVar5);
		func_839(iVar7, &iVar6);
		if (func_840(uParam0->f_1425, iVar5))
		{
			func_841(&(uParam0->f_1425), iVar5);
		}
		if (func_842(&(((*Global_1360165)[iVar6 /*1157*/])->f_12), 512))
		{
			func_543(iVar6, 512, 0);
		}
		if (func_209(&(uParam0->f_885[uParam0->f_1426])))
		{
			func_210(uParam0->f_885[uParam0->f_1426], 1, 1);
		}
		iVar7++;
	}
	STREAMING::REQUEST_ANIM_DICT("script_common@handover@generic@player_handover@money");
	func_843(128);
	func_698(&(uParam0->f_1325), Global_35, "ARTHUR", 0);
	HUD::_0xF66090013DE648D5("CPGENAU");
	func_276();
	if (func_844(func_146()))
	{
		func_845(&(uParam0->f_35.f_2));
		func_846(&(uParam0->f_35));
	}
	iVar8 = func_847(func_146());
	if (func_167())
	{
		if (!func_135(iVar8, 64))
		{
			func_168(iVar8, 64);
			func_168(iVar8, 262144);
		}
	}
	else if (func_135(iVar8, 64))
	{
		func_169(iVar8, 64);
	}
}

void func_419()
{
}

void func_420()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (iVar0 < 6 || iVar0 >= 23)
		{
			PED::_0x12F2D161BF4031FC(iVar0, 0.5f);
		}
		else if (iVar0 < 12)
		{
			PED::_0x12F2D161BF4031FC(iVar0, 1.5f);
		}
		else
		{
			PED::_0x12F2D161BF4031FC(iVar0, 1f);
		}
		iVar0++;
	}
}

void func_421()
{
	int iVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	func_848(&(Local_18.f_51.f_35));
	func_181(&(Global_1359489->f_52));
	PLAYER::_0xCB61A63AA53D7D22(PLAYER::GET_PLAYER_INDEX(), 0);
	func_666(779383250, 1, 0);
	if (func_849())
	{
		func_381(-1526278254, 195285667, 1120952528, -1, 1, 1, 0);
	}
	else if (func_232(-1526278254, 1))
	{
		func_666(-1526278254, 1, 0);
	}
	if (func_850())
	{
		func_381(-544096309, 195285667, 1120952528, -1, 1, 1, 0);
	}
	else if (func_232(-544096309, 1))
	{
		func_666(-544096309, 1, 0);
	}
	iVar0 = func_851();
	if (iVar0 > Global_40.f_4283.f_323)
	{
		if ((iVar0 - Global_40.f_4283.f_323) > 5)
		{
			func_381(534766068, 195285667, 1120952528, -1, 1, 1, 0);
		}
		if ((iVar0 - Global_40.f_4283.f_323) > 10)
		{
			func_381(13460468, 195285667, 1120952528, -1, 1, 1, 0);
		}
		Global_40.f_4283.f_323 = iVar0;
	}
	if (func_146() == 6)
	{
		if (func_852(25))
		{
		}
	}
	if (ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(Global_35, 22) >= 40 || ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(Global_35, 16) >= 40)
	{
		func_381(1618734891, 195285667, 1120952528, -1, 1, 1, 0);
	}
	else if (func_232(1618734891, 1))
	{
		func_666(1618734891, 1, 0);
	}
	if (func_232(443165194, 1))
	{
		func_666(443165194, 1, 0);
	}
	if (func_232(1004978630, 1))
	{
		func_666(1004978630, 1, 0);
	}
	fVar1 = func_853();
	if (fVar1 < 25f)
	{
		if (!func_232(-625309660, 1) && !func_12(33554432))
		{
			func_381(1004978630, 195285667, 1120952528, -1, 1, 1, 0);
		}
	}
	else if (fVar1 > 75f)
	{
		func_381(443165194, 195285667, 1120952528, -1, 1, 1, 0);
	}
	if (func_154() < BUILTIN::ROUND((IntToFloat(func_854(&(Local_18.f_51.f_35))) * 0.2f)) && !func_232(-218211995, 1))
	{
		if (!func_232(397857304, 1))
		{
			func_381(397857304, 195285667, 1120952528, -1, 1, 1, 0);
		}
	}
	if (Global_1357549->f_1610)
	{
		return;
	}
	if (Global_40.f_4283.f_4 != 1)
	{
		return;
	}
	bVar2 = true;
	if (func_232(1004978630, 0) || func_232(397857304, 0))
	{
		if (func_855())
		{
			switch (func_146())
			{
				case 1:
					func_381(-2041153728, 195285667, -469960592, -1, 1, 1, 0);
					bVar2 = false;
					break;
				
				case 2:
					func_381(-811804990, 195285667, -469960592, -1, 1, 1, 0);
					bVar2 = false;
					break;
				
				case 3:
					func_381(-1689239424, 195285667, -469960592, -1, 1, 1, 0);
					bVar2 = false;
					break;
			}
		}
	}
	else if (func_856())
	{
		if (func_855())
		{
			switch (func_146())
			{
				case 1:
					func_381(1665139197, 195285667, -469960592, -1, 1, 1, 0);
					break;
				
				case 2:
					func_381(-1302664729, 195285667, -469960592, -1, 1, 1, 0);
					break;
				
				case 3:
					func_381(-670201310, 195285667, -469960592, -1, 1, 1, 0);
					break;
			}
		}
	}
	if (bVar2)
	{
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
		iVar4 = 176656832;
		iVar5 = 176656832;
		iVar6 = 176656832;
		switch (func_146())
		{
			case 1:
				if (func_175(2, 0, 0))
				{
					iVar4 = -1520159291;
				}
				if (func_175(4, 0, 0))
				{
					iVar5 = -1825730216;
				}
				if (func_175(7, 0, 0))
				{
					iVar6 = -66788599;
				}
				break;
			
			case 2:
				if (func_175(2, 0, 0))
				{
					iVar4 = 1647502903;
				}
				if (func_175(4, 0, 0))
				{
					iVar5 = -1408927269;
				}
				if (func_175(7, 0, 0))
				{
					iVar6 = -1648173738;
				}
				break;
			
			case 3:
				if (func_175(2, 0, 0))
				{
					iVar4 = -1143028112;
				}
				if (func_175(4, 0, 0))
				{
					iVar5 = -1211711936;
				}
				if (func_175(7, 0, 0))
				{
					iVar6 = -1483924019;
				}
				break;
			
			default:
				return;
		}
		switch (iVar3)
		{
			case 0:
				if (iVar4 != 176656832)
				{
					func_381(iVar4, 195285667, 1120952528, -1, 1, 1, 0);
				}
				break;
			
			case 1:
				if (iVar5 != 176656832)
				{
					func_381(iVar5, 195285667, 1120952528, -1, 1, 1, 0);
				}
				break;
			
			case 2:
				if (iVar6 != 176656832)
				{
					func_381(iVar6, 195285667, 1120952528, -1, 1, 1, 0);
				}
				break;
		}
	}
}

bool func_422(int iParam0)
{
	return (Global_1894899 && iParam0) != 0;
}

void func_423(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

void func_424(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

void func_425()
{
	if (func_330(Global_35, 0))
	{
		PED::_0x86F0B6730C32AC14(Global_35, 1);
		PED::_0xEF371232BC6053E1(Global_35);
	}
	if (func_330(func_177(0), 0))
	{
		PED::_0x86F0B6730C32AC14(func_177(0), 1);
		PED::_0xEF371232BC6053E1(func_177(0));
	}
	if (func_330(func_177(16), 0))
	{
		PED::_0x86F0B6730C32AC14(func_177(16), 1);
		PED::_0xEF371232BC6053E1(func_177(16));
	}
}

void func_426(int iParam0)
{
	int iVar0;
	
	if (((Global_1898077->f_1 == 2 || Global_1898077->f_1 == 5) || Global_1898077->f_1 == 3) || Global_1898077->f_1 == 1)
	{
		return;
	}
	iVar0 = 0;
	if (func_56() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_2 = Global_1898077->f_1;
	Global_1898077->f_13 = Global_1898077->f_12;
	Global_1898077->f_1 = 4;
	Global_1898077->f_7 = iVar0;
	Global_1898077->f_12 = iParam0;
	func_761(Global_1898077->f_7, Global_1898077->f_12);
}

bool func_427()
{
	return Global_1051081->f_8;
}

void func_428(int iParam0)
{
	Local_18.f_1718 = (Local_18.f_1718 || iParam0);
}

void func_429()
{
	if (!func_341(8))
	{
		func_360(1);
		func_428(8);
	}
}

int func_430(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	
	ITEMSET::_0x20A4BF0E09BEE146(iParam0);
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	PED::_0x7BE607DAFF382FD2(Global_35, iParam0, 512);
	PED::_0x3ACCE14DFA6BA8C2(Global_35, 4, vVar0, 100f, iParam0);
	PED::_0x3ACCE14DFA6BA8C2(Global_35, 6, vVar0, 100f, iParam0);
	PED::_0x3ACCE14DFA6BA8C2(Global_35, 5, vVar0, 100f, iParam0);
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iParam0);
	return iVar3;
}

void func_431(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_56() != -1)
	{
		return;
	}
	if ((Global_36615 && func_857(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_858(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_859(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_860(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_859(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_432()
{
	Local_18.f_3373 = 0;
}

void func_433()
{
	Global_1905944->f_5695 = 1;
}

void func_434()
{
	int iVar0;
	int iVar1;
	
	if (Local_18.f_3373 != -1)
	{
		if (func_402(Local_18.f_3373, 4, 0))
		{
			if (Local_18.f_3373 != 10 || func_852(63))
			{
				iVar0 = func_177(Local_18.f_3373);
				if (!func_271(iVar0, 1))
				{
					if (!func_528(Local_18.f_3373, 3, 0) || func_861(Local_18.f_3373))
					{
						func_862(Local_18.f_3373, 1);
						TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iVar0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 200f, 0, 16);
						PED::SET_PED_CONFIG_FLAG(iVar0, 366, true);
					}
					else
					{
						TASK::_TASK_FLEE_FROM_PED(iVar0, Global_35, 0f, 0f, 0f, 200f, 20000, 0, 1077936128, 0);
					}
				}
			}
		}
		iVar1 = Local_18.f_3373;
		iVar1++;
		Local_18.f_3373 = iVar1;
		if (Local_18.f_3373 >= 26)
		{
			Local_18.f_3373 = -1;
		}
	}
}

Vector3 func_435(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;
	
	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_863(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_436(int iParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	
	vVar0 = { func_864(Global_36, uParam1, uParam2, 1, 0, 0, 0, 0, 0, 0, iParam0, 10f) };
	return vVar0;
}

void func_437(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = uParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_438(int iParam0)
{
	Global_1310720->f_9 = iParam0;
}

void func_439()
{
	struct<10> Var0;
	struct<16> Var10;
	
	Global_1310720->f_8 = 0;
	Global_1935630->f_4 = 1;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "respawn_persistence", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_865(Var10, 0);
}

void func_440(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = MISC::GET_GAME_TIMER();
}

void func_441(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_442()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 26)
	{
		if (func_344(iVar0, 1))
		{
			func_345(iVar0);
		}
		iVar1 = func_177(iVar0);
		if (func_271(iVar1, 1))
		{
		}
		else
		{
			if (PED::GET_PED_CONFIG_FLAG(iVar1, 366, true))
			{
				PED::SET_PED_CONFIG_FLAG(iVar1, 366, false);
			}
			if (!func_402(iVar0, 4, 0))
			{
			}
			else if (func_402(iVar0, 16, 0))
			{
			}
			else
			{
				TASK::TASK_PERSISTENT_CHARACTER(iVar1);
			}
		}
		iVar0++;
	}
}

void func_443(var uParam0)
{
	uParam0->f_62 = -1;
	uParam0->f_64 = *uParam0;
}

void func_444(bool bParam0)
{
	if (bParam0)
	{
		func_866(4);
	}
	func_866(2);
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

int func_445(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PED::_0xD806CD2A4F2C2996(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return 0;
	}
	iVar1 = iVar0;
	if (!PED::IS_PED_HUMAN(iVar1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		*bParam2 = 1;
		*uParam1 = iVar1;
		return 1;
	}
	if (PED::_0x3AA24CCC0D451379(iVar1))
	{
		*bParam2 = 0;
		*uParam1 = iVar1;
		return 1;
	}
	return 0;
}

void func_446(int iParam0)
{
	Local_18.f_1786 = (Local_18.f_1786 || iParam0);
}

int func_447(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PED::_0xB65A4DAB460A19BD(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iVar0))
	{
		return 0;
	}
	*bParam2 = ENTITY::IS_ENTITY_DEAD(iVar0);
	*uParam1 = iVar0;
	return 1;
}

int func_448(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_449()
{
	if (Global_1392235->f_4 == 1)
	{
		return 1;
	}
	else if (func_128(((*Global_1835011)[7 /*74*/])->f_1))
	{
		return 1;
	}
	else if (func_128(((*Global_1835011)[69 /*74*/])->f_1))
	{
		return 1;
	}
	else if (func_128(((*Global_1835011)[70 /*74*/])->f_1))
	{
		return 1;
	}
	else if (func_128(((*Global_1835011)[71 /*74*/])->f_1))
	{
		return 1;
	}
	else if (func_128(((*Global_1835011)[72 /*74*/])->f_1))
	{
		return 1;
	}
	else if (func_128(((*Global_1347702)[32 /*49*/])->f_15))
	{
		return 1;
	}
	else if (func_128(((*Global_1347702)[132 /*49*/])->f_15))
	{
		return 1;
	}
	return 0;
}

int func_450(bool bParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return -1;
	}
	iVar0 = -1;
	fVar1 = 9999999f;
	iVar2 = 0;
	while (iVar2 < 26)
	{
		iVar3 = iVar2;
		if (!func_175(iVar3, 1, 1))
		{
		}
		else if (!bParam0)
		{
			if (Global_1357549->f_1497 == iVar3)
			{
			}
			else if (!func_867(iVar3, 0, iParam1))
			{
			}
			else
			{
				fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_COORDS(func_177(iVar3), true, false));
				if (fVar4 < fVar1)
				{
					fVar1 = fVar4;
					iVar0 = iVar3;
				}
			}
			iVar2++;
			return iVar0;
		}
	}

int func_451(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	bVar3 = PED::IS_PED_ON_MOUNT(iParam0);
	if (bVar3)
	{
		iVar2 = PED::GET_MOUNT(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(iParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (func_759(*iParam1, 128))
	{
		if (!func_448(iParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
			*iParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_759(*iParam1, 2))
	{
		if (bVar3)
		{
			if (!func_868(iVar2))
			{
				return 0;
			}
			if (!func_448(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_869(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_759(*iParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return 0;
		}
		else if ((func_870(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_0x4C8B59171957BCF7(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_0xD806CD2A4F2C2996(PED::_0x4C8B59171957BCF7(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_0xD806CD2A4F2C2996(PED::_0x4C8B59171957BCF7(iParam0)));
			func_871(iParam1, 128);
			return 0;
		}
		else
		{
			*iParam1 = 0;
			return 1;
		}
	}
	if (func_759(*iParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			return 0;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, 0, 1);
			*iParam1 = 0;
			return 1;
		}
	}
	if (func_759(*iParam1, 8))
	{
		if (bVar3)
		{
			if (!func_868(iVar2))
			{
				return 0;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*iParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!func_870(iParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!func_870(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam3, 0);
				if (func_870(iParam2, 8192))
				{
					HUD::_0x8BC7C1F929D07BF3(724769646);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, -1879280170, false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar2, 0))
		{
			return 0;
		}
		if (func_759(*iParam1, 2336))
		{
			if (!func_868(iVar2))
			{
			}
			if (func_872(iVar2, *iParam1))
			{
				func_873(iParam1, 32);
				func_873(iParam1, 256);
				func_873(iParam1, 2048);
				func_871(iParam1, 512);
				func_871(iParam1, 1024);
				func_871(iParam1, 4096);
			}
			else
			{
				return 0;
			}
		}
		if (func_759(*iParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
			if (!func_868(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return 0;
			}
			else
			{
				func_873(iParam1, 64);
			}
		}
		if (func_870(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*iParam1 = 0;
			return 1;
		}
		PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
		if (((TASK::IS_PED_SPRINTING(iVar2) || (TASK::IS_PED_RUNNING(iVar2) && func_870(iParam2, 1024))) || func_870(iParam2, 8)) && !func_759(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			func_871(iParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(iVar2) && func_870(iParam2, 4096)) && !func_759(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			func_871(iParam1, 2048);
			func_871(iParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && func_870(iParam2, 32)) && !func_759(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			func_871(iParam1, 256);
			func_871(iParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			func_871(iParam1, 64);
		}
		else if (!func_870(iParam2, 1))
		{
			if (!func_870(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_869(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_759(*iParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0f);
			func_871(iParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			func_871(iParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_870(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			func_871(iParam1, 4);
		}
		else
		{
			*iParam1 = 0;
			return 1;
		}
	}
	else if (!func_870(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		func_871(iParam1, 8);
	}
	return 0;
}

bool func_452(int iParam0)
{
	return (Local_18.f_1786 - iParam0) == 0;
}

void func_453(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

Vector3 func_454(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -127.3136f, -23.7866f, 95.356f;
		
		case 6:
			return 2334.85f, 1351.68f, 105.11f;
		
		case 3:
			return 1865.22f, -1887.22f, 41.39f;
		
		case 5:
			return 2275.63f, -729.34f, 40.43f;
		
		case 2:
			return 663.0678f, -1181.825f, 92.08381f;
		
		case 8:
			return -1621.825f, -1377.163f, 76.24816f;
		
		default:
			break;
	}
	return func_805(func_397(iParam0), 0);
}

Vector3 func_455()
{
	vector3 vVar0;
	
	vVar0 = { VOLUME::_0xF70F00013A62F866(&(Global_1357549->f_3[5])) };
	return func_874(Global_36 - vVar0);
}

bool func_456(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

int func_457()
{
	return -1;
}

void func_458(int iParam0, int iParam1)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_24 = (((*Global_1900383)[iParam0 /*45*/])->f_24 - (((*Global_1900383)[iParam0 /*45*/])->f_24 && iParam1));
}

int func_459(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 6:
			*uParam1 = { 2368.145f, 1339.411f, 105.2073f };
			*uParam2 = 0f;
			break;
		
		case 0:
			*uParam1 = { -1347.354f, 2415.999f, 306.1693f };
			*uParam2 = 0f;
			break;
		
		case 2:
			*uParam1 = { 676.0986f, -1223.26f, 44.8735f };
			*uParam2 = 186f;
			break;
		
		case 1:
			*uParam1 = { -113.3444f, -16.16381f, 94.90366f };
			*uParam2 = 0f;
			break;
		
		case 3:
			*uParam1 = { 1855.146f, -1834.112f, 42.1034f };
			*uParam2 = 0f;
			break;
		
		case 7:
			*uParam1 = { -2591.77f, 465.7827f, 146.256f };
			*uParam2 = 0f;
			break;
		
		case 8:
			*uParam1 = { -1595.7f, -1414.78f, 83.7f };
			*uParam2 = 0f;
			break;
		
		case 5:
			*uParam1 = { 2278.67f, -751.0582f, 40.9953f };
			*uParam2 = 0f;
			break;
		
		default:
			return 0;
	}
	return 1;
}

void func_460(int iParam0)
{
	Local_18.f_1862 = (Local_18.f_1862 || iParam0);
}

bool func_461(int iParam0)
{
	return (Local_18.f_1862 && iParam0) == iParam0;
}

int func_462(int iParam0)
{
	if (!func_662(iParam0))
	{
		return 0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_1;
}

int func_463(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = (Global_12105[iParam0 /*7*/])->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_875(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

int func_464(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_465(int iParam0, int iParam1)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_24 = (((*Global_1900383)[iParam0 /*45*/])->f_24 || iParam1);
}

float func_466(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && iParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

void func_467(int iParam0)
{
	Local_18.f_1862 = (Local_18.f_1862 - (Local_18.f_1862 && iParam0));
}

int func_468()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[0])) || !VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[2])))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	TASK::_0xB8E213D02F37947D(&(Global_1357549->f_3[2]), iVar1, -1805387726, 1, 1, 0, 0);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar0 = ITEMSET::GET_INDEXED_SCENARIO_POINT_INDEX_IN_ITEMSET(iVar3, iVar1);
		if (!TASK::_0x841475AC96E794D1(iVar0))
		{
		}
		else if (VOLUME::_0xF256A75210C5C0EB(&(Global_1357549->f_3[0]), TASK::_0xA8452DD321607029(iVar0, 1)))
		{
		}
	else
	{
		}
		else
		{
			iVar3++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return iVar0;
}

int func_469()
{
	var uVar0;
	
	MISC::_COPY_MEMORY(&(Local_18.f_1934.f_67), &uVar0, 12);
	switch (func_146())
	{
		case 0:
			Local_18.f_1934.f_67 = { -1356.409f, 2433.987f, 307.1412f };
			Local_18.f_1934.f_67.f_3 = 315.3194f;
			Local_18.f_1934.f_67.f_4 = -92.6032f;
			Local_18.f_1934.f_67.f_5 = 0f;
			Local_18.f_1934.f_67.f_6 = { -1355.259f, 2428.821f, 306.6295f };
			Local_18.f_1934.f_67.f_9 = 137.8667f;
			Local_18.f_1934.f_67.f_10 = 27.6689f;
			Local_18.f_1934.f_67.f_11 = -32.8653f;
			return 1;
		
		case 1:
			Local_18.f_1934.f_67 = { -92.0169f, -46.8868f, 94.6083f };
			Local_18.f_1934.f_67.f_3 = 290.5712f;
			Local_18.f_1934.f_67.f_4 = -163.5061f;
			Local_18.f_1934.f_67.f_5 = -12.8288f;
			Local_18.f_1934.f_67.f_6 = { -127.8335f, -41.6741f, 94.4926f };
			Local_18.f_1934.f_67.f_9 = 343.9563f;
			Local_18.f_1934.f_67.f_10 = -5.4978f;
			Local_18.f_1934.f_67.f_11 = -9.5034f;
			return 1;
		
		case 2:
			Local_18.f_1934.f_67 = { 656.9079f, -1217.916f, 45.5739f };
			Local_18.f_1934.f_67.f_3 = 118.549f;
			Local_18.f_1934.f_67.f_4 = 108.4593f;
			Local_18.f_1934.f_67.f_5 = -3.7555f;
			Local_18.f_1934.f_67.f_6 = { 652.0198f, -1241.254f, 42.7896f };
			Local_18.f_1934.f_67.f_9 = 226.1829f;
			Local_18.f_1934.f_67.f_10 = -1.8674f;
			Local_18.f_1934.f_67.f_11 = -5.8606f;
			return 1;
		
		case 3:
			Local_18.f_1934.f_67 = { 1876.795f, -1819.649f, 41.3889f };
			Local_18.f_1934.f_67.f_3 = 146.2366f;
			Local_18.f_1934.f_67.f_4 = 29.2738f;
			Local_18.f_1934.f_67.f_5 = 0f;
			Local_18.f_1934.f_67.f_6 = { 1891.238f, -1852.065f, 41.5036f };
			Local_18.f_1934.f_67.f_9 = 235.0809f;
			Local_18.f_1934.f_67.f_10 = -4.8707f;
			Local_18.f_1934.f_67.f_11 = -31.7036f;
			return 1;
		
		case 4:
			Local_18.f_1934.f_67 = { 1430.64f, -7326.889f, 80.462f };
			Local_18.f_1934.f_67.f_3 = 39.9393f;
			Local_18.f_1934.f_67.f_4 = 33.7948f;
			Local_18.f_1934.f_67.f_5 = -2.9747f;
			Local_18.f_1934.f_67.f_6 = { 1425.97f, -7322.658f, 80.4454f };
			Local_18.f_1934.f_67.f_9 = 280.6111f;
			Local_18.f_1934.f_67.f_10 = -2.9136f;
			Local_18.f_1934.f_67.f_11 = -3.5024f;
			return 1;
		
		case 5:
			Local_18.f_1934.f_67 = { 2247.849f, -763.8032f, 41.9284f };
			Local_18.f_1934.f_67.f_3 = 52.0321f;
			Local_18.f_1934.f_67.f_4 = 48.5302f;
			Local_18.f_1934.f_67.f_5 = 2.8185f;
			Local_18.f_1934.f_67.f_6 = { 2238.481f, -776.7674f, 42.7447f };
			Local_18.f_1934.f_67.f_9 = 267.1989f;
			Local_18.f_1934.f_67.f_10 = -0.4043f;
			Local_18.f_1934.f_67.f_11 = -4.3617f;
			return 1;
		
		case 6:
			Local_18.f_1934.f_67 = { 2339.874f, 1371.26f, 105.2484f };
			Local_18.f_1934.f_67.f_3 = 221.9975f;
			Local_18.f_1934.f_67.f_4 = 16.3205f;
			Local_18.f_1934.f_67.f_5 = 2.6571f;
			Local_18.f_1934.f_67.f_6 = { 2338.244f, 1360.923f, 105.3035f };
			Local_18.f_1934.f_67.f_9 = 243.8945f;
			Local_18.f_1934.f_67.f_10 = 15.1624f;
			Local_18.f_1934.f_67.f_11 = -6.8075f;
			return 1;
		
		case 7:
			Local_18.f_1934.f_67 = { -2594.485f, 474.4041f, 144.9143f };
			Local_18.f_1934.f_67.f_3 = 93.6876f;
			Local_18.f_1934.f_67.f_4 = 20.3982f;
			Local_18.f_1934.f_67.f_5 = 0f;
			Local_18.f_1934.f_67.f_6 = { -2590.465f, 463.0091f, 145.2393f };
			Local_18.f_1934.f_67.f_9 = 168.0908f;
			Local_18.f_1934.f_67.f_10 = 1.7979f;
			Local_18.f_1934.f_67.f_11 = -5.3603f;
			return 1;
		
		case 8:
			Local_18.f_1934.f_67 = { -1610.253f, -1357.077f, 81.7792f };
			Local_18.f_1934.f_67.f_3 = 17.8936f;
			Local_18.f_1934.f_67.f_4 = 63.7332f;
			Local_18.f_1934.f_67.f_5 = -6.9619f;
			Local_18.f_1934.f_67.f_6 = { -1642.565f, -1356.53f, 82.9641f };
			Local_18.f_1934.f_67.f_9 = 200.1213f;
			Local_18.f_1934.f_67.f_10 = 77.8545f;
			Local_18.f_1934.f_67.f_11 = 10.0593f;
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_470()
{
	if (!func_12(32768))
	{
		return 0;
	}
	if (func_12(16384))
	{
		return 0;
	}
	if (func_12(4))
	{
		return 0;
	}
	return 1;
}

int func_471()
{
	if (!func_470())
	{
		return 0;
	}
	if (func_132(&Global_1935630, 16384))
	{
		return 0;
	}
	if (func_132(&Global_1935630, 32768))
	{
		return 0;
	}
	if (func_132(&Global_1935630, 8388608))
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_203(3))
	{
		return 0;
	}
	return 1;
}

int func_472(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return !PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else
	{
		iVar0 = func_876(iParam0);
		iVar1 = 0;
		func_877(iVar0, 761605153, &iVar1);
		if (func_878(iVar0) || iVar1 > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_473(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return 0;
	}
	ITEMSET::_0x20A4BF0E09BEE146(iVar0);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar0);
	iVar1 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	if (iVar1 == 0)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	iVar9 = 0;
	while (iVar9 < 4)
	{
		iVar2 = func_879(iVar9);
		if (!PED::_0x608BC6A6AACD5036(&Var3, iParam0, iVar2, 0))
		{
		}
		else
		{
			iVar7 = Var3.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar7))
				{
				}
				iVar8 = ENTITY::_0x0FD25587BB306C86(iVar7);
				if (iVar8 == -1992418870 || iVar8 == 822715387)
				{
					return 1;
				}
			}
		}
		iVar9++;
	}
	return 0;
}

bool func_474(int iParam0)
{
	return func_880(iParam0, 6);
}

Vector3 func_475(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam4;
}

float func_476(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_477(var uParam0)
{
	if (!func_173(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_525(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_881() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

int func_478(int iParam0, int iParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051081->f_15[0]))) && iParam1)
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
		else
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051081->f_15[0]))) && iParam1)
	{
		if (!OBJECT::_0xB5DED7B65C604FDF(iParam0))
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(iParam0, 1);
	}
	return iParam0;
}

int func_479(int iParam0)
{
	if (func_882(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

void func_480(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_479(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam1, iParam3);
	}
}

void func_481(int iParam0, int iParam1)
{
	if (func_479(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_482(int iParam0, int iParam1)
{
	if (func_479(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_483(int iParam0, int iParam1)
{
	if (func_479(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

int func_484()
{
	return 1;
}

int func_485(int iParam0)
{
	if (!func_493(iParam0))
	{
		return -1;
	}
	return func_875(iParam0);
}

bool func_486(var uParam0)
{
	return (Global_1392040 && uParam0) != 0;
}

void func_487(int iParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		STREAMING::_REQUEST_IMAP(iParam0);
	}
}

void func_488(int iParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		STREAMING::_REMOVE_IMAP(iParam0);
	}
}

int func_489()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_490(int iParam0)
{
	if (!func_493(iParam0))
	{
		return -1;
	}
	return func_884(func_883(iParam0));
}

bool func_491(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_492(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_493(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_494(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_495(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

int func_496(int iParam0)
{
	if (!func_527(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == ((*Global_1360165)[iParam0 /*1157*/])->f_128)
	{
		return 0;
	}
	return 1;
}

bool func_497()
{
	return Global_1946804->f_2792;
}

int func_498(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_499(int iParam0)
{
	if (!func_493(iParam0))
	{
		return 0;
	}
	switch (func_885(iParam0))
	{
		case 1:
			switch (func_490(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return 1;
			}
			break;
		
		case 8:
			switch (func_490(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return 1;
			}
			break;
	}
	return 0;
}

int func_500(int iParam0)
{
	int iVar0;
	
	iVar0 = func_887(func_886(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_501(int iParam0)
{
	if (func_502(81053684, iParam0))
	{
		return 1;
	}
	if (func_502(-525676072, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_502(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_887(func_886(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_508(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	*iParam1 = 0;
	return 0;
}

int func_503(int iParam0)
{
	if (func_888())
	{
		return 0;
	}
	if (!func_889(iParam0, 0))
	{
		return 0;
	}
	if (!func_890(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

int func_504(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_891(iParam0);
	if (func_892(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_143(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_893();
			}
			else
			{
				iVar0 = func_894();
			}
		}
		else if (func_759(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_895();
		}
		else
		{
			iVar0 = func_896();
		}
	}
	else if (func_501(&iVar2))
	{
		if (func_892(iVar2, -1303648999))
		{
			iVar0 = func_893();
		}
		else
		{
			iVar0 = func_894();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_895();
	}
	else
	{
		iVar0 = func_896();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

int func_505(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		
		case -1719060085:
			return 16;
		
		case -999503751:
			return 1;
		
		case -525676072:
			return 4;
		
		case 81053684:
			return 8;
		
		case -413129408:
			return 32;
		
		default:
			break;
	}
	return 0;
}

bool func_506(var uParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && uParam0) != 0;
}

int func_507(bool bParam0)
{
	if (func_56() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

int func_508(int iParam0)
{
	struct<2> Var0;
	
	if (!func_889(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_509(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || uParam0);
}

void func_510(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && uParam0));
}

struct<16> func_511(float fParam0, float fParam1, float fParam2)
{
	char cVar0[128];
	struct<2> Var16;
	
	Var16 = { func_897(fParam0) };
	MemCopy(&cVar0, {Var16}, 16);
	StringConCat(&cVar0, "~BLIP_SUPPLY_ICON_HEALTH~", 128);
	Var16 = { func_897(fParam1) };
	StringConCat(&cVar0, &Var16, 128);
	StringConCat(&cVar0, "~BLIP_SUPPLY_ICON_AMMO~", 128);
	Var16 = { func_897(fParam2) };
	StringConCat(&cVar0, &Var16, 128);
	StringConCat(&cVar0, "~BLIP_SUPPLY_ICON_FOOD~", 128);
	return cVar0;
}

void func_512(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam0) / 100f));
	*uParam2 = (iParam0 % 100);
}

int func_513(var uParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	if (!func_330(Global_35, 0))
	{
		return 0;
	}
	bVar2 = ((func_12(4) || Global_1357549->f_1614) || iParam3);
	if (bVar2)
	{
		if (VOLUME::_0x666C2F53ABEFC952(iParam1) == 1030835986)
		{
			VOLUME::_0xFD010A2154B40676(iParam1, 623901053);
			VOLUME::_0xFD010A2154B40676(iParam2, 623901053);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 154, true);
		if (func_12(8388608))
		{
			func_359(0);
		}
		if (func_38(2097152) && PED::GET_PED_CONFIG_FLAG(Global_35, 334, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 334, false);
			func_50(2097152);
		}
		return 0;
	}
	bVar1 = VOLUME::_0xF256A75210C5C0EB(iParam1, Global_36);
	if (bVar1 && !bVar2)
	{
		bVar0 = PED::IS_PED_IN_MELEE_COMBAT(Global_35);
		if (!bVar0)
		{
			PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		}
		PAD::DISABLE_CONTROL_ACTION(0, 42190210, false);
		PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
		if (!func_518(1))
		{
			PAD::DISABLE_CONTROL_ACTION(0, -620139643, false);
			if (PED::_0xD5FE956C70FF370B(Global_35))
			{
				PED::_0x7DE9692C6F64CFE8(Global_35, false, 0, 0);
			}
		}
		PAD::DISABLE_CONTROL_ACTION(0, 440314811, false);
		PAD::DISABLE_CONTROL_ACTION(0, 2028806450, false);
		PAD::DISABLE_CONTROL_ACTION(0, 371916472, false);
		if (!PED::GET_PED_CONFIG_FLAG(Global_35, 334, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 334, true);
			func_165(2097152);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 268, true);
		PED::SET_PED_RESET_FLAG(Global_35, 179, true);
		PED::SET_PED_RESET_FLAG(Global_35, 241, true);
		PED::SET_PED_RESET_FLAG(Global_35, 260, true);
		PED::SET_PED_RESET_FLAG(Global_35, 27, true);
		PED::SET_PED_RESET_FLAG(Global_35, 198, true);
		switch (Global_1935630->f_44)
		{
			case joaat("weapon_unarmed"):
				if (VOLUME::_0x666C2F53ABEFC952(iParam1) != 1030835986)
				{
					VOLUME::_0xFD010A2154B40676(iParam1, 1030835986);
					VOLUME::_0xFD010A2154B40676(iParam2, 1030835986);
				}
				iVar4 = func_218(Global_35, 1, 1, 0);
				if (((!func_12(536870912) && !func_38(4)) && iVar4 != 0) && iVar4 != joaat("weapon_unarmed"))
				{
					WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
				}
				break;
			
			case -1415022764:
			case -1016714371:
			case -164645981:
			case -160924582:
			case 827679807:
			case 1030402560:
			case 1247405313:
			case 1549070292:
				bVar3 = true;
				if (VOLUME::_0x666C2F53ABEFC952(iParam1) == 1030835986)
				{
					VOLUME::_0xFD010A2154B40676(iParam1, 623901053);
					VOLUME::_0xFD010A2154B40676(iParam2, 623901053);
				}
				break;
			
			default:
				if (!func_12(536870912) && !func_38(4))
				{
					WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
				}
				if (VOLUME::_0x666C2F53ABEFC952(iParam1) != 1030835986)
				{
					VOLUME::_0xFD010A2154B40676(iParam1, 1030835986);
					VOLUME::_0xFD010A2154B40676(iParam2, 1030835986);
				}
				break;
		}
		if (!bVar3)
		{
			PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
			PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
			PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
		}
		if (!func_12(8388608))
		{
			func_359(1);
		}
		if (bVar1)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 288, true);
			PED::SET_PED_RESET_FLAG(Global_35, 2, true);
			if (uParam0->f_45 != 8 && uParam0->f_45 != 7)
			{
				iVar5 = PED::GET_MOUNT(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar5))
				{
					PED::SET_PED_RESET_FLAG(iVar5, 223, true);
					PED::SET_PED_RESET_FLAG(Global_35, 287, true);
				}
			}
		}
	}
	else
	{
		if (func_12(8388608))
		{
			func_359(0);
		}
		if (PED::GET_PED_CONFIG_FLAG(Global_35, 334, true))
		{
			func_50(2097152);
			PED::SET_PED_CONFIG_FLAG(Global_35, 334, false);
		}
		if (VOLUME::_0x666C2F53ABEFC952(iParam1) != 1030835986)
		{
			VOLUME::_0xFD010A2154B40676(iParam1, 1030835986);
			VOLUME::_0xFD010A2154B40676(iParam2, 1030835986);
		}
	}
	if (func_12(2) || bVar2)
	{
		PED::SET_PED_RESET_FLAG(Global_35, 154, true);
	}
	if ((!bVar2 && !bVar3) && func_689(Global_35, 1, 0, 0) != joaat("weapon_unarmed"))
	{
		if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 130948705))
		{
			if (func_147())
			{
				if (!func_205(556))
				{
					func_207(556, 0);
				}
			}
			else if (!func_205(555))
			{
				func_207(555, 0);
			}
		}
	}
	return 1;
}

void func_514(int iParam0)
{
	int iVar0;
	int iVar1[2];
	int iVar4;
	bool bVar5;
	
	iVar1[0] = 0;
	iVar1[1] = 1;
	iVar4 = 0;
	while (iVar4 < iVar1)
	{
		iVar0 = func_363(&(iVar1[iVar4]));
		if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
		{
		}
		else if (PED::_0xB676EFDA03DADA52(iVar0, 0) != 0)
		{
		}
		else if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
		{
		}
		else if (!VOLUME::_0xF256A75210C5C0EB(iParam0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false)))
		{
		}
		else
		{
			bVar5 = (func_12(4) || Global_1357549->f_1614);
			if (func_12(2) || bVar5)
			{
				PED::SET_PED_RESET_FLAG(iVar0, 154, true);
			}
		}
		iVar4++;
	}
}

void func_515(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	
	switch (uParam0->f_3483.f_1)
	{
		case 0:
			if (func_898(&(uParam0->f_3483)))
			{
				func_899(uParam0, 1);
			}
			break;
		
		case 1:
			if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_3483, 0, 0))
			{
				uParam0->f_3483 = 0;
				func_899(uParam0, 0);
			}
			else
			{
				if (((!func_12(2) && VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[4]))) && ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_3483, &(Global_1357549->f_3[4]), true, 0)) && PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, VOLUME::_0xF70F00013A62F866(&(Global_1357549->f_3[4])), 75f))
				{
					func_899(uParam0, 2);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
				}
				Jump @404; //curOff = 212
				if (func_900(1, 1084227584, 1, 1056964608))
				{
					if (!func_463(func_462(44)))
					{
						func_207(534, 0);
					}
					TASK::TASK_LEAVE_VEHICLE(Global_35, uParam0->f_3483, 0, 0);
					func_899(uParam0, 3);
				}
				Jump @404; //curOff = 277
				if (!PED::IS_PED_IN_VEHICLE(Global_35, uParam0->f_3483, false))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam0->f_3483, false);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (&uParam0->f_3483.f_2[iVar0] == 0)
						{
							uParam0->f_3483.f_2[iVar0] = uParam0->f_3483;
							uParam0->f_3483.f_6[iVar0] = MISC::GET_GAME_TIMER() + 30000;
						}
						else
						{
							if (iVar0 == 2)
							{
							}
							iVar0++;
						}
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
					func_899(uParam0, 0);
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (&uParam0->f_3483.f_2[iVar0] != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_3483.f_2[iVar0])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(&(uParam0->f_3483.f_2[iVar0]), 0, 0))
					{
						uParam0->f_3483.f_2[iVar0] = 0;
					}
					else if (MISC::GET_GAME_TIMER() > &uParam0->f_3483.f_6[iVar0])
					{
						vVar1 = { ENTITY::GET_ENTITY_COORDS(&(uParam0->f_3483.f_2[iVar0]), false, false) };
						if (BUILTIN::VDIST(Global_36, vVar1) > 80f && !CAM::IS_SPHERE_VISIBLE(vVar1, 10f))
						{
							fVar4 = ENTITY::GET_ENTITY_HEADING(&(uParam0->f_3483.f_2[iVar0]));
							ENTITY::SET_ENTITY_HEADING(&(uParam0->f_3483.f_2[iVar0]), (fVar4 + 180f));
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(&(uParam0->f_3483.f_2[iVar0]), true);
							uParam0->f_3483.f_2[iVar0] = 0;
							uParam0->f_3483.f_6[iVar0] = 0;
						}
					}
				}
				iVar0++;
			}
		}

void func_516(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 2.5f;
	if (func_38(512) && !func_12(2))
	{
		fVar0 = 1.25f;
	}
	if (func_898(&(uParam0->f_3483)))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3483) && VEHICLE::_0xEA44E97849E9F3DD(uParam0->f_3483))
		{
			iVar1 = 0;
			while (iVar1 < 6)
			{
				iVar2 = VEHICLE::_0xA8BA0BAE0173457B(uParam0->f_3483, iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, fVar0);
					VEHICLE::_0x0C3F0F7F92CA847C(uParam0->f_3483, PED::_0x46BF2A810679D6E6(iVar2, fVar0));
				}
				iVar1++;
			}
		}
	}
}

void func_517(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (!func_12(65536))
				{
					func_145(65536);
				}
			}
			else if (func_12(65536))
			{
				func_142(65536);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				if (!func_12(131072))
				{
					func_145(131072);
				}
			}
			else if (func_12(131072))
			{
				func_142(131072);
			}
			break;
	}
}

int func_518(int iParam0)
{
	switch (func_56())
	{
		case -1:
			return (Global_1357549->f_1496 && iParam0) != 0;
	}
	return 0;
}

int func_519(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return VOLUME::_CREATE_VOLUME_BOX(653.589f, -1253.396f, 44.461f, 0f, 0f, -54.05f, 3.85f, 4.6f, 5.7f);
			Jump @122; //curOff = 72
			return VOLUME::_CREATE_VOLUME_BOX(660.721f, -1257.044f, 43.797f, 0f, 0f, -14.4f, 2.15f, 3.1f, 5.7f);
			return 0;
		}

int func_520(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return VOLUME::_CREATE_VOLUME_BOX(-131.488f, -31.805f, 96.082f, 0f, 0f, -4.35f, 3.9f, 3.45f, 1.9f);
		
		case 1:
			return VOLUME::_CREATE_VOLUME_BOX(-117.938f, -36.055f, 95.882f, 0f, 0f, -31.4f, 3.65f, 3f, 2.5f);
	}
	return 0;
}

int func_521(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return VOLUME::_CREATE_VOLUME_BOX(2359.789f, 1376.458f, 106.883f, 0f, 0f, -26.9f, 4f, 4.35f, 2.7f);
		
		case 1:
			return VOLUME::_CREATE_VOLUME_BOX(2343.321f, 1350.422f, 106.762f, 0f, 3.9f, 27.75f, 3.9f, 2.6f, 2.95f);
	}
	return 0;
}

int func_522(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return VOLUME::_CREATE_VOLUME_BOX(1895.776f, -1858.61f, 47.535f, 0f, 0f, -38.85f, 6.3f, 9.9f, 3.55f);
		
		case 1:
			return VOLUME::_CREATE_VOLUME_BOX(1897.918f, -1870.142f, 48.126f, 0f, 0f, -38.85f, 6.05f, 7.35f, 3.55f);
	}
	return 0;
}

int func_523()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[66 /*49*/])->f_42, false) && !func_901(((*Global_1347702)[66 /*49*/])->f_13, 4))
	{
		return 1;
	}
	return 0;
}

bool func_524(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_525(var uParam0)
{
	return func_524(*uParam0, 2);
}

float func_526()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_527(int iParam0)
{
	return iParam0 > -1;
}

bool func_528(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		if (!func_527(iParam0))
		{
			return false;
		}
	}
	func_834(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

int func_529(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_527(iParam0))
	{
		return 0;
	}
	if (func_402(iParam0, 32, 1))
	{
		return 0;
	}
	if (!func_402(iParam0, 2, 1))
	{
		return 0;
	}
	if (!func_402(iParam0, 4, 1))
	{
		return 0;
	}
	if (func_528(iParam0, 33, 1))
	{
		return 0;
	}
	if (func_343(iParam0))
	{
		return 0;
	}
	if (func_822(iParam0))
	{
		if (!bParam2)
		{
			return 0;
		}
	}
	if (!bParam1)
	{
		if (Global_1357549->f_1497 == iParam0)
		{
			return 0;
		}
	}
	return 1;
}

var func_530(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

void func_531(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		if (!func_527(iParam0))
		{
			return;
		}
	}
	func_834(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_532(int iParam0, bool bParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = func_177(iParam0);
	if (!func_495(iParam0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::_0xF1C03A5352243A30(iVar0);
	if (bParam1)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, 0, 1);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
	}
}

void func_533(int iParam0, int iParam1)
{
	if (!func_527(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_11 = iParam1;
}

int func_534(int iParam0, vector3 vParam1, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_527(iParam0))
	{
		return 0;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(89040947))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(89040947);
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 1;
		
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(89040947))
			{
				return 0;
			}
			if (Global_1359489->f_9 != -1)
			{
				return 0;
			}
			Global_1359489->f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_902(iParam0, iParam9, bParam7, 1);
				}
				else if ((((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 == (Global_40.f_4942[iParam0 /*60*/])->f_59) && (func_463(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2) || func_128(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2)))
				{
					iParam4 = ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_1;
				}
				else
				{
					iParam4 = func_902(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (((*Global_1360165)[iParam0 /*1157*/])->f_63 != iParam4 && func_903(((*Global_1360165)[iParam0 /*1157*/])->f_63))
				{
					if (!func_904(iParam0, 0))
					{
						func_531(iParam0, 25, 0);
					}
				}
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_4 = { func_905(iParam0, iParam4, vParam1, bParam5, bParam6, bParam8, (Global_40.f_4942[iParam0 /*60*/])->f_59, bParam11) };
			if (!bParam6)
			{
				func_416(iParam0, 44, 1);
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 2;
		
		case 2:
			if (!func_330(func_177(iParam0), 0))
			{
				return 0;
			}
			if (bParam5 && iParam10)
			{
				if (!func_330(func_136(iParam0), 0))
				{
					return 0;
				}
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 3;
		
		case 3:
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_535(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_527(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_416(iParam0, 50, 1);
		func_416(iParam0, 48, 1);
		func_416(iParam0, 49, 1);
		func_416(iParam0, 51, 1);
		func_416(iParam0, 52, 1);
		func_416(iParam0, 54, 1);
		func_416(iParam0, 55, 1);
	}
	else
	{
		func_531(iParam0, 50, 1);
		func_531(iParam0, 48, 1);
		func_531(iParam0, 49, 1);
		func_531(iParam0, 51, 1);
		if (bParam3)
		{
			func_531(iParam0, 54, 1);
		}
		else
		{
			func_416(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_531(iParam0, 52, 1);
			if (bParam3)
			{
				func_531(iParam0, 55, 1);
			}
		}
		else
		{
			func_416(iParam0, 52, 1);
			if (!bParam3)
			{
				func_416(iParam0, 55, 1);
			}
		}
	}
}

void func_536(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_495(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_906(iParam0, bParam3);
	}
	else
	{
		func_907(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_908(iParam0, bParam3);
	}
	else
	{
		func_909(iParam0, bParam3);
	}
}

void func_537(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_0xD5FE956C70FF370B(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == func_910(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_911(iParam0))
	{
		if (func_227(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_759(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_537(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_537(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_759(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 1);
		}
	}
	if (func_759(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_759(iParam5, 32), 1);
		}
		else
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_759(iParam5, 32), 1);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_759(iParam5, 129))
	{
		if (func_759(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_759(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_759(iParam5, 32), 1);
	}
	if (bVar4)
	{
		if (!func_759(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, 0);
		}
		if (func_911(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_759(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_759(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

int func_538(int iParam0, int iParam1)
{
	var uVar0;
	
	if (!func_495(iParam0))
	{
		return 0;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return 1;
	}
	uVar0 = func_912(iParam0, iParam1);
	return uVar0;
}

void func_539(int iParam0, int iParam1, bool bParam2)
{
	if (!func_495(iParam0))
	{
		return;
	}
	if (!func_538(iParam0, iParam1))
	{
		return;
	}
	(Global_40.f_4942[iParam0 /*60*/])->f_3 = iParam1;
	if (bParam2)
	{
		func_531(iParam0, 25, 1);
	}
}

void func_540(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_913(iParam2))
		{
			iVar0 = func_914(iParam2, -1);
			if (func_915(iParam1, iVar0))
			{
				if (func_916(iParam1, iVar0))
				{
					if (func_917(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_918(iParam1);
					}
				}
				else
				{
					PED::_0x1902C4CFCC5BE57C(iParam1, iVar0);
				}
			}
		}
		func_919(iParam0, iParam1, 0);
		PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, 0);
		PED::_0xE3144B932DFDFF65(iParam1, 0f, -1, 1, 1);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 9);
		if (bParam3)
		{
			func_531(iParam0, 66, 0);
		}
	}
}

void func_541(int iParam0)
{
	func_920(iParam0);
	func_921(iParam0, 0);
}

void func_542(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), true, 1, false, false);
		if (PED::IS_PED_A_PLAYER(iParam0) && iParam1 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("weapon_unarmed"), 0);
			}
		}
	}
}

void func_543(int iParam0, int iParam1, bool bParam2)
{
	if (!func_527(iParam0))
	{
		return;
	}
	func_922(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

void func_544(int iParam0)
{
	func_531(iParam0, 36, 1);
}

int func_545(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_0x0556E9D2ECF39D01(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			WEAPON::_0xE9BD19F8121ADE3E(iParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_546(int iParam0, int iParam1)
{
	if (!func_527(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if ((Global_40.f_4942[iParam0 /*60*/])->f_3 == -1341683964)
			{
				func_923(iParam1, 1240907314, 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_923(iParam1, -2088446466, 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_547(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_495(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

void func_548(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	
	switch (func_146())
	{
		case 2:
			if (iParam0 == 0)
			{
				vVar0 = { 655.5186f, -1252.901f, 42.8413f };
				vVar3 = { 0f, 0f, 143.2273f };
			}
			if (iParam0 == 1)
			{
				vVar0 = { 660.9746f, -1255.074f, 42.7057f };
				vVar3 = { 0f, 0f, 177.9986f };
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				vVar0 = { -129.2241f, -32.6858f, 95.083f };
				vVar3 = { 0f, 0f, 87.1887f };
			}
			if (iParam0 == 1)
			{
				vVar0 = { -120.3756f, -35.1044f, 94.7365f };
				vVar3 = { 0f, 0f, 233.7959f };
			}
			break;
		
		case 6:
			if (iParam0 == 0)
			{
				vVar0 = { 2358.067f, 1375.013f, 105.5566f };
				vVar3 = { 0f, 0f, 328.4377f };
			}
			if (iParam0 == 1)
			{
				vVar0 = { 2344.865f, 1351.729f, 105.1657f };
				vVar3 = { 0f, 0f, 138.0917f };
			}
			break;
		
		case 3:
			if (iParam0 == 0)
			{
				vVar0 = { 1892.641f, -1862.309f, 46.3347f };
				vVar3 = { 0f, 0f, 333.8364f };
			}
			if (iParam0 == 1)
			{
				vVar0 = { 1902.226f, -1868.772f, 46.3492f };
				vVar3 = { 0f, 0f, 148.4403f };
			}
			break;
	}
	vVar0.f_2 = (vVar0.z + 0.25f);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Global_1357549->f_1669, vVar0, vVar3, 2);
}

void func_549(int iParam0)
{
	if (func_146() == 3 && iParam0 == 1)
	{
		func_478(1163459288, 0, 0);
		func_126(1163459288, 0, -1f, 0, 1, 0.4f, 1, 0);
	}
	if (func_146() == 3 && iParam0 == 0)
	{
		func_478(58833085, 0, 0);
		func_478(-629053815, 0, 0);
		func_126(58833085, 0, 1f, 0, 1, 0.4f, 1, 0);
		func_126(-629053815, 0, -1f, 0, 1, 0.4f, 1, 0);
	}
}

void func_550(int iParam0, bool bParam1)
{
	if (!func_527(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_842(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
		{
			func_543(iParam0, 1, 0);
		}
	}
	func_543(iParam0, 16, bParam1);
}

void func_551(int iParam0)
{
	func_543(iParam0, 8, 0);
}

int func_552(int iParam0, bool bParam1)
{
	if (!func_495(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_924(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

void func_553(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_495(iParam0))
	{
		iVar1 = func_177(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_925(iParam0);
		}
	}
	if (func_528(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_177(iParam0), 137, true);
	}
}

void func_554(int iParam0, bool bParam1)
{
	if (!func_527(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_177(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_177(iParam0), 204, false);
	}
}

void func_555(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	
	if (!func_495(iParam0))
	{
		return;
	}
	if (func_343(iParam0))
	{
		if (!func_182(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_528(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	uVar0 = func_552(iParam0, 0);
	if (!MISC::_0x716F17F8A0419F95(uVar0))
	{
		return;
	}
	iVar1 = func_177(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_926(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::_0x0C3CB2E600C8977D(iVar1, 1)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::_0xF1C03A5352243A30(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, 1, 1);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		func_531(iParam0, 2, 1);
	}
	else
	{
		func_927(iParam0);
		func_531(iParam0, 1, 1);
	}
}

void func_556(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_495(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (&Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

void func_557(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_527(iParam1))
	{
		return;
	}
	iVar0 = func_136(iParam1);
	if (func_496(iParam1))
	{
		if (!func_928(iParam1))
		{
			return;
		}
	}
	func_416(iParam1, 39, 1);
	func_929(iParam1, 64, 0);
	((*Global_1360165)[iParam1 /*1157*/])->f_70.f_11 = 0;
	func_929(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_929(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_531(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_930(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_558(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_526() - fParam1);
	func_931(uParam0, 1);
	func_932(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_559()
{
	return func_933(32);
}

void func_560(int iParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	
	fVar0 = 2f;
	iVar1 = 20;
	iVar2 = 0;
	iVar3 = 5;
	iVar4 = CLOCK::GET_CLOCK_HOURS();
	iVar5 = CLOCK::GET_CLOCK_MINUTES();
	func_934(iParam0, &iVar7, &iVar8, &iVar9, &iVar10);
	if (func_232(180573150, 1) || func_232(-404697685, 1))
	{
		func_935(iParam0, &iVar7, &iVar8, &iVar9, &iVar10);
	}
	else if (func_232(1305416676, 1))
	{
		func_936(iParam0, &iVar7, &iVar8, &iVar9, &iVar10);
	}
	else if (func_232(-1837343824, 1))
	{
		func_937(iParam0, &iVar7, &iVar8, &iVar9, &iVar10);
	}
	if (((func_938(22) || func_939(22)) || func_938(23)) || func_939(23))
	{
		if (((((iParam0 == 26 || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31)
		{
			iVar9 = 6;
			iVar10 = 0;
		}
	}
	if (iVar7 < iVar9)
	{
		bVar6 = func_940(iVar7, iVar8, iVar9, iVar10);
	}
	else if (iVar9 < iVar7)
	{
		bVar6 = func_941(iVar7, iVar8, iVar9, iVar10);
	}
	else
	{
		bVar6 = func_942(iVar7, iVar8, iVar9, iVar10);
	}
	if (iVar1 == iVar4)
	{
		if (iVar5 < iVar2)
		{
			bVar6 = false;
		}
	}
	if (iVar4 < iVar1 && iVar4 > iVar3)
	{
		bVar6 = false;
	}
	iVar11 = (Global_1357549->f_12[iParam0 /*14*/])->f_8;
	if (OBJECT::_0xFA3B61EC249B4674(iVar11) > 0f)
	{
		if (CLOCK::GET_CLOCK_HOURS() <= 20 && CLOCK::GET_CLOCK_HOURS() >= 7)
		{
			OBJECT::_0xF49574E2332A8F06(iVar11, 0f);
			ENTITY::_0x56E0735D6273B227(iVar11, 1);
		}
	}
	if (bVar6)
	{
		ENTITY::_0x56E0735D6273B227(iVar11, 0);
		if (OBJECT::_0xFA3B61EC249B4674(iVar11) < 1f)
		{
			if ((Global_1357549->f_12[iParam0 /*14*/])->f_9 == 1)
			{
				fVar12 = (func_174(&((Global_1357549->f_12[iParam0 /*14*/])->f_11)) / fVar0);
				if (fVar12 > 1f)
				{
					fVar12 = 1f;
				}
				OBJECT::_0xF49574E2332A8F06(iVar11, fVar12);
				func_943(iVar11, fVar12);
				if (MISC::ABSF((OBJECT::_0xFA3B61EC249B4674(iVar11) - 1f)) < 0.005f)
				{
					OBJECT::_0xF49574E2332A8F06(iVar11, 1f);
				}
			}
			else
			{
				(Global_1357549->f_12[iParam0 /*14*/])->f_9 = 1;
				func_180(&((Global_1357549->f_12[iParam0 /*14*/])->f_11), 0);
			}
		}
		else if ((Global_1357549->f_12[iParam0 /*14*/])->f_9 == 1)
		{
			(Global_1357549->f_12[iParam0 /*14*/])->f_9 = 0;
			func_181(&((Global_1357549->f_12[iParam0 /*14*/])->f_11));
			OBJECT::_0xF49574E2332A8F06(iVar11, 1f);
			func_943(iVar11, 1f);
		}
	}
	else if (OBJECT::_0xFA3B61EC249B4674(iVar11) > (Global_1357549->f_12[iParam0 /*14*/])->f_6)
	{
		if ((Global_1357549->f_12[iParam0 /*14*/])->f_9 == 1)
		{
			fVar12 = (1f - (func_174(&((Global_1357549->f_12[iParam0 /*14*/])->f_11)) / fVar0));
			if (fVar12 < 0f)
			{
				fVar12 = 0f;
			}
			OBJECT::_0xF49574E2332A8F06(iVar11, fVar12);
			func_943(iVar11, fVar12);
			if (MISC::ABSF((OBJECT::_0xFA3B61EC249B4674(iVar11) - (Global_1357549->f_12[iParam0 /*14*/])->f_6)) < 0.005f)
			{
				OBJECT::_0xF49574E2332A8F06(iVar11, (Global_1357549->f_12[iParam0 /*14*/])->f_6);
			}
		}
		else
		{
			(Global_1357549->f_12[iParam0 /*14*/])->f_9 = 1;
			func_180(&((Global_1357549->f_12[iParam0 /*14*/])->f_11), 0);
		}
	}
	else if ((Global_1357549->f_12[iParam0 /*14*/])->f_9 == 1)
	{
		(Global_1357549->f_12[iParam0 /*14*/])->f_9 = 0;
		func_181(&((Global_1357549->f_12[iParam0 /*14*/])->f_11));
		ENTITY::_0x56E0735D6273B227(iVar11, 1);
		OBJECT::_0xF49574E2332A8F06(iVar11, (Global_1357549->f_12[iParam0 /*14*/])->f_6);
		func_943(iVar11, (Global_1357549->f_12[iParam0 /*14*/])->f_6);
	}
}

char* func_561(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		
		case 2:
			return "HIDEOUT_CLEMENS_POINT";
		
		case 3:
			return "HIDEOUT_SHADY_BELLE";
		
		default:
			break;
	}
	return "";
}

char* func_562(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_944(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_563(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar16;
	
	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar16 = _NAMESPACE71::_0xD05590C1AB38F068(&Var0, &vVar13, iParam6, iParam7);
	return uVar16;
}

int func_564()
{
	return &Global_1899515;
}

bool func_565()
{
	return func_370(10, 0) >= 4;
}

void func_566(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_945(*iParam0);
	iVar1 = func_946(*iParam0);
	iVar2 = func_947(*iParam0);
	iVar3 = func_647(*iParam0);
	iVar4 = func_648(*iParam0);
	iVar5 = func_948(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_949(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_949(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_950(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_567(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_569((*uParam0)[iVar0 /*257*/], (*uParam1)[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_568(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return 1;
		
		case 3:
			return 0;
		
		default:
			break;
	}
	return 0;
}

int func_569(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_253)
	{
		if (!MISC::IS_BIT_SET(*uParam1, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_570(int iParam0, int iParam1)
{
	if (iParam1 == 7)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[iParam1])))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, &(Global_1357549->f_3[iParam1]), true, 0);
}

void func_571(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_572(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_951(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_952(iParam0))
	{
		return 0;
	}
	if (func_953(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_954(iParam0, 1)) || func_650(32768))
	{
		if (!func_954(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_955())
	{
		return 0;
	}
	return 1;
}

void func_573(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_574(int iParam0)
{
	return iParam0;
}

void func_575(int iParam0)
{
	if (!func_956(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1945938)[iParam0 /*18*/])->f_3);
	}
	((*Global_1945938)[iParam0 /*18*/])->f_4 = 0;
	(*Global_1945938)[iParam0 /*18*/] = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = 0f;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_2 = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_15 = -1f;
}

bool func_576(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

void func_577(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;
	
	((*Global_1945938)[iParam0 /*18*/])->f_4 = iParam1;
	(*Global_1945938)[iParam0 /*18*/] = iParam4;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1945938)[iParam0 /*18*/])->f_2 = iParam5;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { vParam6 };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = fParam9;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = iParam10;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = iParam11;
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_5 = iParam12;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 2;
	((*Global_1945938)[iParam0 /*18*/])->f_17 = -1;
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1945938)[iParam0 /*18*/])->f_3 = iVar0;
	func_957(iParam0, 1);
	func_958(iParam0, 1);
	func_959(iParam0, 128);
}

int func_578(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_576(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_577(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 0, iParam2, 1704213876, 0);
		return iVar1;
	}
	return 0;
}

bool func_579(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 && !func_209(iParam0))
	{
		return false;
	}
	iVar0 = func_574(iParam0);
	return HUD::_UIPROMPT_HAS_STANDARD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1);
}

void func_580(int iParam0, int iParam1)
{
	if (CAM::DOES_CAM_EXIST((Local_18.f_3057[iParam0 /*21*/])->f_5))
	{
		if (CAM::IS_CAM_RENDERING((Local_18.f_3057[iParam0 /*21*/])->f_5))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		CAM::DESTROY_CAM((Local_18.f_3057[iParam0 /*21*/])->f_5, false);
	}
	if (!CAM::DOES_CAM_EXIST((Local_18.f_3057[iParam1 /*21*/])->f_5))
	{
		if (!func_211((Local_18.f_3057[iParam1 /*21*/])->f_9))
		{
			(Local_18.f_3057[iParam1 /*21*/])->f_5 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, (Local_18.f_3057[iParam1 /*21*/])->f_9, (Local_18.f_3057[iParam1 /*21*/])->f_12, (Local_18.f_3057[iParam1 /*21*/])->f_15, false, 2);
		}
	}
	if (CAM::DOES_CAM_EXIST((Local_18.f_3057[iParam1 /*21*/])->f_5))
	{
		if (!CAM::IS_CAM_RENDERING((Local_18.f_3057[iParam1 /*21*/])->f_5))
		{
			CAM::SET_CAM_ACTIVE((Local_18.f_3057[iParam1 /*21*/])->f_5, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
	}
	(Local_18.f_3057[iParam0 /*21*/])->f_3 = 3;
	(Local_18.f_3057[iParam1 /*21*/])->f_3 = 2;
	if (func_209((Local_18.f_3057[iParam0 /*21*/])->f_2))
	{
		func_210(&((Local_18.f_3057[iParam0 /*21*/])->f_2), 1, 1);
	}
	if (func_209((Local_18.f_3057[iParam0 /*21*/])->f_1))
	{
		func_210(&((Local_18.f_3057[iParam0 /*21*/])->f_1), 1, 1);
	}
	func_219(iParam1);
	func_221(iParam1);
	HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 2, 1, 799218720, (Local_18.f_3057[iParam1 /*21*/])->f_20, 0);
}

char* func_581()
{
	return "SHOP_BACK";
}

int func_582(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_576(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_577(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

int func_583()
{
	if (!func_269(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_269(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_269(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_269(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_269(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_269(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_269(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

int func_584()
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	struct<4> Var7;
	
	iVar0 = func_405();
	iVar1 = func_960(iVar0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return 0;
	}
	if (!func_889(iVar1, 0))
	{
		return 0;
	}
	if (!func_961(iVar1))
	{
		return 0;
	}
	Var2 = { func_825(0) };
	Var2.f_4 = -352578118;
	Var7 = { func_962(iVar1, Var2, Var2.f_4, 0) };
	if (!func_963(iVar1, &Var7, &Var2, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_585(int iParam0)
{
	int iVar0;
	float fVar1;
	
	iVar0 = 1;
	fVar1 = PED::_0xFD1BA1EEF7985BB8(iParam0, 41611);
	if (fVar1 == 1f)
	{
		iVar0 = 2;
	}
	return iVar0;
}

int func_586(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	var uVar7;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = func_960(iVar0);
	if (!func_889(iVar1, 0))
	{
		return 0;
	}
	if (!func_961(iVar1))
	{
		return 0;
	}
	Var2 = { func_825(0) };
	Var2.f_4 = -352578118;
	if (func_964(iVar1, &Var2, 1, 0, 0))
	{
		return 0;
	}
	if (!func_965(iVar1, &uVar7, &Var2, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_587(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_966(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_588(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_1327590->f_19547)
	{
		(Global_1327590->f_19547[iParam0 /*5*/])->f_4 = 1;
	}
}

bool func_589(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

void func_590(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_591(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 101;
	}
	else if (iParam1 == 32)
	{
		return 126;
	}
	else if (iParam1 == 34)
	{
		return 127;
	}
	switch (iParam0)
	{
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
				
				case 6:
					return 130;
				
				case 27:
					return 131;
				
				case 26:
					return 129;
				
				case 19:
					return 59;
				
				default:
					break;
			}
			break;
		
		case 38:
			switch (iParam1)
			{
				case 15:
					return 6;
				
				case 33:
					return 11;
				
				case 29:
					return 106;
				
				case 30:
					return 107;
				
				case 3:
					return 7;
				
				case 8:
					return 9;
				
				case 10:
					return 10;
				
				case 9:
					return 13;
				
				case 2:
					return 14;
				
				case 1:
					return 15;
				
				case 31:
					return 108;
				
				case 22:
					return 16;
				
				case 7:
					return 17;
				
				case 21:
					return 12;
				
				default:
					break;
			}
			break;
		
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
				
				case 6:
					return 134;
				
				case 27:
					return 135;
				
				case 26:
					return 133;
				
				case 19:
					return 57;
				
				default:
					break;
			}
			break;
		
		case 69:
			switch (iParam1)
			{
				case 4:
					return 18;
				
				case 3:
					return 19;
				
				case 2:
					return 20;
				
				case 1:
					return 21;
				
				case 31:
					return 105;
				
				default:
					break;
			}
			break;
		
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
				
				case 6:
					return 139;
				
				case 27:
					return 140;
				
				case 26:
					return 138;
				
				case 19:
					return 56;
				
				default:
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
				
				case 6:
					return 143;
				
				case 27:
					return 144;
				
				case 26:
					return 142;
				
				default:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
				
				case 31:
					return 118;
				
				default:
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 15:
					return 36;
				
				case 8:
					return 37;
				
				case 33:
					return 52;
				
				case 29:
					return 109;
				
				case 10:
					return 38;
				
				case 30:
					return 110;
				
				case 0:
					return 39;
				
				case 4:
					return 41;
				
				case 3:
					return 42;
				
				case 6:
					return 43;
				
				case 9:
					return 44;
				
				case 2:
					return 45;
				
				case 1:
					return 46;
				
				case 31:
					return 111;
				
				case 22:
					return 51;
				
				case 7:
					return 47;
				
				case 12:
					return 48;
				
				case 13:
					return 49;
				
				case 14:
					return 50;
				
				case 18:
					return 55;
				
				case 21:
					return 54;
				
				default:
					break;
			}
			break;
		
		case 105:
			switch (iParam1)
			{
				case 15:
					return 25;
				
				case 33:
					return 33;
				
				case 29:
					return 112;
				
				case 10:
					return 26;
				
				case 4:
					return 27;
				
				case 3:
					return 28;
				
				case 6:
					return 29;
				
				case 2:
					return 30;
				
				case 31:
					return 113;
				
				case 22:
					return 32;
				
				case 1:
					return 31;
				
				default:
					break;
			}
			break;
		
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
				
				default:
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
				
				default:
					break;
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 2:
					return 23;
				
				case 1:
					return 24;
				
				default:
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
				
				case 26:
					return 146;
				
				case 6:
					return 147;
				
				case 27:
					return 148;
				
				case 19:
					return 58;
				
				default:
					break;
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 29:
					return 114;
				
				case 33:
					return 66;
				
				case 10:
					return 60;
				
				case 3:
					return 61;
				
				case 20:
					return 62;
				
				case 9:
					return 63;
				
				case 31:
					return 115;
				
				case 22:
					return 64;
				
				case 2:
					return 65;
				
				default:
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
				
				default:
					break;
			}
			break;
		
		case 76:
			switch (iParam1)
			{
				case 15:
					return 68;
				
				case 8:
					return 69;
				
				case 33:
					return 70;
				
				case 29:
					return 102;
				
				case 10:
					return 72;
				
				case 30:
					return 103;
				
				case 0:
					return 73;
				
				case 3:
					return 74;
				
				case 6:
					return 75;
				
				case 9:
					return 76;
				
				case 2:
					return 77;
				
				case 31:
					return 104;
				
				case 1:
					return 78;
				
				case 22:
					return 80;
				
				case 20:
					return 79;
				
				default:
					break;
			}
			break;
		
		case 92:
			switch (iParam1)
			{
				case 30:
					return 116;
				
				case 4:
					return 82;
				
				case 2:
					return 86;
				
				case 1:
					return 85;
				
				case 31:
					return 117;
				
				case 9:
					return 84;
				
				default:
					break;
			}
			break;
		
		case 78:
			switch (iParam1)
			{
				case 29:
					return 120;
				
				case 6:
					return 0;
				
				case 2:
					return 2;
				
				case 31:
					return 121;
				
				case 22:
					return 1;
				
				case 1:
					return 3;
				
				default:
					break;
			}
			break;
		
		case 90:
		case 128:
			switch (iParam1)
			{
				case 18:
					return 34;
				
				default:
					break;
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 2:
					return 89;
				
				case 1:
					return 88;
				
				case 3:
					return 87;
				
				default:
					break;
			}
			break;
		
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
				
				default:
					break;
			}
			break;
		
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
				
				default:
					break;
			}
			break;
		
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
				
				default:
					break;
			}
			break;
		
		case 115:
			switch (iParam1)
			{
				case 33:
					return 93;
				
				case 3:
					return 90;
				
				case 6:
					return 91;
				
				case 9:
					return 94;
				
				case 10:
					return 92;
				
				default:
					break;
			}
			break;
		
		case 120:
			switch (iParam1)
			{
				case 3:
					return 95;
				
				case 2:
					return 96;
				
				default:
					break;
			}
			break;
		
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
				
				default:
					break;
			}
			break;
		
		case 117:
			switch (iParam1)
			{
				case 31:
					return 123;
				
				case 2:
					return 99;
				
				case 1:
					return 100;
				
				default:
					break;
			}
			break;
		
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
				
				default:
					break;
			}
			break;
		
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
				
				default:
					break;
			}
			break;
	}
	return -1;
}

Vector3 func_592(int iParam0)
{
	if (!func_967(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2947.055f, 1320.15f, 43.8203f;
		
		case 2:
			return 2939.063f, 1287.116f, 43.6529f;
		
		case 3:
			return 2932.97f, 1282.56f, 43.67f;
		
		case 1:
			return 2947.64f, 1344.901f, 43.899f;
		
		case 99:
			return -5227.357f, -3470.067f, -20.49293f;
		
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		
		case 7:
			return -784.49f, -1321.95f, 42.88f;
		
		case 10:
			return -753.4219f, -1284.24f, 43.20049f;
		
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		
		case 14:
			return -875.03f, -1327.09f, 42.97f;
		
		case 15:
			return -875.02f, -1326.71f, 42.97f;
		
		case 17:
			return -762.0716f, -1293.549f, 42.8355f;
		
		case 12:
			return -813.6f, -1373.8f, 44.2f;
		
		case 16:
			return -805.72f, -1330.5f, 42.67f;
		
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
		
		case 20:
			return 1521.91f, 441.15f, 89.68f;
		
		case 21:
			return 1523.63f, 442.65f, 89.68f;
		
		case 22:
			return 2161.5f, -618.5f, 43f;
		
		case 23:
			return -1092.88f, -575.69f, 81.41f;
		
		case 24:
			return -1094.35f, -577.48f, 81.41f;
		
		case 25:
			return 1294.084f, -1303.102f, 76.0418f;
		
		case 26:
			return 1297.423f, -1278.412f, 75.65752f;
		
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
		
		case 28:
			return 1329.755f, -1294.218f, 76.0092f;
		
		case 29:
			return 1323.734f, -1321.775f, 77.8924f;
		
		case 30:
			return 1226.71f, -1295.08f, 75.9f;
		
		case 31:
			return 1230.34f, -1298.578f, 75.9027f;
		
		case 32:
			return 1332.55f, -1298.679f, 75.35602f;
		
		case 35:
			return 1209.053f, -193.1814f, 101.9785f;
		
		case 36:
			return 2644.188f, -1292.507f, 51.2496f;
		
		case 37:
			return 2657.466f, -1180.96f, 53.2785f;
		
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
		
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
		
		case 41:
			return 2859.51f, -1202.16f, 48.59f;
		
		case 42:
			return 2825.607f, -1318.207f, 45.7557f;
		
		case 43:
			return 2718f, -1287f, 49.6f;
		
		case 44:
			return 2508.212f, -1449.654f, 48.41523f;
		
		case 45:
			return 2748.811f, -1398.277f, 45.18309f;
		
		case 46:
			return 2747.824f, -1396.384f, 45.18309f;
		
		case 47:
			return 2555.09f, -1166.97f, 52.68f;
		
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
		
		case 49:
			return 2817.64f, -1325.011f, 47.00512f;
		
		case 50:
			return 2836.992f, -1305.805f, 45.6964f;
		
		case 55:
			return 2832.02f, -1225.563f, 46.6422f;
		
		case 54:
			return 2734.174f, -1119.755f, 50.10792f;
		
		case 51:
			return 2683.84f, -1399.642f, 45.37881f;
		
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
		
		case 61:
			return -1790f, -388.27f, 159.33f;
		
		case 62:
			return -1818.99f, -370.94f, 162.3f;
		
		case 63:
			return -1819.88f, -561.8194f, 157.2323f;
		
		case 65:
			return -1763.78f, -385.1118f, 156.7401f;
		
		case 64:
			return -1773.314f, -393.9122f, 155.5647f;
		
		case 68:
			return -307.9643f, 773.6048f, 117.7031f;
		
		case 69:
			return -306.3f, 815.08f, 117.98f;
		
		case 70:
			return 0f, 0f, 0f;
		
		case 72:
			return -338.8647f, 767.4334f, 115.5628f;
		
		case 73:
			return -287.9538f, 804.0544f, 118.3859f;
		
		case 74:
			return -324f, 803.72f, 116.88f;
		
		case 75:
			return -281.82f, 778.97f, 118.5f;
		
		case 76:
			return -369.4457f, 786.6935f, 115.9904f;
		
		case 77:
			return -178.0316f, 628.0621f, 113.0896f;
		
		case 78:
			return -175.0377f, 631.7999f, 113.0896f;
		
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
		
		case 79:
			return -325.532f, 773.6285f, 117.5038f;
		
		case 82:
			return 3025.786f, 562.7253f, 43.7167f;
		
		case 86:
			return 2986.224f, 569.9468f, 43.62284f;
		
		case 85:
			return 2986.94f, 574.9f, 43.64f;
		
		case 84:
			return 2967.273f, 796.7416f, 52.5948f;
		
		case 87:
			return -1302.951f, 394.6608f, 94.3817f;
		
		case 89:
			return -1300.83f, 399.7599f, 94.38248f;
		
		case 88:
			return -1299.891f, 401.3615f, 94.38248f;
		
		case 93:
			return -5518.071f, -2906.217f, -2.7513f;
		
		case 90:
			return -5487.197f, -2939.038f, -1.3872f;
		
		case 91:
			return -5507.993f, -2964.844f, -1.6215f;
		
		case 92:
			return -5509.019f, -2947.435f, -2.8934f;
		
		case 94:
			return -5520.701f, -3044.427f, -1.40419f;
		
		case 95:
			return -3687.3f, -2623.39f, -14.44f;
		
		case 4:
			return -2842.211f, 137.3398f, 183.8268f;
		
		case 5:
			return -1005.934f, -540.8262f, 97.9502f;
		
		case 34:
			return 2076.835f, 1000.829f, 111.4973f;
		
		case 67:
			return -2251.034f, -1916.911f, 115.9488f;
		
		case 56:
			return -142.072f, -23.5242f, 95.0883f;
		
		case 57:
			return 675.3091f, -1251.233f, 43.0152f;
		
		case 58:
			return 1875.2f, -1859.182f, 41.8f;
		
		case 59:
			return 2366.084f, 1347.122f, 105.1305f;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_593(int iParam0)
{
	if (!func_967(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2941.929f, 1320.927f, 46.2401f;
		
		case 2:
			return 2936.9f, 1281.7f, 43.6529f;
		
		case 3:
			return 2931.596f, 1282.839f, 44.6783f;
		
		case 99:
			return -5227.45f, -3468.19f, -20.49293f;
		
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		
		case 10:
			return -753.4219f, -1285.01f, 43.20049f;
		
		case 7:
			return -785.1682f, -1324.179f, 46.3505f;
		
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		
		case 14:
			return -875.0186f, -1328.058f, 44.00846f;
		
		case 17:
			return -764.2743f, -1292.576f, 44.3442f;
		
		case 12:
			return -813.7f, -1374.1f, 44.2f;
		
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
		
		case 20:
			return 1522.305f, 442.8598f, 89.6785f;
		
		case 21:
			return 1525.407f, 442.7721f, 90.6467f;
		
		case 22:
			return 2161.5f, -618.5f, 43f;
		
		case 23:
			return -1092.88f, -575.69f, 81.41f;
		
		case 24:
			return -1094.41f, -577.51f, 81.41f;
		
		case 25:
			return 1294.084f, -1303.102f, 76.0418f;
		
		case 26:
			return 1297.423f, -1278.412f, 75.65752f;
		
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
		
		case 28:
			return 1327.036f, -1292.386f, 77.2488f;
		
		case 29:
			return 1326.268f, -1323.129f, 78.1929f;
		
		case 30:
			return 1228.508f, -1296.796f, 77.6347f;
		
		case 31:
			return 1232.206f, -1300.197f, 77.8496f;
		
		case 35:
			return 1209.053f, -193.1814f, 101.9785f;
		
		case 37:
			return 2657.466f, -1180.96f, 53.2785f;
		
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
		
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
		
		case 41:
			return 2851.2f, -1202.3f, 49.046f;
		
		case 42:
			return 2828.087f, -1315.179f, 47.4196f;
		
		case 43:
			return 2714.586f, -1286.893f, 50.3211f;
		
		case 44:
			return 2508.212f, -1449.654f, 48.41523f;
		
		case 45:
			return 2747.906f, -1397.089f, 47.1107f;
		
		case 46:
			return 2746.599f, -1394.278f, 46.918f;
		
		case 47:
			return 2554.144f, -1166.025f, 54.3474f;
		
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
		
		case 49:
			return 2817.64f, -1325.011f, 47.00512f;
		
		case 50:
			return 2836.992f, -1305.805f, 45.6964f;
		
		case 55:
			return 2832.02f, -1225.563f, 46.6422f;
		
		case 54:
			return 2734.174f, -1119.755f, 50.10792f;
		
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
		
		case 61:
			return -1792.444f, -385.412f, 160.6924f;
		
		case 62:
			return -1812.343f, -370.618f, 161.8814f;
		
		case 63:
			return -1819.88f, -561.8194f, 157.2323f;
		
		case 65:
			return -1763.78f, -385.1118f, 156.7401f;
		
		case 68:
			return -307.9643f, 773.6048f, 117.7031f;
		
		case 69:
			return -308.18f, 812.19f, 117.99f;
		
		case 70:
			return 0f, 0f, 0f;
		
		case 72:
			return -338.8647f, 767.4334f, 115.5628f;
		
		case 73:
			return -286.9307f, 809.6714f, 120.6565f;
		
		case 74:
			return -323.5066f, 799.6924f, 118.973f;
		
		case 75:
			return -279.273f, 781.7448f, 118.7954f;
		
		case 76:
			return -369.4457f, 786.6935f, 115.9904f;
		
		case 77:
			return -176.3f, 630.1f, 115.331f;
		
		case 78:
			return -174.0662f, 633.9207f, 115.109f;
		
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
		
		case 79:
			return -326.1232f, 771.9214f, 116.436f;
		
		case 1:
			return 2947.64f, 1344.901f, 43.899f;
		
		case 51:
			return 2683.84f, -1399.642f, 45.37881f;
		
		case 16:
			return -805.72f, -1330.5f, 42.67f;
		
		case 64:
			return -1773.314f, -393.9122f, 155.5647f;
		
		case 32:
			return 1332.55f, -1298.679f, 75.35602f;
		
		case 82:
			return 3023.859f, 561.206f, 46.7352f;
		
		case 86:
			return 2986.003f, 567.9055f, 45.337f;
		
		case 84:
			return 2967.273f, 796.7416f, 52.5948f;
		
		case 87:
			return -1302.951f, 394.6608f, 94.3817f;
		
		case 89:
			return -1300.283f, 400.4247f, 94.3817f;
		
		case 88:
			return -1299.608f, 401.5503f, 94.97269f;
		
		case 93:
			return -5518.071f, -2906.217f, -2.7513f;
		
		case 90:
			return -5488.293f, -2937.662f, 0.6299f;
		
		case 91:
			return -5506.691f, -2968.343f, -1.2586f;
		
		case 92:
			return -5509.019f, -2947.435f, -2.8934f;
		
		case 94:
			return -5520.701f, -3044.427f, -1.40419f;
		
		case 95:
			return -3684.342f, -2626.877f, -12.5497f;
		
		case 4:
			return -2842.211f, 137.3398f, 183.8268f;
		
		case 5:
			return -1005.934f, -540.8262f, 97.9502f;
		
		case 34:
			return 2076.835f, 1000.829f, 111.4973f;
		
		case 67:
			return -2251.034f, -1916.911f, 115.9488f;
		
		case 56:
			return -142.072f, -23.5242f, 95.0883f;
		
		case 57:
			return 675.3091f, -1251.233f, 43.0152f;
		
		case 58:
			return 1875.2f, -1859.182f, 41.8f;
		
		case 59:
			return 2366.084f, 1347.122f, 105.1305f;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_594(int iParam0, int iParam1)
{
	return func_870((Global_1914319->f_3[iParam0 /*446*/])->f_5, iParam1);
}

int func_595(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 43:
		case 61:
		case 73:
			return 1;
	}
	return 0;
}

int func_596(int iParam0, int iParam1)
{
	if (iParam1 > 25)
	{
		return 0;
	}
	switch (iParam1)
	{
		case -1:
		case 1:
		case 2:
		case 5:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
			return 0;
		
		case 4:
			if (iParam0 == 41)
			{
				return 1;
			}
			return 0;
		
		default:
			break;
	}
	return 1;
}

int func_597(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar3 = iParam0;
	iVar4 = uParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1835011)[iParam0 /*74*/])->f_8));
				break;
			
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1347702)[iParam0 /*49*/])->f_3));
				break;
			
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			
			case 10:
				return -1;
			
			case 12:
				return -1;
			
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			
			case 8:
				return -1;
			
			case 7:
				return -1;
			
			case 6:
				return -1;
			
			default:
				return -1;
		}
	}
	if (iVar2 >= func_968())
	{
		iVar2 = func_968();
	}
	iVar5 = func_969(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_883(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_883(iVar6) == 0)
			{
				return func_970(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_883(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_883(iVar6) == 0)
			{
				return func_970(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == 0)
			{
				return func_970(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

float func_598(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 75f;
		
		case 9:
			return 25f;
		
		case 10:
			return 25f;
		
		case 22:
			return 55f;
	}
	return 12.5f;
}

int func_599(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_594(iParam0, 16384) && !func_971(iParam0, 1))
	{
		return 1;
	}
	if (!func_408(iParam1))
	{
		return 0;
	}
	iVar0 = func_972(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1914319->f_3[iParam0 /*446*/])->f_25))
	{
		iVar1 = VOLUME::_0x7FD78DFD0C5D7B9B((Global_1914319->f_3[iParam0 /*446*/])->f_25);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (iVar1 != iVar0)
			{
				VOLUME::_0x6D5F9E69BA1BE783((Global_1914319->f_3[iParam0 /*446*/])->f_25);
			}
		}
		func_973(iParam1, (Global_1914319->f_3[iParam0 /*446*/])->f_25, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B((Global_1914319->f_3[iParam0 /*446*/])->f_25, 1, 1);
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1914319->f_3[iParam0 /*446*/])->f_28))
	{
		iVar2 = VOLUME::_0x7FD78DFD0C5D7B9B((Global_1914319->f_3[iParam0 /*446*/])->f_28);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (iVar2 != iVar0)
			{
				VOLUME::_0x6D5F9E69BA1BE783((Global_1914319->f_3[iParam0 /*446*/])->f_28);
			}
		}
		func_973(iParam1, (Global_1914319->f_3[iParam0 /*446*/])->f_28, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B((Global_1914319->f_3[iParam0 /*446*/])->f_28, 0, 1);
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_21 = iParam1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_23 = iVar0;
	return 1;
}

void func_600(int iParam0)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 92:
			StringCopy(Global_1393529->f_288[2 /*8*/], "0507_U_M_M_VhtStationClerk_01", 64);
			StringCopy(Global_1393529->f_288[1 /*8*/], "0507_U_M_M_VhtStationClerk_01", 64);
			return;
		
		case 38:
			StringCopy(Global_1393529->f_288[2 /*8*/], "0078_U_M_M_BlWTrainStationWorker_01", 64);
			StringCopy(Global_1393529->f_288[1 /*8*/], "0078_U_M_M_BlWTrainStationWorker_01", 64);
			return;
		
		case 26:
			StringCopy(Global_1393529->f_288[2 /*8*/], "0442_U_M_M_StrFreightStationOwner_01", 64);
			StringCopy(Global_1393529->f_288[1 /*8*/], "0442_U_M_M_StrFreightStationOwner_01", 64);
			return;
		
		case 105:
			StringCopy(Global_1393529->f_288[2 /*8*/], "0406_U_M_M_RhdTrainStationWorker_01", 64);
			StringCopy(Global_1393529->f_288[1 /*8*/], "0406_U_M_M_RhdTrainStationWorker_01", 64);
			return;
		
		case 76:
			if (!func_939(29))
			{
				if (func_148(29) && func_583() <= func_974(29))
				{
					StringCopy(Global_1393529->f_288[2 /*8*/], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					StringCopy(Global_1393529->f_288[1 /*8*/], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					return;
				}
			}
			if (!func_939(3))
			{
				if (func_148(3) && func_583() <= func_974(3))
				{
					StringCopy(Global_1393529->f_288[2 /*8*/], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					StringCopy(Global_1393529->f_288[1 /*8*/], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					return;
				}
			}
			if (!func_939(25))
			{
				if (func_148(25) && func_583() <= func_974(25))
				{
					StringCopy(Global_1393529->f_288[2 /*8*/], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
					StringCopy(Global_1393529->f_288[1 /*8*/], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
					return;
				}
			}
			break;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(100, 200);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	if (iVar1 > 80)
	{
		StringCopy(Global_1393529->f_288[2 /*8*/], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
		StringCopy(Global_1393529->f_288[1 /*8*/], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
	}
	else if (iVar1 < 40)
	{
		StringCopy(Global_1393529->f_288[2 /*8*/], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
		StringCopy(Global_1393529->f_288[1 /*8*/], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
	}
	else
	{
		StringCopy(Global_1393529->f_288[2 /*8*/], "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
		StringCopy(Global_1393529->f_288[1 /*8*/], "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
	}
}

void func_601(int iParam0)
{
	if (iParam0 == 76)
	{
		StringCopy(Global_1393529->f_288[10 /*8*/], "1025_U_M_M_ValButcher_01", 64);
	}
	else if (iParam0 == 115)
	{
		StringCopy(Global_1393529->f_288[10 /*8*/], "1086_U_M_M_TumButcher_01", 64);
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
		{
			case 0:
			case 3:
				StringCopy(Global_1393529->f_288[10 /*8*/], "0842_S_M_M_UniButchers_01_WHITE_01", 64);
				break;
			
			case 1:
			case 4:
				StringCopy(Global_1393529->f_288[10 /*8*/], "0843_S_M_M_UniButchers_01_WHITE_02", 64);
				break;
			
			case 2:
			case 5:
				StringCopy(Global_1393529->f_288[10 /*8*/], "0844_S_M_M_UniButchers_01_WHITE_03", 64);
				break;
		}
	}
}

void func_602()
{
	StringCopy(Global_1393529->f_288[18 /*8*/], "1035_U_M_M_SDCUSTOMVENDOR_01", 64);
}

void func_603()
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(100, 200);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	if (iVar1 > 80)
	{
		StringCopy(Global_1393529->f_288[9 /*8*/], "0825_S_M_M_LiveryWorker_01_WHITE_01", 64);
	}
	else if (iVar1 < 40)
	{
		StringCopy(Global_1393529->f_288[9 /*8*/], "0826_S_M_M_LiveryWorker_01_WHITE_02", 64);
	}
	else
	{
		StringCopy(Global_1393529->f_288[9 /*8*/], "0827_S_M_M_LiveryWorker_01_WHITE_03", 64);
	}
}

void func_604()
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
	{
		case 0:
		case 3:
			StringCopy(Global_1393529->f_288[22 /*8*/], "0829_S_M_Y_NewspaperBoy_01_WHITE_01", 64);
			break;
		
		case 1:
		case 4:
			StringCopy(Global_1393529->f_288[22 /*8*/], "0830_S_M_Y_NewspaperBoy_01_WHITE_02", 64);
			break;
		
		case 2:
		case 5:
			StringCopy(Global_1393529->f_288[22 /*8*/], "0831_S_M_Y_NewspaperBoy_01_WHITE_03", 64);
			break;
	}
}

void func_605(int iParam0)
{
	if (!func_967(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 4:
		case 5:
		case 18:
		case 22:
		case 27:
		case 34:
		case 38:
		case 55:
		case 60:
		case 67:
		case 72:
		case 92:
			if (!func_608(iParam0, 2))
			{
				func_695(iParam0, 2);
			}
			break;
	}
}

void func_606(int iParam0, int iParam1)
{
	if (!func_589(iParam0))
	{
		return;
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = ((Global_1914319->f_3[iParam0 /*446*/])->f_7 - ((Global_1914319->f_3[iParam0 /*446*/])->f_7 && iParam1));
}

void func_607(int iParam0, int iParam1)
{
	if (!func_589(iParam0))
	{
		return;
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = ((Global_1914319->f_3[iParam0 /*446*/])->f_7 || iParam1);
}

bool func_608(int iParam0, int iParam1)
{
	if (!func_967(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

int func_609(int iParam0)
{
	int iVar0;
	
	if (!func_967(iParam0))
	{
		return 0;
	}
	if (iParam0 == 41 || iParam0 == 82)
	{
		return 0;
	}
	iVar0 = func_975(iParam0);
	if ((((((((((iVar0 == 10 || iVar0 == 4) || iVar0 == 17) || iVar0 == 31) || iVar0 == 18) || iVar0 == 19) || iVar0 == 22) || iVar0 == 12) || iVar0 == 13) || iVar0 == 14) || iVar0 == 32)
	{
		return 1;
	}
	return 0;
}

bool func_610(int iParam0, int iParam1)
{
	if (!func_967(iParam0))
	{
		return false;
	}
	return (Global_20709.f_2246[iParam0] && iParam1) != 0;
}

void func_611(int iParam0, int iParam1)
{
	if (!func_967(iParam0))
	{
	}
	else
	{
		Global_20709.f_2246[iParam0] = (Global_20709.f_2246[iParam0] || iParam1);
	}
}

void func_612(int iParam0, int iParam1)
{
	if (!func_967(iParam0))
	{
	}
	else
	{
		Global_20709.f_2246[iParam0] = (&Global_20709.f_2246[iParam0] - (Global_20709.f_2246[iParam0] && iParam1));
	}
}

void func_613(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_1914319->f_15922 = iParam0;
	}
}

void func_614(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_253)
	{
		func_976(iVar0, uParam0);
		iVar0++;
	}
	MISC::CLEAR_BIT(&(uParam0->f_254), 4);
}

void func_615(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_253)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((uParam0->f_9[iVar0 /*9*/])->f_1);
		iVar0++;
	}
	MISC::CLEAR_BIT(&(uParam0->f_254), 3);
}

void func_616(var uParam0)
{
	DATAFILE::_DATAFILE_UNLOAD(uParam0->f_2);
	MISC::CLEAR_BIT(&(uParam0->f_254), 1);
	MISC::CLEAR_BIT(&(uParam0->f_254), 2);
}

int func_617(int iParam0, int iParam1)
{
	if (iParam0 == 6)
	{
		if (iParam1 == 0)
		{
			if (!STREAMING::_IS_IMAP_ACTIVE(-1437554707))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_618(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_370(4, 0) - 1);
		
		case 1:
			return (func_370(3, 0) - 1);
		
		case 2:
			return (func_370(5, 0) - 1);
		
		case 3:
			return (func_370(10, 0) - 1);
		
		default:
			break;
	}
	return 0;
}

void func_619(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_977(iParam0);
	if (!DATAFILE::_0x4F9E3ED7617123AC(iVar0))
	{
		return;
	}
	uParam1->f_2 = DATAFILE::_0xD97D8D905F1562F2(iVar0);
	MISC::SET_BIT(&(uParam1->f_254), 1);
}

bool func_620(var uParam0)
{
	return DATAFILE::_0x603AC35FD4602C76(uParam0->f_2);
}

void func_621(int iParam0, int iParam1, int iParam2, var uParam3)
{
	struct<4> Var0;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	if (iParam2 < 0)
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 0, "Supplies");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 1, "Camp");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 2, "Camp(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 3, "UpgradeLevel");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 4, "UpgradeLevel(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 5, "Item");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 6, "Item(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 7, ":id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 8, ":rootPosition");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 9, ":rootRotation");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 10, ":model");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 11, ":offset");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 12, ":rotation");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 13, ":unlock");
	Var0 = uParam3->f_2;
	Var0.f_1 = 0;
	Var0.f_2 = 0;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar5, &Var0))
	{
		return;
	}
	Var0.f_1 = uVar5;
	Var0.f_2 = 1;
	iVar6 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
	if (iVar6 == 0)
	{
		return;
	}
	iVar10 = func_978(iParam0);
	iVar11 = 0;
	while (iVar11 < iVar6)
	{
		Var0.f_1 = uVar5;
		Var0.f_2 = 2;
		Var0.f_3 = iVar11;
		if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar7, &Var0))
		{
		}
		else
		{
			iVar12 = 0;
			Var0.f_1 = uVar7;
			Var0.f_2 = 7;
			if (!DATAFILE::_DATAFILE_GET_HASH(&iVar12, &Var0))
			{
			}
			else if (iVar12 != iVar10)
			{
			}
			else
			{
				Var0.f_1 = uVar7;
				Var0.f_2 = 8;
				if (!DATAFILE::_DATAFILE_GET_VECTOR(&(uParam3->f_3), &Var0))
				{
				}
				Var0.f_1 = uVar7;
				Var0.f_2 = 9;
				if (!DATAFILE::_DATAFILE_GET_VECTOR(&(uParam3->f_3.f_3), &Var0))
				{
				}
				Var0.f_1 = uVar7;
				Var0.f_2 = 3;
				iVar13 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
				if (iVar13 <= iParam2)
				{
					return;
				}
				Var0.f_1 = uVar7;
				Var0.f_2 = 4;
				Var0.f_3 = iParam2;
				if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar8, &Var0))
				{
					return;
				}
				Var0.f_1 = uVar8;
				Var0.f_2 = 5;
				iVar14 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
				if (iVar14 == 0)
				{
				}
				if (iVar14 > 27)
				{
				}
				iVar15 = 0;
				while (iVar15 < iVar14)
				{
					if (iVar15 >= 27)
					{
					}
					else
					{
						Var0.f_1 = uVar8;
						Var0.f_2 = 6;
						Var0.f_3 = iVar15;
						if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar9, &Var0))
						{
							(uParam3->f_9[iVar15 /*9*/])->f_1 = 0;
						}
						else
						{
							iVar16 = 0;
							Var0.f_1 = uVar9;
							Var0.f_2 = 10;
							if (!DATAFILE::_DATAFILE_GET_HASH(&iVar16, &Var0))
							{
							}
							else
							{
								(uParam3->f_9[iVar15 /*9*/])->f_1 = iVar16;
							}
							Var0.f_1 = uVar9;
							Var0.f_2 = 11;
							if (!DATAFILE::_DATAFILE_GET_VECTOR(&((uParam3->f_9[iVar15 /*9*/])->f_2), &Var0))
							{
							}
							Var0.f_1 = uVar9;
							Var0.f_2 = 12;
							if (!DATAFILE::_DATAFILE_GET_VECTOR(&((uParam3->f_9[iVar15 /*9*/])->f_5), &Var0))
							{
							}
							Var0.f_1 = uVar9;
							Var0.f_2 = 13;
							if (DATAFILE::_DATAFILE_GET_HASH(&((uParam3->f_9[iVar15 /*9*/])->f_8), &Var0))
							{
							}
							else
							{
								(uParam3->f_9[iVar15 /*9*/])->f_8 = 0;
							}
						}
						iVar15++;
					}
				}
				*uParam3 = iParam1;
				uParam3->f_1 = iParam2;
				uParam3->f_253 = iVar14;
				MISC::SET_BIT(&(uParam3->f_254), 2);
				MISC::SET_BIT(&(uParam3->f_254), 0);
			}
			else
			{
				iVar11++;
			}
		}
	}

void func_622(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_253)
	{
		if (MISC::IS_BIT_SET(*uParam1, iVar0))
		{
		}
		else if ((uParam0->f_9[iVar0 /*9*/])->f_1 == 0)
		{
		}
		else if ((uParam0->f_9[iVar0 /*9*/])->f_8 != 0)
		{
			if (!func_624((uParam0->f_9[iVar0 /*9*/])->f_8))
			{
			}
			else
			{
				STREAMING::REQUEST_MODEL((uParam0->f_9[iVar0 /*9*/])->f_1, false);
			}
			iVar0++;
			MISC::SET_BIT(&(uParam0->f_254), 3);
		}
	}

void func_623(var uParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;
	
	if (*uParam2)
	{
		return;
	}
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < uParam0->f_253)
	{
		if (MISC::IS_BIT_SET(*uParam1, iVar1))
		{
		}
		else if (MISC::IS_BIT_SET(uParam0->f_255, iVar1))
		{
		}
		else if ((uParam0->f_9[iVar1 /*9*/])->f_8 != 0)
		{
			if (!func_624((uParam0->f_9[iVar1 /*9*/])->f_8))
			{
			}
			else if ((uParam0->f_9[iVar1 /*9*/])->f_1 == 0)
			{
			}
			else if (!STREAMING::HAS_MODEL_LOADED((uParam0->f_9[iVar1 /*9*/])->f_1))
			{
				STREAMING::REQUEST_MODEL((uParam0->f_9[iVar1 /*9*/])->f_1, false);
				bVar0 = false;
			}
			else
			{
				func_979(iVar1, uParam0);
				*uParam2 = 1;
				if (iVar1 != (uParam0->f_253 - 1))
				{
					bVar0 = false;
				}
			}
			else
			{
				iVar1++;
			}
			if (bVar0)
			{
				MISC::SET_BIT(&(uParam0->f_254), 4);
				return;
			}
		}
	}

int func_624(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_40.f_4283.f_415.f_24)
	{
		if (iParam0 == &Global_40.f_4283.f_415.f_6[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_625()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<12> Var17;
	int iVar31;
	int iVar32;
	
	Var3 = { func_980(0, 1426626782, -1591664384, -1591664384, 0, 0) };
	if (func_981(&Var3, &iVar1, &iVar2, 0))
	{
		Var17.f_9 = -1591664384;
		iVar31 = 0;
		while (iVar31 < iVar2)
		{
			if (func_982(&Var17, iVar31, iVar1, iVar2))
			{
				if (func_878(Var17.f_4))
				{
					iVar0 = (iVar0 + Var17.f_11);
					if (func_983(Var17.f_4))
					{
						iVar0 = (iVar0 - 1);
					}
					if (iVar0 > 30)
					{
						iVar32 = (iVar0 - 30);
						func_984(Var17.f_4, 2, iVar32, -142743235);
						iVar0 = 30;
					}
				}
			}
			iVar31++;
		}
		func_985(iVar1);
	}
	return iVar0;
}

float func_626()
{
	return 5f;
}

float func_627(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_628()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_43799) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_43799, 0));
}

bool func_629(int iParam0)
{
	if (!func_408(iParam0))
	{
		return false;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_630(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!func_408(iParam0))
	{
		return;
	}
	if (!func_374(iParam0, 1))
	{
		return;
	}
	if (!func_374(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_629(iParam0)) && func_986(iParam0))
	{
		return;
	}
	func_789(iParam0, 1);
	func_790(iParam0);
	if (func_782(func_409(iParam0)))
	{
		iVar0 = func_783(iParam0);
		if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
		{
			return;
		}
		_NAMESPACE48::_0xBB68908CD11AEBDC(iVar0);
		_NAMESPACE48::_0xB65E7F733956CF25(iVar0);
		if (iParam2 && !_NAMESPACE48::_0xEB98B38CA60742D7(iVar0))
		{
			_NAMESPACE48::_0x631CD2D77FDC0316(iVar0);
		}
		iVar1 = _NAMESPACE48::_0x31C70A716CAE1FEE(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			_NAMESPACE48::_0x7B204F88F6C3D287(iVar0);
		}
		func_789(iParam0, 16);
	}
	if (func_374(iParam0, 128) && !bParam3)
	{
		func_375(iParam0, 0);
	}
}

void func_631(int iParam0, bool bParam1)
{
	if (!func_967(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_608(iParam0, 1024))
		{
			func_695(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_608(iParam0, 1024))
	{
		func_694(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	func_987(iParam0);
}

var func_632(int iParam0)
{
	return (Global_1914319->f_3[iParam0 /*446*/])->f_408;
}

void func_633(int iParam0)
{
	if (func_479(iParam0) && func_988())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

void func_634(int iParam0)
{
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = 0;
}

void func_635(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_589(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (bParam1)
	{
		MISC::SET_BIT(Global_1914319->f_15924[iVar1], iVar2);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1914319->f_15924[iVar1], iVar2);
	}
}

int func_636(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_147())
	{
		return 1;
	}
	if (iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_637()
{
	if (Global_16)
	{
		return 0;
	}
	if (!func_989())
	{
		return 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1934266->f_78.f_55))
	{
		return 0;
	}
	if (func_131(-1 ^ 9, 0, 1))
	{
		return 0;
	}
	return 1;
}

char* func_638(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	char* sVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899->f_162)))
	{
		sVar0 = func_990(Global_1894899->f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && uParam4)
	{
		sVar0 = func_992(func_991(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_993(iParam0) || func_671(45))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				
				case 29:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				
				case 30:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				
				case 31:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				
				case 32:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				
				case 120:
					sVar0 = "TOWN_ARMADILLO";
					break;
				
				case 121:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				
				case 124:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				
				case 123:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				
				case 125:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				
				case 33:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				
				case 34:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				
				case 35:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				
				case 36:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				
				case 114:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				
				case 116:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				
				case 115:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				
				case 37:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				
				case 38:
					sVar0 = "TOWN_BLACKWATER";
					break;
				
				case 39:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				
				case 40:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				
				case 50:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				
				case 42:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				
				case 43:
					sVar0 = "HIDEOUT_COLTER";
					break;
				
				case 41:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				
				case 45:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				
				case 48:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				
				case 54:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				
				case 56:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				
				case 49:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				
				case 57:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				
				case 59:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				
				case 60:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				
				case 61:
					sVar0 = "TOWN_MANICATO";
					break;
				
				case 126:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				
				case 127:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				
				case 62:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				
				case 64:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				
				case 65:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				
				case 66:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				
				case 67:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				
				case 68:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				
				case 69:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				
				case 70:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				
				case 72:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				
				case 74:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				
				case 75:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				
				case 76:
					sVar0 = "TOWN_VALENTINE";
					break;
				
				case 77:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				
				case 78:
					sVar0 = "TOWN_ANNESBURG";
					break;
				
				case 79:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				
				case 82:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				
				case 80:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				
				case 81:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				
				case 83:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				
				case 86:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				
				case 87:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				
				case 88:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				
				case 89:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				
				case 92:
					sVar0 = "TOWN_VANHORN";
					break;
				
				case 117:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				
				case 118:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				
				case 119:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				
				case 93:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				
				case 94:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				
				case 95:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				
				case 96:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				
				case 98:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				
				case 99:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				
				case 100:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				
				case 102:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				
				case 104:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				
				case 105:
					sVar0 = "TOWN_RHODES";
					break;
				
				case 108:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				
				case 110:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				
				case 111:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				
				case 112:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				
				case 128:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || uParam5)
	{
		switch (iParam2)
		{
			case -49694339:
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
			
			case -196675805:
				sVar0 = "WATER_AURORA_BASIN";
				*uParam6 = 1;
				break;
			
			case -1168459546:
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
			
			case 795414694:
				sVar0 = "WATER_BARROW_LAGOON";
				*uParam6 = 1;
				break;
			
			case -557290573:
				sVar0 = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
			
			case -1073312073:
				sVar0 = "WATER_CAIRN_LAKE";
				*uParam6 = 1;
				break;
			
			case -804804953:
				sVar0 = "WATER_CATTAIL_POND";
				*uParam6 = 1;
				break;
			
			case 370072007:
				sVar0 = "WATER_DAKOTA_RIVER";
				*uParam6 = 1;
				break;
			
			case 1245451421:
				sVar0 = "WATER_DEADBOOT_CREEK";
				*uParam6 = 1;
				break;
			
			case -105598602:
				sVar0 = "WATER_ELYSIAN_POOL";
				*uParam6 = 1;
				break;
			
			case -1356490953:
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
			
			case -1276586360:
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*uParam6 = 1;
				break;
			
			case 1755369577:
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
			
			case 1175365009:
				sVar0 = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
			
			case -1369817450:
				sVar0 = "WATER_LAKE_DON_JULIO";
				*uParam6 = 1;
				break;
			
			case 592454541:
				sVar0 = "WATER_LAKE_ISABELLA";
				*uParam6 = 1;
				break;
			
			case -2040708515:
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
			
			case -1410384421:
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*uParam6 = 1;
				break;
			
			case -1308233316:
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			
			case 301094150:
				sVar0 = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
			
			case -811730579:
				sVar0 = "WATER_MOONSTONE_POND";
				*uParam6 = 1;
				break;
			
			case -1817904483:
				sVar0 = "WATER_OCREAGHS_RUN";
				*uParam6 = 1;
				break;
			
			case -1300497193:
				sVar0 = "WATER_OWANJILA";
				*uParam6 = 1;
				break;
			
			case 2005774838:
				sVar0 = "WATER_RINGNECK_CREEK";
				*uParam6 = 1;
				break;
			
			case -247856387:
				sVar0 = "WATER_SEA_OF_CORONADO";
				*uParam6 = 1;
				break;
			
			case -823661292:
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*uParam6 = 1;
				break;
			
			case -218679770:
				sVar0 = "WATER_SPIDER_GORGE";
				*uParam6 = 1;
				break;
			
			case -1287619521:
				sVar0 = "WATER_STILLWATER_CREEK";
				*uParam6 = 1;
				break;
			
			case -1781130443:
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			
			case -261541730:
				sVar0 = "WATER_WHINYARD_STRAIT";
				*uParam6 = 1;
				break;
			
			case -1229593481:
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*uParam6 = 1;
				break;
			
			case -1504425495:
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*uParam6 = 1;
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

bool func_639(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_640(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		
		case 2:
			return 2;
		
		case 11:
			return 2;
		
		case 9:
			return 1;
		
		case 10:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 3;
		
		case 12:
			return 3;
		
		case 1:
			return 3;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 5;
		
		case 13:
			return 4;
		
		case 14:
			return 4;
		
		case 15:
			return 4;
		
		case 16:
			return 4;
		
		default:
			break;
	}
	return -1;
}

int func_641(int iParam0)
{
	if (!func_639(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0 /*12*/]);
	}
	return &(Global_1058888->f_42266[iParam0 /*12*/]);
}

int func_642(int iParam0)
{
	switch (iParam0)
	{
		case -196675805:
			return 0;
		
		case 795414694:
			return 0;
		
		case -557290573:
			return 2;
		
		case 650214731:
			return 1;
		
		case -1073312073:
			return 0;
		
		case 231313522:
			return 0;
		
		case -804804953:
			return 0;
		
		case 370072007:
			return 1;
		
		case 1245451421:
			return 1;
		
		case 469159176:
			return 1;
		
		case -105598602:
			return 0;
		
		case -1356490953:
			return 0;
		
		case -1276586360:
			return 1;
		
		case 1755369577:
			return 0;
		
		case 1175365009:
			return 0;
		
		case -1229593481:
			return 1;
		
		case -1369817450:
			return 0;
		
		case 592454541:
			return 0;
		
		case -2040708515:
			return 1;
		
		case -1410384421:
			return 1;
		
		case -1308233316:
			return 1;
		
		case 301094150:
			return 0;
		
		case -811730579:
			return 0;
		
		case -1817904483:
			return 0;
		
		case -1300497193:
			return 0;
		
		case 2005774838:
			return 1;
		
		case -1504425495:
			return 1;
		
		case -247856387:
			return 1;
		
		case -823661292:
			return 0;
		
		case -218679770:
			return 1;
		
		case -1287619521:
			return 1;
		
		case -1781130443:
			return 1;
		
		case -261541730:
			return 1;
		
		default:
			break;
	}
	return -1;
}

char* func_643(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		
		case 1:
			return "WATER_TYPE_RIVER";
		
		case 2:
			return "WATER_TYPE_SWAMP";
		
		default:
			break;
	}
	return "";
}

bool func_644(int iParam0, int iParam1)
{
	if (!func_364(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

bool func_645(int iParam0, int iParam1)
{
	if (!func_639(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return ((Global_40.f_358[iParam0 /*12*/])->f_5 && iParam1) != 0;
	}
	return ((Global_1058888->f_42266[iParam0 /*12*/])->f_5 && iParam1) != 0;
}

bool func_646(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_647(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_648(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

float func_649(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

bool func_650(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_651(int iParam0)
{
	int iVar0;
	
	if (func_993(iParam0))
	{
		if (!func_671(45))
		{
			return 0;
		}
	}
	iVar0 = func_376(iParam0);
	if (func_758())
	{
		if (!func_269(((*Global_1835011)[3 /*74*/])->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return 1;
}

void func_652(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_653(int iParam0, int iParam1)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_654(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

bool func_655(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_656(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_657()
{
	return Global_1310750->f_16037;
}

bool func_658(int iParam0, int iParam1)
{
	if (!func_655(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

int func_659(int iParam0)
{
	if (!func_655(iParam0))
	{
		return 0;
	}
	if (func_994(64) && func_995(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_660(int iParam0)
{
	if (!func_655(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_661(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_655(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_996(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

bool func_662(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_663(int iParam0)
{
	int iVar0;
	
	if (&Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_664(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return 0;
	}
	return 1;
}

bool func_665(int iParam0, int iParam1)
{
	return (func_664(iParam0) && (((*Global_1898346)[iParam0 /*6*/])->f_1 && iParam1) != 0);
}

int func_666(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			func_799(Global_40.f_4283.f_6[iVar0 /*5*/], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_667(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 && !func_209(iParam0))
	{
		return;
	}
	iVar0 = func_574(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

int func_668(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_889(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_997(iParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_998(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_999(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_507(bParam2), iParam0, 0);
	return iVar2;
}

void func_669(int iParam0, int iParam1)
{
	Global_1357549->f_1672 = iParam0;
	Global_1357549->f_1673 = iParam1;
}

Vector3 func_670(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -135.483f, -34.0573f, 95.0734f;
		
		case 2:
			return 651.8384f, -1257.425f, 42.7455f;
		
		case 3:
			return 1889.356f, -1866.249f, 47.2413f;
	}
	return 0f, 0f, 0f;
}

int func_671(int iParam0)
{
	if (!func_1000(iParam0))
	{
		return 0;
	}
	return func_1001(iParam0);
}

void func_672(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
	if (func_209(iParam0->f_6))
	{
		func_210(&(iParam0->f_6), 1, 1);
	}
	if (func_209(iParam0->f_1))
	{
		func_210(&(iParam0->f_1), 1, 1);
	}
}

void func_673(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_373(iParam1))
	{
		if (func_1002(Global_1934051->f_33))
		{
			iVar0 = func_1003(iParam1);
			if (iVar0 != 0)
			{
				MAP::_0x662D364ABF16DE2F(iParam0, iVar0);
			}
		}
	}
}

void func_674(int* iParam0, var uParam1)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
	
	if (func_211(func_1004()) || func_1005(1) == 0)
	{
		return;
	}
	sVar0 = "script@ambient@shop@CATALOG_PLAYER";
	sVar1 = "PBL_ENTER";
	sVar2 = "PBL_FLIP_L1";
	sVar3 = "PBL_FLIP_R1";
	if (MISC::IS_BIT_SET(Global_1357549->f_1893, 4))
	{
		sVar4 = "PBL_EXIT_SECTION";
	}
	else
	{
		sVar4 = "PBL_EXIT_INDEX";
	}
	sVar5 = "ledger_ct";
	sVar6 = func_1006();
	sVar7 = func_1007(iParam0->f_35.f_491.f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_864))
	{
		STREAMING::REQUEST_MODEL(iParam0->f_33, false);
		if (STREAMING::HAS_MODEL_LOADED(iParam0->f_33))
		{
			iParam0->f_864 = OBJECT::CREATE_OBJECT(iParam0->f_33, func_1004(), true, true, false, false, true);
			ENTITY::SET_ENTITY_COORDS(iParam0->f_864, func_1004(), true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(iParam0->f_864, func_1008(), 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_864, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_33);
		}
	}
	else if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sVar5) == 0)
	{
		HUD::REGISTER_NAMED_RENDERTARGET(sVar5, false);
		HUD::LINK_NAMED_RENDERTARGET(iParam0->f_33);
		if (HUD::IS_NAMED_RENDERTARGET_LINKED(iParam0->f_33))
		{
		}
		else
		{
			if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sVar5))
			{
				HUD::RELEASE_NAMED_RENDERTARGET(sVar5);
			}
			return;
		}
		iVar8 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID(sVar5);
		HUD::SET_TEXT_RENDER_ID(iVar8);
	}
	if (iParam0->f_20 != 0)
	{
		if (func_330(Global_35, 0))
		{
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
			PED::SET_PED_RESET_FLAG(Global_35, 258, true);
		}
		func_444(0);
	}
	if (iParam0->f_20 >= 4)
	{
		PAD::_0x2804658EB7D8A50B(4, 1492915442);
	}
	func_1009(iParam0, uParam1);
	func_1010(&(iParam0->f_35), iParam0->f_20);
	switch (iParam0->f_20)
	{
		case 0:
			if (func_209(iParam0->f_6))
			{
				if (func_222(iParam0->f_6, 1))
				{
					if (func_768())
					{
						INTERIOR::FORCE_ROOM_FOR_ENTITY(iParam0->f_864, INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_35));
					}
					func_145(8192);
					func_145(67108864);
					iParam0->f_858 = 0;
					func_672(iParam0);
					func_1011(0);
					if (ANIMSCENE::_0x25557E324489393C(iParam0->f_18))
					{
						ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_18, 0);
					}
					iParam0->f_18 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, sVar1, false, true);
					ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_18);
					func_1012(&(iParam0->f_35), 0);
					Global_1357549->f_1894 = 0;
					func_1013(&(iParam0->f_35.f_2), func_146());
					func_1014(&(iParam0->f_35));
					func_1015();
					MAP::DISPLAY_RADAR(false);
					WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
					MISC::SET_BIT(&(Global_1357549->f_1893), 0);
					func_1016(iParam0, 2);
				}
			}
			else if (func_12(8192) == 0)
			{
				if ((func_146() == 1 || func_146() == 2) || func_146() == 3)
				{
					if (func_1005(0))
					{
						iParam0->f_6 = func_678("LDGR_TITHE", -473983589, func_676(func_281()), func_677(), 3, 1, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
						func_215(iParam0->f_6, 736625733, 0, 1);
					}
				}
			}
			break;
		
		case 2:
			if ((((ANIMSCENE::_0x477122B8D05E7968(iParam0->f_18, 1, 0) && ANIMSCENE::_0x95531A4A20CCE7BC(iParam0->f_18, 0)) && func_1017(&(iParam0->f_35))) && func_1018()) && func_1011(1))
			{
				iParam0->f_5 = func_154();
				func_848(&(iParam0->f_35));
				func_1019(iParam0->f_35.f_2.f_1[0 /*237*/], iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/], &(iParam0->f_35.f_531));
				if (func_1020(*(iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/]), 0, &(iParam0->f_35.f_2), &(iParam0->f_35.f_491)) && iParam0->f_35.f_491.f_1 != -1)
				{
					func_1012(&(iParam0->f_35), 1);
					if (iParam0->f_35.f_491.f_5)
					{
						func_1021(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
					}
					else
					{
						func_1022(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
					}
				}
				else
				{
					func_1012(&(iParam0->f_35), 0);
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_18, "player", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_18, "CATALOG", iParam0->f_864, 0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam0->f_18, func_1023(iParam0->f_864), func_1008(), 2);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_18, sVar1);
				ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam0->f_18, "player", &(iParam0->f_21), false, 0, 2);
				func_1016(iParam0, 1);
			}
			break;
		
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 713668775, 1) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Global_35, -208384378, 1) != 1)
			{
				func_1016(iParam0, 3);
			}
			break;
		
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_18, sVar1))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_18, sVar1, true);
				func_1016(iParam0, 4);
			}
			break;
		
		case 4:
			if (func_330(Global_35, 0))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, iParam0->f_18, "player", sVar1, 1069379748, 1, 128, 20000, -1082130432);
			}
			func_1024(&(iParam0->f_35));
			if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				iParam0->f_3 = 1;
				func_1025(&(iParam0->f_816), func_146(), 0, 1065353216);
			}
			else
			{
				iParam0->f_3 = 0;
			}
			func_1016(iParam0, 5);
			func_187(&(iParam0->f_813));
			break;
		
		case 5:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1369124074, 1) != 1)
			{
				if (ANIMSCENE::_0x3FBC3F51BF12DFBF(iParam0->f_18) > 0.36f)
				{
					if (!iParam0->f_3)
					{
						func_1025(&(iParam0->f_816), func_146(), 0, 1065353216);
					}
					func_1026(&(iParam0->f_35), 0);
					MISC::SET_BIT(&(Global_1357549->f_1893), 1);
					func_1016(iParam0, 6);
					return;
				}
			}
			if (func_477(&(iParam0->f_813)) > 6000)
			{
				func_767(iParam0);
				func_1016(iParam0, 7);
			}
			break;
		
		case 6:
			func_1027(&(iParam0->f_816));
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-2019190071, "LDGR_TITHE", 1, 0, 0, 0);
			if (func_1028(iParam0))
			{
				return;
			}
			if (iParam0->f_35.f_772 && func_209(iParam0->f_35.f_1))
			{
				if (!func_1029(iParam0))
				{
					func_1031(&(iParam0->f_816), func_1030(func_146(), 1), 1);
				}
			}
			else if (func_1029(iParam0))
			{
				func_1031(&(iParam0->f_816), func_1030(func_146(), 0), 1);
			}
			func_1032(iParam0);
			if (func_222(iParam0->f_7, 1) && Global_1357549->f_1894 < 3)
			{
				func_1012(&(iParam0->f_35), 0);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_18, sVar2);
				func_1016(iParam0, 9);
			}
			if (func_222(iParam0->f_8, 1) && Global_1357549->f_1894 > 0)
			{
				func_1012(&(iParam0->f_35), 0);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_18, sVar3);
				func_1016(iParam0, 11);
			}
			if (func_222(iParam0->f_35.f_1, 1))
			{
				func_1033(&(iParam0->f_35), 1);
			}
			if (func_222(iParam0->f_9, 1))
			{
				func_1012(&(iParam0->f_35), 0);
				func_180(&(iParam0->f_810), 0);
				MISC::CLEAR_BIT(&(Global_1357549->f_1893), 1);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_18, sVar4);
				func_1016(iParam0, 8);
			}
			break;
		
		case 9:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_18, sVar2))
			{
				Global_1357549->f_1894++;
				func_1019(iParam0->f_35.f_2.f_1[1 /*237*/], iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/], &(iParam0->f_35.f_531));
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_18, sVar2, true);
				MISC::SET_BIT(&(Global_1357549->f_1893), 2);
				MISC::SET_BIT(&(Global_1357549->f_1893), 4);
				MISC::CLEAR_BIT(&(Global_1357549->f_1893), 1);
				func_1016(iParam0, 10);
			}
			break;
		
		case 11:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_18, sVar3))
			{
				Global_1357549->f_1894 = (Global_1357549->f_1894 - 1);
				func_1019(iParam0->f_35.f_2.f_1[0 /*237*/], iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/], &(iParam0->f_35.f_531));
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_18, sVar3, true);
				MISC::SET_BIT(&(Global_1357549->f_1893), 2);
				MISC::SET_BIT(&(Global_1357549->f_1893), 4);
				MISC::CLEAR_BIT(&(Global_1357549->f_1893), 1);
				func_1016(iParam0, 12);
			}
			break;
		
		case 10:
			if (ANIMSCENE::_0x3FBC3F51BF12DFBF(iParam0->f_18) > 0.09f)
			{
				func_1019(iParam0->f_35.f_2.f_1[0 /*237*/], iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/], &(iParam0->f_35.f_531));
				iParam0->f_35.f_491.f_2 = 1;
				if (func_1020(*(iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/]), iParam0->f_35.f_491.f_2, &(iParam0->f_35.f_2), &(iParam0->f_35.f_491)) && iParam0->f_35.f_491.f_1 != -1)
				{
					func_1012(&(iParam0->f_35), 1);
					if (iParam0->f_35.f_491.f_5)
					{
						func_1021(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
					}
					else
					{
						func_1022(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
					}
				}
				else
				{
					func_1012(&(iParam0->f_35), 0);
				}
				func_1016(iParam0, 13);
			}
			break;
		
		case 12:
			if (ANIMSCENE::_0x3FBC3F51BF12DFBF(iParam0->f_18) > 0.09f)
			{
				func_1019(iParam0->f_35.f_2.f_1[1 /*237*/], iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/], &(iParam0->f_35.f_531));
				iParam0->f_35.f_491.f_2 = 0;
				if (func_1020(*(iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/]), iParam0->f_35.f_491.f_2, &(iParam0->f_35.f_2), &(iParam0->f_35.f_491)) && iParam0->f_35.f_491.f_1 != -1)
				{
					func_1012(&(iParam0->f_35), 1);
					if (iParam0->f_35.f_491.f_5)
					{
						func_1021(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
					}
					else
					{
						func_1022(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
					}
				}
				else
				{
					func_1012(&(iParam0->f_35), 0);
				}
				func_1016(iParam0, 13);
			}
			break;
		
		case 13:
			if (ANIMSCENE::_0x3FBC3F51BF12DFBF(iParam0->f_18) > 0.15f)
			{
				MISC::CLEAR_BIT(&(Global_1357549->f_1893), 2);
				MISC::SET_BIT(&(Global_1357549->f_1893), 1);
				func_1016(iParam0, 6);
			}
			break;
		
		case 14:
			if (!func_173(&(iParam0->f_810)))
			{
				func_180(&(iParam0->f_810), 0);
			}
			if (func_477(&(iParam0->f_810)) > 2500)
			{
				if (ANIMSCENE::_0x25557E324489393C(iParam0->f_16))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_16);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar7))
				{
					iParam0->f_16 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar6, 0, sVar7, false, true);
					ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_16);
					iParam0->f_17 = iParam0->f_35.f_491.f_1;
					func_1016(iParam0, 15);
				}
			}
			break;
		
		case 15:
			if (ANIMSCENE::_0x477122B8D05E7968(iParam0->f_16, 1, 0) && ANIMSCENE::_0x95531A4A20CCE7BC(iParam0->f_16, 0))
			{
				if (ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam0->f_16, 0))
				{
					func_1034(&(iParam0->f_816));
					MISC::SET_BIT(&(Global_1357549->f_1893), 3);
					MISC::CLEAR_BIT(&(Global_1357549->f_1893), 1);
					func_1019(iParam0->f_35.f_2.f_1[iParam0->f_35.f_491.f_2 /*237*/], iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/], &(iParam0->f_35.f_531));
					if (func_1020(*(iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/]), iParam0->f_35.f_491.f_2, &(iParam0->f_35.f_2), &(iParam0->f_35.f_491)) && iParam0->f_35.f_491.f_1 != -1)
					{
						if (iParam0->f_35.f_491.f_5)
						{
							func_1021(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
						}
						else
						{
							func_1022(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
						}
					}
					func_1016(iParam0, 16);
				}
				else
				{
					ANIMSCENE::START_ANIM_SCENE(iParam0->f_16);
					func_1035();
				}
			}
			break;
		
		case 16:
			if (func_1036(iParam0, 0) && ANIMSCENE::_0xCDC5512A407CF08D(iParam0->f_16))
			{
				ANIMSCENE::ABORT_ANIM_SCENE(iParam0->f_18, false);
				MISC::CLEAR_BIT(&(Global_1357549->f_1893), 3);
				iParam0->f_17 = -1;
				func_181(&(iParam0->f_810));
				if (ANIMSCENE::_0x25557E324489393C(iParam0->f_16))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_16);
				}
				func_675(iParam0);
				func_767(iParam0);
				func_1016(iParam0, 7);
			}
			if (ANIMSCENE::_0x25557E324489393C(iParam0->f_16) && ANIMSCENE::_0xD8254CB2C586412B(iParam0->f_16, 0))
			{
				func_142(134217728);
				func_1012(&(iParam0->f_35), iParam0->f_35.f_491);
				if (iParam0->f_35.f_773 && iParam0->f_35.f_772)
				{
					func_1025(&(iParam0->f_816), func_146(), 1, 1065353216);
				}
				else
				{
					func_1025(&(iParam0->f_816), func_146(), 0, 1065353216);
				}
				MISC::CLEAR_BIT(&(Global_1357549->f_1893), 3);
				MISC::SET_BIT(&(Global_1357549->f_1893), 1);
				iParam0->f_17 = -1;
				func_181(&(iParam0->f_810));
				if (ANIMSCENE::_0x25557E324489393C(iParam0->f_16))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_16);
				}
				func_1016(iParam0, 6);
			}
			break;
		
		case 7:
			ENTITY::SET_ENTITY_COORDS(iParam0->f_864, func_1004(), true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(iParam0->f_864, func_1008(), 2, true);
			func_1016(iParam0, 0);
			break;
		
		case 8:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_18, sVar4))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_18, sVar4, true);
				func_1037(&(iParam0->f_35), 0);
				if (func_1038(64))
				{
					func_1039(64);
					func_1040(128);
				}
				func_1016(iParam0, 17);
			}
			break;
		
		case 17:
			if (func_174(&(iParam0->f_810)) > 0.75f)
			{
				func_181(&(iParam0->f_810));
				if (!iParam0->f_3)
				{
					func_1034(&(iParam0->f_816));
				}
			}
			if (ANIMSCENE::_0xCDC5512A407CF08D(iParam0->f_18))
			{
				func_675(iParam0);
				func_767(iParam0);
			}
			break;
	}
}

void func_675(int* iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { ENTITY::GET_ENTITY_ROTATION(iParam0->f_866, 2) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_866, true, false) };
	if (func_154() > 1000)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_11) == 0)
		{
			iParam0->f_11 = OBJECT::CREATE_OBJECT(-62869733, vVar3.x, vVar3.y, (vVar3.z + 0.03f), true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iParam0->f_11, vVar0.x, vVar0.y, (vVar0.z + 100f), 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_11, true);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_11))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_11));
	}
	if (func_154() > 10000)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_12) == 0)
		{
			iParam0->f_12 = OBJECT::CREATE_OBJECT(-62869733, vVar3.x, vVar3.y, (vVar3.z + 0.06f), true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iParam0->f_12, vVar0.x, vVar0.y, (vVar0.z + 90f), 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_12, true);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_12))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_12));
	}
}

Vector3 func_676(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -136.1656f, -33.9941f, 95.0068f;
		
		case 2:
			return 651.7131f, -1258.331f, 42.7264f;
		
		case 3:
			return 1890.439f, -1865.85f, 46.3426f;
		
		case 8:
			return -1634.48f, -1356.272f, 83.3963f;
	}
	return 0f, 0f, 0f;
}

float func_677()
{
	if (func_146() == 3)
	{
		return 0.95f;
	}
	return 1.35f;
}

int func_678(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (func_211(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_576(iVar0, 2))
		{
			if (func_1041(vParam2, ((*Global_1945938)[iVar0 /*18*/])->f_6, 0.01f, 1) && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_577(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, iParam15, bParam16);
		return iVar1;
	}
	return 0;
}

int func_679()
{
	if (((((Global_1357549->f_1672 == -774242862 || Global_1357549->f_1672 == -2100684454) || Global_1357549->f_1672 == -1167047117) || Global_1357549->f_1672 == 396444962) || Global_1357549->f_1672 == -498064062) || Global_1357549->f_1672 == 513694516)
	{
		return 1;
	}
	return 0;
}

int func_680(int iParam0)
{
	if (!func_889(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_681(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 && !func_209(iParam0))
	{
		return;
	}
	iVar0 = func_574(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, MISC::_CREATE_VAR_STRING(0, sParam2)));
}

char* func_682()
{
	switch (func_146())
	{
		case 1:
			return "HSO";
		
		case 2:
			return "CLP";
		
		case 3:
			return "SHB";
		
		default:
			break;
	}
	return "";
}

int func_683()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if ((Global_1327590->f_19547[iVar0 /*5*/])->f_1 >= 5)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_676(func_281()), func_1042(&(Global_1327590->f_19547[iVar0 /*5*/])), true) < 3.25f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_684()
{
	return Global_1327590->f_19745;
}

int func_685()
{
	switch (Global_1935630->f_44)
	{
		case -1415022764:
		case -1016714371:
		case -160924582:
		case 1030402560:
		case 1549070292:
			return 1;
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
	{
		if (WEAPON::_0x79407D33328286C6(Global_1935630->f_44))
		{
			return 1;
		}
	}
	return 0;
}

int func_686(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_576(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1945938)[iVar0 /*18*/])->f_11 && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_577(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

bool func_687(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 && !func_209(iParam0))
	{
		return false;
	}
	iVar0 = func_574(iParam0);
	return HUD::_UIPROMPT_IS_RELEASED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_688(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 && !func_209(iParam0))
	{
		return;
	}
	iVar0 = func_574(iParam0);
	func_957(iVar0, iParam1);
}

int func_689(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = joaat("weapon_unarmed");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_690()
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (iVar0 == 1549070292 || iVar0 == 1030402560)
	{
		return 1;
	}
	return 0;
}

void func_691(int* iParam0)
{
	func_675(iParam0);
	if (func_330(Global_35, 0))
	{
		if (PED::_0xD5FE956C70FF370B(Global_35))
		{
			PED::_0x7DE9692C6F64CFE8(Global_35, false, 0, 0);
		}
		TASK::_TASK_USE_SCENARIO_POINT(Global_35, iParam0->f_863, 0, 0, 1, 0, 0, 0, -1082130432, 0);
	}
}

Vector3 func_692(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -141.9612f, -23.6935f, 95.5885f;
		
		case 2:
			return 675.319f, -1251.379f, 43.0152f;
		
		case 3:
			return 1875.195f, -1859.172f, 41.8f;
		
		case 6:
			return 2366.094f, 1347.076f, 105.6301f;
		
		case 8:
			return -1646.82f, -1348.768f, 83.0685f;
	}
	return 0f, 0f, 0f;
}

int func_693(var uParam0)
{
	if (func_32() == 1)
	{
		if (func_211(func_692(func_281())) == 0)
		{
			if (func_684() == 0)
			{
				if (func_671(27))
				{
					if (func_164() == 0)
					{
						if (func_1043(uParam0))
						{
							return 1;
						}
					}
					else
					{
						func_1044("Camp Butcher: mission running", uParam0);
					}
				}
				else
				{
					func_1044("Camp Butcher: locked feature", uParam0);
				}
			}
			else
			{
				func_1044("Camp Butcher: walk n talk vig active", uParam0);
			}
		}
		else
		{
			func_1044("Camp Butcher: no donation point", uParam0);
		}
	}
	else
	{
		func_1044("Camp Butcher: not in running state", uParam0);
	}
	return 0;
}

void func_694(int iParam0, int iParam1)
{
	if (!func_967(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_695(int iParam0, int iParam1)
{
	if (!func_967(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

void func_696(var uParam0, int iParam1)
{
	if (MAP::DOES_BLIP_EXIST(*uParam0))
	{
		if (iParam1 == 0)
		{
			MAP::_0x662D364ABF16DE2F(*uParam0, 1191951699);
			MAP::_0x662D364ABF16DE2F(*uParam0, 37805592);
		}
		else
		{
			MAP::_0xB059D7BD3D78C16F(*uParam0, 1191951699);
			MAP::_0xB059D7BD3D78C16F(*uParam0, 37805592);
		}
	}
}

void func_697(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(iParam0->f_14))
	{
		MAP::REMOVE_BLIP(&(iParam0->f_14));
	}
	if (MAP::DOES_BLIP_EXIST(iParam0->f_15))
	{
		MAP::REMOVE_BLIP(&(iParam0->f_15));
	}
	if (MAP::DOES_BLIP_EXIST(iParam0->f_13))
	{
		MAP::REMOVE_BLIP(&(iParam0->f_13));
	}
	func_1045(538);
}

void func_698(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_1046(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

bool func_699(var uParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	
	if (!AUDIO::_0xD89504D9D7D5057D(&cParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_1047(cParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

int func_700(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return 0;
			}
			else
			{
				return 7;
			}
			break;
		
		case 0:
			if (bParam1)
			{
				return 7;
			}
			else
			{
				return 3;
			}
			break;
		
		case 2:
			if (bParam1)
			{
				return 7;
			}
			else if (func_38(262144))
			{
				return 6;
			}
			else
			{
				return 5;
			}
			break;
		
		case 4:
			if (bParam1)
			{
				return 7;
			}
			else
			{
				return 6;
			}
			break;
	}
	return -1;
}

void func_701(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10, var uParam11, var uParam12, bool bParam13)
{
	float fVar0[4];
	int iVar5;
	int iVar6;
	
	if (VOLUME::_0x92A78D0BEDB332A3(*uParam0))
	{
		return;
	}
	iVar5 = 0;
	iVar6 = 0;
	switch (iParam10)
	{
		case 0:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar5 = 1;
			break;
		
		case 1:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar5 = 1;
			break;
		
		case 2:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 1f;
			fVar0[3] = 1f;
			iVar5 = 1;
			break;
		
		case 3:
			fVar0[0] = 0.35f;
			fVar0[1] = 0f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar6 = 1;
			break;
		
		case 4:
			fVar0[0] = 0.45f;
			fVar0[1] = 0.2f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar6 = 1;
			break;
		
		case 5:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar6 = 1;
			break;
		
		case 6:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 1f;
			fVar0[3] = 1f;
			iVar6 = 1;
			break;
	}
	*uParam0 = VOLUME::_0xBBE768E3AE76E07C(uParam11, vParam1, vParam4, vParam7, iVar5, iVar6, &fVar0, uParam12, bParam13);
}

float func_702(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1.75f;
		
		case 4:
			return 4f;
		
		default:
			break;
	}
	return 0f;
}

float func_703(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_704(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_705(int iParam0, bool bParam1)
{
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1395601->f_5[iParam0 /*28*/])->f_23) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, (Global_1395601->f_5[iParam0 /*28*/])->f_23, true, 0))
	{
		return;
	}
	if (func_131(242, 1, 1))
	{
		bParam1 = false;
	}
	switch (iParam0)
	{
		case 8:
			func_1048(238680582, bParam1);
			break;
		
		case 9:
			func_1048(1555588463, bParam1);
			func_1048(1275780106, bParam1);
			func_1048(-833560428, bParam1);
			func_1048(-1601174253, bParam1);
			func_1048(-1295111793, bParam1);
			break;
		
		case 11:
			func_1048(-1482639045, bParam1);
			break;
		
		case 10:
			func_1048(254520182, bParam1);
			break;
		
		case 12:
			func_1048(1997650502, bParam1);
			break;
		
		case 13:
			func_1048(1335986638, bParam1);
			break;
		
		case 14:
			func_1048(1407130373, bParam1);
			break;
		
		case 16:
			func_1048(-1335647241, bParam1);
			break;
		
		case 15:
			func_1048(1731691513, !func_148(70));
			break;
	}
}

void func_706(int iParam0)
{
	if (!func_494(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0 /*2*/] = 0;
}

void func_707(int iParam0, int iParam1)
{
	if (!func_494(iParam0))
	{
		return;
	}
	(Global_1395601->f_5[iParam0 /*28*/])->f_20 = iParam1;
}

Vector3 func_708(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -107.0047f, -32.0697f, 94.9574f;
		
		case 2:
			return 703.7057f, -1228.871f, 44.2991f;
		
		case 3:
			return 1849.943f, -1837.089f, 42.2036f;
		
		case 5:
			return 2278.213f, -751.9426f, 41.0419f;
		
		case 6:
			return 2370.389f, 1340.97f, 105.1306f;
		
		case 7:
			return -2591.632f, 466.4086f, 145.2065f;
		
		case 8:
			if (!func_718())
			{
				return -1665.274f, -1330.899f, 82.9343f;
			}
			else
			{
				return -1643.673f, -1375.62f, 82.9683f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_709()
{
	int iVar0;
	
	if (!func_719())
	{
		return 0;
	}
	iVar0 = func_363(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (func_226(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_710(var uParam0)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = func_1050(func_1049(0));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return func_213(MISC::_CREATE_VAR_STRING(10, "CAMP_HITCH_MAIN_NAME", sVar0), 1940454787, uParam0->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
	}
	iVar1 = func_1051(0);
	sVar0 = HUD::_GET_LABEL_TEXT_BY_HASH(MISC::GET_HASH_KEY(func_1052(iVar1)));
	return func_213(MISC::_CREATE_VAR_STRING(10, "CAMP_HITCH_STABLE", sVar0), 1940454787, uParam0->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
}

int func_711(int iParam0)
{
	int iVar0;
	
	iVar0 = func_574(iParam0);
	if (iVar0 < 0 || iVar0 >= 48)
	{
		return 0;
	}
	return ((*Global_1945938)[iVar0 /*18*/])->f_3;
}

int func_712()
{
	if (!func_1053())
	{
		return 0;
	}
	if (func_1055(func_1054()))
	{
		return 0;
	}
	switch (func_727())
	{
		case 0:
			if (func_1056() != 5)
			{
				return 0;
			}
			break;
		
		case 1:
			return 0;
	}
	return 1;
}

int func_713(int iParam0)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_14;
}

void func_714(int iParam0, int iParam1, var uParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	sVar0 = func_1050(func_1049(iParam0));
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		iVar1 = func_1051(iParam0);
		sVar0 = HUD::_GET_LABEL_TEXT_BY_HASH(MISC::GET_HASH_KEY(func_1052(iVar1)));
	}
	iVar2 = func_1057(iParam0);
	if (iVar2 == -1 || iVar2 == 3)
	{
		return;
	}
	uParam2->f_12[iVar2] = func_213(MISC::_CREATE_VAR_STRING(10, "CAMP_HITCH_STABLE", sVar0), iParam1, uParam2->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
	HUD::_UIPROMPT_SET_GROUP(func_711(&(uParam2->f_12[iVar2])), 1842627646, 0);
}

int func_715()
{
	if (((func_713(0) != 0 || func_713(2) != 0) || func_713(3) != 0) || func_713(4) != 0)
	{
		return 1;
	}
	return 0;
}

int func_716(int iParam0)
{
	int iVar0;
	
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_722(iParam0))
	{
		return 0;
	}
	iVar0 = func_363(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_717(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	
	if (func_56() != -1)
	{
		uVar0 = &Global_36637.f_1444[*uParam0];
		MISC::SET_BIT(&uVar0, *uParam1);
		Global_36637.f_1444[*uParam0] = uVar0;
		return;
	}
	uVar1 = &Global_40.f_7832[*uParam0];
	MISC::SET_BIT(&uVar1, *uParam1);
	Global_40.f_7832[*uParam0] = uVar1;
}

bool func_718()
{
	return func_148(70);
}

int func_719()
{
	if (!func_730())
	{
		return 0;
	}
	if (func_716(0))
	{
		return 0;
	}
	if (func_1058(0))
	{
		return 0;
	}
	return 1;
}

void func_720(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	func_1059(iParam0);
	func_1059(iParam0);
	func_1060(iParam0, iParam1);
	func_1061(iParam0, iParam1);
	func_1062(iParam0, iParam1);
	iVar1 = func_363(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1063(iVar1);
		}
		if (iParam0 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			uVar2 = PLAYER::_0x227B06324234FB09(iVar0, iVar1);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar1)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar1)
			{
				PLAYER::_0x227B06324234FB09(iVar0, 0);
			}
		}
	}
	iVar3 = func_363(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1063(iVar3);
		}
		if (iParam1 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar3);
		}
		else if (iParam1 == 1)
		{
			uVar4 = PLAYER::_0x227B06324234FB09(iVar0, iVar3);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar3)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar3)
			{
				PLAYER::_0x227B06324234FB09(iVar0, 0);
			}
		}
	}
	func_733();
}

void func_721(int iParam0, int iParam1)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 = iParam1;
}

int func_722(int iParam0)
{
	iParam0 = func_736(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return 1;
	}
	return 0;
}

void func_723(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_722(iParam0))
	{
		return;
	}
	iVar0 = func_363(iParam0);
	func_1064(iParam0);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_0xAA9F048DCF69B6DC(iVar1))
	{
		if (!func_1065(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_1066(iParam0, 0);
	func_1067(iParam0);
}

void func_724(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::_0xDF631E4BCE1B1FC4(iParam0, 399422490, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -1163401704, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, 88372018, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -630346294, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -273475295, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -2142954459, 0, false);
}

void func_725(int iParam0)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1068(iParam0);
	func_1069(iParam0, 0);
	func_1070(iParam0, 0f);
}

void func_726(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(Global_40.f_1095.f_1[iParam0 /*436*/], "", 64);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_8 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_9 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_10 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_11 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_12 = -1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_13 = -15;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 = 0;
	func_1071(&Var0);
	func_1072(iParam0, Var0);
	func_1073(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_15));
	func_1074(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_298));
	func_1075(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_356));
	func_1076(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1077(iVar2, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iVar2 /*4*/]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1078(iVar3, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_407[iVar3 /*4*/]);
		iVar3++;
	}
	func_1079(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_420));
	func_1080(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_422));
	func_1081(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_425));
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_427 = { 0f, 0f, 0f };
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_430 = 0f;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_431 = -1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_432 = -1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_433 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_434 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_435 = 0;
	(*Global_1900383)[iParam0 /*45*/] = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_1 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_19 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_22 = 0f;
	((*Global_1900383)[iParam0 /*45*/])->f_23 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_24 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_26 = 0;
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_27 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_28 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_31 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_34 = 0f;
	((*Global_1900383)[iParam0 /*45*/])->f_35 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_36 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_37 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_38 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_41 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_42 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_43 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_44 = -1;
}

int func_727()
{
	return Global_40.f_1095.f_3054.f_1;
}

void func_728(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

float func_729(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 164.6267f;
		
		case 2:
			return 253.0561f;
		
		case 3:
			return 46.2992f;
		
		case 5:
			return 70.2681f;
		
		case 6:
			return 109.4813f;
		
		case 7:
			return 81.6192f;
		
		case 8:
			if (!func_718())
			{
				return 21.0508f;
			}
			else
			{
				return 329.6172f;
			}
			break;
	}
	return 0f;
}

int func_730()
{
	if (func_713(0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_731(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return 1;
		}
	}
	else if (func_1082(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

void func_732()
{
	int iVar0;
	struct<2> Var1;
	struct<6> Var3;
	
	iVar0 = func_363(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383->f_393))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1900383->f_393))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1900383->f_393, false, true);
		}
		OBJECT::DELETE_OBJECT(&(Global_1900383->f_393));
	}
	Var1 = { func_1083(0) };
	Var3 = { func_1084() };
	func_1085(iVar0, &Var1, &Var3, 0);
	PLAYER::_0xD2CB0FB0FDCB473D(PLAYER::GET_PLAYER_INDEX(), iVar0);
	func_728(0);
	func_321(0);
}

void func_733()
{
	if (func_722(0))
	{
		func_1086(0);
	}
	if (func_722(1))
	{
		func_1086(1);
	}
	if (func_722(5))
	{
		func_1086(5);
	}
	if (func_722(6))
	{
		func_1059(6);
	}
}

Vector3 func_734(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		return 0f, 0f, 0.6f;
	}
	else if (iParam0 == 2)
	{
		if (iParam1 == 0)
		{
			return -0.26f, -0.069f, 0.919f;
		}
		else
		{
			return 0.487f, -0.066f, 0.935f;
		}
	}
	else if (iParam0 == 3)
	{
		if (iParam1 == 0)
		{
			return 0.42f, 0f, 0.88f;
		}
		else if (iParam1 == 1)
		{
			return -0.42f, 0f, 0.88f;
		}
		else if (iParam1 == 2)
		{
			return 0f, 0f, 0.88f;
		}
	}
	return 0f, 0f, 0f;
}

int func_735(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<6> Var10;
	int iVar16;
	int iVar17;
	
	uParam1->f_10 = func_736(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_211(uParam1->f_6))
		{
		}
	}
	bVar0 = func_758();
	if (*uParam1)
	{
		if (bVar0 && !func_269(((*Global_1835011)[4 /*74*/])->f_1, 1))
		{
			if (func_1087(5))
			{
				func_723(5);
				func_726(5);
				func_728(0);
				func_321(0);
			}
		}
	}
	if (func_1088(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_269(((*Global_1835011)[37 /*74*/])->f_1, 1)) && !func_269(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_269(((*Global_1835011)[43 /*74*/])->f_1, 1)) && !func_269(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_363(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_722(iVar1))
	{
		bVar3 = true;
		if (func_716(iVar1))
		{
			bVar4 = true;
		}
		if (func_1058(iVar1))
		{
			iVar5 = 1;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (iVar5 && !uParam1->f_5)
			{
				func_1089(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_1087(0) && func_1087(1))
			{
				func_720(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_319())
			{
				func_320();
			}
			func_728(0);
			func_321(0);
			func_323(uParam1->f_6);
		}
	}
	if (!func_722(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_737(uParam1->f_10) == 0 || func_1051(uParam1->f_10) == 0) || func_713(uParam1->f_10) == 0)
			{
				func_1090(uParam1->f_10);
			}
			func_1091(uParam1->f_10);
			func_1092(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_363(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_722(iVar1))
	{
		bVar3 = true;
		if (func_716(iVar1))
		{
			bVar4 = true;
		}
		if (func_1058(iVar1))
		{
			iVar5 = 1;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_0x083D497D57B7400F(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!func_211(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (func_1093(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (iVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(iVar2))
			{
				*uParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_0xB48050D326E9A2F3(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_0xD2CB0FB0FDCB473D(iVar6, 0);
				}
			}
			Var8 = { func_1083(uParam1->f_10) };
			Var10 = { func_1084() };
			func_1085(iVar2, &Var8, &Var10, 0);
			PLAYER::_0xD2CB0FB0FDCB473D(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_1094(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_1095(uParam1->f_10);
		if (uParam1->f_2 && !func_211(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_0x0348469DAA17576C(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::_0x9587913B9E772D29(iVar2, 0);
		}
		*uParam0 = 2;
		return iVar2;
	}
	func_1096(uParam1->f_10);
	if (func_1094(uParam1->f_10))
	{
		iVar16 = func_1097(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	*uParam0 = 2;
	return iVar2;
}

int func_736(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_737(int iParam0)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_9;
}

int func_738(int iParam0)
{
	switch (iParam0)
	{
		case 1772321403:
			return 1;
	}
	return 0;
}

int func_739(int iParam0)
{
	switch (iParam0)
	{
		case -1230516683:
		case 594040097:
			return 1;
	}
	return 0;
}

int func_740(int iParam0)
{
	var uVar0;
	
	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		iParam0 = 1074477367;
	}
	uVar0 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iParam0, 7);
	return uVar0;
}

int func_741(int iParam0, int iParam1)
{
	float fVar0;
	
	if (iParam1 == -1)
	{
		return 0;
	}
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	fVar0 = func_1098(iParam1);
	if (fVar0 == 1E+09f)
	{
		return 0;
	}
	if (func_743(iParam0, iParam1) >= fVar0)
	{
		return 1;
	}
	return 0;
}

int func_742(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	
	if (iParam1 == -1)
	{
		return 0;
	}
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
		case 5:
		case 6:
		case 7:
		case 9:
			return 0;
	}
	iVar0 = func_363(iParam0);
	fVar1 = func_1099(iVar0);
	if (fVar1 >= 0.1f)
	{
		return 1;
	}
	return 0;
}

float func_743(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0f;
	}
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return &((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_2[iParam1]);
}

float func_744(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15f;
		
		case 4:
			return 4f;
		
		case 1:
			return 2f;
		
		case 2:
			return 1f;
		
		case 3:
			return 1f;
		
		case 5:
			return 100f;
		
		case 6:
			return 25f;
		
		case 7:
			return 5f;
		
		case 8:
			return 1f;
		
		case 9:
			return 15f;
		
		case 10:
			return 1f;
		
		case 11:
			return 15f;
		
		case 12:
			return 1f;
		
		case 13:
			return 15f;
		
		case 14:
			return 5f;
		
		case 15:
			return 1f;
		
		case 16:
			return 5f;
		
		case 17:
			return 15f;
		
		case 18:
			return 5f;
		
		case 19:
			return 1f;
		
		case 20:
			return 5f;
		
		case 21:
			return 15f;
		
		case 22:
			return 1f;
	}
	return 0f;
}

int func_745(int iParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;
	
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_1100(iParam1);
	if (!PED::_0x608BC6A6AACD5036(&Var1, iParam0, iVar0, 0))
	{
		return 0;
	}
	iVar5 = Var1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return 0;
	}
	return 1;
}

bool func_746()
{
	return Global_40.f_1095.f_3140;
}

float func_747(int iParam0)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1;
}

void func_748(int iParam0, float fParam1)
{
	char* sVar0;
	bool bVar1;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "HORSE_XP_TRUST_EARNED";
			break;
		
		case 1:
		case 2:
		case 3:
			return;
		
		case 4:
			sVar0 = "HORSE_XP_LEADING";
			break;
		
		case 11:
		case 12:
			sVar0 = "HORSE_XP_HITCH";
			break;
		
		case 5:
			return;
		
		case 6:
			sVar0 = "HORSE_XP_BREAK_HORSE";
			break;
		
		case 13:
		case 14:
		case 15:
			sVar0 = "HORSE_XP_FED";
			break;
		
		case 16:
			sVar0 = "HORSE_XP_TREAT";
			break;
		
		case 17:
		case 18:
		case 19:
			sVar0 = "HORSE_XP_GROOM";
			break;
		
		case 20:
			sVar0 = "HORSE_XP_OINTMENT";
			break;
		
		case 7:
		case 8:
			sVar0 = "HORSE_XP_PATTED";
			break;
		
		case 9:
		case 10:
			sVar0 = "HORSE_XP_CALM";
			break;
		
		case 21:
		case 22:
			sVar0 = "HORSE_XP_LIGHT_LOAD";
			break;
		
		default:
			return;
	}
	bVar1 = false;
	if (bVar1)
	{
		sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::FLOOR(fParam1));
	}
	else
	{
		sVar0 = MISC::_CREATE_VAR_STRING(2, "HORSE_XP_GENERIC_EARNED");
	}
	func_1101(sVar0, "ITEMTYPE_TEXTURES", 48560695, 0, 109029619, 0, 0, 0, 1);
}

void func_749(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_737(iParam0);
	iVar1 = func_317(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iVar1 >= iVar2)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 = ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 + fParam1);
	iVar3 = func_363(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar3) || PED::IS_PED_INJURED(iVar3))
	{
		return;
	}
	func_1102(iVar3, BUILTIN::FLOOR((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1));
	iVar4 = func_1103(iVar3);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iVar4;
	PED::_0xA69899995997A63B(iVar3, iVar4);
	func_1104(iVar4);
	if (iVar4 > iVar1)
	{
		func_1105(iParam0, iVar4);
		if (iParam0 == 6)
		{
			if (iVar4 == 1)
			{
				if (func_671(42))
				{
					func_207(19, 1);
				}
				else
				{
					func_207(20, 1);
				}
			}
		}
		if (iVar4 == 2)
		{
			func_207(21, 1);
		}
		else if (iVar4 == 3)
		{
			func_207(22, 1);
		}
		else if (iVar4 == 4)
		{
			func_207(23, 1);
		}
		if (iVar4 >= 2)
		{
			iVar5 = func_1106(iVar3);
			iVar6 = func_1107();
			func_1108(iVar6, iVar5 + 1);
			iVar7 = func_1109(iVar3);
			iVar8 = func_1110();
			func_1108(iVar8, iVar7 + 1);
		}
		COMPENDIUM::COMPENDIUM_HORSE_BONDING(iVar3, iVar4);
		func_654(func_1111(352983236), 1);
		if (iVar4 == iVar2)
		{
			func_654(func_1111(-2116919750), 1);
		}
		func_329(0, -1);
	}
}

void func_750(int iParam0, int iParam1, float fParam2)
{
	if (iParam1 == -1)
	{
		return;
	}
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_2[iParam1] = fParam2;
}

var func_751()
{
	return Global_1900383->f_393;
}

void func_752(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

void func_753()
{
	var uVar0;
	
	if (func_1112())
	{
		uVar0 = func_1113();
		MAP::REMOVE_BLIP(&uVar0);
		func_1114(0);
	}
}

int func_754()
{
	int iVar0;
	
	iVar0 = -1427204870;
	return iVar0;
}

void func_755(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam0);
		*uParam0 = 0;
	}
}

bool func_756(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_1115(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_757(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_758()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

bool func_759(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

Vector3 func_760()
{
	if (func_148(70))
	{
		return -1634.252f, -1358.577f, 83.9077f;
	}
	if (func_148(73))
	{
		return -1665.419f, -1346.258f, 84.11175f;
	}
	return -1641.1f, -1359.979f, 83.4932f;
}

void func_761(int iParam0, var uParam1)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_762()
{
	float fVar0;
	
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_763(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 112;
		
		case 2:
			return 113;
		
		case 3:
			return 2;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		case 6:
			return 5;
		
		case 8:
			return 7;
		
		case 9:
			return 8;
		
		case 10:
			return 9;
		
		case 11:
			return 10;
		
		case 12:
			return 11;
		
		case 15:
			return 12;
		
		case 16:
			return 13;
		
		case 17:
			return 15;
		
		case 19:
			return 17;
		
		case 20:
			return 18;
		
		case 21:
			return 19;
		
		case 22:
			return 20;
		
		case 23:
			return 21;
		
		case 25:
			return 23;
		
		case 26:
			return 25;
		
		case 27:
			return 26;
		
		case 28:
			return 62;
		
		case 29:
			return 27;
		
		case 49:
			return 28;
		
		case 30:
			return 29;
		
		case 31:
			return 30;
		
		case 32:
			return 31;
		
		case 120:
			return 32;
		
		case 124:
			return 33;
		
		case 125:
			return 34;
		
		case 33:
			return 35;
		
		case 83:
			return 40;
		
		case 35:
			return 42;
		
		case 36:
			return 43;
		
		case 89:
			return 44;
		
		case 115:
			return 46;
		
		case 37:
			return 47;
		
		case 38:
			return 48;
		
		case 39:
			return 49;
		
		case 40:
			return 50;
		
		case 50:
			return 51;
		
		case 42:
			return 52;
		
		case 52:
			return 53;
		
		case 43:
			return 54;
		
		case 45:
			return 57;
		
		case 48:
			return 61;
		
		case 56:
			return 63;
		
		case 57:
			return 64;
		
		case 58:
			return 65;
		
		case 59:
			return 66;
		
		case 60:
			return 67;
		
		case 61:
			return 68;
		
		case 126:
			return 69;
		
		case 127:
			return 70;
		
		case 62:
			return 71;
		
		case 77:
			return 72;
		
		case 64:
			return 73;
		
		case 65:
			return 74;
		
		case 67:
			return 76;
		
		case 68:
			return 78;
		
		case 69:
			return 79;
		
		case 70:
			return 80;
		
		case 71:
			return 81;
		
		case 72:
			return 82;
		
		case 75:
			return 84;
		
		case 76:
			return 85;
		
		case 117:
			return 86;
		
		case 78:
			return 87;
		
		case 79:
			return 88;
		
		case 80:
			return 90;
		
		case 81:
			return 91;
		
		case 82:
			return 92;
		
		case 87:
			return 96;
		
		case 88:
			return 97;
		
		case 91:
			return 98;
		
		case 92:
			return 99;
		
		case 93:
			return 100;
		
		case 94:
			return 101;
		
		case 95:
			return 102;
		
		case 96:
			return 103;
		
		case 97:
			return 104;
		
		case 98:
			return 105;
		
		case 99:
			return 106;
		
		case 100:
			return 107;
		
		case 104:
			return 114;
		
		case 105:
			return 115;
		
		case 107:
			return 118;
		
		case 109:
			return 119;
		
		case 110:
			return 120;
		
		case 111:
			return 121;
		
		case 112:
			return 122;
		
		case 128:
			return 123;
		
		default:
			break;
	}
	return 0;
}

void func_764(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_765(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_1116(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_1117(iVar0);
	if (iVar0 == Global_1934765->f_338)
	{
		if (Global_1934765->f_337 == 0)
		{
			func_1118();
		}
		else
		{
			func_1119(bParam1, fParam2);
		}
	}
	else
	{
		uVar1 = Global_1934765->f_338;
		Global_1934765->f_338 = func_1120();
	}
}

void func_766()
{
	if (Global_1934765->f_286 > 300)
	{
		Global_1934765->f_286 = 300;
	}
	STREAMING::_0x2F9AC754FE179D58(func_793());
}

void func_767(int* iParam0)
{
	if (MISC::IS_BIT_SET(Global_1357549->f_1893, 0))
	{
		if (iParam0->f_3)
		{
			func_1034(&(iParam0->f_816));
		}
		MAP::DISPLAY_RADAR(true);
		Global_1357549->f_1894 = 0;
		ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_18, 0);
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_18);
		func_142(8192);
		func_142(67108864);
		func_1121();
		func_1122(&(iParam0->f_35));
		func_1123(&(iParam0->f_35));
		func_1124();
		func_1011(2);
		if (func_1038(128))
		{
			func_1039(128);
		}
		ENTITY::SET_ENTITY_COORDS(iParam0->f_864, func_1004(), true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iParam0->f_864, func_1008(), 2, true);
		MISC::CLEAR_BIT(&(Global_1357549->f_1893), 0);
		MISC::CLEAR_BIT(&(Global_1357549->f_1893), 4);
		func_1016(iParam0, 0);
	}
}

int func_768()
{
	if (func_146() == 3)
	{
		return 1;
	}
	return 0;
}

void func_769(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 13;
			*uParam2 = 7;
			*uParam3 = 8;
			*uParam4 = 9;
			break;
		
		case 1:
			*uParam1 = 14;
			*uParam2 = 10;
			*uParam3 = 11;
			*uParam4 = 12;
			break;
		
		case 2:
			*uParam1 = 14;
			*uParam2 = 13;
			*uParam3 = 14;
			*uParam4 = 15;
			break;
		
		case 3:
			*uParam1 = 7;
			*uParam2 = 16;
			*uParam3 = 17;
			*uParam4 = 18;
			break;
		
		case 4:
			*uParam1 = 7;
			*uParam2 = 19;
			*uParam3 = 20;
			*uParam4 = 21;
			break;
		
		case 5:
			*uParam1 = 7;
			*uParam2 = 22;
			*uParam3 = 23;
			*uParam4 = 24;
			break;
		
		case 6:
			*uParam1 = 7;
			*uParam2 = 25;
			*uParam3 = 26;
			*uParam4 = 27;
			break;
		
		case 7:
			*uParam1 = 19;
			*uParam2 = 28;
			*uParam3 = 29;
			*uParam4 = 30;
			break;
		
		case 8:
			*uParam1 = 19;
			*uParam2 = 31;
			*uParam3 = 32;
			*uParam4 = 33;
			break;
		
		case 9:
			*uParam1 = 21;
			*uParam2 = 34;
			*uParam3 = 35;
			*uParam4 = 36;
			break;
		
		case 10:
			*uParam1 = 17;
			*uParam2 = 37;
			*uParam3 = 38;
			*uParam4 = 39;
			break;
		
		case 11:
			*uParam1 = 17;
			*uParam2 = 40;
			*uParam3 = 41;
			*uParam4 = 42;
			break;
		
		case 12:
			*uParam1 = 2;
			*uParam2 = 43;
			*uParam3 = 44;
			*uParam4 = 45;
			break;
		
		case 13:
			*uParam1 = 3;
			*uParam2 = 46;
			*uParam3 = 47;
			*uParam4 = 48;
			break;
		
		case 14:
			*uParam1 = 8;
			*uParam2 = 49;
			*uParam3 = 50;
			*uParam4 = 51;
			break;
		
		case 15:
			*uParam1 = 10;
			*uParam2 = 82;
			*uParam3 = 83;
			*uParam4 = 84;
			break;
		
		case 16:
			*uParam1 = 22;
			*uParam2 = 88;
			*uParam3 = 89;
			*uParam4 = 90;
			break;
		
		case 17:
			*uParam1 = 5;
			*uParam2 = 64;
			*uParam3 = 65;
			*uParam4 = 66;
			break;
		
		case 18:
			*uParam1 = 5;
			*uParam2 = 67;
			*uParam3 = 68;
			*uParam4 = 69;
			break;
		
		case 19:
			*uParam1 = 9;
			*uParam2 = 52;
			*uParam3 = 53;
			*uParam4 = 54;
			break;
		
		case 20:
			*uParam1 = 9;
			*uParam2 = 55;
			*uParam3 = 56;
			*uParam4 = 57;
			break;
		
		case 21:
			*uParam1 = 4;
			*uParam2 = 91;
			*uParam3 = 92;
			*uParam4 = 93;
			break;
		
		case 22:
			*uParam1 = 15;
			*uParam2 = 58;
			*uParam3 = 59;
			*uParam4 = 60;
			break;
		
		case 23:
			*uParam1 = 15;
			*uParam2 = 61;
			*uParam3 = 62;
			*uParam4 = 63;
			break;
		
		case 24:
			*uParam1 = 23;
			*uParam2 = 94;
			*uParam3 = 95;
			*uParam4 = 96;
			break;
		
		case 25:
			*uParam1 = 16;
			*uParam2 = 85;
			*uParam3 = 86;
			*uParam4 = 87;
			break;
		
		case 27:
			*uParam1 = 20;
			*uParam2 = 70;
			*uParam3 = 71;
			*uParam4 = 72;
			break;
		
		case 28:
			*uParam1 = 0;
			*uParam2 = 73;
			*uParam3 = 74;
			*uParam4 = 75;
			break;
		
		case 29:
			*uParam1 = 11;
			*uParam2 = 79;
			*uParam3 = 80;
			*uParam4 = 81;
			break;
		
		case 30:
			*uParam1 = 6;
			*uParam2 = 76;
			*uParam3 = 77;
			*uParam4 = 78;
			break;
	}
}

void func_770(var uParam0)
{
	func_181(&(uParam0->f_101));
	if (func_182(17))
	{
		func_186(17, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_177(17), false);
	}
}

int func_771()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_772(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!func_495(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_IN_GROUP(iVar0))
	{
		return;
	}
	if (PED::GET_PED_GROUP_INDEX(iVar0) != PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	if (PED::_0x917760CFE7A0E0F1(iVar0))
	{
		COMPANION::_0xD747979C053EFA7A(func_771());
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 279, false);
	PED::REMOVE_PED_FROM_GROUP(iVar0);
	func_1125(iParam0, 0, 0);
}

int func_773(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (bParam0)
	{
		return func_1126(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_771(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_771(), iVar3);
		if (func_1127(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_774()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = func_1128(iVar0);
		iVar2 = func_1128(iVar0 + 1);
		if (!func_495(iVar1))
		{
			if (func_495(iVar2))
			{
				(*Global_1359489)[iVar0] = iVar2;
				(*Global_1359489)[iVar0 + 1] = -1;
			}
		}
		iVar0++;
	}
}

void func_775(int iParam0)
{
	(Global_1327590->f_11465[iParam0 /*10*/])->f_5 = func_1129();
}

void func_776(int iParam0)
{
	Global_1327590->f_19692[iParam0] = func_1129();
}

void func_777(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	(Global_1327590->f_19622[iParam0 /*14*/])->f_9 = func_1129();
	if (bParam1)
	{
		(Global_1327590->f_19622[iParam0 /*14*/])->f_10 = (Global_1327590->f_19622[iParam0 /*14*/])->f_11;
	}
	if (iParam2 > 0)
	{
		func_566(&((Global_1327590->f_19622[iParam0 /*14*/])->f_9), 0, iParam2, 0, 0, 0, 0, 0);
	}
}

void func_778()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0 /*5*/] != -1)
		{
			func_588(iVar0);
		}
		iVar0++;
	}
}

bool func_779(int iParam0)
{
	return func_528(iParam0, 32, 1);
}

void func_780(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(func_177(iParam0)))
	{
		func_416(iParam0, 4, 1);
		func_416(iParam0, 17, 1);
		func_416(iParam0, 1, 1);
		func_416(iParam0, 2, 1);
		return;
	}
	if (!func_495(iParam0))
	{
		return;
	}
	if (func_779(iParam0) && !bParam2)
	{
		return;
	}
	if (func_343(iParam0) && !bParam2)
	{
		return;
	}
	if (iParam0 == Global_1357549->f_1497 && !bParam2)
	{
		return;
	}
	if (((!bParam3 && ENTITY::DOES_ENTITY_EXIST(func_177(iParam0))) && func_926(iParam0) < 5000f) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	func_416(iParam0, 4, 1);
	func_416(iParam0, 17, 1);
	func_416(iParam0, 1, 1);
	func_416(iParam0, 2, 1);
	func_1130(iParam0, func_177(iParam0));
	func_555(iParam0, 1, 1, 1, bParam4);
}

int func_781(int iParam0, int iParam1)
{
	if (!func_527(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126) && iParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = func_1131(iParam0);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

bool func_782(int iParam0)
{
	return iParam0 != 0;
}

int func_783(int iParam0)
{
	if (!func_408(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

void func_784(float fParam0, float fParam1, float fParam2, float fParam3)
{
	Global_1894899->f_182 = fParam0;
	Global_1894899->f_183 = fParam1;
	Global_1894899->f_184 = fParam2;
	Global_1894899->f_185 = fParam3;
}

void func_785(int iParam0)
{
	if (func_486(iParam0))
	{
		Global_1392040 = (&Global_1392040 - (Global_1392040 && iParam0));
	}
}

int func_786(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_464(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

void func_787(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
	}
	PED::DELETE_PED(iParam0);
}

void func_788(int iParam0, int iParam1)
{
	if (func_56() != -1)
	{
		return;
	}
	if (!func_408(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (Global_24886[iParam0 /*2*/] || iParam1);
}

void func_789(int iParam0, int iParam1)
{
	if (func_56() != -1)
	{
		return;
	}
	if (!func_408(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (&Global_24886[iParam0 /*2*/] - (Global_24886[iParam0 /*2*/] && iParam1));
}

void func_790(int iParam0)
{
	int iVar0;
	
	if (!func_408(iParam0))
	{
		return;
	}
	iVar0 = func_972(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = 0;
}

void func_791(int iParam0, int iParam1)
{
	if (!func_408(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_1 = iParam1;
}

int func_792(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(&(Global_1934765->f_275[iVar0 /*2*/]), false) && &Global_1934765->f_275[iVar0 /*2*/] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			*uParam0 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

float func_793()
{
	return (func_703(150f, BUILTIN::TO_FLOAT(Global_1934765->f_286)) / BUILTIN::TO_FLOAT(300));
}

int func_794()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(&(Global_1934765->f_275[iVar0 /*2*/]), false))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_795(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1132(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1133(iVar6);
	}
	return iVar5;
}

int func_796(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1134(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_797(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	func_966(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
}

int func_798(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 0;
		
		case 7:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 0;
		
		case 11:
			return 1;
		
		case 8:
			return 1;
		
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return 0;
		
		default:
			break;
	}
	return 0;
}

void func_799(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_797(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_800(2, *uParam0);
		}
		else
		{
			func_801(2, *uParam0);
		}
	}
	func_1135(uParam0);
}

void func_800(int iParam0, int iParam1)
{
	if (Global_1357549->f_1483 >= 25)
	{
		Global_1357549->f_1483 = 0;
	}
	Global_1357549->f_1407[Global_1357549->f_1483 /*3*/] = iParam0;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_2 = 0;
	Global_1357549->f_1483++;
}

void func_801(int iParam0, int iParam1)
{
	if (Global_1357549->f_1406 >= 50)
	{
		return;
	}
	if (&Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] != 0)
	{
		return;
	}
	Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] = iParam0;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_2 = 0;
	Global_1357549->f_1403++;
	Global_1357549->f_1406++;
}

bool func_802(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

int func_803(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_527(iParam0))
	{
		return 0;
	}
	if (!func_1136(iParam0))
	{
		return 0;
	}
	if (func_176(iParam0, -2147483648))
	{
		return 1;
	}
	if (func_176(iParam0, 1073741824))
	{
		return 1;
	}
	iVar0 = func_1137(iParam1);
	if (iVar0 < ((*Global_1360165)[iParam0 /*1157*/])->f_22)
	{
		return 1;
	}
	if (iVar0 == ((*Global_1360165)[iParam0 /*1157*/])->f_22)
	{
		if (bParam2)
		{
			return 1;
		}
		if (!func_176(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_804(int iParam0)
{
	return func_402(iParam0, 2, 1);
}

Vector3 func_805(int iParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	
	vVar0 = { 0f, 0f, 0f };
	if (!func_373(iParam0))
	{
		return vVar0;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iParam0 /*35*/])->f_3))
	{
		vVar0 = { VOLUME::_0xF70F00013A62F866(((*Global_1888801)[iParam0 /*35*/])->f_3) };
		if (bParam1)
		{
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0))
			{
				vVar0.f_2 = uVar3;
			}
		}
	}
	return vVar0;
}

void func_806(int iParam0)
{
	int iVar0;
	int iVar1[10];
	int iVar12[10];
	int iVar23;
	
	iVar0 = func_32();
	switch (iParam0)
	{
		case 1:
			if (iParam0 != func_146())
			{
				iVar1[0] = 633503129;
				iVar12[0] = -697307430;
				iVar12[1] = -1873685184;
				iVar12[2] = -1536198599;
			}
			else
			{
				iVar12[0] = 633503129;
				switch (iVar0)
				{
					case 0:
						iVar1[0] = -697307430;
						iVar12[1] = -1873685184;
						iVar12[2] = -1536198599;
						break;
					
					case 1:
						iVar1[0] = -1873685184;
						iVar12[1] = -697307430;
						iVar12[2] = -1536198599;
						break;
					
					case 2:
						iVar1[0] = -1536198599;
						iVar12[1] = -697307430;
						iVar12[2] = -1873685184;
						break;
				}
			}
			break;
		
		case 3:
			if (iParam0 != func_146())
			{
				if (!func_756(282809459) && !func_756(1626481264))
				{
					iVar1[0] = 2113454609;
					iVar12[0] = func_1138();
				}
				else
				{
					iVar1[0] = func_1138();
					iVar12[0] = 2113454609;
				}
				iVar12[1] = func_1138();
			}
			else
			{
				iVar12[0] = 2113454609;
				switch (iVar0)
				{
					case 0:
						iVar1[0] = func_1138();
						iVar12[1] = func_1138();
						break;
					
					case 1:
						iVar1[0] = func_1138();
						iVar12[1] = func_1138();
						break;
				}
			}
			break;
		
		case 2:
			if (iParam0 != func_146())
			{
				iVar1[0] = 1764814553;
				iVar12[0] = 519091847;
				iVar12[1] = -1874720370;
				iVar12[2] = -376056363;
				if (func_146() == 0 || func_146() == 1)
				{
					iVar1[1] = -1225606266;
					iVar1[2] = -648893593;
					iVar1[3] = -1496619689;
					iVar12[3] = -1936937394;
					iVar12[4] = -61896664;
				}
				else
				{
					iVar1[1] = -1936937394;
					iVar1[2] = -61896664;
					iVar12[3] = -1496619689;
					iVar12[4] = -648893593;
					iVar12[5] = -1225606266;
				}
			}
			else
			{
				iVar12[0] = 1764814553;
				switch (iVar0)
				{
					case 0:
						iVar1[0] = 519091847;
						iVar12[1] = -1874720370;
						iVar12[2] = -376056363;
						break;
					
					case 1:
						iVar1[0] = -1874720370;
						iVar1[1] = -61896664;
						iVar12[1] = 519091847;
						iVar12[2] = -376056363;
						iVar12[3] = -648893593;
						iVar12[4] = -1225606266;
						iVar12[5] = -1496619689;
						break;
					
					case 2:
						iVar1[0] = -376056363;
						iVar12[1] = 519091847;
						iVar12[2] = -1874720370;
						break;
				}
			}
			break;
		
		case 6:
			if (iParam0 != func_146())
			{
				if (func_269(((*Global_1347702)[68 /*49*/])->f_15, 1))
				{
					iVar1[0] = 753181111;
					iVar12[0] = 1475089455;
				}
				else
				{
					iVar1[0] = 1475089455;
					iVar12[0] = 753181111;
				}
				iVar12[1] = 702867922;
				iVar12[2] = 913170302;
				iVar12[3] = 637861796;
			}
			else
			{
				switch (iVar0)
				{
					case 0:
						iVar1[0] = 913170302;
						iVar12[0] = 753181111;
						iVar12[1] = 1475089455;
						iVar12[2] = 702867922;
						iVar12[3] = 637861796;
						break;
					
					case 1:
						iVar1[0] = 637861796;
						iVar12[0] = 753181111;
						iVar12[1] = 1475089455;
						iVar12[2] = 913170302;
						iVar12[3] = 702867922;
						break;
					
					case 2:
						iVar1[0] = 702867922;
						iVar12[0] = 753181111;
						iVar12[1] = 1475089455;
						iVar12[2] = 913170302;
						iVar12[3] = 637861796;
						break;
				}
			}
			break;
	}
	iVar23 = 0;
	while (iVar23 < iVar1)
	{
		if (func_813(&(iVar1[iVar23])))
		{
			if (!STREAMING::_IS_IMAP_ACTIVE(&(iVar1[iVar23])))
			{
				STREAMING::_REQUEST_IMAP(&(iVar1[iVar23]));
			}
		}
		iVar23++;
	}
	iVar23 = 0;
	while (iVar23 < iVar12)
	{
		if (func_813(&(iVar12[iVar23])))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar12[iVar23])))
			{
				STREAMING::_REMOVE_IMAP(&(iVar12[iVar23]));
			}
		}
		iVar23++;
	}
}

float func_807(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 40f;
		
		case 2:
			return 170f;
		
		case 4:
			return 50f;
		
		case 6:
			return 50f;
		
		case 3:
			return 260.5f;
		
		case 7:
			return 220f;
		
		case 5:
			return 157.25f;
		
		case 8:
			return 175f;
		
		default:
			break;
	}
	return 250f;
}

void func_808(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	
	if (bParam1 && STREAMING::_0xCF45DF50C7775F2A())
	{
		return;
	}
	Var2 = 9;
	Var2.f_1 = 12;
	Var2.f_1.f_13 = 12;
	Var2.f_1.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 12;
	(*Var2[5 /*13*/])[0] = func_1138();
	(*Var2[5 /*13*/])[1] = func_1138();
	(*Var2[5 /*13*/])[2] = func_1138();
	(*Var2[5 /*13*/])[3] = func_1138();
	(*Var2[5 /*13*/])[4] = func_1138();
	(*Var2[5 /*13*/])[5] = func_1138();
	(*Var2[5 /*13*/])[6] = func_1138();
	(*Var2[5 /*13*/])[7] = func_1138();
	(*Var2[5 /*13*/])[8] = func_1138();
	(*Var2[5 /*13*/])[9] = func_1138();
	(*Var2[5 /*13*/])[10] = func_1138();
	(*Var2[5 /*13*/])[11] = func_1138();
	if (func_128(((*Global_1835011)[59 /*74*/])->f_1))
	{
		(*Var2[6 /*13*/])[0] = func_1138();
	}
	else
	{
		(*Var2[6 /*13*/])[0] = -828094297;
	}
	(*Var2[6 /*13*/])[1] = 1561231200;
	(*Var2[6 /*13*/])[2] = -407402757;
	(*Var2[6 /*13*/])[3] = -1849681615;
	(*Var2[6 /*13*/])[4] = -981684452;
	(*Var2[6 /*13*/])[5] = 1547347496;
	(*Var2[6 /*13*/])[6] = -1966238128;
	if ((func_463(((*Global_1835011)[58 /*74*/])->f_1) || func_128(((*Global_1835011)[58 /*74*/])->f_1)) || func_269(((*Global_1835011)[58 /*74*/])->f_1, 1))
	{
		(*Var2[6 /*13*/])[7] = func_1138();
		if (STREAMING::_IS_IMAP_ACTIVE(-1437554707))
		{
			STREAMING::_REMOVE_IMAP(-1437554707);
		}
	}
	else
	{
		(*Var2[6 /*13*/])[7] = -1437554707;
	}
	if (func_128(((*Global_1835011)[58 /*74*/])->f_1) || func_463(((*Global_1835011)[58 /*74*/])->f_1))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-1310355638))
		{
			STREAMING::_REMOVE_IMAP(-1310355638);
		}
		(*Var2[6 /*13*/])[8] = 1387226336;
	}
	else
	{
		if (STREAMING::_IS_IMAP_ACTIVE(1387226336))
		{
			STREAMING::_REMOVE_IMAP(1387226336);
		}
		(*Var2[6 /*13*/])[8] = -1310355638;
	}
	(*Var2[6 /*13*/])[9] = -149795084;
	(*Var2[6 /*13*/])[10] = -419935200;
	(*Var2[6 /*13*/])[11] = -1496155572;
	(*Var2[0 /*13*/])[0] = 1289304923;
	(*Var2[0 /*13*/])[1] = -584714922;
	(*Var2[0 /*13*/])[2] = func_1138();
	(*Var2[0 /*13*/])[3] = func_1138();
	(*Var2[0 /*13*/])[4] = func_1138();
	(*Var2[0 /*13*/])[5] = func_1138();
	(*Var2[0 /*13*/])[6] = func_1138();
	(*Var2[0 /*13*/])[7] = func_1138();
	(*Var2[0 /*13*/])[8] = func_1138();
	(*Var2[0 /*13*/])[9] = func_1138();
	(*Var2[0 /*13*/])[10] = func_1138();
	(*Var2[0 /*13*/])[11] = func_1138();
	(*Var2[2 /*13*/])[0] = 1706275010;
	(*Var2[2 /*13*/])[1] = 1290371072;
	(*Var2[2 /*13*/])[2] = 1734859244;
	(*Var2[2 /*13*/])[3] = 1309652195;
	(*Var2[2 /*13*/])[4] = -1291679096;
	(*Var2[2 /*13*/])[5] = 1676971154;
	(*Var2[2 /*13*/])[6] = func_1139();
	(*Var2[2 /*13*/])[7] = -1841279810;
	(*Var2[2 /*13*/])[8] = func_1140();
	(*Var2[2 /*13*/])[9] = func_1141();
	(*Var2[2 /*13*/])[10] = func_1142();
	(*Var2[2 /*13*/])[11] = func_1143();
	(*Var2[4 /*13*/])[0] = func_1138();
	(*Var2[4 /*13*/])[1] = func_1138();
	(*Var2[4 /*13*/])[2] = func_1138();
	(*Var2[4 /*13*/])[3] = func_1138();
	(*Var2[4 /*13*/])[4] = func_1138();
	(*Var2[4 /*13*/])[5] = func_1138();
	(*Var2[4 /*13*/])[6] = func_1138();
	(*Var2[4 /*13*/])[7] = func_1138();
	(*Var2[4 /*13*/])[8] = func_1138();
	(*Var2[4 /*13*/])[9] = func_1138();
	(*Var2[4 /*13*/])[10] = func_1138();
	(*Var2[4 /*13*/])[11] = func_1138();
	(*Var2[1 /*13*/])[0] = 288413571;
	(*Var2[1 /*13*/])[1] = -441619793;
	(*Var2[1 /*13*/])[2] = -1916602073;
	(*Var2[1 /*13*/])[3] = func_1144();
	(*Var2[1 /*13*/])[4] = -80564929;
	(*Var2[1 /*13*/])[5] = -676881895;
	(*Var2[1 /*13*/])[6] = -1445186253;
	(*Var2[1 /*13*/])[7] = -1893724593;
	(*Var2[1 /*13*/])[8] = func_1145();
	(*Var2[1 /*13*/])[9] = func_1146();
	(*Var2[1 /*13*/])[10] = func_1138();
	(*Var2[1 /*13*/])[11] = func_1138();
	(*Var2[3 /*13*/])[0] = 923572416;
	(*Var2[3 /*13*/])[1] = -555683060;
	(*Var2[3 /*13*/])[2] = -1828030290;
	(*Var2[3 /*13*/])[3] = -960337247;
	(*Var2[3 /*13*/])[4] = -299265919;
	(*Var2[3 /*13*/])[5] = func_1138();
	(*Var2[3 /*13*/])[6] = func_1138();
	(*Var2[3 /*13*/])[7] = func_1138();
	(*Var2[3 /*13*/])[8] = func_1138();
	(*Var2[3 /*13*/])[9] = func_1138();
	(*Var2[3 /*13*/])[10] = func_1138();
	(*Var2[3 /*13*/])[11] = func_1138();
	(*Var2[7 /*13*/])[0] = func_1147();
	(*Var2[7 /*13*/])[1] = 764025611;
	(*Var2[7 /*13*/])[2] = func_1138();
	(*Var2[7 /*13*/])[3] = func_1138();
	(*Var2[7 /*13*/])[4] = func_1138();
	(*Var2[7 /*13*/])[5] = func_1138();
	(*Var2[7 /*13*/])[6] = func_1138();
	(*Var2[7 /*13*/])[7] = func_1138();
	(*Var2[7 /*13*/])[8] = func_1138();
	(*Var2[7 /*13*/])[9] = func_1138();
	(*Var2[7 /*13*/])[10] = func_1138();
	(*Var2[7 /*13*/])[11] = func_1138();
	(*Var2[8 /*13*/])[0] = func_1138();
	(*Var2[8 /*13*/])[1] = func_1138();
	(*Var2[8 /*13*/])[2] = func_1138();
	(*Var2[8 /*13*/])[3] = func_1138();
	(*Var2[8 /*13*/])[4] = func_1138();
	(*Var2[8 /*13*/])[5] = func_1138();
	(*Var2[8 /*13*/])[6] = func_1138();
	(*Var2[8 /*13*/])[7] = func_1138();
	(*Var2[8 /*13*/])[8] = func_1138();
	(*Var2[8 /*13*/])[9] = func_1138();
	(*Var2[8 /*13*/])[10] = func_1138();
	(*Var2[8 /*13*/])[11] = func_1138();
	if (iParam0 != 0)
	{
		func_1148(-1170496998, 0, 0);
	}
	if (iParam0 == 7)
	{
		if (!func_518(2))
		{
			if (func_402(13, 4, 1))
			{
				func_1149(128);
				func_1150(126);
			}
			else
			{
				func_1149(126);
				func_1150(128);
			}
		}
		func_1150(129);
	}
	else
	{
		func_1149(127);
		func_1149(126);
		func_1149(128);
		func_1149(129);
	}
	if (func_148(44))
	{
		func_1150(28);
		func_1149(27);
	}
	else
	{
		func_1150(27);
		func_1149(28);
	}
	func_1151(1, bParam1);
	if (iParam0 == 3)
	{
		if (STREAMING::_IS_IMAP_ACTIVE(809554858))
		{
			STREAMING::_REMOVE_IMAP(809554858);
		}
		func_1150(2);
		func_1150(7);
		func_1150(8);
		func_1149(1);
	}
	else
	{
		func_1149(2);
		func_1149(7);
		func_1149(8);
	}
	if (iParam0 == 3 && func_890(-1515028452, 1, 0) == 0)
	{
		func_1150(10);
	}
	else
	{
		func_1149(10);
	}
	if (iParam0 == 3 && func_890(-520532433, 1, 0) == 0)
	{
		func_1150(9);
	}
	else
	{
		func_1149(9);
	}
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 4) || iParam0 == 7) || iParam0 == 8)
	{
		if (func_269(((*Global_1347702)[83 /*49*/])->f_15, 1))
		{
			func_1150(4);
		}
	}
	else
	{
		func_1149(4);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Var2[iVar0 /*13*/][iVar1] != func_1138())
			{
				if (iParam0 == iVar0 && func_32() == 1)
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(Var2[iVar0 /*13*/][iVar1]))
					{
						STREAMING::_REQUEST_IMAP(Var2[iVar0 /*13*/][iVar1]);
					}
				}
				else if (STREAMING::_IS_IMAP_ACTIVE(Var2[iVar0 /*13*/][iVar1]))
				{
					STREAMING::_REMOVE_IMAP(Var2[iVar0 /*13*/][iVar1]);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

bool func_809(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_810(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_211(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
	{
		if (func_809(vParam0))
		{
			return 0;
		}
		iVar0 = VOLUME::_0x00BBF7CEAE8C666A(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam6, false, false) };
		iVar0 = VOLUME::_0xF383E96C4904DF0C(iParam6, fParam3, iVar1, 0);
	}
	if (iParam7 != 0)
	{
		VOLUME::_0xB440F4E35393FC39(iVar0, iParam7);
	}
	if (fParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, fParam9);
	}
	func_1152(iVar0, bParam8);
	return iVar0;
}

void func_811(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			if (func_938(58) || func_148(58))
			{
				AUDIO::_0x3743CE6948194349("AZ_camp_dark_mood_zone", 2358f, 1360f, 108f, 0f);
			}
			break;
	}
}

int func_812(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return -1395712024;
		
		case 1:
			return -1611076340;
		
		case 2:
			return 2108368013;
		
		case 6:
			return -1162254606;
		
		case 3:
			return -412827149;
		
		default:
			break;
	}
	return func_1138();
}

bool func_813(int iParam0)
{
	return iParam0 != 0;
}

void func_814(int iParam0)
{
	struct<8> Var0;
	int iVar8;
	int iVar9;
	
	func_1153(iParam0);
	iVar9 = 0;
	while (iVar9 <= 2)
	{
		if (func_1154(iParam0, iVar9))
		{
			func_1155(iParam0);
			Var0 = { func_1156(iParam0, iVar9) };
			iVar8 = func_1157(iParam0, iVar9);
			func_1158(iVar8, 1);
			if (func_32() == iVar9)
			{
				if (!PATHFIND::_0x5AC0944C156E5F44(&Var0))
				{
					PATHFIND::_0x7C334FF4D9215912(&Var0);
				}
				if (!STREAMING::_IS_IMAP_ACTIVE(iVar8))
				{
					STREAMING::_REQUEST_IMAP(iVar8);
				}
			}
			else
			{
				if (PATHFIND::_0x5AC0944C156E5F44(&Var0))
				{
					PATHFIND::_0x527B97C203BB8606(&Var0);
				}
				if (STREAMING::_IS_IMAP_ACTIVE(iVar8))
				{
					STREAMING::_REMOVE_IMAP(iVar8);
				}
			}
		}
		iVar9++;
	}
}

void func_815(int iParam0, bool bParam1)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 1:
			sVar0 = "HSO_PLAYER_CHORES";
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) == 0)
	{
		if (bParam1)
		{
			if (TASK::DOES_SCENARIO_GROUP_EXIST(sVar0) && !TASK::IS_SCENARIO_GROUP_ENABLED(sVar0))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED(sVar0, true);
			}
		}
		else if (TASK::IS_SCENARIO_GROUP_ENABLED(sVar0))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED(sVar0, false);
		}
	}
}

void func_816(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_396(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 27)
		{
			iVar1 = 0;
			while (iVar1 < 6)
			{
				func_398(iParam1, iVar0, iVar1, bParam2, bParam3);
				iVar1++;
			}
			iVar0++;
		}
	}
}

void func_817(int iParam0, int iParam1)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (func_396(iParam0))
	{
		*iParam1 = func_812(iParam0);
		if (func_813(*iParam1))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(*iParam1))
			{
				STREAMING::_REMOVE_IMAP(*iParam1);
			}
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_1154(iParam0, iVar0))
			{
				Var1 = { func_1156(iParam0, iVar0) };
				*iParam1 = func_1157(iParam0, iVar0);
				func_1158(*iParam1, 0);
				if (PATHFIND::_0x5AC0944C156E5F44(&Var1))
				{
					PATHFIND::_0x527B97C203BB8606(&Var1);
				}
				if (func_813(*iParam1))
				{
					if (STREAMING::_IS_IMAP_ACTIVE(*iParam1))
					{
						STREAMING::_REMOVE_IMAP(*iParam1);
					}
				}
			}
			iVar0++;
		}
		iVar11 = 0;
		while (iVar11 < 27)
		{
			iVar9 = func_1159(iParam0, iVar11, 0);
			iVar10 = func_1159(iParam0, iVar11, 1);
			if (func_813(iVar9))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar9))
				{
					STREAMING::_REMOVE_IMAP(iVar9);
				}
			}
			if (func_813(iVar10))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar10))
				{
					STREAMING::_REMOVE_IMAP(iVar10);
				}
			}
			iVar11++;
		}
	}
}

void func_818(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	if (func_211(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_1041(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

char* func_819(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
		
		case 3:
			return "BILL";
		
		case 1:
			return "JOHN";
		
		case 2:
			return "JAVIER";
		
		case 4:
			return "UNCLE";
		
		case 5:
			return "HOSEA";
		
		case 6:
			return "MICAH";
		
		case 7:
			return "CHARLES";
		
		case 8:
			return "SEAN";
		
		case 9:
			return "LENNY";
		
		case 13:
			return "ABIGAIL";
		
		case 10:
			return "KIERAN";
		
		case 14:
			return "JACK";
		
		case 15:
			return "MARYBETH";
		
		case 16:
			return "MOLLY";
		
		case 17:
			return "PEARSON";
		
		case 18:
			return "STRAUSS";
		
		case 19:
			return "GRIMSHAW";
		
		case 20:
			return "KAREN";
		
		case 21:
			return "SWANSON";
		
		case 22:
			return "TILLY";
		
		case 23:
			return "TRELAWNY";
		
		case 11:
			return "SADIE";
		
		case 24:
			return "CLEET";
		
		case 25:
			return "JOE";
		
		case 26:
			return "EAGLEFLIES";
		
		case 12:
			return "DOG";
		
		default:
			break;
	}
	return "Companion unknown";
}

char* func_820(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Morning";
		
		case 1:
			return "Day";
		
		case 2:
			return "LongDay";
		
		case 3:
			return "Afternoon";
		
		case 4:
			return "Evening";
		
		case 5:
			return "Night";
		
		default:
			break;
	}
	return "";
}

int func_821()
{
	int iVar0;
	
	iVar0 = Global_40.f_4283;
	if (iVar0 == 4 || iVar0 == 7)
	{
		return 0;
	}
	if (iVar0 == 0 && Global_40.f_4283.f_4 == 2)
	{
		return 0;
	}
	if (iVar0 == 5)
	{
		if (!func_269(((*Global_1835011)[44 /*74*/])->f_1, 1))
		{
			return 0;
		}
	}
	return 1;
}

int func_822(int iParam0)
{
	if ((Global_40.f_4942[iParam0 /*60*/])->f_59 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_823(int iParam0)
{
	return func_402(iParam0, 4, 1);
}

int func_824(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!func_527(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if ((Global_1357549->f_1675[iVar1 /*5*/])->f_1 == iParam0)
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
				return &(Global_1357549->f_1675[iVar1 /*5*/]);
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (&Global_1357549->f_1675[iVar1 /*5*/] != 0 && (Global_1357549->f_1675[iVar1 /*5*/])->f_1 == -1)
		{
			iVar0 = &Global_1357549->f_1675[iVar1 /*5*/];
			Jump @165; //curOff = 150
		}
		iVar1++;
	}
	if (!func_527(iParam0))
	{
		if (iVar0 != 0)
		{
			(Global_1357549->f_1675[iVar1 /*5*/])->f_1 = iParam0;
			((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
		}
	}
	return iVar0;
}

struct<4> func_825(bool bParam0)
{
	return func_962(1328661203, func_1160(), -1591664384, bParam0);
}

int func_826(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	iVar0 = func_507(bParam7);
	if (INVENTORY::_0x033EE4B89F3AC545(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return 0;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return 0;
	}
	return 1;
}

int func_827(var uParam0, var uParam1)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_507(0), uParam0, uParam1, 29, 1))
	{
		return 0;
	}
	return 1;
}

int func_828(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_253)
	{
		if (MISC::IS_BIT_SET(*uParam1, iVar0))
		{
		}
		else if (MISC::IS_BIT_SET(uParam0->f_255, iVar0))
		{
		}
		else if ((uParam0->f_9[iVar0 /*9*/])->f_8 != 0)
		{
			if (!func_624((uParam0->f_9[iVar0 /*9*/])->f_8))
			{
			}
			else if ((uParam0->f_9[iVar0 /*9*/])->f_1 == 0)
			{
			}
			else if (!STREAMING::HAS_MODEL_LOADED((uParam0->f_9[iVar0 /*9*/])->f_1))
			{
				return 0;
			}
			iVar0++;
			return 1;
		}
	}

int func_829()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (&Global_1879534)
	{
		return 0;
	}
	if (func_131(0, 1, 0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if ((Global_40.f_4942[iVar1 /*60*/])->f_59 != 0)
		{
			iVar0 = func_885((Global_40.f_4942[iVar1 /*60*/])->f_59);
			bVar2 = false;
			switch (iVar0)
			{
				case 8:
					if (!func_1162(func_1161((Global_40.f_4942[iVar1 /*60*/])->f_59), 0))
					{
						bVar2 = true;
					}
					break;
				
				default:
					if (!func_463((Global_40.f_4942[iVar1 /*60*/])->f_59))
					{
						bVar2 = true;
					}
					break;
			}
			if (bVar2)
			{
				(Global_40.f_4942[iVar1 /*60*/])->f_59 = 0;
				func_556(iVar1, 512, 1);
			}
		}
		iVar1++;
	}
	return 1;
}

int func_830(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	iVar0 = 1;
	uVar1 = func_399();
	iVar2 = func_377(iParam0);
	iVar3 = 0;
	while (iVar3 < 27)
	{
		if (!func_528(iVar3, 4, 1))
		{
			if (func_400(iVar3))
			{
				bVar4 = false;
				if (uVar1 && func_402(iVar3, 32768, 1))
				{
					bVar4 = true;
				}
				if (!func_1163(iVar3, bVar4, iVar2, 0, bParam1))
				{
					iVar0 = 0;
				}
				else if (bParam1 && !func_343(iVar3))
				{
					if (func_184(iVar3, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1) != 0)
					{
						func_531(iVar3, 4, 1);
					}
				}
				else
				{
					func_531(iVar3, 4, 1);
				}
			}
			else
			{
				if (((func_1164(iVar3) && !func_343(iVar3)) && !func_822(iVar3)) && iVar3 != Global_1357549->f_1497)
				{
					func_780(iVar3, 0, 0, 0, 0);
				}
				func_531(iVar3, 4, 1);
			}
		}
		iVar3++;
	}
	return iVar0;
}

int func_831(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	iVar0 = 1;
	if (!func_349(iParam0, &uVar2, &iVar3, 0, 1))
	{
		return 1;
	}
	bVar4 = iParam0 == 22;
	iVar1 = uVar2;
	while (iVar1 <= iVar3)
	{
		if (!func_408(iVar1))
		{
		}
		else if (func_374(iVar1, 32) && iParam0 != 22)
		{
		}
		else
		{
			iVar5 = func_972(iVar1);
			if (!func_330(iVar5, 0))
			{
				func_1165(iVar1, 0);
				_NAMESPACE48::_0x6759BEE6762E140B(func_783(iVar1));
				if (func_1166(iVar1, 0, 0, 0, 0, 1))
				{
					return 0;
				}
				iVar0 = 0;
			}
			else
			{
				if (bVar4 && func_1167(iVar5))
				{
					if (!DECORATOR::DECOR_EXIST_ON(iVar5, "CaravanLivestock"))
					{
						DECORATOR::DECOR_SET_BOOL(iVar5, "CaravanLivestock", true);
					}
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar5, -1538724068);
				func_789(iVar1, 128);
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_832(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (!func_406(uParam0->f_45))
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_1357549->f_1675[iVar1 /*5*/] = func_407(iVar1);
		if (&Global_1357549->f_1675[iVar1 /*5*/] == 0)
		{
		}
		else if (!func_1168(iVar1))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

int func_833(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	if (Global_40.f_4283.f_567)
	{
		vVar1 = { 0f, 0f, 0f };
		iVar6 = 0;
		if (uParam0->f_45 == Global_40.f_4283.f_567.f_1)
		{
			vVar1 = { Global_40.f_4283.f_567.f_2 };
			fVar4 = Global_40.f_4283.f_567.f_5;
			iVar5 = func_230(vVar1, 2);
		}
		else
		{
			iVar5 = func_468();
			if (!func_211(TASK::_0xA8452DD321607029(iVar5, 1)))
			{
				vVar1 = { TASK::_0xA8452DD321607029(iVar5, 1) };
			}
		}
		if (!func_211(vVar1))
		{
			iVar6 = func_405();
			if (!ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1897))
			{
				if (iVar6 != 0)
				{
					if (STREAMING::HAS_MODEL_LOADED(iVar6))
					{
						Global_1357549->f_1897 = func_1169(iVar6, vVar1, fVar4, 1, 1, Global_40.f_4283.f_567.f_6, 1, 0, 1, 0, 0, 0, 0);
					}
					else
					{
						STREAMING::REQUEST_MODEL(iVar6, false);
					}
				}
				iVar0 = 0;
			}
			else
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar6);
				PED::_0xC9151483CC06A414(Global_1357549->f_1897);
				TASK::_TASK_USE_SCENARIO_POINT(Global_1357549->f_1897, iVar5, 0, 0, 0, 1, 0, 0, -1082130432, 0);
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_834(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

void func_835(var uParam0)
{
	switch (func_146())
	{
		case 1:
			uParam0->f_14 = MAP::_0x554D9D53F696D002(168093330, -125.3398f, -43.2379f, 94.3833f);
			uParam0->f_15 = MAP::_0x554D9D53F696D002(168093330, -149.5986f, -20.2218f, 95.1022f);
			uParam0->f_13 = MAP::_0x554D9D53F696D002(168093330, -138.8856f, -21.4424f, 95.0883f);
			break;
		
		case 2:
			uParam0->f_14 = MAP::_0x554D9D53F696D002(168093330, 647.7324f, -1245.42f, 42.7703f);
			uParam0->f_15 = MAP::_0x554D9D53F696D002(168093330, 658.9856f, -1229.287f, 43.2276f);
			uParam0->f_13 = MAP::_0x554D9D53F696D002(168093330, 677.5646f, -1254.409f, 43.0152f);
			break;
		
		case 3:
			uParam0->f_14 = MAP::_0x554D9D53F696D002(168093330, 1906.91f, -1862.294f, 46.3492f);
			uParam0->f_15 = MAP::_0x554D9D53F696D002(168093330, 1886.88f, -1884.633f, 41.8302f);
			uParam0->f_13 = MAP::_0x554D9D53F696D002(168093330, 1877.423f, -1861.41f, 41.8078f);
			break;
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_14))
	{
		MAP::SET_BLIP_SPRITE(uParam0->f_14, 1576459965, true);
		MAP::SET_BLIP_FLASH_TIMER(uParam0->f_14, 69, -1);
		func_673(uParam0->f_14, func_267());
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_15))
	{
		MAP::SET_BLIP_SPRITE(uParam0->f_15, -695368421, true);
		MAP::SET_BLIP_FLASH_TIMER(uParam0->f_15, 70, -1);
		func_673(uParam0->f_15, func_267());
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_13))
	{
		MAP::SET_BLIP_SPRITE(uParam0->f_13, -1852063472, true);
		MAP::SET_BLIP_FLASH_TIMER(uParam0->f_13, 71, -1);
		func_673(uParam0->f_13, func_267());
	}
}

char* func_836(int iParam0)
{
	return MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(iParam0), 0);
}

void func_837(char* sParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			StringCopy(sParam0, "ABI_TITHE", 16);
			break;
		
		case 1:
			StringCopy(sParam0, "JACK1_TITHE", 16);
			break;
		
		case 2:
			StringCopy(sParam0, "JACK2_TITHE", 16);
			break;
		
		case 3:
			StringCopy(sParam0, "CHAR1_TITHE", 16);
			break;
		
		case 4:
			StringCopy(sParam0, "CHAR2_TITHE", 16);
			break;
		
		case 5:
			StringCopy(sParam0, "CHAR3_TITHE", 16);
			break;
		
		case 6:
			StringCopy(sParam0, "CHAR4_TITHE", 16);
			break;
		
		case 7:
			StringCopy(sParam0, "SUSAN1_TITHE", 16);
			break;
		
		case 8:
			StringCopy(sParam0, "SUSAN2_TITHE", 16);
			break;
		
		case 9:
			StringCopy(sParam0, "SWANS_TITHE", 16);
			break;
		
		case 10:
			StringCopy(sParam0, "PEARS1_TITHE", 16);
			break;
		
		case 11:
			StringCopy(sParam0, "PEARS2_TITHE", 16);
			break;
		
		case 12:
			StringCopy(sParam0, "JAVIER_TITHE", 16);
			break;
		
		case 13:
			StringCopy(sParam0, "BILL_TITHE", 16);
			break;
		
		case 14:
			StringCopy(sParam0, "SEAN_TITHE", 16);
			break;
		
		case 15:
			StringCopy(sParam0, "KIER_TITHE", 16);
			break;
		
		case 16:
			StringCopy(sParam0, "TILLY_TITHE", 16);
			break;
		
		case 17:
			StringCopy(sParam0, "HOSEA1_TITHE", 16);
			break;
		
		case 18:
			StringCopy(sParam0, "HOSEA2_TITHE", 16);
			break;
		
		case 19:
			StringCopy(sParam0, "LENNY1_TITHE", 16);
			break;
		
		case 20:
			StringCopy(sParam0, "LENNY2_TITHE", 16);
			break;
		
		case 21:
			StringCopy(sParam0, "UNCLE_TITHE", 16);
			break;
		
		case 22:
			StringCopy(sParam0, "MARY1_TITHE", 16);
			break;
		
		case 23:
			StringCopy(sParam0, "MARY2_TITHE", 16);
			break;
		
		case 24:
			StringCopy(sParam0, "TREWL_TITHE", 16);
			break;
		
		case 25:
			StringCopy(sParam0, "MOLLY_TITHE", 16);
			break;
		
		case 26:
			StringCopy(sParam0, "STRAU_TITHE", 16);
			break;
		
		case 27:
			StringCopy(sParam0, "KAREN_TITHE", 16);
			break;
		
		case 28:
			StringCopy(sParam0, "DUTCH_TITHE", 16);
			break;
		
		case 29:
			StringCopy(sParam0, "SADIE_TITHE", 16);
			break;
		
		case 30:
			StringCopy(sParam0, "MICAH_TITHE", 16);
			break;
	}
}

void func_838(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 1;
			break;
		
		case 1:
			*uParam1 = 2;
			break;
		
		case 2:
			*uParam1 = 4;
			break;
		
		case 3:
			*uParam1 = 8;
			break;
		
		case 4:
			*uParam1 = 16;
			break;
		
		case 5:
			*uParam1 = 32;
			break;
		
		case 6:
			*uParam1 = 64;
			break;
		
		case 7:
			*uParam1 = 128;
			break;
		
		case 8:
			*uParam1 = 256;
			break;
		
		case 9:
			*uParam1 = 512;
			break;
		
		case 10:
			*uParam1 = 1024;
			break;
		
		case 11:
			*uParam1 = 2048;
			break;
		
		case 12:
			*uParam1 = 4096;
			break;
		
		case 13:
			*uParam1 = 8192;
			break;
		
		case 14:
			*uParam1 = 16384;
			break;
		
		case 15:
			*uParam1 = 32768;
			break;
		
		case 16:
			*uParam1 = 65536;
			break;
		
		case 17:
			*uParam1 = 131072;
			break;
		
		case 18:
			*uParam1 = 262144;
			break;
		
		case 19:
			*uParam1 = 524288;
			break;
		
		case 20:
			*uParam1 = 1048576;
			break;
		
		case 21:
			*uParam1 = 2097152;
			break;
		
		case 22:
			*uParam1 = 4194304;
			break;
		
		case 23:
			*uParam1 = 8388608;
			break;
		
		case 24:
			*uParam1 = 16777216;
			break;
		
		case 25:
			*uParam1 = 33554432;
			break;
		
		case 26:
			*uParam1 = 67108864;
			break;
		
		case 27:
			*uParam1 = 134217728;
			break;
		
		case 28:
			*uParam1 = 268435456;
			break;
		
		case 29:
			*uParam1 = 536870912;
			break;
		
		case 30:
			*uParam1 = 1073741824;
			break;
	}
}

void func_839(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 13;
			break;
		
		case 1:
			*uParam1 = 14;
			break;
		
		case 2:
			*uParam1 = 14;
			break;
		
		case 3:
			*uParam1 = 7;
			break;
		
		case 4:
			*uParam1 = 7;
			break;
		
		case 5:
			*uParam1 = 7;
			break;
		
		case 6:
			*uParam1 = 7;
			break;
		
		case 7:
			*uParam1 = 19;
			break;
		
		case 8:
			*uParam1 = 19;
			break;
		
		case 9:
			*uParam1 = 21;
			break;
		
		case 10:
			*uParam1 = 17;
			break;
		
		case 11:
			*uParam1 = 17;
			break;
		
		case 12:
			*uParam1 = 2;
			break;
		
		case 13:
			*uParam1 = 3;
			break;
		
		case 14:
			*uParam1 = 8;
			break;
		
		case 15:
			*uParam1 = 10;
			break;
		
		case 16:
			*uParam1 = 22;
			break;
		
		case 17:
			*uParam1 = 5;
			break;
		
		case 18:
			*uParam1 = 5;
			break;
		
		case 19:
			*uParam1 = 9;
			break;
		
		case 20:
			*uParam1 = 9;
			break;
		
		case 21:
			*uParam1 = 4;
			break;
		
		case 22:
			*uParam1 = 15;
			break;
		
		case 23:
			*uParam1 = 15;
			break;
		
		case 24:
			*uParam1 = 23;
			break;
		
		case 25:
			*uParam1 = 16;
			break;
		
		case 26:
			*uParam1 = 18;
			break;
		
		case 27:
			*uParam1 = 20;
			break;
		
		case 28:
			*uParam1 = 0;
			break;
		
		case 29:
			*uParam1 = 11;
			break;
		
		case 30:
			*uParam1 = 6;
			break;
	}
}

bool func_840(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

void func_841(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_842(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_843(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_40.f_4283.f_2 = (Global_40.f_4283.f_2 - (Global_40.f_4283.f_2 && iParam0));
			break;
	}
}

int func_844(int iParam0)
{
	vector3 vVar0;
	
	vVar0 = { func_670(iParam0) };
	if (func_211(vVar0))
	{
		return 0;
	}
	return 1;
}

void func_845(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Ledger");
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "CampId", 1);
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "RtSpreadTop");
	func_1170(uVar1, uParam0->f_1[0 /*237*/]);
	uVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "RtSpreadBottom");
	func_1170(uVar2, uParam0->f_1[1 /*237*/]);
	uVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "DynamicCatalogItems");
	uVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar3, "CatalogItemInspection");
	func_1171(uVar3, &(uParam0->f_476));
	uParam0->f_487 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "CampMoneyDonated", func_154());
	uParam0->f_488 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar0, "CampMoneyLevel", "");
}

void func_846(var uParam0)
{
	int iVar0;
	
	iVar0 = func_146();
	uParam0->f_498[0 /*8*/] = 0;
	(uParam0->f_498[0 /*8*/])->f_1 = -1;
	(uParam0->f_498[0 /*8*/])->f_2 = -1;
	(uParam0->f_498[0 /*8*/])->f_3 = -1;
	(uParam0->f_498[0 /*8*/])->f_4 = 1;
	(uParam0->f_498[0 /*8*/])->f_5 = -1;
	(uParam0->f_498[0 /*8*/])->f_6 = -1;
	(uParam0->f_498[0 /*8*/])->f_7 = -1;
	uParam0->f_498[1 /*8*/] = -1;
	(uParam0->f_498[1 /*8*/])->f_1 = 1;
	(uParam0->f_498[1 /*8*/])->f_2 = -1;
	(uParam0->f_498[1 /*8*/])->f_3 = -1;
	(uParam0->f_498[1 /*8*/])->f_4 = -1;
	(uParam0->f_498[1 /*8*/])->f_5 = 0;
	(uParam0->f_498[1 /*8*/])->f_6 = -1;
	(uParam0->f_498[1 /*8*/])->f_7 = -1;
	uParam0->f_498[2 /*8*/] = -1;
	(uParam0->f_498[2 /*8*/])->f_1 = 2;
	(uParam0->f_498[2 /*8*/])->f_2 = -1;
	(uParam0->f_498[2 /*8*/])->f_3 = -1;
	(uParam0->f_498[2 /*8*/])->f_4 = -1;
	(uParam0->f_498[2 /*8*/])->f_5 = 3;
	(uParam0->f_498[2 /*8*/])->f_6 = -1;
	(uParam0->f_498[2 /*8*/])->f_7 = -1;
	uParam0->f_498[3 /*8*/] = -1;
	(uParam0->f_498[3 /*8*/])->f_1 = -1;
	(uParam0->f_498[3 /*8*/])->f_2 = 7;
	(uParam0->f_498[3 /*8*/])->f_3 = 5;
	(uParam0->f_498[3 /*8*/])->f_4 = -1;
	(uParam0->f_498[3 /*8*/])->f_5 = -1;
	(uParam0->f_498[3 /*8*/])->f_6 = 6;
	if (iVar0 == 1)
	{
		(uParam0->f_498[3 /*8*/])->f_7 = -1;
	}
	else
	{
		(uParam0->f_498[3 /*8*/])->f_7 = 4;
	}
}

int func_847(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 4;
		
		case 2:
			return 2;
		
		case 3:
			return 6;
		
		case 5:
			return 5;
		
		case 6:
			return 0;
		
		case 4:
			return 3;
		
		case 7:
			return 7;
		
		case 8:
			return 15;
	}
	return -1;
}

void func_848(var uParam0)
{
	uParam0->f_531[1 /*30*/] = 1259027903;
	(uParam0->f_531[1 /*30*/])->f_1 = 0;
	(uParam0->f_531[1 /*30*/])->f_2[0 /*4*/] = -371380166;
	((uParam0->f_531[1 /*30*/])->f_2[0 /*4*/])->f_1 = 1185646829;
	((uParam0->f_531[1 /*30*/])->f_2[0 /*4*/])->f_2 = 0;
	((uParam0->f_531[1 /*30*/])->f_2[0 /*4*/])->f_3 = -1;
	(uParam0->f_531[1 /*30*/])->f_2[1 /*4*/] = -681440444;
	((uParam0->f_531[1 /*30*/])->f_2[1 /*4*/])->f_1 = 2020699256;
	((uParam0->f_531[1 /*30*/])->f_2[1 /*4*/])->f_2 = 525024705;
	((uParam0->f_531[1 /*30*/])->f_2[1 /*4*/])->f_3 = func_1172(30);
	(uParam0->f_531[1 /*30*/])->f_2[2 /*4*/] = 125037415;
	((uParam0->f_531[1 /*30*/])->f_2[2 /*4*/])->f_1 = -1412836568;
	((uParam0->f_531[1 /*30*/])->f_2[2 /*4*/])->f_2 = 682446981;
	((uParam0->f_531[1 /*30*/])->f_2[2 /*4*/])->f_3 = func_1172(50);
	(uParam0->f_531[1 /*30*/])->f_2[3 /*4*/] = -105033734;
	((uParam0->f_531[1 /*30*/])->f_2[3 /*4*/])->f_1 = 1568913053;
	((uParam0->f_531[1 /*30*/])->f_2[3 /*4*/])->f_2 = 1181715465;
	((uParam0->f_531[1 /*30*/])->f_2[3 /*4*/])->f_3 = func_1172(75);
	(uParam0->f_531[1 /*30*/])->f_2[4 /*4*/] = 0;
	((uParam0->f_531[1 /*30*/])->f_2[4 /*4*/])->f_1 = 0;
	((uParam0->f_531[1 /*30*/])->f_2[4 /*4*/])->f_2 = 2099654106;
	((uParam0->f_531[1 /*30*/])->f_2[4 /*4*/])->f_3 = -1;
	(uParam0->f_531[1 /*30*/])->f_23 = 1;
	(uParam0->f_531[1 /*30*/])->f_24[0] = func_1172(15);
	(uParam0->f_531[1 /*30*/])->f_24[1] = func_1172(25);
	(uParam0->f_531[1 /*30*/])->f_24[2] = func_1172(45);
	(uParam0->f_531[1 /*30*/])->f_24[3] = func_1172(75);
	uParam0->f_531[0 /*30*/] = 1069539174;
	(uParam0->f_531[0 /*30*/])->f_1 = 0;
	(uParam0->f_531[0 /*30*/])->f_2[0 /*4*/] = -1163134641;
	((uParam0->f_531[0 /*30*/])->f_2[0 /*4*/])->f_1 = -57804606;
	((uParam0->f_531[0 /*30*/])->f_2[0 /*4*/])->f_2 = 0;
	((uParam0->f_531[0 /*30*/])->f_2[0 /*4*/])->f_3 = -1;
	(uParam0->f_531[0 /*30*/])->f_2[1 /*4*/] = -1946608662;
	((uParam0->f_531[0 /*30*/])->f_2[1 /*4*/])->f_1 = 926019081;
	((uParam0->f_531[0 /*30*/])->f_2[1 /*4*/])->f_2 = 482064073;
	((uParam0->f_531[0 /*30*/])->f_2[1 /*4*/])->f_3 = func_1172(30);
	(uParam0->f_531[0 /*30*/])->f_2[2 /*4*/] = -1651982583;
	((uParam0->f_531[0 /*30*/])->f_2[2 /*4*/])->f_1 = 552518019;
	((uParam0->f_531[0 /*30*/])->f_2[2 /*4*/])->f_2 = 905767243;
	((uParam0->f_531[0 /*30*/])->f_2[2 /*4*/])->f_3 = func_1172(45);
	(uParam0->f_531[0 /*30*/])->f_2[3 /*4*/] = -542883057;
	((uParam0->f_531[0 /*30*/])->f_2[3 /*4*/])->f_1 = 1002010396;
	((uParam0->f_531[0 /*30*/])->f_2[3 /*4*/])->f_2 = 432025806;
	((uParam0->f_531[0 /*30*/])->f_2[3 /*4*/])->f_3 = func_1172(55);
	(uParam0->f_531[0 /*30*/])->f_2[4 /*4*/] = 0;
	((uParam0->f_531[0 /*30*/])->f_2[4 /*4*/])->f_1 = 0;
	((uParam0->f_531[0 /*30*/])->f_2[4 /*4*/])->f_2 = 2099654106;
	((uParam0->f_531[0 /*30*/])->f_2[4 /*4*/])->f_3 = -1;
	(uParam0->f_531[0 /*30*/])->f_23 = 1;
	(uParam0->f_531[0 /*30*/])->f_24[0] = func_1172(15);
	(uParam0->f_531[0 /*30*/])->f_24[1] = func_1172(25);
	(uParam0->f_531[0 /*30*/])->f_24[2] = func_1172(40);
	(uParam0->f_531[0 /*30*/])->f_24[3] = func_1172(50);
	uParam0->f_531[2 /*30*/] = -2146471150;
	(uParam0->f_531[2 /*30*/])->f_1 = 0;
	(uParam0->f_531[2 /*30*/])->f_2[0 /*4*/] = 1973763900;
	((uParam0->f_531[2 /*30*/])->f_2[0 /*4*/])->f_1 = 1507459390;
	((uParam0->f_531[2 /*30*/])->f_2[0 /*4*/])->f_2 = 0;
	((uParam0->f_531[2 /*30*/])->f_2[0 /*4*/])->f_3 = -1;
	(uParam0->f_531[2 /*30*/])->f_2[1 /*4*/] = 1201857340;
	((uParam0->f_531[2 /*30*/])->f_2[1 /*4*/])->f_1 = 1813751233;
	((uParam0->f_531[2 /*30*/])->f_2[1 /*4*/])->f_2 = -1620504213;
	((uParam0->f_531[2 /*30*/])->f_2[1 /*4*/])->f_3 = func_1172(60);
	(uParam0->f_531[2 /*30*/])->f_2[2 /*4*/] = 374407321;
	((uParam0->f_531[2 /*30*/])->f_2[2 /*4*/])->f_1 = 2101200901;
	((uParam0->f_531[2 /*30*/])->f_2[2 /*4*/])->f_2 = -1314015756;
	((uParam0->f_531[2 /*30*/])->f_2[2 /*4*/])->f_3 = func_1172(90);
	(uParam0->f_531[2 /*30*/])->f_2[3 /*4*/] = 679585018;
	((uParam0->f_531[2 /*30*/])->f_2[3 /*4*/])->f_1 = -1884656418;
	((uParam0->f_531[2 /*30*/])->f_2[3 /*4*/])->f_2 = 2137248097;
	((uParam0->f_531[2 /*30*/])->f_2[3 /*4*/])->f_3 = func_1172(110);
	(uParam0->f_531[2 /*30*/])->f_2[4 /*4*/] = 0;
	((uParam0->f_531[2 /*30*/])->f_2[4 /*4*/])->f_1 = 0;
	((uParam0->f_531[2 /*30*/])->f_2[4 /*4*/])->f_2 = 2099654106;
	((uParam0->f_531[2 /*30*/])->f_2[4 /*4*/])->f_3 = -1;
	(uParam0->f_531[2 /*30*/])->f_23 = 1;
	(uParam0->f_531[2 /*30*/])->f_24[0] = func_1172(8);
	(uParam0->f_531[2 /*30*/])->f_24[1] = func_1172(10);
	(uParam0->f_531[2 /*30*/])->f_24[2] = func_1172(15);
	(uParam0->f_531[2 /*30*/])->f_24[3] = func_1172(20);
	uParam0->f_531[3 /*30*/] = -2087690276;
	(uParam0->f_531[3 /*30*/])->f_1 = 0;
	(uParam0->f_531[3 /*30*/])->f_2[0 /*4*/] = 840935239;
	((uParam0->f_531[3 /*30*/])->f_2[0 /*4*/])->f_1 = 1470166745;
	((uParam0->f_531[3 /*30*/])->f_2[0 /*4*/])->f_2 = 0;
	((uParam0->f_531[3 /*30*/])->f_2[0 /*4*/])->f_3 = -1;
	(uParam0->f_531[3 /*30*/])->f_2[1 /*4*/] = 2020258780;
	((uParam0->f_531[3 /*30*/])->f_2[1 /*4*/])->f_1 = 1123011959;
	((uParam0->f_531[3 /*30*/])->f_2[1 /*4*/])->f_2 = 548799892;
	((uParam0->f_531[3 /*30*/])->f_2[1 /*4*/])->f_3 = func_1172(220);
	(uParam0->f_531[3 /*30*/])->f_2[2 /*4*/] = 1187500183;
	((uParam0->f_531[3 /*30*/])->f_2[2 /*4*/])->f_1 = 742826021;
	((uParam0->f_531[3 /*30*/])->f_2[2 /*4*/])->f_2 = 1316282641;
	((uParam0->f_531[3 /*30*/])->f_2[2 /*4*/])->f_3 = func_1172(325);
	(uParam0->f_531[3 /*30*/])->f_2[3 /*4*/] = 181229727;
	((uParam0->f_531[3 /*30*/])->f_2[3 /*4*/])->f_1 = -1952031021;
	((uParam0->f_531[3 /*30*/])->f_2[3 /*4*/])->f_2 = -2076291933;
	((uParam0->f_531[3 /*30*/])->f_2[3 /*4*/])->f_3 = func_1172(300);
	(uParam0->f_531[3 /*30*/])->f_2[4 /*4*/] = 0;
	((uParam0->f_531[3 /*30*/])->f_2[4 /*4*/])->f_1 = 0;
	((uParam0->f_531[3 /*30*/])->f_2[4 /*4*/])->f_2 = 2099654106;
	((uParam0->f_531[3 /*30*/])->f_2[4 /*4*/])->f_3 = -1;
	(uParam0->f_531[3 /*30*/])->f_23 = 0;
	uParam0->f_531[4 /*30*/] = 2108789685;
	(uParam0->f_531[4 /*30*/])->f_1 = 0;
	((uParam0->f_531[4 /*30*/])->f_2[1 /*4*/])->f_1 = -912712840;
	((uParam0->f_531[4 /*30*/])->f_2[1 /*4*/])->f_2 = -1497934411;
	((uParam0->f_531[4 /*30*/])->f_2[1 /*4*/])->f_3 = func_1172(450);
	((uParam0->f_531[4 /*30*/])->f_2[2 /*4*/])->f_1 = 0;
	((uParam0->f_531[4 /*30*/])->f_2[2 /*4*/])->f_2 = 2099654106;
	((uParam0->f_531[4 /*30*/])->f_2[2 /*4*/])->f_3 = -1;
	(uParam0->f_531[4 /*30*/])->f_23 = 0;
	uParam0->f_531[5 /*30*/] = -480748016;
	(uParam0->f_531[5 /*30*/])->f_1 = 0;
	((uParam0->f_531[5 /*30*/])->f_2[1 /*4*/])->f_1 = -1503751759;
	((uParam0->f_531[5 /*30*/])->f_2[1 /*4*/])->f_2 = -492500419;
	((uParam0->f_531[5 /*30*/])->f_2[1 /*4*/])->f_3 = func_1172(175);
	((uParam0->f_531[5 /*30*/])->f_2[2 /*4*/])->f_1 = 0;
	((uParam0->f_531[5 /*30*/])->f_2[2 /*4*/])->f_2 = 2099654106;
	((uParam0->f_531[5 /*30*/])->f_2[2 /*4*/])->f_3 = -1;
	(uParam0->f_531[5 /*30*/])->f_23 = 0;
	uParam0->f_531[6 /*30*/] = 2011014118;
	(uParam0->f_531[6 /*30*/])->f_1 = 0;
	((uParam0->f_531[6 /*30*/])->f_2[1 /*4*/])->f_1 = 2107034732;
	((uParam0->f_531[6 /*30*/])->f_2[1 /*4*/])->f_2 = 351632167;
	((uParam0->f_531[6 /*30*/])->f_2[1 /*4*/])->f_3 = func_1172(225);
	((uParam0->f_531[6 /*30*/])->f_2[2 /*4*/])->f_1 = 0;
	((uParam0->f_531[6 /*30*/])->f_2[2 /*4*/])->f_2 = 2099654106;
	((uParam0->f_531[6 /*30*/])->f_2[2 /*4*/])->f_3 = -1;
	(uParam0->f_531[6 /*30*/])->f_23 = 0;
	uParam0->f_531[7 /*30*/] = -594525626;
	(uParam0->f_531[7 /*30*/])->f_1 = 0;
	((uParam0->f_531[7 /*30*/])->f_2[1 /*4*/])->f_1 = 2006016232;
	((uParam0->f_531[7 /*30*/])->f_2[1 /*4*/])->f_2 = 385851330;
	((uParam0->f_531[7 /*30*/])->f_2[1 /*4*/])->f_3 = func_1172(300);
	((uParam0->f_531[7 /*30*/])->f_2[2 /*4*/])->f_1 = 0;
	((uParam0->f_531[7 /*30*/])->f_2[2 /*4*/])->f_2 = 2099654106;
	((uParam0->f_531[7 /*30*/])->f_2[2 /*4*/])->f_3 = -1;
	(uParam0->f_531[7 /*30*/])->f_23 = 0;
}

bool func_849()
{
	int iVar0;
	
	iVar0 = func_1173();
	return iVar0 <= -160;
}

bool func_850()
{
	int iVar0;
	
	iVar0 = func_1173();
	return iVar0 >= 160;
}

var func_851()
{
	return Global_23117.f_1768;
}

int func_852(int iParam0)
{
	if (func_56() != -1)
	{
		return 0;
	}
	if (!func_491(iParam0))
	{
		return 0;
	}
	return func_269(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

var func_853()
{
	return Global_1357549->f_1900;
}

int func_854(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (((uParam0->f_531[iVar0 /*30*/])->f_2[iVar1 /*4*/])->f_3 != -1)
			{
				iVar2 = (iVar2 + ((uParam0->f_531[iVar0 /*30*/])->f_2[iVar1 /*4*/])->f_3);
			}
			iVar1++;
		}
		iVar0++;
	}
	return iVar2 * 100;
}

int func_855()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

int func_856()
{
	int iVar0;
	
	iVar0 = func_146();
	if (iVar0 == 6 || iVar0 == 5)
	{
		return 0;
	}
	if (iVar0 == 3 && !func_148(28))
	{
		return 0;
	}
	if ((((func_232(-625309660, 0) || func_232(-218211995, 0)) || func_232(443165194, 0)) || func_232(1685749736, 0)) || func_855())
	{
		return 1;
	}
	return 0;
}

int func_857(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		
		case 2139774588:
			return 1;
		
		case 1142025875:
			return 2;
		
		case 1587891565:
			return 4;
		
		case 1877013492:
			return 32;
		
		case -643014279:
			return 64;
		
		case -597116214:
			return 128;
		
		case 551416228:
			return 256;
		
		case 1022576842:
			return 512;
		
		case 953325896:
			return 1024;
		
		case 508358508:
			return 2048;
		
		case -735200598:
			return 4096;
		
		case -856432278:
			return 8192;
		
		case -2010847721:
			return 16384;
		
		case 446961221:
			return 32768;
		
		case -1972216640:
			return 65536;
		
		case 530833824:
			return 131072;
		
		case 1682361219:
			return 262144;
		
		case 158959085:
			return 524288;
		
		case 1919819559:
			return 1048576;
		
		case 1461411082:
			return 2097152;
		
		case -549508280:
			return 4194304;
		
		default:
			break;
	}
	return 0;
}

int func_858(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		
		case 1:
			return -2;
		
		case 2:
			return -5;
		
		case 3:
			return -10;
		
		case 4:
			return -20;
		
		case 5:
			return -40;
		
		case 6:
			return -160;
		
		case 7:
			return -320;
		
		case 8:
			return -480;
		
		case 18:
			return -640;
		
		case 9:
			return 0;
		
		case 10:
			return 1;
		
		case 11:
			return 2;
		
		case 12:
			return 5;
		
		case 13:
			return 10;
		
		case 14:
			return 20;
		
		case 15:
			return 40;
		
		case 16:
			return 160;
		
		case 17:
			return 640;
		
		default:
			break;
	}
	return 0;
}

void func_859(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;
	
	iVar0 = func_1173();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1174(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_671(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_147())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_1175(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1173();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || iParam7)
	{
		iVar6 = func_1176(iVar1);
		func_1178(func_1177(), 0, 4000);
		func_1179(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_1180(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_654(func_1181(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_858(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_1182(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1101(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1101(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_654(func_1181(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_858(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_1182(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1101(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1101(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_1181(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_1183(10, 1);
	}
}

void func_860(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

bool func_861(int iParam0)
{
	return ((iParam0 == Global_1357549->f_1497 && Global_1357549->f_1497.f_5 >= 4) && Global_1357549->f_1497.f_5 < 11);
}

int func_862(int iParam0, bool bParam1)
{
	int iVar0;
	struct<15> Var1;
	
	if (!func_495(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]))
	{
		return 0;
	}
	if (func_344(iParam0, 0))
	{
		func_1184(iParam0, 1);
		return 1;
	}
	if (!func_1185())
	{
		return 0;
	}
	if (bParam1)
	{
		func_532(iParam0, 0, "Adding to Group");
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == -1)
		{
			(*Global_1359489)[iVar0] = iParam0;
		}
		else
		{
			iVar0++;
		}
	}
	func_1184(iParam0, 1);
	Global_1359489->f_15 = func_773(1);
	func_531(iParam0, 32, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], -1247684992);
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, true);
	PED::_0x9238A3D970BBB0A9(Global_1360165[iParam0 /*1157*/], -1972074710);
	PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, true);
	if (COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())) != 234527101)
	{
		COMPANION::_0x0DE02DA3C0F66955(func_177(iParam0), COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())));
		COMPANION::_0x61BDA07407754A5C(func_177(iParam0), Global_1391438->f_414.f_37);
	}
	PED::_0x89E59DBD15E21177(func_771(), 0);
	func_1186(iParam0);
	Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	Var1.f_12 = 3;
	Var1.f_3 = Global_1360165[iParam0 /*1157*/];
	Var1.f_7 = func_133();
	Var1.f_8 = 0;
	Var1.f_11 = 10;
	Var1.f_14 = Global_1360165[iParam0 /*1157*/];
	MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	return 1;
}

Vector3 func_863(vector3 vParam0, float fParam3)
{
	float fVar0;
	
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

Vector3 func_864(vector3 vParam0, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, float fParam10, int iParam11, int iParam12, float fParam13)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	struct<5> Var15;
	struct<5> Var20;
	var uVar25;
	var uVar26;
	
	fVar2 = 9999999f;
	func_1187(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1056() == 0 && !func_1188(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1189(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		iVar10 = func_1190();
		if (VOLUME::_0x92A78D0BEDB332A3(iVar10))
		{
		}
	}
	if (!func_257(Global_1310720->f_21))
	{
		fParam10 = iParam11;
	}
	Var15.f_2 = 723128514;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar25, &Var15);
	while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar26, &Var20);
		while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var20, uVar26) > iVar1)
		{
			vVar7 = { func_1191(iVar0, iVar1) };
			bVar11 = func_1192(iVar0, iVar1);
			fVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((fVar3 < fVar2 && fVar3 > fParam10) && !func_211(vVar7)) && func_1193(iVar0, iParam8, iParam12)) && !func_1194(iVar0)) || bVar11)
			{
				if (func_1195(vVar7, iVar0, iVar1, bParam5, bParam6, bVar14, iVar10, bParam9, fParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = BUILTIN::VDIST(vParam0, vVar7);
					*uParam3 = iVar0;
					*uParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					VOLUME::_0x748C5F51A18CB8F0(1);
					return vVar4;
				}
			}
		}
	}

void func_865(struct<16> Param0, int iParam16)
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_1196(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_1197(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
		{
			*((*Global_1934603)[iVar0 /*16*/]) = { Param0 };
			Global_1934603->f_161++;
			func_1198(iParam16);
			return;
		}
		iVar0++;
	}
}

void func_866(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

int func_867(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!func_495(iParam0))
	{
		return 0;
	}
	if (iParam1 && !func_1164(iParam0))
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		return 1;
	}
	iVar0 = iParam2;
	if (func_759(iVar0, 1))
	{
		if (func_1199(iParam0) && !func_1200(iParam0))
		{
			return 1;
		}
	}
	if (func_759(iVar0, 2))
	{
		if (!func_1199(iParam0))
		{
			return 1;
		}
	}
	if (func_759(iVar0, 4))
	{
		if (func_1200(iParam0))
		{
			return 1;
		}
	}
	if (func_759(iVar0, 8))
	{
		if (func_1201(iParam0) && !func_1200(iParam0))
		{
			return 1;
		}
	}
	if (func_759(iVar0, 16))
	{
		if (!func_1201(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_868(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::IS_PED_INJURED(Global_35))
		{
			if (PED::_0xB676EFDA03DADA52(iParam0, 0) == Global_35)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 308778731, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1002303471, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
			}
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 0f);
	if (func_448(iParam0, 1041577989))
	{
		return 0;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_869(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	return func_1202(vVar0, vVar3, vParam1);
}

bool func_870(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_871(int iParam0, int iParam1)
{
	func_1203(iParam0, iParam1);
}

int func_872(int iParam0, int iParam1)
{
	float fVar0;
	
	if (!func_448(iParam0, 1041577989))
	{
		return 1;
	}
	fVar0 = TASK::_0xA710DC5D25F8B942(iParam0, 1041577989);
	if (func_759(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return 1;
		}
		return 0;
	}
	if (func_759(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return 1;
		}
		return 0;
	}
	if (func_759(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_873(int iParam0, int iParam1)
{
	func_841(iParam0, iParam1);
}

Vector3 func_874(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

int func_875(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_1204(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_876(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_0xC346A546612C49A9(iParam0))
	{
		iVar0 = func_1205(iParam0);
		if (!func_889(iVar0, 0))
		{
			iVar0 = func_1206(iParam0);
		}
	}
	else
	{
		iVar0 = func_1206(iParam0);
	}
	return iVar0;
}

int func_877(int iParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14[15];
	int iVar45;
	int iVar46;
	
	if (!func_889(iParam0, 0))
	{
		return 0;
	}
	*iParam2 = 0;
	Var0 = { func_1207(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, 0, 0) };
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var0, &iVar10, 1);
	if (iVar11 != -1)
	{
		iVar12 = 0;
		while (iVar12 < iVar10)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar12, &iVar13))
			{
				if (func_1208(iVar13, iParam1, &Var14, &iVar45, 1, 0))
				{
					iVar46 = 0;
					while (iVar46 < iVar45)
					{
						if (iParam0 == &Var14[iVar46 /*2*/])
						{
							*iParam2 = (*iParam2 + (Var14[iVar46 /*2*/])->f_1);
						}
						iVar46++;
					}
				}
			}
			iVar12++;
		}
		ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar11);
	}
	return 1;
}

int func_878(int iParam0)
{
	if ((func_892(iParam0, -839724752) || func_892(iParam0, -887064662)) || func_892(iParam0, 1286414894))
	{
		return 1;
	}
	return 0;
}

int func_879(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
	}
	return 0;
}

int func_880(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

int func_881()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_882(int iParam0)
{
	return iParam0 != 0;
}

int func_883(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_884(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_885(int iParam0)
{
	if (!func_493(iParam0))
	{
		return 0;
	}
	return func_1209(func_883(iParam0));
}

int func_886(int iParam0)
{
	int iVar0;
	
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_1210(iVar0);
}

int func_887(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		
		case -1889597427:
			return 0;
		
		case -1884748965:
			return 32;
		
		case -1586649372:
			return 33;
		
		case -1506259487:
			return 5;
		
		case -1505978566:
			return 22;
		
		case -1489346253:
			return 38;
		
		case -1364808185:
			return 19;
		
		case -1292426046:
			return 8;
		
		case -1197751823:
			return 20;
		
		case -1176744536:
			return 24;
		
		case -1130865351:
			return 31;
		
		case -1130352927:
			return 1;
		
		case -893163968:
			return 17;
		
		case -735900586:
			return 28;
		
		case -676503695:
			return 6;
		
		case -450913544:
			return 18;
		
		case -426430150:
			return 29;
		
		case -358215195:
			return 39;
		
		case -338487716:
			return 11;
		
		case -207860920:
			return 26;
		
		case 99217379:
			return 27;
		
		case 304805134:
			return 21;
		
		case 383349088:
			return 7;
		
		case 389988485:
			return 2;
		
		case 673166414:
			return 25;
		
		case 788010710:
			return 34;
		
		case 1108822547:
			return 10;
		
		case 1145151482:
			return 23;
		
		case 1250092473:
			return 16;
		
		case 1367443060:
			return 4;
		
		case 1422688607:
			return 9;
		
		case 1600962399:
			return 13;
		
		case 1672288269:
			return 15;
		
		case 1742327865:
			return 12;
		
		case 1780904876:
			return 3;
		
		case 1788623170:
			return 30;
		
		case 1849504272:
			return 14;
		
		case 1900541263:
			return 37;
		
		case 1958421083:
			return 35;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_888()
{
	if (Global_1946804->f_2793)
	{
		return 1;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946804->f_2791)) < 1250)
	{
		return 1;
	}
	if (func_1211())
	{
		return 1;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return 1;
	}
	return 0;
}

int func_889(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_890(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_889(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_997(iParam0);
	if (iVar0 == -427144552)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_1212(iParam0, 1))
		{
			return false;
		}
	}
	return func_668(iParam0, 0, bParam2) >= iParam1;
}

int func_891(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_501(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_892(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_893()
{
	int iVar0;
	
	iVar0 = 1549701178;
	switch (func_1213())
	{
		case 0:
			iVar0 = 1549701178;
			break;
		
		case 3:
			iVar0 = 949387044;
			break;
		
		case 1:
			iVar0 = -22529868;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_894()
{
	int iVar0;
	
	iVar0 = 614608656;
	switch (func_1213())
	{
		case 0:
			iVar0 = 614608656;
			break;
		
		case 3:
			iVar0 = -1290316291;
			break;
		
		case 1:
			iVar0 = 1918034163;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_895()
{
	int iVar0;
	
	iVar0 = -1832677570;
	switch (func_1213())
	{
		case 0:
			iVar0 = -1832677570;
			break;
		
		case 3:
			iVar0 = -362314920;
			break;
		
		case 1:
			iVar0 = -1336137422;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_896()
{
	int iVar0;
	
	iVar0 = 1623252156;
	switch (func_1213())
	{
		case 0:
			iVar0 = 1623252156;
			break;
		
		case 3:
			iVar0 = -1469902924;
			break;
		
		case 1:
			iVar0 = 170763280;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

struct<2> func_897(float fParam0)
{
	char cVar0[16];
	
	if (fParam0 <= 30f)
	{
		StringCopy(&cVar0, "~COLOR_RED~", 16);
	}
	else if (fParam0 <= 75f)
	{
		StringCopy(&cVar0, "~COLOR_WHITE~", 16);
	}
	else
	{
		StringCopy(&cVar0, "~COLOR_YELLOW~", 16);
	}
	return cVar0;
}

int func_898(var uParam0)
{
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_ANY_BOAT(Global_35)) && PED::_0x4E76CB57222A00E5(Global_35) == -1)
	{
		*uParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_899(var uParam0, int iParam1)
{
	if (uParam0->f_3483.f_1 != iParam1)
	{
		uParam0->f_3483.f_1 = iParam1;
	}
}

int func_900(bool bParam0, float fParam1, int iParam2, float fParam3)
{
	int iVar0;
	float fVar1;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		return 1;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 1;
	}
	func_1214(1);
	if (!VEHICLE::IS_VEHICLE_STOPPED(iVar0) && !VEHICLE::_0x404527BC03DA0E6C(iVar0))
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iVar0, fParam1, iParam2, false);
	}
	else
	{
		fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
		if (MISC::ABSF(fVar1) <= fParam3)
		{
			func_1215(&iVar0);
			if (!bParam0)
			{
				return 1;
			}
			else if (!func_448(Global_35, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
			}
		}
	}
	return 0;
}

bool func_901(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_902(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	
	if (!func_527(iParam0))
	{
		return 0;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_269(((*Global_1835011)[4 /*74*/])->f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				
				case 3:
					if (func_1216(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				
				case 4:
					iVar1[0] = -268604689;
					break;
				
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				
				case 8:
					iVar1[0] = -268604689;
					break;
				
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				
				case 10:
					if (func_269(((*Global_1347702)[63 /*49*/])->f_15, 1) || func_128(((*Global_1347702)[63 /*49*/])->f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				
				case 14:
					iVar1[0] = -268604689;
					break;
				
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				
				case 17:
					if (func_1216(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				
				case 18:
					if (!func_269(((*Global_1835011)[14 /*74*/])->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_402(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				
				case 3:
					if (func_1216(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				
				case 4:
					iVar1[0] = -922193456;
					break;
				
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				
				case 11:
					if (func_269(((*Global_1347702)[134 /*49*/])->f_15, 1) || func_128(((*Global_1347702)[134 /*49*/])->f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				
				case 18:
					iVar1[0] = -922193456;
					break;
				
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				
				case 26:
					iVar1[0] = -268604689;
					break;
				
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 2:
					if (func_269(((*Global_1835011)[38 /*74*/])->f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				
				default:
					iVar1[0] = 1593315648;
					break;
			}
			break;
		
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				
				case 3:
					if (func_1216(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				
				case 4:
					iVar1[0] = -922193456;
					break;
				
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				
				case 11:
					iVar1[0] = -2051275045;
					break;
				
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				
				case 18:
					iVar1[0] = -922193456;
					break;
				
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				
				case 26:
					iVar1[0] = -268604689;
					break;
				
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				
				case 14:
					iVar1[0] = -426171916;
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				
				case 4:
					if (func_232(747937920, 1) && !func_269(((*Global_1347702)[1 /*49*/])->f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
	}
	if (iParam3 && ENTITY::DOES_ENTITY_EXIST(func_177(iParam0)))
	{
		iVar10 = 0;
		while (iVar10 < iVar7)
		{
			if (&iVar1[iVar10] == (Global_40.f_4942[iParam0 /*60*/])->f_3)
			{
				bVar9 = true;
				iVar8 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
			}
			iVar10++;
		}
	}
	if (!bVar9)
	{
		iVar11 = 0;
		if (iVar7 > 0 && bParam2)
		{
			iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
		}
		iVar8 = &iVar1[iVar11];
	}
	if (!func_538(iParam0, iVar8))
	{
		iVar8 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
	}
	return iVar8;
}

int func_903(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return 1;
		
		default:
			break;
	}
	return 0;
}

bool func_904(int iParam0, bool bParam1)
{
	if (!func_527(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_343(iParam0) || func_528(iParam0, 44, 1))
		{
			return false;
		}
	}
	return MISC::ARE_STRINGS_EQUAL(&(((*Global_1360165)[iParam0 /*1157*/])->f_48), "Sleep");
}

struct<7> func_905(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
{
	struct<7> Var0;
	
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_3 = { vParam2 };
	Var0.f_2 = uParam8;
	Var0.f_6 = 0;
	if (bParam5)
	{
		MISC::SET_BIT(&(Var0.f_6), 0);
	}
	if (bParam6)
	{
		MISC::SET_BIT(&(Var0.f_6), 1);
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(Var0.f_6), 2);
	}
	if (bParam9)
	{
		MISC::SET_BIT(&(Var0.f_6), 3);
	}
	return Var0;
}

void func_906(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_527(iParam0))
	{
		return;
	}
	iVar0 = func_177(iParam0);
	func_1217(iVar0);
	func_531(iParam0, 60, 1);
	if (bParam1)
	{
		func_1218(iParam0);
	}
}

void func_907(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_527(iParam0))
	{
		return;
	}
	iVar0 = func_177(iParam0);
	func_1219(iVar0);
	func_416(iParam0, 60, 1);
	if (bParam1)
	{
		func_1220(iParam0);
	}
}

void func_908(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_527(iParam0))
	{
		return;
	}
	iVar0 = func_177(iParam0);
	func_1221(iVar0);
	if (iParam0 == 14)
	{
		func_1222(iVar0);
	}
	func_531(iParam0, 61, 1);
	if (bParam1)
	{
		func_1223(iParam0);
	}
}

void func_909(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_527(iParam0))
	{
		return;
	}
	iVar0 = func_177(iParam0);
	func_1224(iVar0);
	func_416(iParam0, 61, 1);
	if (bParam1)
	{
		func_1225(iParam0);
	}
}

int func_910(var uParam0)
{
	return uParam0;
}

bool func_911(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_0x772A1969F649E902(iVar0);
}

bool func_912(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_527(iParam0))
	{
		return false;
	}
	func_1226(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_65[iVar0]), iVar1);
}

int func_913(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_914(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 178615350:
			return 331645018;
		
		case 2094043703:
			return -1395382793;
		
		case -695701225:
			return -1090160065;
		
		case 404503428:
			return -1704514526;
		
		case -1268239471:
			return -1832874334;
		
		case -1874208704:
			return 1680324116;
		
		case 1593315648:
			return 989578874;
		
		case -1559986688:
			return 174754238;
		
		case 1071744295:
			return -2065784734;
		
		case 977450639:
			return 2111449038;
		
		case 1901494236:
			return 1245083301;
		
		case 713940276:
			return -1949892659;
		
		case 1744281750:
			return -663077666;
		
		case 283037683:
			return 1996046145;
		
		case -2051275045:
			return -306710010;
		
		case 1495063555:
			return -339275545;
		
		case 1046468203:
			return 393090546;
		
		case 1018353621:
			return 114272443;
		
		case -433615745:
			return 643643053;
		
		case 777603945:
			return -328334844;
		
		case -1668922931:
			return -1915831038;
		
		case -1341683964:
			return 1689938120;
		
		case 928493661:
			return 861275228;
		
		case 431390894:
			return -20643141;
		
		case -301101630:
			return -1187204983;
		
		case -1155031950:
			return 1883650185;
		
		case -1248623443:
			return -1437962122;
		
		case 350498312:
			return 1959714099;
		
		case -481967001:
			return 1833893952;
		
		case 513932985:
			return 505715365;
		
		case -193269670:
			return -1774801049;
		
		case -1684458716:
			return 1976273473;
		
		case -973332710:
			return -2045878709;
		
		case 1658153743:
			return -2072429185;
		
		case 1842975347:
			return 491764525;
		
		case -1678882891:
			return -1638703055;
		
		case -268604689:
			return -1496612359;
		
		case 1818898449:
			return 30596609;
		
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return 41788943;
				
				default:
					break;
			}
			return -99272505;
		
		case 1205492208:
			return 1598276604;
		
		case 1199580439:
			return -1443192745;
		
		case -310473775:
			return -877585857;
		
		case -1632589543:
			return 1052055818;
		
		case -1862464078:
			return 1895628185;
		
		case 296923297:
			iVar0 = func_1227(296923297, iParam1);
			return func_1228(iVar0);
		
		case -2040275819:
			return 464906090;
		
		case -1114682645:
			return 744097966;
		
		case -1414977761:
			return 1059434053;
		
		case 1237718549:
			iVar0 = func_1227(1237718549, iParam1);
			return func_1228(iVar0);
		
		case -23947011:
			return -456769142;
		
		case 1295334688:
			return 869636257;
		
		case 1200878026:
			return 1560123389;
		
		case -1692022104:
			return -1851470579;
		
		case 707545953:
			return 890352471;
		
		case -1532979576:
			return 1391951221;
		
		case -1642335258:
			return -1491647079;
		
		case 876797088:
			return 1309207681;
		
		case -1587546924:
			return -1303789247;
		
		case 961676983:
			return -1527307534;
		
		case 1300659195:
			return -309158751;
		
		case -571427255:
			return -251280159;
		
		case 837028314:
			return -20984612;
		
		case -1394723994:
			return -1857650992;
		
		case -1335291723:
			return -1120526485;
		
		case -445211559:
			return -757536090;
		
		case -946772361:
			return 646599895;
		
		case 1950972546:
			return -1699183538;
		
		case -1092189504:
			return 389057251;
		
		case 80515440:
			return -2137653778;
		
		case 6418928:
			return -211106360;
		
		case -1648322231:
			return 1074183062;
		
		case -1065026089:
			return 1087308308;
		
		case 2062813606:
			return 1709174532;
		
		case 876535472:
			return -1916145078;
		
		case -1205468859:
			return -757536090;
		
		case 1484386316:
			return -800489594;
		
		case 1254970547:
			return -211106360;
		
		case 867156718:
			return 241911854;
		
		case -426171916:
			return 41788943;
	}
	return 41788943;
}

bool func_915(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

int func_916(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_917(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_915(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_918(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_919(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (PED::_0xFB4891BD7578CDC1(iParam1, 1933068772))
	{
		PED::_0xD710A5007C2AC539(iParam1, 1933068772, 1);
	}
	if (PED::_0xFB4891BD7578CDC1(iParam1, 494009478))
	{
		PED::_0xD710A5007C2AC539(iParam1, 494009478, 1);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1 > 0 && func_915(iParam1, 860729266))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 860729266);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4096 > 0 && func_915(iParam1, 879715242))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 879715242);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 128 > 0 && func_915(iParam1, 1606325429))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1606325429);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 256 > 0 && func_915(iParam1, 1743550585))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1743550585);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 512 > 0 && func_915(iParam1, 1064646155))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1064646155);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1024 > 0 && func_915(iParam1, -536694793))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -536694793);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2048 > 0 && func_915(iParam1, -1304053509))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1304053509);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & -2147483648 > 0 && func_915(iParam1, 718939204))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 718939204);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 65536 > 0 && func_915(iParam1, -972364774))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -972364774);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16384 > 0 && func_915(iParam1, -1100875244))
	{
		if (PED::_0xFB4891BD7578CDC1(iParam1, -134124598))
		{
			PED::_0xD710A5007C2AC539(iParam1, -134124598, 1);
		}
		if (PED::_0xFB4891BD7578CDC1(iParam1, 2071466316))
		{
			PED::_0xD710A5007C2AC539(iParam1, 2071466316, 1);
		}
		PED::_0x1902C4CFCC5BE57C(iParam1, -1100875244);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 262144 > 0 && func_915(iParam1, 1153596794))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1153596794);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 524288 > 0 && func_915(iParam1, 1016389820))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1016389820);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1048576 > 0 && func_915(iParam1, -726966617))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -726966617);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2097152 > 0 && func_915(iParam1, 1365901568))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1365901568);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 32768 > 0 && func_915(iParam1, -1658942149))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1658942149);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 131072 > 0 && func_915(iParam1, -1980913856))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1980913856);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4194304 > 0 && func_915(iParam1, 491764525))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 491764525);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8388608 > 0 && func_915(iParam1, -76015264))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -76015264);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16777216 > 0 && func_915(iParam1, 622113465))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 622113465);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 33554432 > 0 && func_915(iParam1, 781533162))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 781533162);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 67108864 > 0 && func_915(iParam1, -271415321))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -271415321);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 134217728 > 0 && func_915(iParam1, -1683207356))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1683207356);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 268435456 > 0 && func_915(iParam1, -254794762))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -254794762);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 536870912 > 0 && func_915(iParam1, 609066278))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 609066278);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1073741824 > 0 && func_915(iParam1, -1712783565))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1712783565);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8192 > 0 && func_915(iParam1, 1544915253))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1544915253);
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_57 = 1;
	}
}

void func_920(int iParam0)
{
	func_1229(iParam0, 1);
	func_1229(iParam0, 128);
	func_1229(iParam0, 256);
	func_1229(iParam0, 512);
	func_1229(iParam0, 1024);
	func_1229(iParam0, 2048);
	func_1229(iParam0, 4096);
	func_1229(iParam0, 65536);
	func_1229(iParam0, 16384);
	func_1229(iParam0, 262144);
	func_1229(iParam0, 524288);
	func_1229(iParam0, 1048576);
	func_1229(iParam0, 2097152);
	func_1229(iParam0, 32768);
	func_1229(iParam0, 131072);
	func_1229(iParam0, 134217728);
	func_1229(iParam0, 1073741824);
}

void func_921(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		return;
	}
	if (!bParam1)
	{
		if (DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
		{
			DECORATOR::DECOR_REMOVE(Global_1360165[iParam0 /*1157*/], "wearing_bandana");
		}
	}
	else if (!DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
	{
		DECORATOR::DECOR_SET_BOOL(Global_1360165[iParam0 /*1157*/], "wearing_bandana", true);
	}
}

void func_922(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || uParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && uParam1));
	}
}

bool func_923(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	
	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case -1212426201:
		case -1101297303:
		case -594562071:
		case 416676503:
		case 860033945:
		case 970310034:
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
			break;
		
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			bVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(bVar0) || WEAPON::_0x959383DCD42040DA(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, WEAPON::_0x89CF5FF3D363311E(bVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43890 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_1230(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43890)
						{
							if (func_1230(iVar4) && iVar4 != bVar0)
							{
								bVar0 = iVar4;
							}
						}
						else if (iVar4 == bVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_56() == -1 && !func_1231(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, 0) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == bVar0 && !Global_43890) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
		}
	}
	if (bVar0 == joaat("weapon_unarmed") && iParam1 == joaat("weapon_unarmed"))
	{
		return bVar0;
	}
	else if (bVar0 == joaat("weapon_unarmed"))
	{
		switch (iParam1)
		{
			case -1101297303:
			case 416676503:
				bVar0 = 379542007;
				break;
			
			case -1212426201:
			case -594562071:
			case 860033945:
			case 970310034:
				if (func_1231(-183018591))
				{
					bVar0 = -183018591;
				}
				else
				{
					bVar0 = 379542007;
				}
				break;
			
			default:
				bVar0 = 379542007;
				break;
		}
	}
	else if (bVar0 == -164645981 && iParam0 == Global_35)
	{
		bVar0 = 1247405313;
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_1230(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, bVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_0x959383DCD42040DA(bVar0) && bVar0 != joaat("weapon_unarmed")) && !WEAPON::_0x79407D33328286C6(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::_0xD3750CCC00635FC2(bVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (iParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_1232(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_1233(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_1234(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, iParam4);
	}
	return bVar0;
}

void func_924(int iParam0)
{
	int iVar0;
	
	if (!func_527(iParam0))
	{
		return;
	}
	if (!MISC::_0x716F17F8A0419F95(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_401(iParam0);
		if (iVar0 != 0)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = _NAMESPACE48::_0x4F76E3676583D951(iVar0);
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_1);
		}
		else
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = 0;
		}
	}
}

void func_925(int iParam0)
{
	if (func_495(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_177(iParam0)))
		{
			func_547(iParam0, 67108864, 1);
			func_416(iParam0, 19, 1);
		}
	}
}

float func_926(int iParam0)
{
	if (!func_527(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

void func_927(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = func_177(iParam0);
	iVar1 = func_552(iParam0, 0);
	func_1130(iParam0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		_NAMESPACE48::_0x7B204F88F6C3D287(iVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	_NAMESPACE48::_0xFCC6DB8DBE709BC8(iVar1);
}

bool func_928(int iParam0)
{
	if (!func_527(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_929(int iParam0, int iParam1, bool bParam2)
{
	if (!func_527(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 || iParam1);
	}
	else
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 - (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 && iParam1));
	}
}

int func_930(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_527(iParam0))
	{
		return 0;
	}
	iVar0 = func_136(iParam0);
	if (func_330(iVar0, 0))
	{
		if (func_330(PED::_0xB676EFDA03DADA52(iVar0, 0), 0) && !bParam4)
		{
			return 0;
		}
		if ((iParam1 || !func_496(iParam0)) || func_928(iParam0))
		{
			if (iParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_1235(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = func_403(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_1236(iParam0);
					_NAMESPACE48::_0x7B204F88F6C3D287(func_781(iParam0, 0));
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_781(iParam0, 0));
					func_1237(iParam0);
				}
			}
			else
			{
				if (func_402(iParam0, 32768, 1))
				{
					iVar2 = func_781(iParam0, 0);
					_NAMESPACE48::_0xB65E7F733956CF25(iVar2);
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_330(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			if (func_402(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_1236(iParam0);
				_NAMESPACE48::_0x7B204F88F6C3D287(func_781(iParam0, 0));
				_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_781(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				func_1236(iParam0);
				PED::DELETE_PED(&(((*Global_1360165)[iParam0 /*1157*/])->f_124));
			}
		}
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = 0;
	func_1238(iParam0, 0);
	return 1;
}

void func_931(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_932(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_933(int iParam0)
{
	switch (func_56())
	{
		case -1:
			return (Global_40.f_4283.f_2 && iParam0) != 0;
	}
	return 0;
}

void func_934(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = 19;
	*uParam2 = 30;
	switch (iParam0)
	{
		case 0:
			*uParam3 = 22;
			*uParam4 = 20;
			break;
		
		case 1:
			*uParam3 = 22;
			*uParam4 = 55;
			break;
		
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = 23;
			*uParam4 = 30;
			break;
		
		case 11:
			*uParam3 = 22;
			*uParam4 = 30;
			break;
		
		case 10:
		case 12:
			*uParam3 = 2;
			*uParam4 = 55;
			break;
		
		case 13:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		
		case 14:
			*uParam3 = 0;
			*uParam4 = 50;
			break;
		
		case 15:
		case 16:
			*uParam3 = 23;
			*uParam4 = 50;
			break;
		
		case 17:
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 18:
		case 19:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 20:
		case 21:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 22:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		
		case 23:
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			*uParam3 = 22;
			*uParam4 = 30;
			break;
		
		case 34:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		
		case 35:
		case 36:
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 37:
		case 38:
		case 39:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 32:
		case 33:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 2:
		case 3:
			*uParam3 = 23;
			*uParam4 = 5;
			break;
	}
}

void func_935(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = 19;
	*uParam2 = 30;
	switch (iParam0)
	{
		case 0:
			*uParam3 = 23;
			*uParam4 = 30;
			break;
		
		case 1:
			*uParam3 = 22;
			*uParam4 = 55;
			break;
		
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = 3;
			*uParam4 = 40;
			break;
		
		case 10:
		case 12:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 11:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 13:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		
		case 14:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 15:
		case 16:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 17:
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 18:
		case 19:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 20:
		case 21:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 22:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		
		case 23:
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 34:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		
		case 35:
		case 36:
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 37:
		case 38:
		case 39:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 32:
		case 33:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 2:
		case 3:
			*uParam3 = 3;
			*uParam4 = 0;
			break;
	}
}

void func_936(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = 19;
	*uParam2 = 30;
	switch (iParam0)
	{
		case 0:
			*uParam3 = 22;
			*uParam4 = 20;
			break;
		
		case 1:
			*uParam3 = 22;
			*uParam4 = 55;
			break;
		
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = 23;
			*uParam4 = 30;
			break;
		
		case 10:
		case 12:
			*uParam3 = 2;
			*uParam4 = 55;
			break;
		
		case 13:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		
		case 14:
			*uParam3 = 0;
			*uParam4 = 50;
			break;
		
		case 15:
		case 16:
			*uParam3 = 23;
			*uParam4 = 50;
			break;
		
		case 17:
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 18:
		case 19:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 20:
		case 21:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 22:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		
		case 23:
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			*uParam3 = 22;
			*uParam4 = 30;
			break;
		
		case 34:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		
		case 35:
		case 36:
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 37:
		case 38:
		case 39:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 32:
		case 33:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 11:
			*uParam3 = 22;
			*uParam4 = 30;
			break;
		
		case 2:
		case 3:
			*uParam3 = 23;
			*uParam4 = 5;
			break;
	}
}

void func_937(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = 19;
	*uParam2 = 30;
	switch (iParam0)
	{
		case 0:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		
		case 1:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		
		case 11:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		
		case 10:
		case 12:
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 13:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		
		case 14:
			*uParam3 = 0;
			*uParam4 = 50;
			break;
		
		case 15:
		case 16:
			*uParam3 = 23;
			*uParam4 = 50;
			break;
		
		case 17:
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 18:
		case 19:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 20:
		case 21:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 22:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		
		case 23:
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			*uParam3 = 22;
			*uParam4 = 30;
			break;
		
		case 34:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		
		case 35:
		case 36:
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 37:
		case 38:
		case 39:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 32:
		case 33:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 2:
		case 3:
			*uParam3 = 0;
			*uParam4 = 0;
			break;
	}
}

int func_938(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_463(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_939(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_128(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_940(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	if (iVar0 == iParam0)
	{
		if (iVar1 < iParam1)
		{
			return 0;
		}
	}
	if (iVar0 == iParam2)
	{
		if (iVar1 > iParam3)
		{
			return 0;
		}
	}
	if (iVar0 < iParam0)
	{
		return 0;
	}
	if (iVar0 > iParam2)
	{
		return 0;
	}
	return 1;
}

int func_941(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	if (iVar0 < iParam0 && iVar0 > iParam2)
	{
		return 0;
	}
	if (iVar0 == iParam0)
	{
		if (iVar1 < iParam1)
		{
			return 0;
		}
	}
	if (iVar0 == iParam2)
	{
		if (iVar1 > iParam3)
		{
			return 0;
		}
	}
	return 1;
}

int func_942(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = CLOCK::GET_CLOCK_MINUTES();
	if (iVar0 > iParam3)
	{
		return 0;
	}
	if (iVar0 < iParam1)
	{
		return 0;
	}
	return 1;
}

void func_943(int iParam0, float fParam1)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case -1279776992:
		case -1179266405:
		case -689630872:
		case 312012583:
			OBJECT::_0xC8E21C1677DC5E6F(iParam0, fParam1);
			break;
	}
}

char* func_944(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

var func_945(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_1239(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_946(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_947(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_948(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_949(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		
		default:
			break;
	}
	return 30;
}

void func_950(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1240(uParam0, iParam6);
	func_1241(uParam0, iParam5);
	func_1242(uParam0, iParam4);
	func_1243(uParam0, iParam3);
	func_1244(uParam0, iParam2);
	func_1245(uParam0, iParam1);
}

bool func_951(int iParam0, int iParam1)
{
	if (func_56() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_952(int iParam0)
{
	if (func_56() != -1)
	{
		if (func_954(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_954(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_953(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_954(iParam0, 65536) && !func_954(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_954(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_954(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_954(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_955()
{
	return Global_1905944->f_5694;
}

bool func_956(int iParam0)
{
	return func_576(iParam0, 2);
}

void func_957(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_576(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_958(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_959(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

int func_960(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return 559905966;
	}
	switch (iParam0)
	{
		case -450053710:
			return 1538827865;
		
		case -1679658797:
			return -1792561227;
		
		case 1792770814:
			return 1033678910;
		
		case -1963397600:
			return -1942141178;
		
		case -1250098797:
			return 671599957;
		
		case -318278790:
			return -1554935503;
		
		case 55096099:
			return 694610769;
		
		case -458397856:
			return 1941463607;
		
		case -444610976:
			return -887316537;
		
		case 746627200:
			return 1762474047;
		
		case 705691988:
			return -828859553;
		
		case 2130094044:
			return 1410237043;
		
		case -1554827654:
			return -2026073756;
		
		case 604357666:
			return 729407854;
		
		case -1029277326:
			return 2002245664;
		
		case -1140650619:
			return -1120227140;
		
		case -1999198818:
			return 1142681594;
		
		case 1496579364:
			return 1214981718;
		
		case -1523757120:
			return -845373950;
		
		case -403470324:
			return -864588185;
		
		case 1576849913:
			return 1482814085;
		
		case -925223936:
			return -1040918754;
		
		case -1547438906:
			return 535545841;
		
		case -635239558:
			return 1686036388;
		
		case -2026265047:
			return -621245377;
		
		case -586898625:
			return 2125477381;
		
		case 937246805:
			return 1808724704;
		
		case 1593035738:
			return -1745871311;
		
		case 861505058:
			return -1366099125;
		
		case 687445866:
			return -1900776854;
		
		case 1705182311:
			return 1381855825;
		
		case -78273782:
			return -470894301;
		
		case -819697512:
			return -58297715;
		
		case -247265944:
			return 919533729;
		
		case -1516219602:
			return -1158763155;
		
		case -1265030920:
			return 1112812928;
		
		case 2024948086:
			return 753764318;
		
		case 1696286663:
			return 2100045093;
		
		case -1342159303:
			return 1097965086;
		
		case -1154406788:
			return -2136667309;
		
		case 2030804811:
			return -376463594;
		
		case 1230359523:
			return -1917318030;
		
		case -1038436471:
			return 1631640006;
		
		case -1063137731:
			return -1565311117;
		
		case 96930969:
			return 1714576673;
		
		case -1180427609:
			return 210760725;
		
		case 2119038574:
			return 2051021144;
		
		case 43825738:
			return 1924406350;
		
		case 2145697477:
			return -1990143531;
		
		case -1261814606:
			return 1741899492;
		
		case 107013696:
			return -1629575335;
		
		case 1066034872:
			return 1096294193;
		
		case 36009259:
			return -1162498792;
		
		case -1599683008:
			return -212500005;
		
		case -1693870200:
			return -538557079;
		
		case 1072019803:
			return 171150858;
		
		case 1074477367:
			return 67538819;
		
		case -85890205:
			return -126472599;
		
		case 1048964673:
			return -1219957736;
		
		case -727455979:
			return -332060056;
		
		case -1667789645:
			return 1917500091;
		
		case -1924405794:
			return -1043453945;
		
		case 1861665605:
			return 1723487083;
		
		case -526169133:
			return 2044230644;
		
		case 900144280:
			return 1680713143;
		
		case 1133837220:
			return 344528703;
		
		case 1702024301:
			return -1674873797;
		
		case -1604180548:
			return 281852151;
		
		case 1772321403:
			return -285185056;
		
		case -1028075925:
			return -1692268955;
		
		case 84224102:
			return 2130706226;
		
		case -1896838685:
			return -1754375530;
		
		case -420599285:
			return -71211764;
		
		case 478986344:
			return -1390353518;
		
		case 446670976:
			return 330935532;
		
		case 802784330:
			return -935042458;
		
		case 549900435:
			return -41062704;
		
		case -2063289686:
			return 887669186;
		
		case 917402668:
			return 2102774612;
		
		case -914712122:
			return -2011111190;
		
		case -598917269:
			return -535752499;
		
		default:
			break;
	}
	return 0;
}

bool func_961(int iParam0)
{
	return func_997(iParam0) == -1784221369;
}

struct<4> func_962(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;
	
	if (!func_889(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_507(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_963(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_1246(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1247(*uParam1, &Var0, bParam6, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_1248(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_507(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_964(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;
	
	func_1249(&iParam0);
	if (!func_889(iParam0, 0))
	{
		return 0;
	}
	if (!func_1248(0))
	{
		bParam3 = true;
	}
	if (func_1250(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
		{
			Var0 = { func_1251(0) };
			Var4.f_9 = -1591664384;
			if (!func_1252(iParam0, &Var0, 1728382685, 0))
			{
				return 0;
			}
			else if (func_1253(iParam0, &Var4, 1728382685))
			{
				return 0;
			}
			if (func_1254(iParam0, 1))
			{
				if (!func_1252(iParam0, &Var0, -649335959, 0))
				{
					return 0;
				}
				else if (func_1253(iParam0, &Var4, -649335959))
				{
					return 0;
				}
			}
		}
		else if (!func_1255(iParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_1256(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return 0;
	}
	else if (iVar27 == 0)
	{
		return 1;
	}
	if (bParam3)
	{
		iVar28 = func_1257(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_507(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_965(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_889(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_964(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_1248(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_507(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_966(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_1258(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

bool func_967(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

int func_968()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

var func_969(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_970(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;
	
	if (!func_1259(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_968())
	{
		return -1;
	}
	uVar0 = func_969(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_1260(iVar1, 0);
	func_1261(iVar1, 0);
	func_1262(iVar1, 0);
	func_1263(iVar1, 0);
	func_1264(iVar1, uVar0);
	if (iParam4 != 0)
	{
		func_1265(iVar1, iParam4);
	}
	return iVar1;
}

bool func_971(int iParam0, int iParam1)
{
	return func_870((Global_1914319->f_3[iParam0 /*446*/])->f_6, iParam1);
}

int func_972(int iParam0)
{
	int iVar0;
	
	iVar0 = func_783(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
	{
		return 0;
	}
	return _NAMESPACE48::_0x31C70A716CAE1FEE(iVar0);
}

int func_973(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_56() != -1)
	{
		return 0;
	}
	if (!func_1266(iParam0, 0))
	{
		return 0;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return 0;
	}
	iVar0 = func_783(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	VOLUME::_0xE2BE6FFA4A13CBB0(iParam1, iVar0, iParam2);
	return 1;
}

int func_974(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		
		case 59:
			return 6;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_975(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		
		case 22:
			return 17;
		
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		
		case 17:
		case 47:
			return 7;
		
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		
		case 9:
		case 37:
		case 69:
			return 8;
		
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		
		case 136:
			return 5;
		
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		
		case 48:
			return 12;
		
		case 49:
			return 13;
		
		case 50:
			return 14;
		
		case 62:
		case 79:
			return 20;
		
		case 101:
			return 11;
		
		case 149:
			return 23;
		
		case 150:
			return 24;
		
		case 151:
			return 25;
		
		case 12:
		case 54:
			return 21;
		
		case 127:
			return 34;
		
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		
		case 152:
			return 24;
		
		default:
			break;
	}
	return -1;
}

void func_976(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(&(uParam1->f_9[iParam0 /*9*/])))
	{
		OBJECT::DELETE_OBJECT(uParam1->f_9[iParam0 /*9*/]);
	}
	MISC::CLEAR_BIT(&(uParam1->f_255), iParam0);
}

int func_977(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1487530998;
		
		case 1:
			return -2107109207;
		
		case 2:
			return -74563350;
		
		case 3:
			return -74166807;
		
		default:
			break;
	}
	return 0;
}

int func_978(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1942842017;
		
		case 2:
			return -1562525601;
		
		case 3:
			return -1474583373;
		
		case 6:
			return 1273085440;
		
		default:
			break;
	}
	return 0;
}

void func_979(int iParam0, var uParam1)
{
	vector3 vVar0;
	
	vVar0 = { func_1267(uParam1->f_3, uParam1->f_3.f_3, (uParam1->f_9[iParam0 /*9*/])->f_2) };
	uParam1->f_9[iParam0 /*9*/] = OBJECT::CREATE_OBJECT((uParam1->f_9[iParam0 /*9*/])->f_1, vVar0, false, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(&(uParam1->f_9[iParam0 /*9*/]), (uParam1->f_9[iParam0 /*9*/])->f_5, 2, true);
	ENTITY::SET_ENTITY_HAS_GRAVITY(&(uParam1->f_9[iParam0 /*9*/]), true);
	ENTITY::SET_ENTITY_COLLISION(&(uParam1->f_9[iParam0 /*9*/]), true, false);
	func_1268(iParam0, uParam1);
	MISC::SET_BIT(&(uParam1->f_255), iParam0);
}

struct<14> func_980(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<14> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

int func_981(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_507(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_982(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

int func_983(int iParam0)
{
	switch (iParam0)
	{
		case 1846915545:
			if (func_1269(-1329287819, 3) == 0)
			{
				return 1;
			}
			break;
		
		case 1641833719:
			if (func_1269(765991018, 3) == 0)
			{
				return 1;
			}
			break;
		
		case -1188120304:
			if (func_1269(-837651311, 3) == 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_984(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;
	
	if (func_56() == 0)
	{
		return 0;
	}
	if (!func_889(iParam0, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_825(0) };
	Var0.f_4 = func_1270(iParam1);
	Var5 = { func_962(iParam0, Var0, Var0.f_4, 0) };
	if (!func_963(iParam0, &Var5, &Var0, iParam2, iParam3, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_985(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_986(int iParam0)
{
	if (!func_408(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1895087)[iParam0 /*3*/])->f_2);
}

void func_987(int iParam0)
{
	func_1271(func_975(iParam0));
}

int func_988()
{
	return 1;
}

int func_989()
{
	if (func_56() != 0)
	{
		return 1;
	}
	return 1;
}

var func_990(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_991(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_1272(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_992(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		
		case 2:
			return "LANDMARK_JORGES_GAP";
		
		case 3:
			return "LANDMARK_MERCER_STATION";
		
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		
		case 6:
			return "LANDMARK_SILENT_STEAD";
		
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		
		case 9:
			return "LANDMARK_TWO_CROWS";
		
		case 10:
			return "LANDMARK_REPENTANCE";
		
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		
		case 12:
			return "WATER_MANTECA_FALLS";
		
		case 13:
			return "SETTLEMENT_LIMPANY";
		
		case 14:
			return "WATER_MOUNT_SHANN";
		
		case 15:
			return "LANDMARK_THREE_SISTERS";
		
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		
		case 17:
			return "SETTLEMENT_EL_NIDO";
		
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		
		case 19:
			return "LANDMARK_ERIS_FIELD";
		
		case 20:
			return "LANDMARK_GRANITE_PASS";
		
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		
		case 26:
			return "LANDMARK_CUEVA_SECA";
		
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		
		case 29:
			return "LANDMARK_DONNER_FALLS";
		
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		
		case 35:
			return "LANDMARK_MESCALERO";
		
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		
		case 38:
			return "LANDMARK_BROKEN_TREE";
		
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		
		case 40:
			return "LANDMARK_FACE_ROCK";
		
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

int func_993(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 63:
			return 1;
	}
	return 0;
}

bool func_994(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_995(int iParam0)
{
	return func_658(iParam0, Global_1310750->f_16072 | 64);
}

void func_996(int iParam0)
{
	int iVar0;
	
	if (&Global_1310750->f_13321[iParam0 /*9*/] != -1)
	{
		((*Global_1310750)[&Global_1310750->f_13321[iParam0 /*9*/] /*111*/])->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0 /*9*/] = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_1 = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_2 = { 0f, 0f, 0f };
	(Global_1310750->f_13321[iParam0 /*9*/])->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		(Global_1310750->f_13321[iParam0 /*9*/])->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

int func_997(int iParam0)
{
	vector3 vVar0;
	
	if (!func_889(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_998(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (!func_889(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_997(iParam0);
	if (iVar0 == -427144552 && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == 307971639 && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_892(iParam0, 1399091007))
	{
		func_1273(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_999(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;
	
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_980(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1274(&Var0, func_1251(0));
	}
	if (!func_981(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_985(iVar14);
	return uVar15;
}

int func_1000(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_1001(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_1002(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		return MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0]));
	}
	return 0;
}

int func_1003(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return -160705043;
		
		case 5:
			return -726606177;
		
		case 26:
			return -49572609;
		
		case 38:
			return 417546980;
		
		case 69:
			return -117334654;
		
		case 76:
			return -357010019;
		
		case 78:
			return 719613628;
		
		case 92:
			return 1459616333;
		
		case 105:
			return 1607757565;
		
		case 115:
			return -161326102;
		
		case 120:
			return -1909997854;
		
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return -1025871137;
		
		default:
			break;
	}
	return 0;
}

Vector3 func_1004()
{
	switch (func_146())
	{
		case 1:
			return -134.29f, -34.339f, 96.1221f;
		
		case 2:
			return 653.431f, -1257.437f, 43.7682f;
		
		case 3:
			return 1889.412f, -1866.691f, 47.403f;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_1005(bool bParam0)
{
	if (bParam0)
	{
		if (((((Global_1357549->f_1672 == -774242862 || Global_1357549->f_1672 == -2100684454) || Global_1357549->f_1672 == -1167047117) || Global_1357549->f_1672 == 396444962) || Global_1357549->f_1672 == -498064062) || Global_1357549->f_1672 == 513694516)
		{
			return 1;
		}
	}
	if (func_269(((*Global_1347702)[61 /*49*/])->f_15, 1) || (func_128(((*Global_1347702)[61 /*49*/])->f_15) && func_38(16384)))
	{
		return 1;
	}
	return 0;
}

char* func_1006()
{
	switch (func_146())
	{
		case 1:
			return "script@camp_upgrade@horseshoe_overlook";
		
		case 2:
			return "script@camp_upgrade@clemens_cove";
		
		case 3:
			return "script@camp_upgrade@shady_bell";
		
		default:
			break;
	}
	return "";
}

char* func_1007(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_PEARSON_FOOD";
		
		case 1:
			return "pl_STRAUSS";
		
		case 2:
			return "pl_ARTHUR_AMMO";
		
		case 3:
			switch (func_370(10, 0))
			{
				case 2:
					return "pl_DUTCH_TENT";
				
				case 3:
					return "pl_ARTHUR_FT";
				
				case 4:
					return "pl_MISC_TENTS";
				
				default:
					break;
			}
			break;
		
		case 4:
			return "pl_BOAT";
		
		case 5:
			return "pl_CHICKEN_COOP";
		
		case 6:
			return "pl_PEARSON_TOOLS";
		
		case 7:
			return "pl_HITCHING_POST";
	}
	return "";
}

Vector3 func_1008()
{
	switch (func_146())
	{
		case 1:
			return 0f, 0f, -120.79f;
		
		case 2:
			return 0f, 0f, -71.11f;
		
		case 3:
			return 0f, 0f, 135f;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_1009(var uParam0, var uParam1)
{
	switch (uParam0->f_20)
	{
		case 6:
			func_1275(uParam0);
			func_1276(&(uParam0->f_35));
			func_1277(uParam0, uParam1);
			func_1278(uParam0);
			break;
		
		default:
			func_1279(uParam0);
			func_1280(&(uParam0->f_35));
			func_1281(uParam0);
			func_1282(uParam0);
			break;
	}
}

void func_1010(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (uParam0->f_773 && uParam0->f_772)
	{
		if (!UIAPPS::_IS_APP_ACTIVE(1749944028))
		{
			UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(1749944028, -702860656);
		}
	}
	else if (UIAPPS::_IS_APP_ACTIVE(1749944028))
	{
		UIAPPS::_CLOSE_APP_BY_HASH(1749944028);
	}
}

int func_1011(int iParam0)
{
	int iVar0[1];
	int iVar2;
	
	iVar0[0] = -180755040;
	switch (iParam0)
	{
		case 0:
			iVar2 = 0;
			while (iVar2 < iVar0)
			{
				STREAMING::REQUEST_MODEL(&(iVar0[iVar2]), false);
				iVar2++;
			}
			break;
		
		case 1:
			iVar2 = 0;
			while (iVar2 < iVar0)
			{
				if (STREAMING::HAS_MODEL_LOADED(&(iVar0[iVar2])) == 0)
				{
					return 0;
				}
				iVar2++;
			}
			break;
		
		case 2:
			iVar2 = 0;
			while (iVar2 < iVar0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(&(iVar0[iVar2]));
				iVar2++;
			}
			break;
	}
	return 1;
}

void func_1012(var uParam0, int iParam1)
{
	uParam0->f_773 = iParam1;
}

void func_1013(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(*uParam0, iParam1);
}

void func_1014(var uParam0)
{
	*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(196480927);
}

void func_1015()
{
	AUDIO::_0xD9130842D7226045("Ledger_Sounds", 0);
}

void func_1016(int* iParam0, int iParam1)
{
	if (iParam0->f_20 != iParam1)
	{
		if (func_330(Global_35, 0))
		{
			switch (iParam1)
			{
				case 6:
				case 9:
				case 10:
				case 11:
				case 12:
				case 13:
				case 14:
				case 15:
					if (func_1283(&Global_35) && func_1284(-1406972469) == -1)
					{
						func_1285(-1406972469, Global_35, 0, 1);
					}
					break;
				
				default:
					func_1286(Global_35, -1406972469, 1);
					break;
			}
		}
	}
	iParam0->f_20 = iParam1;
}

bool func_1017(var uParam0)
{
	return UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0);
}

bool func_1018()
{
	return AUDIO::_0xD9130842D7226045("Ledger_Sounds", 0);
}

void func_1019(var uParam0, var uParam1, var uParam2)
{
	func_1287((*uParam0)[0 /*118*/]);
	func_1287((*uParam0)[1 /*118*/]);
	func_1288(*uParam1, (*uParam0)[0 /*118*/]);
	func_1289(uParam1->f_1, &(((*uParam0)[0 /*118*/])->f_55), uParam2);
	func_1290(uParam1->f_2, &(((*uParam0)[0 /*118*/])->f_102), uParam2);
	func_1290(uParam1->f_3, &(((*uParam0)[0 /*118*/])->f_110), uParam2);
	func_1288(uParam1->f_4, (*uParam0)[1 /*118*/]);
	func_1289(uParam1->f_5, &(((*uParam0)[1 /*118*/])->f_55), uParam2);
	func_1290(uParam1->f_6, &(((*uParam0)[1 /*118*/])->f_102), uParam2);
	func_1290(uParam1->f_7, &(((*uParam0)[1 /*118*/])->f_110), uParam2);
}

int func_1020(struct<8> Param0, int iParam8, var uParam9, var uParam10)
{
	if (func_1291((*uParam9->f_1[iParam8 /*237*/])[0 /*118*/], uParam10))
	{
		switch (uParam10->f_4)
		{
			case 0:
				uParam10->f_1 = Param0.f_1;
				break;
			
			case 1:
				uParam10->f_1 = Param0.f_2;
				break;
			
			case 2:
				uParam10->f_1 = Param0.f_3;
				break;
		}
		uParam10->f_2 = iParam8;
		uParam10->f_3 = 0;
		*uParam10 = 1;
		return 1;
	}
	if (func_1291((*uParam9->f_1[iParam8 /*237*/])[1 /*118*/], uParam10))
	{
		switch (uParam10->f_4)
		{
			case 0:
				uParam10->f_1 = Param0.f_5;
				break;
			
			case 1:
				uParam10->f_1 = Param0.f_6;
				break;
			
			case 2:
				uParam10->f_1 = Param0.f_7;
				break;
		}
		uParam10->f_2 = iParam8;
		uParam10->f_3 = 1;
		*uParam10 = 1;
		return 1;
	}
	*uParam10 = 0;
	return 0;
}

void func_1021(var uParam0, int iParam1, vector3 vParam2, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_1292(iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(*uParam0, vParam2.x);
	iVar1 = func_370(iVar0, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_1, MISC::_CREATE_VAR_STRING(0, (vParam2.f_2[iVar1 /*4*/])->f_2));
	if ((vParam2.f_2[iVar1 /*4*/])->f_3 > 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, MISC::_CREATE_VAR_STRING(2, "LDGR_INFO_PRICE"));
		DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_3, (vParam2.f_2[iVar1 /*4*/])->f_3 * 100);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, "");
	}
}

void func_1022(var uParam0, int iParam1, struct<25> Param2, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_1292(iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(*uParam0, Param2);
	iVar1 = (func_370(iVar0, 0) - 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_1, MISC::_CREATE_VAR_STRING(2, "RESUPPLY_INFO_PANEL"));
	if (&Param2.f_24[iVar1] > 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, MISC::_CREATE_VAR_STRING(2, "LDGR_INFO_PRICE"));
		DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_3, &Param2.f_24[iVar1] * 100);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_3, 0);
	}
}

Vector3 func_1023(int iParam0)
{
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 0f, -1.066f);
}

void func_1024(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return;
	}
	UISTATEMACHINE::_UIFLOWBLOCK_ENTER(*uParam0, 0);
	UISTATEMACHINE::_UISTATEMACHINE_CREATE(func_1293(), *uParam0);
}

void func_1025(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 20;
	iVar1 = 10;
	if (MISC::IS_PC_VERSION())
	{
		iVar0 = 10;
		iVar1 = 2;
	}
	func_1295(uParam0, func_1030(iParam1, bParam2), func_1294(iParam1), 55f, iVar0, iVar1, 0.001f, 15f, 0, 0, -1082130432, 1, 0, 1044549468);
	uParam0->f_11 = iParam3;
}

void func_1026(var uParam0, bool bParam1)
{
	uParam0->f_772 = 1;
	uParam0->f_774 = MISC::GET_GAME_TIMER() + 250;
	if (bParam1)
	{
		AUDIO::PLAY_SOUND_FRONTEND("INFO_SHOW", "Ledger_Sounds", true, 0);
	}
}

void func_1027(var uParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	float fVar5;
	
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		return;
	}
	uParam0->f_29[2] = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(1, -1450761377) * 127f));
	uParam0->f_29[3] = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(1, -771458680) * 127f));
	if (PAD::IS_LOOK_INVERTED())
	{
		uParam0->f_29[3] = (&uParam0->f_29[3] * -1);
	}
	if (uParam0->f_34 == &uParam0->f_29[2] && uParam0->f_35 == &uParam0->f_29[3])
	{
		if (uParam0->f_37 < MISC::GET_GAME_TIMER())
		{
			uParam0->f_34 = 0;
			uParam0->f_35 = 0;
		}
	}
	else
	{
		uParam0->f_34 = &uParam0->f_29[2];
		uParam0->f_35 = &uParam0->f_29[3];
		uParam0->f_37 = MISC::GET_GAME_TIMER() + 4000;
	}
	uParam0->f_13.f_2 = (-(BUILTIN::TO_FLOAT(&(uParam0->f_29[2])) / 127f) * IntToFloat(uParam0->f_25));
	uParam0->f_13.f_1 = ((-uParam0->f_13.f_2 * uParam0->f_27) / IntToFloat(uParam0->f_25));
	if (PAD::IS_LOOK_INVERTED())
	{
		uParam0->f_13 = ((BUILTIN::TO_FLOAT(&(uParam0->f_29[3])) / 127f) * IntToFloat(uParam0->f_26));
	}
	else
	{
		uParam0->f_13 = (-(BUILTIN::TO_FLOAT(&(uParam0->f_29[3])) / 127f) * IntToFloat(uParam0->f_26));
	}
	fVar0 = (30f * BUILTIN::TIMESTEP());
	if (!func_1296(uParam0->f_1, uParam0->f_8))
	{
		uParam0->f_12 = (uParam0->f_12 + MISC::GET_FRAME_TIME());
		if (uParam0->f_12 > uParam0->f_11)
		{
			uParam0->f_12 = uParam0->f_11;
		}
		fVar1 = (uParam0->f_12 / uParam0->f_11);
		uParam0->f_1 = { func_1297(uParam0->f_1, uParam0->f_8, fVar1) };
	}
	vVar2 = { uParam0->f_13 + uParam0->f_16 };
	uParam0->f_19 = (uParam0->f_19 + func_1298((((vVar2.x - uParam0->f_19) * 0.05f) * fVar0), -3f, 3f));
	uParam0->f_19.f_1 = (uParam0->f_19.f_1 + func_1298((((vVar2.y - uParam0->f_19.f_1) * 0.05f) * fVar0), -3f, 3f));
	uParam0->f_19.f_2 = (uParam0->f_19.f_2 + func_1298((((vVar2.z - uParam0->f_19.f_2) * 0.05f) * fVar0), -3f, 3f));
	if (uParam0->f_36)
	{
		uParam0->f_19 = func_1298(uParam0->f_19, BUILTIN::TO_FLOAT(-uParam0->f_26), BUILTIN::TO_FLOAT(uParam0->f_26));
		uParam0->f_19.f_1 = func_1298(uParam0->f_19.f_1, -uParam0->f_27, uParam0->f_27);
		uParam0->f_19.f_2 = func_1298(uParam0->f_19.f_2, BUILTIN::TO_FLOAT(-uParam0->f_25), BUILTIN::TO_FLOAT(uParam0->f_25));
	}
	uParam0->f_22 = uParam0->f_7;
	fVar5 = PAD::GET_CONTROL_UNBOUND_NORMAL(0, 1395223413);
	if (fVar5 > 0f)
	{
		uParam0->f_22 = (uParam0->f_22 - IntToFloat(BUILTIN::ROUND((fVar5 * uParam0->f_24))));
	}
	uParam0->f_23 = (uParam0->f_23 + (((uParam0->f_22 - uParam0->f_23) * MISC::GET_FRAME_TIME()) * (2.5f / 0.65f)));
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_19, uParam0->f_23, 0, 1, 1, 2, 1, 0);
}

bool func_1028(int* iParam0)
{
	return !func_1296(iParam0->f_816.f_1, iParam0->f_816.f_8);
}

int func_1029(int* iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { CAM::GET_CAM_COORD(iParam0->f_816) };
	vVar3 = { func_1030(func_146(), 1) };
	if (vVar0.z == vVar3.z)
	{
		return 1;
	}
	return 0;
}

Vector3 func_1030(int iParam0, bool bParam1)
{
	vector3 vVar0;
	
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				vVar0 = { -134.6045f, -34.2293f, 96.5638f };
				break;
			
			case 2:
				vVar0 = { 653.1854f, -1257.589f, 44.2421f };
				break;
			
			case 3:
				vVar0 = { 1889.572f, -1866.438f, 47.8536f };
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				vVar0 = { -134.6193f, -34.3059f, 96.5245f };
				break;
			
			case 2:
				vVar0 = { 653.2174f, -1257.633f, 44.1706f };
				break;
			
			case 3:
				vVar0 = { 1889.519f, -1866.399f, 47.8054f };
				break;
		}
	}
	return vVar0;
}

void func_1031(var uParam0, vector3 vParam1, bool bParam4)
{
	if (!bParam4)
	{
		uParam0->f_1 = { vParam1 };
	}
	uParam0->f_8 = { vParam1 };
	uParam0->f_12 = 0f;
}

void func_1032(int* iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (MISC::GET_GAME_TIMER() < iParam0->f_19)
	{
		return;
	}
	bVar0 = false;
	if (PAD::IS_CONTROL_JUST_PRESSED(2, -1860390754) || PAD::IS_CONTROL_JUST_PRESSED(2, -1666616423))
	{
		bVar0 = true;
		iVar1 = 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 1141111167) || PAD::IS_CONTROL_JUST_PRESSED(2, 1669958966))
	{
		bVar0 = true;
		iVar1 = 1;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, -1384133541) || PAD::IS_CONTROL_JUST_PRESSED(2, 113281492))
	{
		bVar0 = true;
		iVar1 = 2;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 1710877787) || PAD::IS_CONTROL_JUST_PRESSED(2, 1541138497))
	{
		bVar0 = true;
		iVar1 = 3;
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2, 1138488863))
	{
		iParam0->f_860 = 1;
	}
	if (bVar0)
	{
		if (func_1299(iVar1, &(iParam0->f_35.f_491), *(iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/]), iParam0->f_35.f_2.f_1[iParam0->f_35.f_491.f_2 /*237*/]))
		{
			if (iParam0->f_35.f_491.f_1 != -1)
			{
				if (iParam0->f_35.f_491.f_5)
				{
					func_1021(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
				}
				else
				{
					func_1022(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
				}
			}
			if (Global_1357549->f_1894 > 0)
			{
				func_1300(iVar1);
			}
			iParam0->f_19 = MISC::GET_GAME_TIMER() + 250;
		}
	}
	if (func_217(iParam0->f_10, 1))
	{
		bVar2 = false;
		if (iParam0->f_35.f_491.f_5)
		{
			switch (iParam0->f_35.f_491.f_1)
			{
				case 1:
					func_1301(iParam0, 1, 4, 1, &bVar2);
					if (bVar2)
					{
						func_1302(0);
					}
					break;
				
				case 0:
					func_1301(iParam0, 0, 3, 1, &bVar2);
					if (bVar2)
					{
						func_1302(1);
					}
					break;
				
				case 2:
					func_1301(iParam0, 2, 5, 1, &bVar2);
					if (bVar2)
					{
						func_1302(2);
					}
					break;
				
				case 3:
					func_1301(iParam0, 3, 10, 1, &bVar2);
					break;
				
				case 4:
					if (func_146() == 2 || func_146() == 3)
					{
						func_1301(iParam0, 4, 13, 3, &bVar2);
					}
					break;
				
				case 5:
					func_1301(iParam0, 5, 0, 3, &bVar2);
					break;
				
				case 7:
					func_1301(iParam0, 7, 14, 1, &bVar2);
					break;
				
				case 6:
					func_1301(iParam0, 6, 12, 3, &bVar2);
					break;
			}
		}
		else
		{
			switch (iParam0->f_35.f_491.f_1)
			{
				case 1:
					func_1303(iParam0, 1, 4, &bVar2);
					break;
				
				case 0:
					func_1303(iParam0, 0, 3, &bVar2);
					break;
				
				case 2:
					func_1303(iParam0, 2, 5, &bVar2);
					break;
				
				default:
					break;
			}
		}
		if (bVar2)
		{
			if (iParam0->f_860)
			{
				func_1304();
				iParam0->f_860 = 0;
			}
			iParam0->f_19 = MISC::GET_GAME_TIMER() + 250;
		}
		else if (iParam0->f_860)
		{
			func_1305();
			iParam0->f_860 = 0;
		}
	}
}

void func_1033(var uParam0, bool bParam1)
{
	if (MISC::GET_GAME_TIMER() > uParam0->f_774)
	{
		if (uParam0->f_772)
		{
			func_1037(uParam0, bParam1);
		}
		else
		{
			func_1026(uParam0, bParam1);
		}
	}
}

void func_1034(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, false);
		}
		CAM::DESTROY_CAM(*uParam0, false);
	}
	if (uParam0->f_28)
	{
		MAP::UNLOCK_MINIMAP_ANGLE();
		uParam0->f_28 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0f;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0f;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_16 = { 0f, 0f, 0f };
	uParam0->f_19 = { 0f, 0f, 0f };
	uParam0->f_22 = 0f;
	uParam0->f_23 = 0f;
}

void func_1035()
{
	AUDIO::PLAY_SOUND_FRONTEND("upgrade_cam_pan", "Ledger_Sounds", true, 0);
}

int func_1036(int* iParam0, bool bParam1)
{
	if (func_128(((*Global_1347702)[61 /*49*/])->f_15))
	{
		if (bParam1)
		{
			if (func_154() < iParam0->f_5)
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_1037(var uParam0, bool bParam1)
{
	uParam0->f_772 = 0;
	uParam0->f_774 = MISC::GET_GAME_TIMER() + 250;
	if (bParam1)
	{
		AUDIO::PLAY_SOUND_FRONTEND("INFO_HIDE", "Ledger_Sounds", true, 0);
	}
}

int func_1038(int iParam0)
{
	switch (func_56())
	{
		case -1:
			return (Global_40.f_4283.f_3 && iParam0) != 0;
	}
	return 0;
}

void func_1039(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_40.f_4283.f_3 = (Global_40.f_4283.f_3 - (Global_40.f_4283.f_3 && iParam0));
			break;
	}
}

void func_1040(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_40.f_4283.f_3 = (Global_40.f_4283.f_3 || iParam0);
			break;
	}
}

int func_1041(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_1042(int iParam0)
{
	return (Global_1327590->f_11465[iParam0 /*10*/])->f_1;
}

int func_1043(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 1;
	iVar1 = func_1306();
	if (ENTITY::DOES_ENTITY_EXIST(func_177(iVar1)) == 0)
	{
		func_1044("Camp Butcher: companion does not exist (check if he's locked)", uParam0);
		iVar0 = 0;
	}
	if (func_343(iVar1))
	{
		if (((((func_182(iVar1) == 0 && func_176(iVar1, 8) == 0) && func_176(iVar1, 16) == 0) && func_176(iVar1, 32) == 0) && func_176(iVar1, 2) == 0) && func_176(iVar1, 2048) == 0)
		{
			if (func_176(iVar1, -2147483648) && func_12(33554432) == 0)
			{
				func_1044("Camp Butcher: stolen (mission critical)", uParam0);
				iVar0 = 0;
			}
			else
			{
				func_1044("Camp Butcher: stolen", uParam0);
				iVar0 = 0;
			}
		}
	}
	iVar2 = 0;
	while (iVar2 < Global_1327590->f_19547)
	{
		if ((Global_1327590->f_19547[iVar2 /*5*/])->f_1 >= 5)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_692(func_281()), func_1042(&(Global_1327590->f_19547[iVar2 /*5*/])), true) < 2.25f)
			{
				func_1044("Camp Butcher: vignette running", uParam0);
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar2 /*5*/] == 486)
		{
			func_1044("Camp Butcher: special Pearson vig running", uParam0);
			iVar0 = 0;
		}
		iVar2++;
	}
	if (iVar0 == 0)
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_879))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_879));
		}
	}
	if (iVar0 == 1)
	{
		func_1044("Camp Butcher: Available", uParam0);
	}
	return iVar0;
}

void func_1044(char* sParam0, var uParam1)
{
}

void func_1045(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_1905944[iVar1];
	MISC::CLEAR_BIT(&uVar3, iVar2);
	(*Global_1905944)[iVar1] = uVar3;
}

bool func_1046(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(((*uParam0)[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&(((*uParam0)[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

void func_1047(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam3[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, uParam3[iVar0 /*4*/], &(((*uParam3)[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

void func_1048(int iParam0, bool bParam1)
{
	if (func_882(iParam0))
	{
		if (bParam1)
		{
			if (!func_1307(iParam0))
			{
				func_126(iParam0, 1, 0f, 0, 0, 1f, 0, 0);
			}
		}
		else if (func_1307(iParam0))
		{
			func_1308(iParam0, 1);
		}
	}
}

struct<8> func_1049(int iParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "", 64);
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return cVar0;
	}
	if (iParam0 >= 7)
	{
		return cVar0;
	}
	return *(Global_40.f_1095.f_1[iParam0 /*436*/]);
}

var func_1050(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_1051(int iParam0)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_8;
}

char* func_1052(int iParam0)
{
	switch (iParam0)
	{
		case -974145463:
		case -842044823:
		case 92296905:
		case 1432602132:
			return "BREED_AMERICANPAINT";
		
		case -1943445834:
		case -783061276:
		case -745453539:
		case 1371398552:
		case 1583029039:
			return "BREED_AMERICANSTANDARDBRED";
		
		case -1322521536:
		case 728055838:
		case 1100711204:
			return "BREED_ANDALUSIAN";
		
		case -1782334639:
		case -1266863668:
		case -1181052732:
		case -635244104:
		case -540812301:
		case -179102320:
			return "BREED_APPALOOSA";
		
		case -2105447887:
		case -2078767648:
		case -2055655009:
		case -1506685618:
		case -1427377767:
		case -852553462:
		case -80004868:
			return "BREED_ARABIAN";
		
		case 153881023:
		case 836323303:
		case 1813208211:
			return "BREED_ARDENNES";
		
		case -1256798240:
		case 2118089359:
			return "BREED_BELGIAN";
		
		case -1537586382:
		case 697143532:
		case 1440692746:
			return "BREED_DUTCHWARMBLOOD";
		
		case -1376299681:
		case -1293672675:
		case 281128160:
		case 1854519167:
			return "BREED_HUNGARIANHALFBRED";
		
		case -1955947684:
		case 545109431:
		case 1361788230:
		case 1427053849:
		case 1974379573:
			return "BREED_KENTUCKYSADDLE";
		
		case -1179079660:
		case 1275638003:
		case 2083573823:
			return "BREED_MISSOURIFOXTROTTER";
		
		case 648301150:
		case 892601357:
		case 955937750:
		case 1224695367:
		case 1235275977:
			return "BREED_MORGAN";
		
		case -1597490733:
		case -1428527735:
		case 805526368:
		case 2000205872:
			return "BREED_MUSTANG";
		
		case -1714171692:
		case -742726637:
		case 170010697:
			return "BREED_NOKOTA";
		
		case -1999094324:
		case -126555855:
		case -103101636:
			return "BREED_SHIRE";
		
		case 237935328:
		case 1724200240:
			return "BREED_SUFFOLKPUNCH";
		
		case -887362763:
		case -868094182:
		case -847714194:
		case 120848852:
		case 1342496140:
		case 1756765331:
		case 2059232991:
			return "BREED_TENNESSEEWALKER";
		
		case -1900569233:
		case -1262715164:
		case -813071670:
		case 1688250187:
		case 2010625508:
			return "BREED_THOROUGHBRED";
		
		case -1882436593:
		case -225011104:
		case -136225010:
			return "BREED_TURKOMAN";
		
		case -1331210307:
			return "BREED_DONKEY";
		
		case -1784502482:
		case 122449722:
			return "BREED_MULE";
		
		case 294243421:
			return "BREED_DUTCHWARMBLOOD";
		
		case -997197050:
			return "BREED_THOROUGHBRED";
		
		case -235714362:
			return "BREED_APPALOOSA";
		
		case -1678164:
			return "BREED_NOKOTA";
		
		case -977833913:
			return "BREED_TENNESSEEWALKER";
		
		case 1589164943:
			return "BREED_THOROUGHBRED";
		
		case -1087523615:
			return "BREED_AMERICANPAINT";
		
		case -496814209:
			return "BREED_ARDENNES";
		
		case 2109055751:
			return "BREED_APPALOOSA";
		
		case -776673611:
			return "BREED_NOKOTA";
		
		case 1764402253:
			return "BREED_ARABIAN";
		
		case -1417310078:
			return "BREED_TURKOMAN";
		
		case 1096273915:
			return "BREED_AMERICANPAINT";
		
		case 772751081:
			return "BREED_HUNGARIANHALFBRED";
		
		case -1140435723:
			return "BREED_NOKOTA";
		
		case 2002524329:
			return "BREED_TENNESSEEWALKER";
		
		case 1151530184:
			return "BREED_MUSTANG";
		
		case -1266525037:
			return "BREED_MISSOURIFOXTROTTER";
		
		case -2018137175:
			return "BREED_TURKOMAN";
		
		case -574151692:
			return "BREED_MUSTANG";
		
		case 649786380:
			return "BREED_AMERICANSTANDARDBRED";
		
		case -1921328920:
			return "BREED_APPALOOSA";
		
		case -837607790:
			return "BREED_KENTUCKYSADDLE";
		
		case 370424594:
			return "BREED_APPALOOSA";
		
		case -364764277:
			return "BREED_MANGY_BACKUP";
		
		default:
			break;
	}
	return "BREED_INVALID";
}

int func_1053()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 367, true))
	{
		return 0;
	}
	return 1;
}

Vector3 func_1054()
{
	return Global_40.f_1095.f_3054.f_77;
}

bool func_1055(vector3 vParam0)
{
	return func_1309(vParam0, 2);
}

int func_1056()
{
	return Global_40.f_1095.f_3054;
}

int func_1057(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		case 3:
			return 1;
		
		case 4:
			return 2;
		
		default:
			break;
	}
	return -1;
}

int func_1058(int iParam0)
{
	int iVar0;
	
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_722(iParam0))
	{
		return 0;
	}
	iVar0 = func_363(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_1059(int iParam0)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
}

void func_1060(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam1 /*436*/], Global_40.f_1095.f_1[iParam0 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam0 /*436*/], &(Global_1900383->f_508), 436);
}

void func_1061(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_463), (*Global_1900383)[iParam1 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam1 /*45*/], (*Global_1900383)[iParam0 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam0 /*45*/], &(Global_1900383->f_463), 45);
}

int func_1062(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar58;
	int iVar59;
	
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_1310(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_1310(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_1311(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_1312(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_1313(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1063(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (func_1314(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
	}
	PED::_0xBCC76708E5677E1D(iParam0, 0);
	PED::_0x931B241409216C1F(Global_35, iParam0, 0);
	PED::_0xB8B6430EAD2D2437(iParam0, 130495496);
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iVar1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iVar2);
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	POPULATION::_0xF74E134F40192884(iParam0, 1);
	PED::_0xFD6943B6DF77E449(iParam0, false);
	PLAYER::_0xDF93973251FB2CA5(iVar0, 1);
	PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	FLOCK::_0xAEB97D84CDF3C00B(iParam0, 0);
	if (func_786(iParam0))
	{
		uVar3 = func_464(iParam0);
		if (func_1315(uVar3))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 324, true);
		}
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 211, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 209, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 400, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 136, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 312, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 113, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 277, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 319, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 6, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 24, false);
}

void func_1064(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_363(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1100(iVar6);
		if (!PED::_0x608BC6A6AACD5036(&Var2, iVar0, iVar1, 0))
		{
		}
		else
		{
			iVar7 = Var2.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7) && !ENTITY::_0x88AD6CC10D8D35B2(iVar7))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar7, true, true);
				}
				ENTITY::_0x0D0DB2B6AF19A987(&iVar7);
			}
		}
		iVar6++;
	}
}

int func_1065(int iParam0)
{
	if (!func_1316(iParam0))
	{
		return 0;
	}
	if (!func_1317())
	{
		return 1;
	}
	return 0;
}

void func_1066(int iParam0, int iParam1)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0 /*45*/] = iParam1;
}

void func_1067(int iParam0)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = 0;
}

void func_1068(int iParam0)
{
	int iVar0;
	
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_1069(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_737(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_1318(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iParam1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 = fVar4;
	func_1104(iParam1);
	iVar5 = func_363(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	iVar6 = BUILTIN::FLOOR((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar5, 7, iVar6);
	iVar7 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar5, 7);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iVar7;
	PED::_0xA69899995997A63B(iVar5, iVar7);
}

void func_1070(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 = fParam1;
	iVar0 = func_363(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = BUILTIN::FLOOR((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar0, 7, iVar1);
	iVar2 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar0, 7);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iVar2;
	PED::_0xA69899995997A63B(iVar0, iVar2);
	func_1104(iVar2);
}

void func_1071(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_1072(int iParam0, struct<2> Param1)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1319(iParam0, Param1))
	{
	}
	if (!func_1320(iParam0, Param1.f_1))
	{
	}
}

void func_1073(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1321((*uParam0)[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_1074(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_1075(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0 /*5*/] = 0;
		((*uParam0)[iVar0 /*5*/])->f_1 = 0;
		((*uParam0)[iVar0 /*5*/])->f_2 = 0;
		((*uParam0)[iVar0 /*5*/])->f_3 = 0;
		((*uParam0)[iVar0 /*5*/])->f_4 = 0;
		iVar0++;
	}
}

void func_1076(var uParam0)
{
	int iVar0;
	
	uParam0->f_1 = 0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_1077(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1078(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 == 2)
	{
		iVar0 = 50;
	}
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1079(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_1080(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_1081(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

float func_1082(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

struct<2> func_1083(int iParam0)
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1322(iParam0, &uVar2))
	{
	}
	if (!func_1323(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1084()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	
	if (func_1324(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1324(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1324(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1324(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1324(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1324(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1085(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return;
	}
	func_1325(iParam0);
	func_1326(iParam0, uParam1);
	func_724(iParam0);
	func_1327(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1328(iParam0, iParam3, 0);
	}
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 1);
}

void func_1086(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = func_363(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iVar0))
	{
		return;
	}
	if (func_1329(iParam0, 64))
	{
		func_1059(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26) && !MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_671(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
		}
		if (iVar0 == PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
			{
				((*Global_1900383)[iParam0 /*45*/])->f_27 = MAP::_0x23F74C2FDA6E7C61(-515518185, iVar0);
				MAP::SET_BLIP_SPRITE(((*Global_1900383)[iParam0 /*45*/])->f_27, -1327110633, true);
				func_1330(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Global_1935630->f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26) && bVar4)
	{
		func_1059(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = -1925605092;
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_317(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
			{
				MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		((*Global_1900383)[iParam0 /*45*/])->f_26 = MAP::_0x23F74C2FDA6E7C61(iVar5, iVar0);
		((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
		func_1331(&(((*Global_1900383)[iParam0 /*45*/])->f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1329(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_1332(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar15 = func_1333(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1334(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 3)
		{
			iVar17 = -401963276;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_0xEBE89623EB861271(iVar0, 1);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 4)
		{
			iVar17 = -1380599892;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 2)
		{
			iVar17 = 1313031610;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 1)
		{
			iVar17 = -1012863186;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_1335(((*Global_1900383)[iParam0 /*45*/])->f_26);
		func_1336(((*Global_1900383)[iParam0 /*45*/])->f_26);
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar17);
		if (iVar17 == -401963276)
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar18);
	}
	if ((PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) == iVar0 && bVar3) && !bVar9)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	else
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	if (func_227(iVar0) && !bVar9)
	{
		if (iVar5 == -1925605092)
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar20);
	}
	else
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, 561559387);
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, -201249929);
	}
	iVar21 = func_317(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = -217389439;
				break;
			
			case 1:
				iVar22 = 13992470;
				break;
			
			case 2:
				iVar22 = 396341162;
				break;
			
			case 3:
				iVar22 = 623069873;
				break;
			
			case 4:
				iVar22 = -637422489;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = 937553910;
				break;
			
			case 1:
				iVar22 = 489732756;
				break;
			
			case 2:
				iVar22 = 195204984;
				break;
			
			case 3:
				iVar22 = -103418913;
				break;
			
			case 4:
				iVar22 = -815685893;
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(iVar0, ((*Global_1900383)[iParam0 /*45*/])->f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, ((*Global_1900383)[iParam0 /*45*/])->f_26);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

int func_1087(int iParam0)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_713(iParam0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_1088(vector3 vParam0)
{
	return func_1337(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

void func_1089(int iParam0)
{
	int iVar0;
	
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_722(iParam0))
	{
		return;
	}
	iVar0 = func_363(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::_SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_1090(int iParam0)
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1318(&uVar0, &iVar1, &uVar2);
	func_1338(iParam0, uVar0);
	func_1339(iParam0, iVar1);
	func_1340(iParam0, uVar2);
	func_721(iParam0, 1);
	func_1069(iParam0, 1);
}

void func_1091(int iParam0)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_465(iParam0, 1);
}

void func_1092(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_19 = { vParam1 };
	((*Global_1900383)[iParam0 /*45*/])->f_22 = uParam4;
}

int func_1093(int iParam0)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return func_1329(iParam0, 1);
}

int func_1094(int iParam0)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_2;
}

void func_1095(int iParam0)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 1;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_1096(int iParam0)
{
	int iVar0;
	
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1097(iParam0);
	if (!SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		func_1067(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_1067(iParam0);
	}
}

int func_1097(int iParam0)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_3;
}

float func_1098(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15f;
		
		case 4:
			return 1E+09f;
		
		case 1:
			return 1E+09f;
		
		case 2:
			return 1E+09f;
		
		case 3:
			return 1E+09f;
		
		case 5:
			return 100f;
		
		case 6:
			return 30f;
		
		case 7:
			return 1E+09f;
		
		case 8:
			return 1E+09f;
		
		case 9:
			return 1E+09f;
		
		case 10:
			return 1E+09f;
		
		case 11:
			return 1E+09f;
		
		case 12:
			return 1E+09f;
		
		case 13:
			return 1E+09f;
		
		case 14:
			return 1E+09f;
		
		case 15:
			return 1E+09f;
		
		case 16:
			return 1E+09f;
		
		case 17:
			return 1E+09f;
		
		case 18:
			return 1E+09f;
		
		case 19:
			return 1E+09f;
		
		case 20:
			return 1E+09f;
		
		case 21:
			return 1E+09f;
		
		case 22:
			return 1E+09f;
	}
	return 1E+09f;
}

float func_1099(int iParam0)
{
	float fVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0f;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0f;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return 0f;
	}
	fVar0 = PED::_0x42688E94E96FD9B4(iParam0, 3, 0);
	return fVar0;
}

int func_1100(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		
		case 1:
			return 5;
		
		case 2:
			return 6;
	}
	return 0;
}

var func_1101(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;
	
	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_1341(sParam0, sParam1, iParam2);
	return uVar20;
}

void func_1102(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iParam0, 7, iParam1);
}

int func_1103(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, 7);
	return iVar0;
}

void func_1104(int iParam0)
{
	if (func_1342() < iParam0)
	{
		func_1343(iParam0);
	}
}

void func_1105(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_737(iParam0);
	iVar1 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 == 1)
	{
		sVar2 = "HORSE_BONDED";
	}
	else if (iParam1 == iVar1)
	{
		sVar2 = "HORSE_BONDING_MAXIMUM";
	}
	else
	{
		sVar2 = "HORSE_BONDING_LEVELUP";
	}
	func_1344(sVar2, MISC::_CREATE_VAR_STRING(2, "HORSE_BONDING_LEVEL", iParam1), 908516622, -961843223, -2, "HUD_Toast_Soundset", "horse_bonding", 0, 0, 1, 1);
}

int func_1106(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_1107());
	return iVar0;
}

int func_1107()
{
	return 0;
}

void func_1108(int iParam0, int iParam1)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	char* sVar6;
	char* sVar7;
	
	sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
	switch (iParam0)
	{
		case 0:
			sVar1 = "RPG_HEALTH";
			break;
		
		case 1:
			sVar1 = "RPG_STAMINA";
			break;
		
		default:
			return;
	}
	sVar2 = MISC::_CREATE_VAR_STRING(2, "HORSE_RPG_LEVEL_PROGRESS", iParam1);
	switch (iParam0)
	{
		case 0:
			iVar3 = -1114634884;
			break;
		
		case 1:
			iVar3 = 1944692767;
			break;
		
		default:
			return;
	}
	sVar4 = func_1346(func_1345(iParam1));
	iVar5 = MISC::GET_HASH_KEY(sVar4);
	sVar6 = "";
	sVar7 = "HUD_Toast_Soundset";
	func_1344(MISC::_CREATE_VAR_STRING(10, sVar0, sVar1), sVar2, iVar3, iVar5, -2, sVar7, sVar6, 0, 0, 1, 1);
}

int func_1109(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_1110());
	return iVar0;
}

int func_1110()
{
	return 1;
}

struct<2> func_1111(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_1 = iParam0;
	return Var0;
}

int func_1112()
{
	int iVar0;
	
	iVar0 = func_1113();
	if (MAP::DOES_BLIP_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

var func_1113()
{
	return Global_1900383->f_393.f_1;
}

void func_1114(int iParam0)
{
	Global_1900383->f_393.f_1 = iParam0;
}

int func_1115(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		
		case -2106214197:
			return 104;
		
		case -2101264851:
			return 195;
		
		case -2073072369:
			return 59;
		
		case -2069570138:
			return 25;
		
		case -2066272360:
			return 357;
		
		case -2058120606:
			return 197;
		
		case -2038424081:
			return 49;
		
		case -2034257789:
			return 92;
		
		case -2022369555:
			return 265;
		
		case -2021582629:
			return 112;
		
		case -2020023971:
			return 278;
		
		case -1957523409:
			return 208;
		
		case -1952856164:
			return 165;
		
		case -1949204933:
			return 276;
		
		case -1925798111:
			return 41;
		
		case -1861414976:
			return 353;
		
		case -1852605133:
			return 10;
		
		case -1847672446:
			return 376;
		
		case -1840704908:
			return 289;
		
		case -1838712533:
			return 26;
		
		case -1838352012:
			return 57;
		
		case -1835851517:
			return 56;
		
		case -1831552326:
			return 123;
		
		case -1825294305:
			return 266;
		
		case -1824738758:
			return 277;
		
		case -1818850842:
			return 253;
		
		case -1799960545:
			return 257;
		
		case -1764522338:
			return 372;
		
		case -1763509974:
			return 141;
		
		case -1741667789:
			return 64;
		
		case -1738165526:
			return 3;
		
		case -1718674470:
			return 23;
		
		case -1717960576:
			return 61;
		
		case -1711895055:
			return 13;
		
		case -1706438978:
			return 233;
		
		case -1700452710:
			return 53;
		
		case -1674179981:
			return 55;
		
		case -1666278201:
			return 33;
		
		case -1612662716:
			return 201;
		
		case -1610966108:
			return 322;
		
		case -1582926490:
			return 146;
		
		case -1579419919:
			return 147;
		
		case -1558439474:
			return 301;
		
		case -1556423728:
			return 218;
		
		case -1532284567:
			return 116;
		
		case -1530132748:
			return 311;
		
		case -1524512402:
			return 209;
		
		case -1523910291:
			return 155;
		
		case -1455998786:
			return 338;
		
		case -1447311849:
			return 215;
		
		case -1436021162:
			return 172;
		
		case -1433686245:
			return 12;
		
		case -1425209566:
			return 32;
		
		case -1419919497:
			return 22;
		
		case -1414537028:
			return 73;
		
		case -1405998267:
			return 105;
		
		case -1344601768:
			return 314;
		
		case -1340339190:
			return 331;
		
		case -1329135070:
			return 140;
		
		case -1318987693:
			return 222;
		
		case -1311865656:
			return 37;
		
		case -1296807958:
			return 320;
		
		case -1283202000:
			return 321;
		
		case -1282804314:
			return 270;
		
		case -1278074582:
			return 171;
		
		case -1271608261:
			return 98;
		
		case -1257057567:
			return 21;
		
		case -1241340344:
			return 300;
		
		case -1236261996:
			return 235;
		
		case -1232809834:
			return 113;
		
		case -1230112817:
			return 170;
		
		case -1223121209:
			return 126;
		
		case -1215445344:
			return 131;
		
		case -1209597203:
			return 333;
		
		case -1206122982:
			return 156;
		
		case -1187950766:
			return 45;
		
		case -1179948750:
			return 136;
		
		case -1170496998:
			return 46;
		
		case -1164215952:
			return 234;
		
		case -1151084372:
			return 124;
		
		case -1145519186:
			return 100;
		
		case -1124061431:
			return 242;
		
		case -1123615607:
			return 29;
		
		case -1080627546:
			return 378;
		
		case -1077783786:
			return 194;
		
		case -1063147448:
			return 151;
		
		case -1062490780:
			return 79;
		
		case -1060078174:
			return 239;
		
		case -1056767524:
			return 176;
		
		case -1053549743:
			return 58;
		
		case -1029225159:
			return 106;
		
		case -1014145132:
			return 288;
		
		case -978957786:
			return 251;
		
		case -959357075:
			return 36;
		
		case -950054349:
			return 152;
		
		case -939420910:
			return 44;
		
		case -939114198:
			return 221;
		
		case -919512195:
			return 40;
		
		case -911126844:
			return 336;
		
		case -897750037:
			return 334;
		
		case -895073533:
			return 356;
		
		case -879507474:
			return 236;
		
		case -868076593:
			return 84;
		
		case -857964358:
			return 83;
		
		case -853383233:
			return 65;
		
		case -851626677:
			return 339;
		
		case -828139293:
			return 260;
		
		case -811637947:
			return 245;
		
		case -796902762:
			return 88;
		
		case -792853067:
			return 254;
		
		case -789397228:
			return 262;
		
		case -785605431:
			return 250;
		
		case -781631220:
			return 345;
		
		case -764163380:
			return 228;
		
		case -748969569:
			return 78;
		
		case -741351766:
			return 60;
		
		case -736853952:
			return 366;
		
		case -734416508:
			return 340;
		
		case -699277634:
			return 4;
		
		case -693828600:
			return 323;
		
		case -683458244:
			return 80;
		
		case -666014935:
			return 157;
		
		case -664512648:
			return 67;
		
		case -664252410:
			return 191;
		
		case -644722288:
			return 261;
		
		case -640663440:
			return 214;
		
		case -639037538:
			return 185;
		
		case -628542779:
			return 71;
		
		case -622554983:
			return 370;
		
		case -618620429:
			return 187;
		
		case -545450213:
			return 377;
		
		case -538889627:
			return 175;
		
		case -538880323:
			return 174;
		
		case -534215902:
			return 130;
		
		case -524787708:
			return 352;
		
		case -524145696:
			return 117;
		
		case -523522517:
			return 364;
		
		case -515561750:
			return 238;
		
		case -503955743:
			return 249;
		
		case -502473159:
			return 343;
		
		case -502324015:
			return 8;
		
		case -491981251:
			return 186;
		
		case -468693731:
			return 111;
		
		case -464836488:
			return 268;
		
		case -460024530:
			return 316;
		
		case -434590080:
			return 225;
		
		case -404698347:
			return 205;
		
		case -397760715:
			return 143;
		
		case -389056691:
			return 272;
		
		case -360036154:
			return 368;
		
		case -356975260:
			return 103;
		
		case -355531636:
			return 337;
		
		case -351362068:
			return 220;
		
		case -350863510:
			return 162;
		
		case -349064220:
			return 362;
		
		case -334729750:
			return 69;
		
		case -333135263:
			return 361;
		
		case -330120947:
			return 360;
		
		case -306246697:
			return 375;
		
		case -299522880:
			return 213;
		
		case -270094635:
			return 267;
		
		case -261141318:
			return 30;
		
		case -259123672:
			return 244;
		
		case -254562075:
			return 132;
		
		case -238080464:
			return 121;
		
		case -233743613:
			return 273;
		
		case -223469678:
			return 204;
		
		case -220282381:
			return 139;
		
		case -191424539:
			return 149;
		
		case -182889087:
			return 177;
		
		case -154581735:
			return 309;
		
		case -150493654:
			return 97;
		
		case -144653976:
			return 219;
		
		case -129643890:
			return 11;
		
		case -108780030:
			return 317;
		
		case -108307814:
			return 28;
		
		case -99303535:
			return 167;
		
		case -86199844:
			return 145;
		
		case -80522843:
			return 154;
		
		case -76237062:
			return 373;
		
		case -75024673:
			return 258;
		
		case -63926460:
			return 89;
		
		case -61411516:
			return 325;
		
		case -35658630:
			return 24;
		
		case -25901845:
			return 290;
		
		case -9438024:
			return 129;
		
		case -1:
			return 0;
		
		case 0:
			return 1;
		
		case 2639906:
			return 153;
		
		case 8924991:
			return 297;
		
		case 26054262:
			return 248;
		
		case 26245360:
			return 237;
		
		case 38162571:
			return 74;
		
		case 52706132:
			return 243;
		
		case 54073871:
			return 76;
		
		case 74872959:
			return 348;
		
		case 93964309:
			return 358;
		
		case 94263042:
			return 291;
		
		case 106479759:
			return 101;
		
		case 141950038:
			return 114;
		
		case 153152452:
			return 86;
		
		case 168171957:
			return 183;
		
		case 171107021:
			return 381;
		
		case 171499483:
			return 283;
		
		case 187862543:
			return 16;
		
		case 192515737:
			return 14;
		
		case 198200492:
			return 241;
		
		case 210001842:
			return 62;
		
		case 224551212:
			return 142;
		
		case 227918160:
			return 182;
		
		case 229371495:
			return 344;
		
		case 235928616:
			return 286;
		
		case 249726958:
			return 164;
		
		case 269047710:
			return 54;
		
		case 273461605:
			return 81;
		
		case 280705402:
			return 95;
		
		case 282809459:
			return 119;
		
		case 299694527:
			return 275;
		
		case 300221584:
			return 138;
		
		case 302205488:
			return 216;
		
		case 311708813:
			return 198;
		
		case 320943355:
			return 133;
		
		case 330026330:
			return 66;
		
		case 345808947:
			return 287;
		
		case 356365161:
			return 47;
		
		case 371850993:
			return 281;
		
		case 373691918:
			return 188;
		
		case 374115931:
			return 90;
		
		case 405586984:
			return 34;
		
		case 407136781:
			return 173;
		
		case 409602249:
			return 293;
		
		case 417081698:
			return 17;
		
		case 417525590:
			return 303;
		
		case 420709909:
			return 42;
		
		case 426191476:
			return 15;
		
		case 434558613:
			return 199;
		
		case 439465264:
			return 108;
		
		case 440043364:
			return 31;
		
		case 442317566:
			return 302;
		
		case 449774763:
			return 227;
		
		case 459290420:
			return 52;
		
		case 469053995:
			return 231;
		
		case 473295046:
			return 2;
		
		case 476714362:
			return 232;
		
		case 478884033:
			return 148;
		
		case 479419429:
			return 305;
		
		case 509781469:
			return 350;
		
		case 514932331:
			return 246;
		
		case 522677506:
			return 279;
		
		case 526003171:
			return 355;
		
		case 527226204:
			return 159;
		
		case 544152906:
			return 115;
		
		case 559573222:
			return 252;
		
		case 582380806:
			return 326;
		
		case 588987611:
			return 179;
		
		case 618699440:
			return 77;
		
		case 630808005:
			return 128;
		
		case 651395116:
			return 294;
		
		case 657241756:
			return 189;
		
		case 664571177:
			return 312;
		
		case 665676602:
			return 296;
		
		case 682839815:
			return 327;
		
		case 689024866:
			return 134;
		
		case 689930684:
			return 207;
		
		case 704802028:
			return 178;
		
		case 723021499:
			return 264;
		
		case 747514327:
			return 354;
		
		case 753127042:
			return 48;
		
		case 757752139:
			return 109;
		
		case 784360470:
			return 330;
		
		case 791041526:
			return 18;
		
		case 817925178:
			return 240;
		
		case 868326136:
			return 285;
		
		case 885203519:
			return 379;
		
		case 885378256:
			return 351;
		
		case 929582877:
			return 335;
		
		case 931649776:
			return 224;
		
		case 932909855:
			return 298;
		
		case 945612176:
			return 247;
		
		case 965986934:
			return 19;
		
		case 976539083:
			return 310;
		
		case 1010885152:
			return 7;
		
		case 1015669983:
			return 122;
		
		case 1050128548:
			return 284;
		
		case 1064154891:
			return 110;
		
		case 1067254646:
			return 319;
		
		case 1074873669:
			return 144;
		
		case 1140218954:
			return 27;
		
		case 1151197909:
			return 256;
		
		case 1159471771:
			return 329;
		
		case 1160698568:
			return 135;
		
		case 1164928979:
			return 158;
		
		case 1166612791:
			return 347;
		
		case 1167397384:
			return 307;
		
		case 1177464213:
			return 38;
		
		case 1186594126:
			return 230;
		
		case 1193080109:
			return 184;
		
		case 1203043430:
			return 274;
		
		case 1205826474:
			return 85;
		
		case 1207048789:
			return 169;
		
		case 1213993593:
			return 160;
		
		case 1216784232:
			return 269;
		
		case 1221801385:
			return 374;
		
		case 1238086793:
			return 313;
		
		case 1250636944:
			return 259;
		
		case 1302228510:
			return 315;
		
		case 1306158345:
			return 202;
		
		case 1321892118:
			return 324;
		
		case 1350371763:
			return 20;
		
		case 1350391819:
			return 75;
		
		case 1352699670:
			return 271;
		
		case 1358491857:
			return 263;
		
		case 1360745816:
			return 82;
		
		case 1376646519:
			return 223;
		
		case 1399676951:
			return 210;
		
		case 1410198831:
			return 217;
		
		case 1433244935:
			return 166;
		
		case 1441416901:
			return 211;
		
		case 1446719356:
			return 380;
		
		case 1453909576:
			return 125;
		
		case 1466547629:
			return 120;
		
		case 1478132521:
			return 367;
		
		case 1485195808:
			return 50;
		
		case 1485494263:
			return 102;
		
		case 1488286867:
			return 295;
		
		case 1488453464:
			return 212;
		
		case 1497516462:
			return 5;
		
		case 1500064347:
			return 72;
		
		case 1509509592:
			return 35;
		
		case 1512816328:
			return 168;
		
		case 1517904467:
			return 206;
		
		case 1522511407:
			return 280;
		
		case 1549124796:
			return 342;
		
		case 1557082963:
			return 163;
		
		case 1582370975:
			return 359;
		
		case 1583012985:
			return 304;
		
		case 1591451572:
			return 365;
		
		case 1607768502:
			return 9;
		
		case 1609506757:
			return 107;
		
		case 1626481264:
			return 118;
		
		case 1643531967:
			return 127;
		
		case 1649996811:
			return 181;
		
		case 1660024373:
			return 150;
		
		case 1665756137:
			return 93;
		
		case 1672143046:
			return 383;
		
		case 1691618738:
			return 68;
		
		case 1698972798:
			return 318;
		
		case 1703398561:
			return 332;
		
		case 1703426636:
			return 43;
		
		case 1708045337:
			return 346;
		
		case 1713221411:
			return 137;
		
		case 1743048395:
			return 226;
		
		case 1744443559:
			return 349;
		
		case 1766284049:
			return 94;
		
		case 1776302352:
			return 363;
		
		case 1804403874:
			return 382;
		
		case 1822001510:
			return 200;
		
		case 1846061697:
			return 99;
		
		case 1850082804:
			return 196;
		
		case 1867912207:
			return 70;
		
		case 1884271742:
			return 51;
		
		case 1926308480:
			return 96;
		
		case 1932172605:
			return 328;
		
		case 1944170089:
			return 161;
		
		case 1947931439:
			return 229;
		
		case 1952610440:
			return 203;
		
		case 1954026328:
			return 371;
		
		case 1982676972:
			return 91;
		
		case 2008888900:
			return 180;
		
		case 2016141805:
			return 6;
		
		case 2019386373:
			return 190;
		
		case 2024121624:
			return 193;
		
		case 2024383613:
			return 369;
		
		case 2024769126:
			return 308;
		
		case 2037589949:
			return 63;
		
		case 2051822093:
			return 299;
		
		case 2077022393:
			return 306;
		
		case 2080210939:
			return 282;
		
		case 2091701359:
			return 39;
		
		case 2109952320:
			return 192;
		
		case 2113625508:
			return 341;
		
		case 2127577956:
			return 255;
		
		case 2136753624:
			return 87;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_1116(int iParam0)
{
	int iVar0;
	
	if (Global_1934765->f_337 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_1934765->f_337)
	{
		if ((Global_1934765->f_318[iVar0 /*3*/])->f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1117(int iParam0)
{
	int iVar0;
	
	if (Global_1934765->f_337 == 0)
	{
		return;
	}
	if (Global_1934765->f_337 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_1934765->f_337 - 2))
		{
			MISC::_COPY_MEMORY(Global_1934765->f_318[iVar0 /*3*/], Global_1934765->f_318[iVar0 + 1 /*3*/], 3);
			iVar0++;
		}
	}
	Global_1934765->f_337 = (Global_1934765->f_337 - 1);
}

void func_1118()
{
	MISC::_0x243CEDE8F916B994();
	Global_1934765->f_338 = -1;
}

void func_1119(bool bParam0, float fParam1)
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(Global_1934765->f_301, 1))
	{
		return;
	}
	iVar0 = func_1120();
	if (iVar0 < 0)
	{
		return;
	}
	if (iVar0 >= 6)
	{
		return;
	}
	if (iVar0 == Global_1934765->f_338)
	{
		return;
	}
	if (func_1347(&(Global_1934765->f_318[iVar0 /*3*/]), bParam0, fParam1))
	{
		Global_1934765->f_338 = iVar0;
	}
}

int func_1120()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = -1;
	iVar1 = -1;
	if (Global_1934765->f_337 <= 0)
	{
		return -1;
	}
	iVar2 = (Global_1934765->f_337 - 1);
	while (iVar2 >= 0)
	{
		iVar3 = func_1348((Global_1934765->f_318[iVar2 /*3*/])->f_1);
		if (iVar3 > iVar0)
		{
			iVar0 = iVar3;
			iVar1 = iVar2;
		}
		iVar2 = (iVar2 + -1);
	}
	return iVar1;
}

void func_1121()
{
	if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(func_1293()))
	{
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY(func_1293());
	}
}

void func_1122(var uParam0)
{
	if (UIAPPS::_IS_APP_ACTIVE(1749944028))
	{
		UIAPPS::_CLOSE_APP_BY_HASH(1749944028);
	}
	if (func_209(uParam0->f_1))
	{
		func_210(&(uParam0->f_1), 1, 1);
	}
	uParam0->f_772 = 0;
	uParam0->f_773 = 0;
}

void func_1123(var uParam0)
{
	if (*uParam0 != 0)
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(uParam0);
	}
}

void func_1124()
{
	AUDIO::_0x531A78D6BF27014B("Ledger_Sounds");
}

void func_1125(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_495(iParam0))
	{
		return;
	}
	if (!func_1164(iParam0))
	{
		return;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (bParam1 && ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return;
	}
	iVar0 = func_177(iParam0);
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(iParam2, 155, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
	}
	else
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 152, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 154, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 156, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 25, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 87, bParam1);
	if (bParam1)
	{
		COMPANION::_0xD428C3F92FC3F6F8(iVar0, func_819(iParam0));
		PED::_0x9238A3D970BBB0A9(iVar0, -1972074710);
		PED::_0x9238A3D970BBB0A9(Global_35, -1972074710);
	}
	else
	{
		PED::_0x9A4AC116CC1EEE14(iVar0);
		if (!func_1349())
		{
			PED::_0x9A4AC116CC1EEE14(Global_35);
		}
	}
}

int func_1126(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_841(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_1127(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_56() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1128(int iParam0)
{
	if (!func_527(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_773(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

var func_1129()
{
	return &Global_1899515;
}

void func_1130(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_1350(iParam1);
	}
}

int func_1131(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!func_527(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126))
	{
		iVar0 = func_403(iParam0, 1);
		iVar1 = _NAMESPACE48::_0xA00DF706C60173D1(iVar0);
		if ((Global_40.f_4942[iParam0 /*60*/])->f_7 != 0 && iVar1 != (Global_40.f_4942[iParam0 /*60*/])->f_7)
		{
			_NAMESPACE48::_0x8BC555034A5A5E8C(iVar0, (Global_40.f_4942[iParam0 /*60*/])->f_7);
		}
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = _NAMESPACE48::_0x4F76E3676583D951(iVar0);
		_NAMESPACE48::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_126);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

int func_1132(vector3 vParam0, var uParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	var uVar0;
	
	vParam0.f_2 = iParam5;
	uVar0 = *uParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*uParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_1133(int iParam0)
{
	switch (iParam0)
	{
		case 1928985868:
			return 7;
		
		case 1784174017:
			return 8;
		
		case 1763160914:
			return 10;
		
		case 2051438686:
			return 11;
		
		case 1155669136:
			return 1;
		
		case 1871598:
			return 9;
		
		case -1379218218:
			return 6;
		
		case 1059981727:
			return 2;
		
		case -1216736853:
			return 4;
		
		case 1191674135:
			return 3;
		
		case -112322057:
			return 12;
		
		case -823778732:
			return 25;
		
		case 1338623152:
			return 16;
		
		case 1401247110:
			return 20;
		
		case 1007627076:
			return 13;
		
		case 864606355:
			return 31;
		
		case 1338525796:
			return 18;
		
		case -2076625074:
			return 26;
		
		case -288774278:
			return 15;
		
		case 1934998953:
			return 14;
		
		case -1148482643:
			return 32;
		
		case 603776282:
			return 22;
		
		case 1339344423:
			return 27;
		
		case 1562395675:
			return 19;
		
		case 1316832864:
			return 28;
		
		case -1619448191:
			return 29;
		
		case -520130198:
			return 24;
		
		case 1418253584:
			return 30;
		
		case -348149883:
			return 33;
		
		case 814591385:
			return 34;
		
		case 981348373:
			return 17;
		
		case -1100417366:
			return 35;
		
		case 1438856241:
			return 23;
		
		case -1989143022:
			return 21;
		
		default:
			break;
	}
	return 0;
}

int func_1134(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_INT(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

void func_1135(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

int func_1136(int iParam0)
{
	if (!func_527(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_140 != 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_141 != 0)
	{
		return 1;
	}
	return 0;
}

int func_1137(int iParam0)
{
	switch (iParam0)
	{
		case -2147483648:
		case 2048:
		case 8192:
			return 5;
		
		case 1:
		case 16:
		case 32:
		case 1024:
		case 4096:
			return 4;
		
		case 2:
		case 64:
			return 3;
		
		case 4:
		case 8:
		case 128:
			return 2;
		
		case 512:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_1138()
{
	return 0;
}

int func_1139()
{
	int iVar0;
	
	if (func_1351())
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-850189983))
		{
			STREAMING::_REMOVE_IMAP(-850189983);
		}
		iVar0 = -172246728;
	}
	else
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-172246728))
		{
			STREAMING::_REMOVE_IMAP(-172246728);
		}
		iVar0 = -850189983;
	}
	return iVar0;
}

int func_1140()
{
	int iVar0;
	
	if (func_128(((*Global_1347702)[134 /*49*/])->f_15))
	{
		iVar0 = func_1352();
		if (STREAMING::_IS_IMAP_ACTIVE(-387018143))
		{
			STREAMING::_REMOVE_IMAP(-387018143);
		}
	}
	else
	{
		iVar0 = -387018143;
	}
	return iVar0;
}

int func_1141()
{
	if (func_463(((*Global_1347702)[134 /*49*/])->f_15))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(126970802))
		{
			STREAMING::_REMOVE_IMAP(126970802);
		}
		return func_1138();
	}
	return 126970802;
}

int func_1142()
{
	if (func_890(-520532433, 1, 0))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-1739164071))
		{
			STREAMING::_REMOVE_IMAP(-1739164071);
		}
		return func_1138();
	}
	return -1739164071;
}

int func_1143()
{
	if (func_890(-1515028452, 1, 0))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-1331617405))
		{
			STREAMING::_REMOVE_IMAP(-1331617405);
		}
		return func_1138();
	}
	return -1331617405;
}

int func_1144()
{
	if (func_463(((*Global_1835011)[6 /*74*/])->f_1) || func_128(((*Global_1835011)[6 /*74*/])->f_1))
	{
		return 1998041523;
	}
	else if (STREAMING::_IS_IMAP_ACTIVE(1998041523))
	{
		STREAMING::_REMOVE_IMAP(1998041523);
	}
	return func_1352();
}

int func_1145()
{
	if (func_890(-1515028452, 1, 0))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-539928451))
		{
			STREAMING::_REMOVE_IMAP(-539928451);
		}
		return func_1138();
	}
	return -539928451;
}

int func_1146()
{
	if (func_890(-520532433, 1, 0))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-293283707))
		{
			STREAMING::_REMOVE_IMAP(-293283707);
		}
		return func_1138();
	}
	return -293283707;
}

int func_1147()
{
	if (func_402(13, 4, 1))
	{
		return 1036815507;
	}
	if (STREAMING::_IS_IMAP_ACTIVE(1036815507))
	{
		STREAMING::_REMOVE_IMAP(1036815507);
	}
	return func_1352();
}

void func_1148(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1353(1497516462);
			func_1354(2016141805);
			func_1354(1010885152);
			func_1354(-502324015);
			break;
		
		case 2016141805:
			func_1354(1497516462);
			func_1353(2016141805);
			func_1354(1010885152);
			func_1354(-502324015);
			break;
		
		case 1010885152:
			func_1354(1497516462);
			func_1354(2016141805);
			func_1353(1010885152);
			func_1354(-502324015);
			break;
		
		case -502324015:
			func_1354(1497516462);
			func_1354(2016141805);
			func_1354(1010885152);
			func_1353(-502324015);
			break;
		
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1354(-538889627);
			func_1354(-538880323);
			func_1354(-1056767524);
			func_1353(iParam0);
			break;
		
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1355();
			func_1353(iParam0);
			break;
		
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_1356();
			func_1353(iParam0);
			break;
		
		case 2019386373:
			func_1354(-664252410);
			func_1354(2109952320);
			func_1353(2019386373);
			break;
		
		case -664252410:
			func_1354(2019386373);
			func_1354(2109952320);
			func_1353(-664252410);
			break;
		
		case 2109952320:
			func_1354(2019386373);
			func_1354(-664252410);
			func_1353(2109952320);
			break;
		
		case -1674179981:
			func_1354(-1835851517);
			func_1354(-1838352012);
			func_1353(-1674179981);
			break;
		
		case -1835851517:
			func_1354(-1674179981);
			func_1354(-1838352012);
			func_1353(-1835851517);
			break;
		
		case -1838352012:
			func_1354(-1674179981);
			func_1354(-1835851517);
			func_1353(-1838352012);
			break;
		
		case -1717960576:
			func_1354(210001842);
			func_1353(-1717960576);
			break;
		
		case 210001842:
			func_1354(-1717960576);
			func_1353(210001842);
			break;
		
		case -150493654:
			func_1354(-1271608261);
			func_1354(1846061697);
			func_1354(-1145519186);
			func_1353(-150493654);
			break;
		
		case -1271608261:
			func_1354(-150493654);
			func_1354(1846061697);
			func_1354(-1145519186);
			func_1353(-1271608261);
			break;
		
		case 1846061697:
			func_1354(-150493654);
			func_1354(-1271608261);
			func_1354(-1145519186);
			func_1353(1846061697);
			break;
		
		case -1145519186:
			func_1354(-150493654);
			func_1354(-1271608261);
			func_1354(1846061697);
			func_1353(-1145519186);
			break;
		
		case 1766284049:
			func_1354(280705402);
			func_1354(1926308480);
			func_1353(1766284049);
			break;
		
		case 280705402:
			func_1354(1766284049);
			func_1354(1926308480);
			func_1353(280705402);
			break;
		
		case 1926308480:
			func_1354(1766284049);
			func_1354(280705402);
			func_1353(1926308480);
			break;
		
		case 1609506757:
			if (bParam1)
			{
				func_1354(439465264);
				func_1353(1609506757);
			}
			else
			{
				func_1354(1609506757);
				func_1354(439465264);
			}
			break;
		
		case 439465264:
			if (func_756(1609506757))
			{
				if (bParam1)
				{
					func_1353(439465264);
				}
				else
				{
					func_1354(439465264);
				}
			}
			break;
		
		case 1822001510:
			func_1354(-1612662716);
			func_1353(1822001510);
			break;
		
		case -1612662716:
			func_1354(1822001510);
			func_1353(-1612662716);
			break;
		
		case 1306158345:
			func_1354(1952610440);
			func_1354(-223469678);
			func_1354(-404698347);
			func_1354(1517904467);
			func_1353(1306158345);
			break;
		
		case 1952610440:
			func_1354(1306158345);
			func_1354(-223469678);
			func_1354(-404698347);
			func_1354(1517904467);
			func_1353(1952610440);
			break;
		
		case -223469678:
			func_1354(1306158345);
			func_1354(1952610440);
			func_1354(-404698347);
			func_1354(1517904467);
			func_1353(-223469678);
			break;
		
		case -404698347:
			func_1354(1306158345);
			func_1354(1952610440);
			func_1354(-223469678);
			func_1354(1517904467);
			func_1353(-404698347);
			break;
		
		case 1517904467:
			func_1354(1306158345);
			func_1354(1952610440);
			func_1354(-223469678);
			func_1354(-404698347);
			func_1353(1517904467);
			break;
		
		case 1376646519:
			func_1354(931649776);
			func_1354(-434590080);
			func_1354(1743048395);
			func_1354(449774763);
			func_1353(1376646519);
			break;
		
		case 931649776:
			func_1354(1376646519);
			func_1354(-434590080);
			func_1354(1743048395);
			func_1354(449774763);
			func_1353(931649776);
			break;
		
		case -434590080:
			func_1354(1376646519);
			func_1354(931649776);
			func_1354(1743048395);
			func_1354(449774763);
			func_1353(-434590080);
			break;
		
		case 1743048395:
			func_1354(1376646519);
			func_1354(931649776);
			func_1354(-434590080);
			func_1354(449774763);
			func_1353(1743048395);
			break;
		
		case 449774763:
			func_1354(1376646519);
			func_1354(931649776);
			func_1354(-434590080);
			func_1354(1743048395);
			func_1353(449774763);
			break;
		
		case -1414537028:
			func_1354(38162571);
			func_1354(1350391819);
			func_1354(54073871);
			func_1353(-1414537028);
			break;
		
		case 38162571:
			func_1354(-1414537028);
			func_1354(1350391819);
			func_1354(54073871);
			func_1353(38162571);
			break;
		
		case 1350391819:
			func_1354(-1414537028);
			func_1354(38162571);
			func_1354(54073871);
			func_1353(1350391819);
			break;
		
		case 54073871:
			func_1354(-1414537028);
			func_1354(38162571);
			func_1354(1350391819);
			func_1353(54073871);
			break;
		
		case 198200492:
			func_1353(198200492);
			func_1354(-1124061431);
			func_1354(52706132);
			func_1354(-259123672);
			break;
		
		case -1124061431:
			func_1354(198200492);
			func_1353(-1124061431);
			func_1354(52706132);
			func_1354(-259123672);
			break;
		
		case 52706132:
			func_1354(198200492);
			func_1354(-1124061431);
			func_1353(52706132);
			func_1354(-259123672);
			break;
		
		case -259123672:
			func_1354(198200492);
			func_1354(-1124061431);
			func_1354(52706132);
			func_1353(-259123672);
			break;
		
		case -919512195:
			func_1353(-919512195);
			func_1354(-1925798111);
			func_1354(420709909);
			func_1354(1703426636);
			break;
		
		case -1925798111:
			func_1353(-1925798111);
			func_1354(-919512195);
			func_1354(420709909);
			func_1354(1703426636);
			break;
		
		case 420709909:
			func_1353(420709909);
			func_1354(-919512195);
			func_1354(-1925798111);
			func_1354(1703426636);
			break;
		
		case 1703426636:
			func_1353(1703426636);
			func_1354(-919512195);
			func_1354(-1925798111);
			func_1354(420709909);
			break;
		
		case -1223121209:
			func_1353(-1223121209);
			func_1354(630808005);
			break;
		
		case 630808005:
			func_1353(630808005);
			func_1354(-1223121209);
			break;
		
		case 1453909576:
			func_1353(1453909576);
			func_1354(1643531967);
			break;
		
		case 1643531967:
			func_1353(1643531967);
			func_1354(1453909576);
			break;
		
		case 0:
			func_1353(0);
			func_1354(473295046);
			func_1354(-1738165526);
			break;
		
		case 473295046:
			func_1353(473295046);
			func_1354(0);
			func_1354(-1738165526);
			break;
		
		case -1738165526:
			func_1353(-1738165526);
			func_1354(0);
			func_1354(473295046);
			break;
		
		case 932909855:
			func_1353(932909855);
			func_1354(2051822093);
			break;
		
		case 2051822093:
			func_1353(2051822093);
			func_1354(932909855);
			break;
		
		case 405586984:
			func_1353(405586984);
			func_1354(1509509592);
			func_1354(-959357075);
			func_1354(-1311865656);
			break;
		
		case 1509509592:
			func_1353(1509509592);
			func_1354(405586984);
			func_1354(-959357075);
			func_1354(-1311865656);
			break;
		
		case -959357075:
			func_1353(-959357075);
			func_1354(1509509592);
			func_1354(405586984);
			func_1354(-1311865656);
			break;
		
		case -1311865656:
			func_1353(-1311865656);
			func_1354(1509509592);
			func_1354(-959357075);
			func_1354(405586984);
			break;
		
		case -524145696:
			if (bParam1)
			{
				func_1353(-524145696);
			}
			else
			{
				func_1354(-524145696);
			}
			func_1354(1626481264);
			func_1354(282809459);
			break;
		
		case 282809459:
			func_1353(282809459);
			func_1354(1626481264);
			func_1354(-524145696);
			break;
		
		case 1626481264:
			func_1353(1626481264);
			func_1354(-524145696);
			func_1354(282809459);
			break;
		
		case 885203519:
			if (bParam1)
			{
				func_1353(885203519);
			}
			else
			{
				func_1354(885203519);
			}
			break;
		
		case -1080627546:
			if (bParam1)
			{
				func_1353(-1080627546);
			}
			else
			{
				func_1354(-1080627546);
			}
			break;
		
		default:
			if (bParam1)
			{
				if (!func_756(iParam0))
				{
					func_1353(iParam0);
				}
			}
			else if (func_756(iParam0))
			{
				func_1354(iParam0);
			}
			break;
	}
}

void func_1149(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(Global_1934765->f_21[iVar1], iVar2);
}

void func_1150(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(Global_1934765->f_21[iVar1], iVar2);
}

void func_1151(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_559())
	{
		if (func_1357() == 0)
		{
			return;
		}
		bParam0 = true;
	}
	if ((MISC::GET_FRAME_COUNT() % 10) == 0 || bParam0)
	{
		if (func_1358() == 0 || bParam0)
		{
			if (func_1359() && !func_128(((*Global_1835011)[4 /*74*/])->f_1))
			{
				func_1360(0, 1, bParam0);
			}
			else
			{
				func_1360(0, 0, bParam0);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 10) == 0 || bParam0)
	{
		if ((func_904(1, 0) && func_1361()) && func_1362() == 0)
		{
			func_1360(1, 1, bParam0);
		}
		else
		{
			func_1360(1, 0, bParam0);
		}
	}
	iVar0 = 0;
	if (func_32() == 1)
	{
		iVar0 = 1;
	}
	iVar1 = func_146();
	if (bParam0)
	{
		if (!func_38(1048576))
		{
			Global_1357549->f_575 = 18;
			Global_1357549->f_575 = 0;
			while (Global_1357549->f_575 < 18)
			{
				func_1363(iVar1, 0, 0);
				Global_1357549->f_575++;
			}
			Global_1357549->f_575 = 0;
		}
	}
	else if (func_38(1048576))
	{
		func_1363(iVar1, bParam1, 1);
	}
	if (((func_559() && STREAMING::_0xCF45DF50C7775F2A() == 0) && func_498(0) == ((*Global_1835011)[4 /*74*/])->f_1 == 0) && func_1364())
	{
		func_1365();
		iVar2 = func_1366();
		func_1367(iVar1, &iVar2, iVar0, func_1351(), bParam1);
		if (func_370(10, 0) > 1)
		{
			if (func_232(2057380366, 0))
			{
				func_666(2057380366, 1, 0);
			}
		}
		else if (!func_232(2057380366, 1))
		{
			func_381(2057380366, 1017034651, 1120952528, -1, 1, 1, 0);
		}
		if ((func_370(10, 0) >= 3 && iVar1 == 3) && iVar0)
		{
			func_1150(6);
		}
		else
		{
			func_1149(6);
		}
		if (func_1368(iVar1, iVar0))
		{
			if (((((ANIMSCENE::_0x25557E324489393C(&(Global_1357549->f_1713[0])) && ANIMSCENE::_0x477122B8D05E7968(&(Global_1357549->f_1713[0]), 1, 0)) && ANIMSCENE::_0x25557E324489393C(&(Global_1357549->f_1713[1]))) && ANIMSCENE::_0x477122B8D05E7968(&(Global_1357549->f_1713[1]), 1, 0)) && ANIMSCENE::_0x25557E324489393C(&(Global_1357549->f_1713[2]))) && ANIMSCENE::_0x477122B8D05E7968(&(Global_1357549->f_1713[2]), 1, 0))
			{
				if (((func_1369(16) != 1 && !ANIMSCENE::_0xCBFC7725DE6CE2E0(&(Global_1357549->f_1713[0]), 0)) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(&(Global_1357549->f_1713[1]), 0)) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(&(Global_1357549->f_1713[2]), 0))
				{
					if (func_1369(16) == 2 && func_933(256) == 0)
					{
						if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
						{
							CAM::DO_SCREEN_FADE_OUT(1);
						}
						if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(7000);
						}
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(Global_1357549->f_1713[0]), "PBL_LEVEL_2", true);
						ANIMSCENE::START_ANIM_SCENE(&(Global_1357549->f_1713[0]));
						func_75(256);
					}
					else if (func_1369(16) == 3 && func_933(512) == 0)
					{
						if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
						{
							CAM::DO_SCREEN_FADE_OUT(1);
						}
						if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(7000);
						}
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(Global_1357549->f_1713[1]), "PBL_LEVEL_3", true);
						ANIMSCENE::START_ANIM_SCENE(&(Global_1357549->f_1713[1]));
						func_75(512);
					}
					else if (func_1369(16) == 4 && func_933(1024) == 0)
					{
						if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
						{
							CAM::DO_SCREEN_FADE_OUT(1);
						}
						if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(7000);
						}
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(Global_1357549->f_1713[2]), "PBL_LEVEL_4", true);
						ANIMSCENE::START_ANIM_SCENE(&(Global_1357549->f_1713[2]));
						func_75(1024);
					}
				}
			}
		}
	}
	if (func_498(0) == ((*Global_1835011)[4 /*74*/])->f_1)
	{
		if (STREAMING::_IS_IMAP_ACTIVE(825179479) == 0)
		{
			STREAMING::_REQUEST_IMAP(825179479);
		}
	}
}

int func_1152(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!VOLUME::_0xF6A8A652A6B186CD(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < &Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!VOLUME::_0xF6A8A652A6B186CD(iVar0) || iVar0 == iParam0)
		{
			(*Global_1911670)[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_1153(int iParam0)
{
	if (iParam0 == 1)
	{
		func_1370("hso_post_caravan");
	}
	if (iParam0 == 2)
	{
		func_1370("dewclm_post_caravan");
	}
	if (iParam0 == 6)
	{
		func_1370("bvh_nav_endless_summer");
	}
}

int func_1154(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 7:
		case 8:
			return 0;
		
		case 3:
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0;
			}
			break;
	}
	return 1;
}

void func_1155(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			func_1370("shb_nav_camp_00");
			func_1370("shb_nav_camp_01");
			break;
	}
}

struct<8> func_1156(int iParam0, int iParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, func_1371(iParam0), 64);
	StringConCat(&cVar0, "_nav_camp_", 64);
	StringConCat(&cVar0, func_1372(iParam1), 64);
	return cVar0;
}

int func_1157(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 0:
					return func_1138();
				
				case 1:
					return -1232260252;
				
				case 2:
					return 1404611977;
				
				default:
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2022451711;
				
				case 1:
					return 970924250;
				
				case 2:
					return -1177590512;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1402472902;
				
				case 1:
					return 1802272784;
				
				case 2:
					return -1458944281;
				
				default:
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return func_1138();
				
				case 1:
					return -1869016398;
				
				case 2:
					if (func_12(268435456))
					{
						if (STREAMING::_IS_IMAP_ACTIVE(806681228))
						{
							STREAMING::_REMOVE_IMAP(806681228);
						}
						return 1311984381;
					}
					else
					{
						if (STREAMING::_IS_IMAP_ACTIVE(1311984381))
						{
							STREAMING::_REMOVE_IMAP(1311984381);
						}
						return 806681228;
					}
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return func_1138();
				
				case 1:
					return 414622870;
				
				case 2:
					return 557551306;
				
				default:
					break;
			}
			break;
	}
	return func_1138();
}

void func_1158(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case -1999825729:
			iVar0 = -1999825729;
			break;
		
		case 414622870:
			iVar0 = 414622870;
			break;
		
		case 1802272784:
			iVar0 = 1802272784;
			break;
		
		case 970924250:
			iVar0 = 446964392;
			break;
	}
	if (iVar0 != -1)
	{
		if (bParam1)
		{
			if (GRAPHICS::_0xDE9BAD3292AA6D5E(iVar0) == 0)
			{
				GRAPHICS::_0xDFEA23EC90113657(iVar0);
			}
		}
		else if (GRAPHICS::_0xDE9BAD3292AA6D5E(iVar0))
		{
			GRAPHICS::_0xDD0BC0EDCB2162F6(iVar0);
		}
	}
}

int func_1159(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 1:
			return func_1373(iParam1, bParam2);
		
		case 2:
			return func_1374(iParam1, bParam2);
		
		case 6:
			return func_1375(iParam1, bParam2);
	}
	return func_1138();
}

struct<4> func_1160()
{
	struct<4> Var0;
	
	return Var0;
}

int func_1161(int iParam0)
{
	if (func_885(iParam0) == 8)
	{
		return func_490(iParam0);
	}
	return -1;
}

int func_1162(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (func_56() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || ((*Global_1347702)[iVar0 /*49*/])->f_13 & 16384 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1163(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!func_534(iParam0, 0f, 0f, 0f, 0, bParam1, bParam4, 1, 1, iParam2, iParam3, 1))
	{
		return 0;
	}
	return 1;
}

int func_1164(int iParam0)
{
	if (func_495(iParam0))
	{
		if (func_330(Global_1360165[iParam0 /*1157*/], 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1165(int iParam0, bool bParam1)
{
	if (!func_408(iParam0))
	{
		return 0;
	}
	if (!func_374(iParam0, 2))
	{
		return 0;
	}
	if (func_374(iParam0, 32) && !bParam1)
	{
		func_791(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_409(iParam0)));
		if (func_56() == -1)
		{
			if (func_374(iParam0, 2048))
			{
				_NAMESPACE48::_0x49A8C2CD97815215(func_783(iParam0));
				func_789(iParam0, 2048);
			}
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_783(iParam0));
		}
		return 0;
	}
	if (!func_1376(iParam0) && func_56() == -1)
	{
		return 0;
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(func_783(iParam0)))
	{
		func_789(iParam0, 128);
		return 1;
	}
	func_791(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_409(iParam0)));
	_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_783(iParam0));
	if (func_374(iParam0, 2048))
	{
		_NAMESPACE48::_0x49A8C2CD97815215(func_783(iParam0));
		func_789(iParam0, 2048);
	}
	return 1;
}

int func_1166(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0;
	int iVar3;
	
	if (!func_408(iParam0))
	{
		return 0;
	}
	if (!func_782(func_409(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_783(iParam0)))
	{
		func_1165(iParam0, 0);
		return 0;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!func_1266(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_1377(iParam0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_211(vVar0))
	{
		_NAMESPACE48::_0x59C7AD6FEA2AC449(func_783(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = _NAMESPACE48::_0x08FC896D2CB31FCC(func_783(iParam0), 0);
	}
	else
	{
		iVar3 = _NAMESPACE48::_0x0CADC3A977997472(func_783(iParam0), 0);
	}
	if (!func_211(vVar0))
	{
		_NAMESPACE48::_0xBB68908CD11AEBDC(func_783(iParam0));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return 1;
	}
	return 0;
}

int func_1167(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_0x772A1969F649E902(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_1168(int iParam0)
{
	switch ((Global_1357549->f_1675[iParam0 /*5*/])->f_2)
	{
		case 0:
			if (!_NAMESPACE48::_0x800DF3FC913355F3((Global_1357549->f_1675[iParam0 /*5*/])->f_4))
			{
				(Global_1357549->f_1675[iParam0 /*5*/])->f_4 = _NAMESPACE48::_0x4F76E3676583D951(&(Global_1357549->f_1675[iParam0 /*5*/]));
				_NAMESPACE48::_0x187D65F3AEC5D679(&(Global_1357549->f_1675[iParam0 /*5*/]), func_1378(func_146()));
				_NAMESPACE48::_0xFCC6DB8DBE709BC8((Global_1357549->f_1675[iParam0 /*5*/])->f_4);
				return 0;
			}
			(Global_1357549->f_1675[iParam0 /*5*/])->f_2 = 1;
		
		case 1:
			if (!_NAMESPACE48::_0xA8120EBEAF290C7A((Global_1357549->f_1675[iParam0 /*5*/])->f_4))
			{
				return 0;
			}
			if (_NAMESPACE48::_0xEB98B38CA60742D7((Global_1357549->f_1675[iParam0 /*5*/])->f_4))
			{
				_NAMESPACE48::_0x49A8C2CD97815215((Global_1357549->f_1675[iParam0 /*5*/])->f_4);
			}
			if (func_330((Global_1357549->f_1675[iParam0 /*5*/])->f_3, 0))
			{
				Global_1359489->f_12 = 1;
				(Global_1357549->f_1675[iParam0 /*5*/])->f_2 = 2;
			}
			else
			{
				if (!Global_1359489->f_12)
				{
					_NAMESPACE48::_0x4F81EAD1DE8FA19B((Global_1357549->f_1675[iParam0 /*5*/])->f_4);
					(Global_1357549->f_1675[iParam0 /*5*/])->f_3 = _NAMESPACE48::_0x0CADC3A977997472((Global_1357549->f_1675[iParam0 /*5*/])->f_4, 0);
					_NAMESPACE48::_0x6759BEE6762E140B((Global_1357549->f_1675[iParam0 /*5*/])->f_4);
				}
				return 0;
			}
		
		case 2:
			func_1379((Global_1357549->f_1675[iParam0 /*5*/])->f_3);
			(Global_1357549->f_1675[iParam0 /*5*/])->f_2 = 3;
		
		case 3:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_1169(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	
	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_1380(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_1170(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, "PageLeft");
	func_1381(uVar0, (*uParam1)[0 /*118*/]);
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, "PageRight");
	func_1381(uVar1, (*uParam1)[1 /*118*/]);
}

void func_1171(var uParam0, var uParam1)
{
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, "itemLabel", 0);
	uParam1->f_1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0, "itemDescription", "");
	uParam1->f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0, "purchaseLabel", "");
	uParam1->f_3 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0, "purchasePrice", 0);
	uParam1->f_4 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, "isGoldPrice", 0);
	INVENTORY::_0x9D21B185ABC2DBC4(uParam0, "effects", 0, 0);
}

int func_1172(int iParam0)
{
	int iVar0;
	
	if (!DLC::_0x1DB9D61E505AE3FC())
	{
		return iParam0;
	}
	if (!func_1382())
	{
		return iParam0;
	}
	iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * 0.8f));
	return iVar0;
}

int func_1173()
{
	int iVar0;
	
	iVar0 = func_1383();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_1174(int iParam0)
{
	float fVar0;
	float fVar1;
	
	if (func_56() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = MISC::GET_GAME_TIMER();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_476(MISC::ABSF(fVar1) < 1f, func_476(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_1175(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_1176(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case -40:
		case 40:
			return 1;
		
		case -80:
		case 80:
			return 2;
		
		case -120:
		case 120:
			return 3;
		
		case -160:
		case 160:
			return 4;
		
		case -200:
		case 200:
			return 5;
		
		case -240:
		case 240:
			return 6;
		
		case -280:
		case 280:
			return 7;
		
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_1177()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_1178(int iParam0, bool bParam1, int iParam2)
{
	func_1384((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1385(iParam0);
}

void func_1179(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_1386(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_1180(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	bVar3 = false;
	if (func_1387(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1388(iVar5, &iVar2, &iVar0))
			{
				if (!func_889(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1389(iVar2);
					if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_997(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1173() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1173() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1390();
							}
							if (bVar3)
							{
								UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}

struct<2> func_1181(int iParam0)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	return Var0;
}

char* func_1182(int iParam0)
{
	switch (iParam0)
	{
		case 2139774588:
			return "HONOR_EVENT_LOOT_INNOCENT";
		
		case 1142025875:
			return "HONOR_EVENT_AMBIENT_KILL";
		
		case 1587891565:
			return "HONOR_EVENT_AMBIENT_KO";
		
		case 1877013492:
			return "HONOR_EVENT_SCARE";
		
		case -643014279:
			return "HONOR_EVENT_KILL_VERMIN";
		
		case -597116214:
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		
		case 551416228:
			return "HONOR_EVENT_KILL_HORSE";
		
		case 1022576842:
			return "HONOR_EVENT_STEAL_HORSE";
		
		case 953325896:
			return "HONOR_EVENT_STEAL_DONKEY";
		
		case 508358508:
			return "HONOR_EVENT_STEAL_MULE";
		
		case -856432278:
			return "HONOR_EVENT_STEAL_WAGON";
		
		case -735200598:
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		
		case -2010847721:
			return "HONOR_EVENT_ABANDON_ANIMALS";
		
		case 446961221:
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		
		case -1972216640:
			return "HONOR_EVENT_ANTAGONIZE";
		
		case 530833824:
			return "HONOR_EVENT_THEFT";
		
		case 1682361219:
			return "HONOR_EVENT_INTERVENED";
		
		case 158959085:
			return "HONOR_EVENT_WANTED_IN_CAMP";
		
		case 1919819559:
			return "HONOR_EVENT_DONATED_GAME";
		
		case 1461411082:
			return "HONOR_EVENT_ITEM_REQUEST";
		
		case -549508280:
			return "HONOR_EVENT_LONG_ABSENCE";
		
		case -1787248475:
			return "HONOR_EVENT_CRUEL_DEATH";
		
		case 932872355:
			return "HONOR_EVENT_JUSTICE_SERVED";
		
		case -1091304842:
			return "HONOR_EVENT_CHEAT";
		
		default:
			break;
	}
	return "";
}

int func_1183(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_1391(iParam0))
	{
		return 0;
	}
	if (!func_758())
	{
		return 0;
	}
	if (!func_1392(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

void func_1184(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!func_495(iParam0))
	{
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
	if (PED::IS_PED_GROUP_MEMBER(iVar0, iVar1, 0))
	{
		return;
	}
	COMPANION::_0xCBD9EC60495C728C(func_771());
	PED::SET_PED_CONFIG_FLAG(iVar0, 279, true);
	PED::SET_PED_AS_GROUP_MEMBER(iVar0, iVar1);
	if (bParam1)
	{
		func_1125(iParam0, 1, Global_35);
	}
}

bool func_1185()
{
	return func_773(1) < 3;
}

void func_1186(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_495(iParam0))
	{
		iVar0 = 0;
		iVar1 = 0;
		switch (iParam0)
		{
			case 2:
				func_1393(&iVar0, 1);
				break;
			
			case 14:
				func_1393(&iVar0, 8);
				func_1393(&iVar1, 4);
				func_1393(&iVar1, 5);
				func_1393(&iVar1, 0);
				break;
			
			case 13:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
				func_1393(&iVar0, 8);
				func_1393(&iVar0, 5);
				func_1393(&iVar1, 4);
				func_1393(&iVar1, 0);
				break;
		}
		COMPANION::_0xDEB369F6AD168C58(func_177(iParam0), iVar0);
		COMPANION::_0x1740E3DEE0AE4D27(func_177(iParam0), iVar1);
	}
}

int func_1187(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	*uParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_758();
	bVar1 = false;
	if (bVar0 && !func_148(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_148(37)) && !func_148(43))
	{
		*uParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_148(43)) && !func_148(44))
	{
		bVar2 = true;
	}
	if (bVar1)
	{
		*uParam0 = 1;
		return 1;
	}
	if (!bVar1 && !bVar2)
	{
		if (func_713(0) == 1)
		{
			*uParam0 = 1;
		}
		if (func_713(1) == 1)
		{
			*uParam1 = 1;
		}
	}
	if (*uParam0 || *uParam1)
	{
		return 1;
	}
	return 0;
}

int func_1188(int iParam0)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_420;
}

int func_1189(int iParam0, var uParam1)
{
	if (!func_1394(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1190()
{
	if (func_758())
	{
		if (!func_148(3))
		{
			return func_1395(43);
		}
		if (func_148(38) && !func_148(43))
		{
			return func_1396(8);
		}
	}
	return 0;
}

Vector3 func_1191(int iParam0, int iParam1)
{
	struct<5> Var0;
	vector3 vVar5;
	
	func_1189(15, &Var0);
	Var0.f_2 = -1999103282;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -495185473;
		DATAFILE::_DATAFILE_GET_VECTOR(&vVar5, &Var0);
	}
	return vVar5;
}

int func_1192(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	
	if (LAW::_0x54310AAB97B92816(PLAYER::PLAYER_ID()) <= 0)
	{
		return 0;
	}
	if (Global_1310720->f_21 == -1)
	{
		return 0;
	}
	if (Global_1310720->f_23 >= 3)
	{
		return 0;
	}
	iVar0 = func_591(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1189(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		DATAFILE::_DATAFILE_GET_HASH(&iVar6, &Var1);
		if (func_1397(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1193(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_1398(iParam0);
	if (func_756(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (uParam1 || iVar0 == -1);
}

int func_1194(int iParam0)
{
	struct<4> Var0;
	var uVar5;
	
	if (!func_1189(15, &Var0))
	{
		return 0;
	}
	Var0.f_3 = iParam0;
	Var0.f_2 = 303248275;
	if (DATAFILE::_DATAFILE_GET_BOOL(&uVar5, &Var0))
	{
	}
	return uVar5;
}

int func_1195(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, float fParam10)
{
	int iVar0;
	int iVar1;
	
	if (bParam5)
	{
		if (func_1399(iParam3, iParam4))
		{
			return 0;
		}
	}
	if (!bParam7 || func_1400(5))
	{
		if (func_1401(iParam3, iParam4))
		{
			return 0;
		}
	}
	iVar0 = func_1088(vParam0);
	if (bParam6)
	{
		iVar1 = func_1402(vParam0, 1);
		if (func_1403(iVar1) || func_1404(iVar0, 1))
		{
			return 0;
		}
	}
	if (!func_1405(iParam3, iParam4))
	{
		return 0;
	}
	if (!func_1406())
	{
		if (func_1407(iParam3, iParam4))
		{
			return 0;
		}
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam8))
	{
		if (!func_1408(iVar0))
		{
			return 0;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_1402(vParam0, 0))
				{
					return 0;
				}
			}
		}
	}
	if (!func_1409(iParam3, iParam4))
	{
		return 0;
	}
	if (func_1410(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return 0;
		}
	}
	if (!func_1411(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return 0;
		}
	}
	if (func_758())
	{
		if (VOLUME::_0x92A78D0BEDB332A3(iParam8))
		{
			if (!VOLUME::_0xF256A75210C5C0EB(iParam8, vParam0))
			{
				return 0;
			}
		}
		if (func_1412(vParam0, fParam10) || func_1413(vParam0, fParam10))
		{
			return 0;
		}
	}
	else if (bParam9)
	{
		if (vParam0.x < -450f && vParam0.y < -600f)
		{
			return 0;
		}
	}
	return 1;
}

bool func_1196(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_1197(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(((*Global_1934603)[iVar0 /*16*/])->f_10), sParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1198(var uParam0)
{
	if (func_1196(uParam0, 1))
	{
		func_1414(1);
	}
}

int func_1199(int iParam0)
{
	if ((((((iParam0 == 11 || iParam0 == 13) || iParam0 == 15) || iParam0 == 16) || iParam0 == 19) || iParam0 == 20) || iParam0 == 22)
	{
		return 0;
	}
	return 1;
}

bool func_1200(int iParam0)
{
	return func_528(iParam0, 5, 1);
}

int func_1201(int iParam0)
{
	if (iParam0 == 14)
	{
		return 0;
	}
	return 1;
}

bool func_1202(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_1203(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_1204(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

int func_1205(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_1415(iVar0, &uVar2, &uVar3, &iVar1, &uVar4);
	if (func_1416(&uVar5, iVar0, iVar1, uVar2))
	{
	}
	return uVar5;
}

int func_1206(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::_0x31FEF6A20F00B963(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			iVar0 = func_1417(iVar1);
		}
	}
	return iVar0;
}

struct<10> func_1207(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

int func_1208(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<37> Var0;
	int iVar47;
	
	*uParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_889(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam5)
		{
		}
		return 0;
	}
	if (!bParam5)
	{
	}
	*uParam3 = Var0.f_3;
	iVar47 = 0;
	while (iVar47 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*((*uParam2)[iVar47 /*2*/]) = { *(Var0.f_4[iVar47 /*2*/]) };
		iVar47++;
	}
	if (bParam4)
	{
		func_1418(iParam0, iParam1, uParam2, *uParam3);
	}
	return 1;
}

int func_1209(int iParam0)
{
	return iParam0 & 31;
}

int func_1210(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_1419(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_1211()
{
	int iVar0;
	
	iVar0 = &Global_1946804->f_529[9];
	iVar0 = (&Global_1946804->f_529[4] + iVar0);
	iVar0 = (&Global_1946804->f_529[10] + iVar0);
	iVar0 = (&Global_1946804->f_529[1] + iVar0);
	iVar0 = (&Global_1946804->f_529[2] + iVar0);
	iVar0 = (&Global_1946804->f_529[6] + iVar0);
	iVar0 = (&Global_1946804->f_529[29] + iVar0);
	iVar0 = (&Global_1946804->f_529[26] + iVar0);
	iVar0 = (&Global_1946804->f_529[18] + iVar0);
	iVar0 = (&Global_1946804->f_529[19] + iVar0);
	return iVar0 > 0;
}

int func_1212(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;
	
	if (!func_889(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_998(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1420("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_982(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_1230(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_985(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_985(iVar1);
	}
	return 0;
}

int func_1213()
{
	int iVar0;
	int iVar1;
	
	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("weapon_unarmed"))
	{
		if (iVar0 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0)) && !func_1421(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == -160924582)
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_1421(iVar0)) || iVar0 == 2055893578)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == joaat("weapon_unarmed"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_1214(int iParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, -236813012, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1971208180, false);
	PAD::DISABLE_CONTROL_ACTION(0, -558006538, false);
	PAD::DISABLE_CONTROL_ACTION(0, 383204893, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1644869882, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1750532712, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1228478939, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1225530114, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1210409198, false);
	PAD::DISABLE_CONTROL_ACTION(0, -674562833, false);
	PAD::DISABLE_CONTROL_ACTION(0, -197984200, false);
	PAD::DISABLE_CONTROL_ACTION(0, -238861894, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1537201378, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1847550875, false);
	PAD::DISABLE_CONTROL_ACTION(0, -248506778, false);
	PAD::DISABLE_CONTROL_ACTION(0, -17122892, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1708280984, false);
	PAD::DISABLE_CONTROL_ACTION(0, -890654697, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1644850270, false);
	PAD::DISABLE_CONTROL_ACTION(0, 585168871, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1752838637, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1226157066, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1671483992, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1915927219, false);
	PAD::DISABLE_CONTROL_ACTION(0, 139329429, false);
	PAD::DISABLE_CONTROL_ACTION(0, 827890385, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1122746426, false);
	PAD::DISABLE_CONTROL_ACTION(0, -299367216, false);
	PAD::DISABLE_CONTROL_ACTION(0, 665666611, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1589851512, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1252087310, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2074653976, false);
	PAD::DISABLE_CONTROL_ACTION(0, -271587657, false);
	PAD::DISABLE_CONTROL_ACTION(0, 598619298, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1808336124, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2003148177, false);
	PAD::DISABLE_CONTROL_ACTION(0, 211270343, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1048377764, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1437157082, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1182422434, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1652311577, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1156046995, false);
	PAD::DISABLE_CONTROL_ACTION(0, -410363332, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1184686705, false);
	PAD::DISABLE_CONTROL_ACTION(0, -101775574, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1171447126, false);
	PAD::DISABLE_CONTROL_ACTION(0, -762559377, false);
	PAD::DISABLE_CONTROL_ACTION(0, -172830981, false);
	PAD::DISABLE_CONTROL_ACTION(0, -677830796, false);
	PAD::DISABLE_CONTROL_ACTION(0, 2102517284, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1679904073, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1538519165, false);
	PAD::DISABLE_CONTROL_ACTION(0, -41065305, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1482593325, false);
	PAD::DISABLE_CONTROL_ACTION(0, 308778731, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1002303471, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1771341755, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1459101765, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2032700426, false);
	PAD::DISABLE_CONTROL_ACTION(0, 2120975890, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1879610457, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1033498310, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1074497799, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1623727326, false);
	PAD::DISABLE_CONTROL_ACTION(0, -922478227, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
	PAD::DISABLE_CONTROL_ACTION(0, -513041747, false);
	PAD::DISABLE_CONTROL_ACTION(0, -874806616, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2128083607, false);
	PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
	PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
	PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1879280170, false);
	PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1938056823, false);
	PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1301263553, false);
	PAD::DISABLE_CONTROL_ACTION(0, -39308912, false);
	if (iParam0 == 1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1450761377, false);
		PAD::DISABLE_CONTROL_ACTION(0, -771458680, false);
	}
}

void func_1215(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	if (!VEHICLE::_0xEA44E97849E9F3DD(*iParam0))
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_0xA8BA0BAE0173457B(*iParam0, iVar0);
		if (func_330(iVar1, 1))
		{
			TASK::CLEAR_PED_TASKS(iVar1, 1, 0);
			TASK::TASK_STAND_STILL(iVar1, -1);
		}
		iVar0++;
	}
}

int func_1216(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_1217(int iParam0)
{
	if (func_271(iParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, true);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 127, false);
	if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
	{
		FIRE::STOP_ENTITY_FIRE(iParam0, 0);
		ENTITY::_SET_ENTITY_HEALTH(iParam0, ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, 0), 0);
	}
}

void func_1218(int iParam0)
{
	int iVar0;
	
	if (!func_527(iParam0))
	{
		return;
	}
	if (func_403(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_136(iParam0);
	func_1217(iVar0);
	func_929(iParam0, 8192, 1);
}

void func_1219(int iParam0)
{
	if (func_271(iParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 0, false);
}

void func_1220(int iParam0)
{
	int iVar0;
	
	if (!func_527(iParam0))
	{
		return;
	}
	if (func_403(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_136(iParam0);
	func_1219(iVar0);
	func_929(iParam0, 8192, 0);
}

void func_1221(int iParam0)
{
	if (func_271(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, false);
}

void func_1222(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (func_343(14))
	{
		return;
	}
	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[4])))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(iParam0, &(Global_1357549->f_3[4]), true, 0))
	{
		return;
	}
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 909522);
}

void func_1223(int iParam0)
{
	int iVar0;
	
	if (!func_527(iParam0))
	{
		return;
	}
	if (func_403(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_136(iParam0);
	func_1221(iVar0);
	func_929(iParam0, 16384, 1);
}

void func_1224(int iParam0)
{
	if (func_271(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, true);
}

void func_1225(int iParam0)
{
	int iVar0;
	
	if (!func_527(iParam0))
	{
		return;
	}
	if (func_403(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_136(iParam0);
	func_1224(iVar0);
	func_929(iParam0, 16384, 0);
}

int func_1226(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_1422(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

int func_1227(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iParam0)
	{
		case 296923297:
			iVar2 = -268604689;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					iVar1 = -268604689;
					break;
				
				case 1:
					iVar1 = -1632589543;
					break;
				
				case 2:
					iVar1 = -1862464078;
					break;
			}
			break;
		
		case 1237718549:
			iVar2 = -922193456;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					iVar1 = -922193456;
					break;
				
				case 1:
					iVar1 = -2040275819;
					break;
				
				case 2:
					iVar1 = -1114682645;
					break;
				
				case 3:
					iVar1 = -1414977761;
					break;
			}
			break;
	}
	if (iParam1 != -1)
	{
		if (func_538(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_1228(int iParam0)
{
	switch (iParam0)
	{
		case -268604689:
			return -1496612359;
		
		case -1632589543:
			return 1052055818;
		
		case -1862464078:
			return 1895628185;
		
		case -922193456:
			return -99272505;
		
		case -2040275819:
			return 464906090;
		
		case -1114682645:
			return 744097966;
		
		case -1414977761:
			return 1059434053;
		
		default:
			break;
	}
	return 41788943;
}

void func_1229(int iParam0, int iParam1)
{
	(Global_40.f_4942[iParam0 /*60*/])->f_5 = ((Global_40.f_4942[iParam0 /*60*/])->f_5 - ((Global_40.f_4942[iParam0 /*60*/])->f_5 && iParam1));
}

bool func_1230(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_1231(int iParam0)
{
	int iVar0;
	
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_1232(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;
	
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
	{
		Var0 = { func_1423(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1424((375 + iVar28), 1);
			if (func_1252(iParam0, &Var0, iVar5, 0))
			{
				if (func_1253(iParam0, &Var6, iVar5))
				{
					Var29 = { func_962(iParam0, Var0, iVar5, 0) };
					func_963(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_1248(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
					{
						return 0;
					}
					func_1425(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
					func_1426(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

void func_1233(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*iParam1 == 383145463 || *iParam1 == -169598849) || *iParam1 == 600245965) || *iParam1 == 38266755) || *iParam1 == -510274983) || *iParam1 == 1252941818) || *iParam1 == 575725904) || *iParam1 == 1311933014)
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case -1273613561:
		case -776789570:
		case -763072541:
		case -486390692:
		case 50483426:
		case 215164947:
		case 247176142:
		case 347599949:
		case 852072701:
		case 861896523:
		case 1017000466:
		case 1245530084:
		case 1336863290:
		case 1485366395:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		
		case -969819655:
		case -628956517:
		case -355385988:
		case 300505615:
		case 466209020:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		
		case 363815774:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		
		case -1910990966:
		case -1421951598:
		case 1921874948:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		
		case -1090280091:
		case -1076294934:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		
		case -1011228908:
		case -1008616424:
		case 424175505:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		
		case -1208814201:
		case -390289284:
		case 1112571710:
		case 1478983280:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_1234(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

float func_1235(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_1082(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

void func_1236(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_136(iParam0);
	if (!PED::_0xA911EE21EDF69DAF(iVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		iVar3 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
		}
		else
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(iVar3))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, true);
			}
			ENTITY::_0x0D0DB2B6AF19A987(&iVar3);
		}
		iVar2++;
	}
}

void func_1237(int iParam0)
{
	int iVar0;
	
	if (!func_527(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((Global_1357549->f_1675[iVar0 /*5*/])->f_1 == iParam0)
		{
			(Global_1357549->f_1675[iVar0 /*5*/])->f_1 = -1;
			((*Global_1360165)[iParam0 /*1157*/])->f_127 = 0;
		}
		iVar0++;
	}
}

void func_1238(int iParam0, int iParam1)
{
	if (!func_527(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_12 = iParam1;
}

int func_1239(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1240(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_1241(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_1242(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_946(*uParam0);
	iVar1 = func_945(*uParam0);
	if (iParam1 < 1 || iParam1 > func_949(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_1243(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_1244(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_1245(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_1246(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_1247(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_507(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_1248(bool bParam0)
{
	if (func_56() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_507(bParam0));
}

int func_1249(var uParam0)
{
	if (!func_889(*uParam0, 0))
	{
		return 0;
	}
	switch (*uParam0)
	{
		case -1073808995:
			*uParam0 = -1753819339;
			return 1;
		
		case 1903483453:
			*uParam0 = -1527293029;
			return 1;
		
		case -541584777:
			*uParam0 = 206762213;
			return 1;
		
		case 998010398:
			*uParam0 = -324053813;
			return 1;
		
		case -1424823393:
			*uParam0 = -885810591;
			return 1;
		
		default:
			break;
	}
	return 0;
}

bool func_1250(int iParam0)
{
	return func_997(iParam0) == -427144552;
}

struct<4> func_1251(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_507(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_962(923904168, func_825(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_962(923904168, func_825(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_962(923904168, func_825(bParam0), -740156546, 0);
}

bool func_1252(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1257(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_1253(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	
	if (func_1427(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

int func_1254(int iParam0, bool bParam1)
{
	if (func_508(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_1428(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_1255(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;
	
	if (!func_889(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_1423(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1424((375 + iVar29), 1);
		if (func_1252(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_1253(iParam0, &Var6, iVar5);
			if ((iParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return 1;
			}
		}
		iVar29++;
	}
	return 0;
}

int func_1256(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_889(iParam0, 0))
	{
		return 0;
	}
	if (!func_1248(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_507(bParam3), iParam0);
}

int func_1257(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;
	
	if (!func_889(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_962(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_507(bParam6), &Var0, 0);
	return uVar4;
}

int func_1258(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2147332013:
			return 129;
		
		case -2137730706:
			return 13;
		
		case -2129915369:
			return 383;
		
		case -2122981486:
			return 179;
		
		case -2104294676:
			return 83;
		
		case -2098336883:
			return 145;
		
		case -2093351659:
			return 297;
		
		case -2093199573:
			return 185;
		
		case -2082302444:
			return 259;
		
		case -2075517304:
			return 393;
		
		case -2071373019:
			return 440;
		
		case -2063047758:
			return 190;
		
		case -2047114234:
			return 351;
		
		case -2041153728:
			return 277;
		
		case -2038346064:
			return 244;
		
		case -2033572567:
			return 92;
		
		case -2030965067:
			return 380;
		
		case -2023813568:
			return 125;
		
		case -2006082799:
			return 56;
		
		case -1994410205:
			return 499;
		
		case -1988547710:
			return 457;
		
		case -1981702243:
			return 96;
		
		case -1971110347:
			return 435;
		
		case -1955429862:
			return 387;
		
		case -1949364492:
			return 285;
		
		case -1943655584:
			return 460;
		
		case -1935893216:
			return 124;
		
		case -1934704933:
			return 423;
		
		case -1922834065:
			return 320;
		
		case -1917134080:
			return 309;
		
		case -1916588959:
			return 29;
		
		case -1897704131:
			return 225;
		
		case -1888506091:
			return 142;
		
		case -1885734028:
			return 110;
		
		case -1868521635:
			return 396;
		
		case -1866112883:
			return 257;
		
		case -1856459307:
			return 219;
		
		case -1837343824:
			return 496;
		
		case -1832590852:
			return 326;
		
		case -1827461037:
			return 233;
		
		case -1827211287:
			return 197;
		
		case -1827011525:
			return 98;
		
		case -1825730216:
			return 18;
		
		case -1818590041:
			return 246;
		
		case -1812183035:
			return 97;
		
		case -1805142260:
			return 273;
		
		case -1804466187:
			return 77;
		
		case -1802212639:
			return 10;
		
		case -1790474454:
			return 331;
		
		case -1771575988:
			return 16;
		
		case -1757085331:
			return 454;
		
		case -1738185394:
			return 411;
		
		case -1728071186:
			return 108;
		
		case -1719149624:
			return 131;
		
		case -1689239424:
			return 312;
		
		case -1675752723:
			return 249;
		
		case -1671819791:
			return 196;
		
		case -1667151809:
			return 139;
		
		case -1664107227:
			return 405;
		
		case -1648173738:
			return 22;
		
		case -1646431667:
			return 415;
		
		case -1633236438:
			return 426;
		
		case -1596446207:
			return 252;
		
		case -1584659518:
			return 210;
		
		case -1582252733:
			return 409;
		
		case -1565979762:
			return 507;
		
		case -1564254711:
			return 158;
		
		case -1557862414:
			return 88;
		
		case -1557856056:
			return 112;
		
		case -1548165899:
			return 422;
		
		case -1538781541:
			return 483;
		
		case -1526278254:
			return 338;
		
		case -1520159291:
			return 17;
		
		case -1512720465:
			return 413;
		
		case -1501120273:
			return 57;
		
		case -1486701482:
			return 437;
		
		case -1483924019:
			return 27;
		
		case -1482329777:
			return 369;
		
		case -1479860879:
			return 482;
		
		case -1466029365:
			return 223;
		
		case -1461741225:
			return 280;
		
		case -1426009748:
			return 119;
		
		case -1425653701:
			return 199;
		
		case -1417145007:
			return 472;
		
		case -1409307734:
			return 289;
		
		case -1408927269:
			return 21;
		
		case -1405475146:
			return 329;
		
		case -1396074730:
			return 427;
		
		case -1393633441:
			return 377;
		
		case -1383535454:
			return 135;
		
		case -1381943684:
			return 470;
		
		case -1377327596:
			return 205;
		
		case -1370062029:
			return 148;
		
		case -1355784201:
			return 311;
		
		case -1340559426:
			return 373;
		
		case -1333840726:
			return 236;
		
		case -1318290630:
			return 254;
		
		case -1316284753:
			return 114;
		
		case -1302664729:
			return 294;
		
		case -1299405763:
			return 206;
		
		case -1276847784:
			return 229;
		
		case -1238376790:
			return 445;
		
		case -1235200494:
			return 165;
		
		case -1233518925:
			return 318;
		
		case -1220678266:
			return 120;
		
		case -1211711936:
			return 26;
		
		case -1205318041:
			return 23;
		
		case -1202860612:
			return 327;
		
		case -1198456774:
			return 442;
		
		case -1190705999:
			return 9;
		
		case -1179993139:
			return 284;
		
		case -1171086122:
			return 41;
		
		case -1164176475:
			return 138;
		
		case -1152282847:
			return 33;
		
		case -1143028112:
			return 25;
		
		case -1117048125:
			return 238;
		
		case -1088604829:
			return 247;
		
		case -1077843421:
			return 324;
		
		case -1061998329:
			return 164;
		
		case -1061765120:
			return 169;
		
		case -1048889581:
			return 391;
		
		case -1045864225:
			return 510;
		
		case -1036305792:
			return 58;
		
		case -1032742879:
			return 61;
		
		case -1025265051:
			return 485;
		
		case -978287173:
			return 12;
		
		case -954047483:
			return 395;
		
		case -948342953:
			return 359;
		
		case -935212592:
			return 486;
		
		case -925475803:
			return 484;
		
		case -916887991:
			return 76;
		
		case -908082222:
			return 187;
		
		case -895048976:
			return 374;
		
		case -890266811:
			return 172;
		
		case -872824399:
			return 170;
		
		case -860304527:
			return 186;
		
		case -850999370:
			return 2;
		
		case -833577856:
			return 86;
		
		case -830432609:
			return 492;
		
		case -825056768:
			return 149;
		
		case -820146008:
			return 52;
		
		case -820014425:
			return 439;
		
		case -818926670:
			return 200;
		
		case -813365276:
			return 243;
		
		case -811804990:
			return 293;
		
		case -807742826:
			return 3;
		
		case -807680461:
			return 68;
		
		case -807112425:
			return 180;
		
		case -803062666:
			return 65;
		
		case -779264865:
			return 106;
		
		case -757336127:
			return 372;
		
		case -742985447:
			return 302;
		
		case -736212459:
			return 275;
		
		case -715535005:
			return 362;
		
		case -713369135:
			return 461;
		
		case -710247698:
			return 251;
		
		case -697342513:
			return 242;
		
		case -695655810:
			return 443;
		
		case -694047360:
			return 375;
		
		case -693094356:
			return 89;
		
		case -692943180:
			return 341;
		
		case -681593414:
			return 175;
		
		case -671103079:
			return 504;
		
		case -670201310:
			return 313;
		
		case -666548248:
			return 345;
		
		case -650501093:
			return 509;
		
		case -646454939:
			return 94;
		
		case -637873918:
			return 404;
		
		case -636774257:
			return 146;
		
		case -625309660:
			return 343;
		
		case -625171987:
			return 234;
		
		case -620369863:
			return 403;
		
		case -619139736:
			return 104;
		
		case -604891653:
			return 237;
		
		case -597010176:
			return 487;
		
		case -582523927:
			return 424;
		
		case -574426587:
			return 261;
		
		case -561040434:
			return 400;
		
		case -558867971:
			return 266;
		
		case -554271718:
			return 232;
		
		case -550689301:
			return 283;
		
		case -544885621:
			return 310;
		
		case -544096309:
			return 337;
		
		case -534913305:
			return 174;
		
		case -532430534:
			return 444;
		
		case -527348304:
			return 253;
		
		case -515663690:
			return 330;
		
		case -505205920:
			return 39;
		
		case -453449739:
			return 182;
		
		case -449489613:
			return 140;
		
		case -445710060:
			return 469;
		
		case -435161770:
			return 150;
		
		case -426458298:
			return 59;
		
		case -423162607:
			return 133;
		
		case -413943699:
			return 141;
		
		case -404697685:
			return 308;
		
		case -402973141:
			return 418;
		
		case -399703928:
			return 155;
		
		case -384358266:
			return 295;
		
		case -381477663:
			return 37;
		
		case -365550600:
			return 30;
		
		case -332258016:
			return 382;
		
		case -331451824:
			return 303;
		
		case -330340613:
			return 489;
		
		case -328226663:
			return 323;
		
		case -324786054:
			return 288;
		
		case -319093529:
			return 260;
		
		case -317452243:
			return 128;
		
		case -314300362:
			return 473;
		
		case -308211771:
			return 194;
		
		case -303175962:
			return 431;
		
		case -302690754:
			return 67;
		
		case -302574837:
			return 24;
		
		case -290258665:
			return 317;
		
		case -286479684:
			return 269;
		
		case -285172118:
			return 505;
		
		case -270246276:
			return 490;
		
		case -266920872:
			return 357;
		
		case -259827569:
			return 425;
		
		case -258855820:
			return 464;
		
		case -248683070:
			return 429;
		
		case -231638975:
			return 34;
		
		case -222982511:
			return 204;
		
		case -221923309:
			return 406;
		
		case -221398783:
			return 354;
		
		case -219249641:
			return 474;
		
		case -218211995:
			return 344;
		
		case -207368052:
			return 361;
		
		case -172442174:
			return 385;
		
		case -170673728:
			return 156;
		
		case -165538585:
			return 127;
		
		case -164763388:
			return 376;
		
		case -164125056:
			return 438;
		
		case -162152912:
			return 441;
		
		case -144509608:
			return 113;
		
		case -134086241:
			return 222;
		
		case -125979788:
			return 95;
		
		case -123719783:
			return 151;
		
		case -121904458:
			return 208;
		
		case -120359954:
			return 316;
		
		case -117389654:
			return 93;
		
		case -115054321:
			return 325;
		
		case -110297889:
			return 290;
		
		case -98209688:
			return 55;
		
		case -94582539:
			return 239;
		
		case -72799657:
			return 287;
		
		case -66788599:
			return 19;
		
		case -58963831:
			return 105;
		
		case -58291054:
			return 201;
		
		case -56411631:
			return 342;
		
		case -54575589:
			return 353;
		
		case -21372580:
			return 46;
		
		case -18183703:
			return 466;
		
		case -8269375:
			return 137;
		
		case 13460468:
			return 350;
		
		case 15906262:
			return 321;
		
		case 16938930:
			return 81;
		
		case 61425283:
			return 51;
		
		case 65871884:
			return 54;
		
		case 70047950:
			return 188;
		
		case 72162222:
			return 43;
		
		case 72854145:
			return 1;
		
		case 85572330:
			return 147;
		
		case 94814634:
			return 228;
		
		case 95619635:
			return 408;
		
		case 98434060:
			return 458;
		
		case 108841201:
			return 358;
		
		case 121222228:
			return 476;
		
		case 121466883:
			return 498;
		
		case 122725574:
			return 477;
		
		case 124507607:
			return 480;
		
		case 127002552:
			return 455;
		
		case 132239274:
			return 494;
		
		case 132287504:
			return 184;
		
		case 137433874:
			return 227;
		
		case 139790602:
			return 60;
		
		case 171363131:
			return 47;
		
		case 176656832:
			return 0;
		
		case 180573150:
			return 279;
		
		case 187832713:
			return 282;
		
		case 195634974:
			return 433;
		
		case 200640922:
			return 35;
		
		case 207369059:
			return 64;
		
		case 209896562:
			return 304;
		
		case 217189690:
			return 241;
		
		case 220165734:
			return 134;
		
		case 228261307:
			return 74;
		
		case 229393477:
			return 270;
		
		case 278608719:
			return 399;
		
		case 281905065:
			return 419;
		
		case 289706151:
			return 364;
		
		case 290238735:
			return 250;
		
		case 291150162:
			return 103;
		
		case 299577191:
			return 90;
		
		case 315283201:
			return 240;
		
		case 315850182:
			return 193;
		
		case 319124397:
			return 506;
		
		case 340819214:
			return 84;
		
		case 388356689:
			return 101;
		
		case 397857304:
			return 335;
		
		case 400034151:
			return 71;
		
		case 403634348:
			return 291;
		
		case 404260466:
			return 73;
		
		case 408875702:
			return 80;
		
		case 411591903:
			return 132;
		
		case 437096661:
			return 446;
		
		case 443165194:
			return 332;
		
		case 446631778:
			return 436;
		
		case 448165982:
			return 220;
		
		case 474959407:
			return 255;
		
		case 477580579:
			return 493;
		
		case 487107418:
			return 370;
		
		case 490619049:
			return 163;
		
		case 500323776:
			return 40;
		
		case 501194998:
			return 471;
		
		case 512067206:
			return 452;
		
		case 525567468:
			return 160;
		
		case 531203229:
			return 245;
		
		case 532176461:
			return 203;
		
		case 533929296:
			return 346;
		
		case 534386033:
			return 488;
		
		case 534766068:
			return 349;
		
		case 542655528:
			return 360;
		
		case 545240164:
			return 398;
		
		case 553023190:
			return 78;
		
		case 561912024:
			return 420;
		
		case 569547151:
			return 389;
		
		case 579829077:
			return 178;
		
		case 597768834:
			return 315;
		
		case 627421591:
			return 268;
		
		case 634843927:
			return 66;
		
		case 643583911:
			return 401;
		
		case 652625673:
			return 501;
		
		case 654830082:
			return 371;
		
		case 676394410:
			return 8;
		
		case 678897243:
			return 211;
		
		case 679257961:
			return 126;
		
		case 685466172:
			return 217;
		
		case 692218123:
			return 467;
		
		case 693884302:
			return 177;
		
		case 703663141:
			return 328;
		
		case 705436149:
			return 365;
		
		case 709886296:
			return 414;
		
		case 720937389:
			return 115;
		
		case 727456822:
			return 153;
		
		case 730196087:
			return 157;
		
		case 737744809:
			return 50;
		
		case 747937920:
			return 481;
		
		case 753501669:
			return 367;
		
		case 761196368:
			return 218;
		
		case 766757422:
			return 296;
		
		case 772151702:
			return 28;
		
		case 779383250:
			return 336;
		
		case 787526397:
			return 202;
		
		case 794696385:
			return 14;
		
		case 812866778:
			return 355;
		
		case 833697503:
			return 298;
		
		case 837366581:
			return 118;
		
		case 847641699:
			return 192;
		
		case 852724290:
			return 136;
		
		case 853563984:
			return 49;
		
		case 856952521:
			return 42;
		
		case 866755445:
			return 4;
		
		case 870594813:
			return 173;
		
		case 881844660:
			return 11;
		
		case 920901415:
			return 412;
		
		case 921753284:
			return 272;
		
		case 951007010:
			return 407;
		
		case 951777606:
			return 212;
		
		case 953460136:
			return 159;
		
		case 960236560:
			return 70;
		
		case 1004978630:
			return 333;
		
		case 1005520287:
			return 38;
		
		case 1019519723:
			return 256;
		
		case 1025198797:
			return 171;
		
		case 1046168872:
			return 456;
		
		case 1057391314:
			return 356;
		
		case 1059753202:
			return 198;
		
		case 1061621862:
			return 299;
		
		case 1073595144:
			return 417;
		
		case 1080053708:
			return 189;
		
		case 1086705486:
			return 265;
		
		case 1092859156:
			return 116;
		
		case 1098143971:
			return 305;
		
		case 1130474589:
			return 264;
		
		case 1132574871:
			return 402;
		
		case 1134064472:
			return 271;
		
		case 1138578991:
			return 286;
		
		case 1141344854:
			return 378;
		
		case 1150653348:
			return 392;
		
		case 1156064998:
			return 366;
		
		case 1157034909:
			return 451;
		
		case 1165920102:
			return 292;
		
		case 1166284695:
			return 363;
		
		case 1176031365:
			return 224;
		
		case 1176450045:
			return 87;
		
		case 1185998732:
			return 410;
		
		case 1188734721:
			return 214;
		
		case 1219566057:
			return 166;
		
		case 1234351222:
			return 463;
		
		case 1249990864:
			return 428;
		
		case 1264235360:
			return 450;
		
		case 1267596926:
			return 7;
		
		case 1267957796:
			return 32;
		
		case 1292421672:
			return 215;
		
		case 1296800590:
			return 107;
		
		case 1297331434:
			return 130;
		
		case 1300783988:
			return 45;
		
		case 1305416676:
			return 495;
		
		case 1314347520:
			return 122;
		
		case 1328264128:
			return 258;
		
		case 1330480767:
			return 102;
		
		case 1335382896:
			return 248;
		
		case 1338855384:
			return 152;
		
		case 1344816618:
			return 314;
		
		case 1344986053:
			return 168;
		
		case 1349313303:
			return 6;
		
		case 1354948947:
			return 300;
		
		case 1357649685:
			return 267;
		
		case 1358951864:
			return 368;
		
		case 1360004037:
			return 322;
		
		case 1365311568:
			return 85;
		
		case 1366067161:
			return 91;
		
		case 1402899606:
			return 195;
		
		case 1406459015:
			return 53;
		
		case 1410684624:
			return 181;
		
		case 1415827953:
			return 432;
		
		case 1425403638:
			return 479;
		
		case 1427678219:
			return 230;
		
		case 1437607594:
			return 306;
		
		case 1438982821:
			return 111;
		
		case 1441230304:
			return 502;
		
		case 1447433250:
			return 352;
		
		case 1448617333:
			return 99;
		
		case 1454698172:
			return 421;
		
		case 1456958671:
			return 397;
		
		case 1467569385:
			return 69;
		
		case 1469701481:
			return 394;
		
		case 1508162848:
			return 434;
		
		case 1522535287:
			return 48;
		
		case 1524405765:
			return 79;
		
		case 1534808110:
			return 301;
		
		case 1549419655:
			return 216;
		
		case 1566844391:
			return 63;
		
		case 1571380021:
			return 75;
		
		case 1578693170:
			return 144;
		
		case 1593516439:
			return 462;
		
		case 1618734891:
			return 339;
		
		case 1621135203:
			return 44;
		
		case 1623482561:
			return 503;
		
		case 1636680094:
			return 478;
		
		case 1647502903:
			return 20;
		
		case 1665139197:
			return 278;
		
		case 1674863702:
			return 281;
		
		case 1675028401:
			return 109;
		
		case 1685749736:
			return 334;
		
		case 1688887348:
			return 209;
		
		case 1699962800:
			return 263;
		
		case 1701503387:
			return 207;
		
		case 1707661169:
			return 167;
		
		case 1723031480:
			return 161;
		
		case 1731971171:
			return 262;
		
		case 1750892420:
			return 183;
		
		case 1756182884:
			return 162;
		
		case 1759111208:
			return 72;
		
		case 1769573516:
			return 468;
		
		case 1773135364:
			return 231;
		
		case 1777191912:
			return 340;
		
		case 1783253542:
			return 384;
		
		case 1784248599:
			return 143;
		
		case 1786449168:
			return 31;
		
		case 1791780428:
			return 117;
		
		case 1792418811:
			return 100;
		
		case 1796786552:
			return 379;
		
		case 1817180056:
			return 390;
		
		case 1819621703:
			return 276;
		
		case 1824331150:
			return 449;
		
		case 1852529797:
			return 307;
		
		case 1863892775:
			return 274;
		
		case 1874987418:
			return 191;
		
		case 1888528254:
			return 447;
		
		case 1889392998:
			return 508;
		
		case 1890596065:
			return 235;
		
		case 1899640864:
			return 388;
		
		case 1909655985:
			return 430;
		
		case 1914552023:
			return 176;
		
		case 1927460276:
			return 448;
		
		case 1935952956:
			return 475;
		
		case 1937922313:
			return 459;
		
		case 1945593927:
			return 62;
		
		case 1955664182:
			return 226;
		
		case 1964695690:
			return 491;
		
		case 1971155641:
			return 453;
		
		case 1974689262:
			return 500;
		
		case 1978339427:
			return 154;
		
		case 2011168490:
			return 123;
		
		case 2011368334:
			return 221;
		
		case 2016323151:
			return 36;
		
		case 2030928096:
			return 381;
		
		case 2033246305:
			return 82;
		
		case 2045192987:
			return 319;
		
		case 2045388447:
			return 121;
		
		case 2050878222:
			return 497;
		
		case 2057380366:
			return 348;
		
		case 2071287828:
			return 347;
		
		case 2080199877:
			return 213;
		
		case 2082303678:
			return 5;
		
		case 2091083291:
			return 15;
		
		case 2137967386:
			return 386;
		
		case 2143106360:
			return 416;
		
		case 2143139308:
			return 465;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_1259(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1260(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1429(iParam0);
	}
	else
	{
		func_1430(iParam0, iParam1);
	}
	func_1431();
}

void func_1261(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

void func_1262(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

void func_1263(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = iParam1;
}

void func_1264(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12105[iParam0 /*7*/] = uParam1;
		return;
	}
	Global_1058888->f_498[iParam0 /*2*/] = uParam1;
}

void func_1265(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_5 = iParam1;
		return;
	}
	(Global_1058888->f_498[iParam0 /*2*/])->f_1 = iParam1;
}

bool func_1266(int iParam0, int iParam1)
{
	if (func_56() != -1)
	{
		return false;
	}
	if (!func_408(iParam0))
	{
		return false;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_783(iParam0)))
	{
		return false;
	}
	if (iParam1 && !ENTITY::DOES_ENTITY_EXIST(func_972(iParam0)))
	{
		return false;
	}
	return !_NAMESPACE48::_0xEB98B38CA60742D7(func_783(iParam0));
}

Vector3 func_1267(vector3 vParam0, vector3 vParam3, vector3 vParam6)
{
	vector3 vVar0;
	
	vVar0 = { func_1432(vParam6, vParam3) };
	return vParam0 + vVar0;
}

void func_1268(int iParam0, var uParam1)
{
	if (Global_40.f_4283 == 3)
	{
		if (*uParam1 == 3)
		{
			INTERIOR::FORCE_ROOM_FOR_ENTITY(&(uParam1->f_9[iParam0 /*9*/]), INTERIOR::GET_INTERIOR_AT_COORDS(uParam1->f_3), -1289461573);
		}
	}
}

int func_1269(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	var uVar9;
	
	if (!func_889(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_825(0) };
	Var0.f_4 = func_1270(iParam1);
	Var5 = { func_962(iParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	uVar9 = INVENTORY::_0xC97E0D2302382211(func_507(0), &Var5, 0);
	return uVar9;
}

int func_1270(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		
		case 1:
			return -1360128126;
		
		case 2:
			return 1426626782;
		
		case 3:
			return 1227915917;
		
		default:
			break;
	}
	return 1084182731;
}

void func_1271(var uParam0)
{
	Global_1914319->f_15923 = uParam0;
}

int func_1272(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;
	
	func_1433(iParam3, &vVar0, &Var3, &fVar6);
	if (func_1434(vParam0, vVar0, Var3, Var3.f_1, fVar6))
	{
		return 1;
	}
	return 0;
}

void func_1273(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*uParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		
		case -1202134084:
			*uParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		
		case 1297050066:
			*uParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		
		case -1780177928:
			*uParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		
		case -1467836497:
			*uParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		
		case 1723805622:
			*uParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		
		case -153287664:
			*uParam1 = -1650796693;
			*uParam2 = 836939099;
			break;
		
		case 1845082736:
			*uParam1 = -1521597660;
			*uParam2 = -1411815376;
			break;
		
		case 406755377:
			*uParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			break;
		
		case 1469029564:
			*uParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			break;
		
		case 45760211:
			*uParam1 = -851229814;
			*uParam2 = 1654725195;
			break;
		
		case -276295943:
			*uParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		
		case -2029793397:
			*uParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		
		case -2075613923:
			*uParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		
		case 122656217:
			*uParam1 = 1192843172;
			*uParam2 = 231465488;
			break;
		
		case 2107187484:
			*uParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			break;
		
		case -791844268:
			*uParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			break;
		
		case 305770744:
			*uParam1 = -2087227528;
			*uParam2 = 314966081;
			break;
		
		case 550900979:
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

void func_1274(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

void func_1275(var uParam0)
{
	if (Global_1357549->f_1894 > 0)
	{
		if (!func_209(uParam0->f_8))
		{
			uParam0->f_8 = func_582("SHOP_PREV_PAGE", -875187602, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_215(uParam0->f_8, -2019190071, 0, 1);
		}
	}
	else
	{
		func_210(&(uParam0->f_8), 1, 1);
	}
	if (Global_1357549->f_1894 < 3)
	{
		if (!func_209(uParam0->f_7))
		{
			uParam0->f_7 = func_582("SHOP_NEXT_PAGE", 285921746, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_215(uParam0->f_7, -2019190071, 0, 1);
		}
	}
	else
	{
		func_210(&(uParam0->f_7), 1, 1);
	}
	if (func_1435(uParam0->f_10, 1) > 0f)
	{
		if (func_1436(uParam0->f_8, 1))
		{
			func_1437(uParam0->f_8, 0, 0);
		}
		if (func_1436(uParam0->f_7, 1))
		{
			func_1437(uParam0->f_7, 0, 0);
		}
	}
	else
	{
		if (func_209(uParam0->f_8) && !func_1436(uParam0->f_8, 0))
		{
			func_1437(uParam0->f_8, 1, 0);
		}
		if (func_209(uParam0->f_7) && !func_1436(uParam0->f_7, 0))
		{
			func_1437(uParam0->f_7, 1, 0);
		}
	}
}

void func_1276(var uParam0)
{
	if (uParam0->f_773)
	{
		func_1438(uParam0);
		if (uParam0->f_772)
		{
			func_667(uParam0->f_1, "JOURNAL_INFO_HIDE", 1);
		}
		else
		{
			func_667(uParam0->f_1, "JOURNAL_INFO_SHOW", 1);
		}
	}
	else
	{
		func_1280(uParam0);
	}
}

void func_1277(var uParam0, var uParam1)
{
	bool bVar0;
	
	if (uParam0->f_35.f_491)
	{
		if (!func_209(uParam0->f_10))
		{
			uParam0->f_10 = func_582("PURCHASE_UPGRADE", 1138488863, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_215(uParam0->f_10, -2019190071, 0, 1);
			func_1437(uParam0->f_10, 0, 1);
		}
		if (uParam0->f_35.f_491.f_5)
		{
			if (func_209(uParam0->f_10) && !func_1436(uParam0->f_10, 0))
			{
				func_1437(uParam0->f_10, 1, 0);
			}
		}
		else
		{
			bVar0 = true;
			if (func_1036(uParam0, 0))
			{
				bVar0 = false;
			}
			else if (uParam0->f_35.f_491.f_1 == 2 && func_1439(2, uParam1, 1120403456))
			{
				bVar0 = false;
			}
			else if (uParam0->f_35.f_491.f_1 == 1 && func_1439(0, uParam1, 1120403456))
			{
				bVar0 = false;
			}
			else if (uParam0->f_35.f_491.f_1 == 0 && func_1439(1, uParam1, 1120403456))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (func_209(uParam0->f_10) && !func_1436(uParam0->f_10, 0))
				{
					func_1437(uParam0->f_10, 1, 0);
				}
			}
			else if (func_1436(uParam0->f_10, 1))
			{
				func_1437(uParam0->f_10, 0, 0);
			}
		}
	}
}

void func_1278(var uParam0)
{
	if (!func_1036(uParam0, 1) && !func_209(uParam0->f_9))
	{
		uParam0->f_9 = func_582("BUTCH_DONE", 814057702, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		func_215(uParam0->f_9, -2019190071, 0, 1);
	}
}

void func_1279(var uParam0)
{
	func_210(&(uParam0->f_8), 1, 1);
	func_210(&(uParam0->f_7), 1, 1);
}

void func_1280(var uParam0)
{
	if (func_209(uParam0->f_1))
	{
		func_210(&(uParam0->f_1), 1, 1);
	}
}

void func_1281(var uParam0)
{
	func_210(&(uParam0->f_10), 1, 1);
}

void func_1282(var uParam0)
{
	func_210(&(uParam0->f_9), 1, 1);
}

int func_1283(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (func_1440(*uParam0, -1725579161, 0))
	{
		return 1;
	}
	return 0;
}

int func_1284(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2535.f_1)
	{
		if (&Global_1946804->f_2535.f_43[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1285(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return func_1441(iParam0, iParam1, bParam2, bParam3);
}

void func_1286(int iParam0, int iParam1, bool bParam2)
{
	func_1442(iParam0, iParam1, bParam2, 1);
}

void func_1287(var uParam0)
{
	int iVar0;
	
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_102.f_7, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_110.f_7, 0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam0->f_55.f_5[iVar0 /*6*/])->f_5, 0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam0->f_55.f_30[iVar0 /*4*/])->f_3, 0);
		iVar0++;
	}
}

void func_1288(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	if (iParam0 == -1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, 0);
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, 1);
	if (iParam0 == 0)
	{
		switch (func_146())
		{
			case 1:
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, 160827397);
				break;
			
			case 2:
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, 1003809922);
				break;
			
			case 3:
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -518834432);
				break;
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, 0);
	}
	if (&Global_40.f_4283.f_440[iParam0 /*63*/] > 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_2, 1);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_2.f_1, MISC::_CREATE_VAR_STRING(2, "CASH_STRING", &(Global_40.f_4283.f_440[iParam0 /*63*/])));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_2, 0);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_1443(iParam0, iVar0, uParam1->f_4[iVar0 /*4*/]);
		iVar0++;
	}
	switch (iParam0)
	{
		case 0:
			if ((Global_40.f_4283.f_440[1 /*63*/])->f_62 == 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_53, 1);
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_53, 0);
			}
			break;
		
		case 1:
			if ((Global_40.f_4283.f_440[1 /*63*/])->f_62 > 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_53, 1);
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_53, 0);
			}
			break;
	}
	iVar1 = func_1444(Global_40.f_4283.f_440[iParam0 /*63*/]);
	sVar2 = "CASH_STRING";
	if (iVar1 < 0)
	{
		sVar2 = "CASH_STRING_NEG";
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_53.f_1, MISC::_CREATE_VAR_STRING(2, sVar2, iVar1));
}

void func_1289(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, 0);
		return;
	}
	iVar0 = (func_370(func_1292(iParam0), 0) - 1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, 1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_4, ((*uParam2)[iParam0 /*30*/])->f_23);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((uParam1->f_5[iVar1 /*6*/])->f_1, &(((*uParam2)[iParam0 /*30*/])->f_2[iVar1 /*4*/]));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((uParam1->f_5[iVar1 /*6*/])->f_2, (((*uParam2)[iParam0 /*30*/])->f_2[iVar1 /*4*/])->f_1);
		if ((((*uParam2)[iParam0 /*30*/])->f_2[iVar1 /*4*/])->f_3 != -1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING((uParam1->f_5[iVar1 /*6*/])->f_3, MISC::_CREATE_VAR_STRING(2, "LDGR_PRICE", (((*uParam2)[iParam0 /*30*/])->f_2[iVar1 /*4*/])->f_3));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING((uParam1->f_5[iVar1 /*6*/])->f_3, "");
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&(uParam1->f_5[iVar1 /*6*/]), iVar1 <= iVar0 + 1);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam1->f_5[iVar1 /*6*/])->f_4, iVar1 <= iVar0);
		if (((*uParam2)[iParam0 /*30*/])->f_23)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING((uParam1->f_30[iVar1 /*4*/])->f_1, MISC::_CREATE_VAR_STRING(2, "LDGR_PRICE", &(((*uParam2)[iParam0 /*30*/])->f_24[iVar1])));
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&(uParam1->f_30[iVar1 /*4*/]), iVar1 <= iVar0);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam1->f_30[iVar1 /*4*/])->f_2, iVar1 < iVar0);
		}
		iVar1++;
	}
	switch (iParam0)
	{
		case 0:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -393102324);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_2, 2011573789);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, -1557506224);
			break;
		
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -528257027);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_2, 1071167867);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, -1627564647);
			break;
		
		case 2:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, 283666457);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_2, 1013492974);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, -1468577886);
			break;
		
		case 3:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -803999078);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_2, 0);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, -1952675429);
			break;
		
		default:
			break;
	}
}

void func_1290(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, 0);
		return;
	}
	iVar0 = (func_370(func_1292(iParam0), 0) - 1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, 1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_5, iVar0 > 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_6, iVar0 > 0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_2, (((*uParam2)[iParam0 /*30*/])->f_2[1 /*4*/])->f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_4, MISC::_CREATE_VAR_STRING(2, "LDGR_PRICE", (((*uParam2)[iParam0 /*30*/])->f_2[1 /*4*/])->f_3));
	switch (iParam0)
	{
		case 4:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, 61188257);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, -492089529);
			break;
		
		case 5:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -593314660);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, 1084624964);
			break;
		
		case 7:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -1156421435);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, 1642689245);
			break;
		
		case 6:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -1477784184);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, -1832854507);
			break;
		
		default:
			break;
	}
}

int func_1291(var uParam0, var uParam1)
{
	if (func_1445(&(uParam0->f_55), uParam1))
	{
		uParam1->f_4 = 0;
		return 1;
	}
	if (func_1446(&(uParam0->f_102), uParam1))
	{
		uParam1->f_4 = 1;
		return 1;
	}
	if (func_1446(&(uParam0->f_110), uParam1))
	{
		uParam1->f_4 = 2;
		return 1;
	}
	return 0;
}

int func_1292(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return 4;
		
		case 2:
			return 5;
		
		case 3:
			return 10;
		
		case 4:
			return 13;
		
		case 5:
			return 0;
		
		case 6:
			return 12;
		
		case 7:
			return 14;
		
		default:
			break;
	}
	return -1;
}

int func_1293()
{
	return -1802590239;
}

Vector3 func_1294(int iParam0)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 1:
			vVar0 = { -72.4089f, 2.8532f, -117.5962f };
			break;
		
		case 2:
			vVar0 = { -77.3119f, -0.0017f, -71.347f };
			break;
		
		case 3:
			vVar0 = { -73.0725f, -0.1101f, 134.3503f };
			break;
	}
	return vVar0;
}

void func_1295(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8, int iParam9, float fParam10, float fParam11, int iParam12, int iParam13, float fParam14, bool bParam15, float fParam16, float fParam17)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam4 };
	uParam0->f_7 = fParam7;
	uParam0->f_25 = iParam8;
	uParam0->f_26 = iParam9;
	uParam0->f_27 = fParam10;
	uParam0->f_8 = { vParam1 };
	uParam0->f_11 = 1f;
	uParam0->f_12 = 0f;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_16 = { 0f, 0f, 0f };
	uParam0->f_19 = { 0f, 0f, 0f };
	uParam0->f_22 = fParam7;
	uParam0->f_23 = (fParam7 + fParam16);
	uParam0->f_28 = iParam12;
	uParam0->f_24 = fParam11;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_23, 0, 1, 1, 2, 1, 0);
	if (!bParam15)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", fParam17);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (fParam14 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam14);
	}
	if (uParam0->f_28)
	{
		MAP::LOCK_MINIMAP_ANGLE(iParam13);
	}
	uParam0->f_34 = 0;
	uParam0->f_35 = 0;
	uParam0->f_36 = 0;
	uParam0->f_38 = 0;
	uParam0->f_37 = 0;
}

bool func_1296(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_1297(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return FtoV((1f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

float func_1298(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_1299(int iParam0, var uParam1, struct<8> Param2, var uParam10)
{
	int iVar0;
	
	if (!*uParam1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			switch (uParam1->f_4)
			{
				case 1:
					return 0;
				
				case 2:
					if (uParam1->f_3 == 0 && Param2.f_2 == -1)
					{
						return 0;
					}
					if (uParam1->f_3 == 1 && Param2.f_6 == -1)
					{
						return 0;
					}
					if (!func_1447(&(((*uParam10)[uParam1->f_3 /*118*/])->f_102)))
					{
						return 0;
					}
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[uParam1->f_3 /*118*/])->f_110.f_7, 0);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[uParam1->f_3 /*118*/])->f_102.f_7, 1);
					if (uParam1->f_3 == 1)
					{
						uParam1->f_1 = Param2.f_6;
					}
					else
					{
						uParam1->f_1 = Param2.f_2;
					}
					uParam1->f_4 = 1;
					uParam1->f_5 = 1;
					uParam1->f_6 = -1;
					return 1;
				
				case 0:
					if (uParam1->f_5)
					{
						return 0;
					}
					iVar0 = func_1448(&(((*uParam10)[uParam1->f_3 /*118*/])->f_55));
					if (iVar0 == -1)
					{
						return 0;
					}
					func_1287((*uParam10)[uParam1->f_3 /*118*/]);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL((((*uParam10)[uParam1->f_3 /*118*/])->f_55.f_5[iVar0 /*6*/])->f_5, 1);
					uParam1->f_5 = 1;
					uParam1->f_6 = iVar0;
					return 1;
				
				default:
					break;
			}
			break;
		
		case 1:
			switch (uParam1->f_4)
			{
				case 2:
					return 0;
				
				case 1:
					if (uParam1->f_3 == 0 && Param2.f_3 == -1)
					{
						return 0;
					}
					if (uParam1->f_3 == 1 && Param2.f_7 == -1)
					{
						return 0;
					}
					if (!func_1447(&(((*uParam10)[uParam1->f_3 /*118*/])->f_110)))
					{
						return 0;
					}
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[uParam1->f_3 /*118*/])->f_102.f_7, 0);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[uParam1->f_3 /*118*/])->f_110.f_7, 1);
					if (uParam1->f_3 == 1)
					{
						uParam1->f_1 = Param2.f_7;
					}
					else
					{
						uParam1->f_1 = Param2.f_3;
					}
					uParam1->f_4 = 2;
					uParam1->f_5 = 1;
					uParam1->f_6 = -1;
					return 1;
				
				case 0:
					if (!uParam1->f_5)
					{
						return 0;
					}
					iVar0 = func_1449(&(((*uParam10)[uParam1->f_3 /*118*/])->f_55));
					if (iVar0 == -1)
					{
						return 0;
					}
					func_1287((*uParam10)[uParam1->f_3 /*118*/]);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL((((*uParam10)[uParam1->f_3 /*118*/])->f_55.f_30[iVar0 /*4*/])->f_3, 1);
					uParam1->f_5 = 0;
					uParam1->f_6 = iVar0;
					return 1;
				
				default:
					break;
			}
			break;
		
		case 2:
			if (uParam1->f_3 == 0)
			{
				return 0;
			}
			switch (uParam1->f_4)
			{
				case 2:
					if (Param2.f_3 != -1 && func_1447(&(((*uParam10)[0 /*118*/])->f_110)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[1 /*118*/])->f_110.f_7, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[0 /*118*/])->f_110.f_7, 1);
						uParam1->f_1 = Param2.f_3;
						uParam1->f_3 = 0;
						uParam1->f_4 = 2;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return 1;
					}
					else if (Param2.f_2 != -1 && func_1447(&(((*uParam10)[0 /*118*/])->f_102)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[1 /*118*/])->f_110.f_7, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[0 /*118*/])->f_102.f_7, 1);
						uParam1->f_1 = Param2.f_2;
						uParam1->f_3 = 0;
						uParam1->f_4 = 1;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return 1;
					}
					return 0;
				
				case 1:
					if (Param2.f_2 != -1 && func_1447(&(((*uParam10)[0 /*118*/])->f_102)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[1 /*118*/])->f_102.f_7, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[0 /*118*/])->f_102.f_7, 1);
						uParam1->f_1 = Param2.f_2;
						uParam1->f_3 = 0;
						uParam1->f_4 = 1;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return 1;
					}
					else if (Param2.f_3 != -1 && func_1447(&(((*uParam10)[0 /*118*/])->f_110)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[1 /*118*/])->f_102.f_7, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[0 /*118*/])->f_110.f_7, 1);
						uParam1->f_1 = Param2.f_3;
						uParam1->f_3 = 0;
						uParam1->f_4 = 2;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return 1;
					}
					return 0;
				
				case 0:
					if (Param2.f_1 == -1)
					{
						return 0;
					}
					if (uParam1->f_5)
					{
						iVar0 = func_1448(&(((*uParam10)[0 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							func_1287((*uParam10)[1 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((((*uParam10)[0 /*118*/])->f_55.f_5[iVar0 /*6*/])->f_5, 1);
							uParam1->f_1 = Param2.f_1;
							uParam1->f_3 = 0;
							uParam1->f_4 = 0;
							uParam1->f_5 = 1;
							uParam1->f_6 = iVar0;
							return 1;
						}
						iVar0 = func_1449(&(((*uParam10)[0 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							func_1287((*uParam10)[1 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((((*uParam10)[0 /*118*/])->f_55.f_30[iVar0 /*4*/])->f_3, 1);
							uParam1->f_1 = Param2.f_1;
							uParam1->f_3 = 0;
							uParam1->f_4 = 0;
							uParam1->f_5 = 0;
							uParam1->f_6 = iVar0;
							return 1;
						}
					}
					else
					{
						iVar0 = func_1449(&(((*uParam10)[0 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							func_1287((*uParam10)[1 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((((*uParam10)[0 /*118*/])->f_55.f_30[iVar0 /*4*/])->f_3, 1);
							uParam1->f_1 = Param2.f_1;
							uParam1->f_3 = 0;
							uParam1->f_4 = 0;
							uParam1->f_5 = 0;
							uParam1->f_6 = iVar0;
							return 1;
						}
						iVar0 = func_1448(&(((*uParam10)[0 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							func_1287((*uParam10)[1 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((((*uParam10)[0 /*118*/])->f_55.f_5[iVar0 /*6*/])->f_5, 1);
							uParam1->f_1 = Param2.f_1;
							uParam1->f_3 = 0;
							uParam1->f_4 = 0;
							uParam1->f_5 = 1;
							uParam1->f_6 = iVar0;
							return 1;
						}
					}
					return 0;
				
				default:
					break;
			}
			break;
		
		case 3:
			if (uParam1->f_3 == 1)
			{
				return 0;
			}
			switch (uParam1->f_4)
			{
				case 2:
					if (Param2.f_7 != -1 && func_1447(&(((*uParam10)[1 /*118*/])->f_110)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[0 /*118*/])->f_110.f_7, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[1 /*118*/])->f_110.f_7, 1);
						uParam1->f_1 = Param2.f_7;
						uParam1->f_3 = 1;
						uParam1->f_4 = 2;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return 1;
					}
					else if (Param2.f_6 != -1 && func_1447(&(((*uParam10)[1 /*118*/])->f_102)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[0 /*118*/])->f_110.f_7, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[1 /*118*/])->f_102.f_7, 1);
						uParam1->f_1 = Param2.f_6;
						uParam1->f_3 = 1;
						uParam1->f_4 = 1;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return 1;
					}
					return 0;
				
				case 1:
					if (Param2.f_6 != -1 && func_1447(&(((*uParam10)[1 /*118*/])->f_102)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[0 /*118*/])->f_102.f_7, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[1 /*118*/])->f_102.f_7, 1);
						uParam1->f_1 = Param2.f_6;
						uParam1->f_3 = 1;
						uParam1->f_4 = 1;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return 1;
					}
					else if (Param2.f_7 != -1 && func_1447(&(((*uParam10)[1 /*118*/])->f_110)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[0 /*118*/])->f_102.f_7, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[1 /*118*/])->f_110.f_7, 1);
						uParam1->f_1 = Param2.f_7;
						uParam1->f_3 = 1;
						uParam1->f_4 = 2;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return 1;
					}
					return 0;
				
				case 0:
					if (Param2.f_5 == -1)
					{
						return 0;
					}
					if (uParam1->f_5)
					{
						iVar0 = func_1448(&(((*uParam10)[1 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							func_1287((*uParam10)[0 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((((*uParam10)[1 /*118*/])->f_55.f_5[iVar0 /*6*/])->f_5, 1);
							uParam1->f_1 = Param2.f_5;
							uParam1->f_3 = 1;
							uParam1->f_4 = 0;
							uParam1->f_5 = 1;
							uParam1->f_6 = iVar0;
							return 1;
						}
						iVar0 = func_1449(&(((*uParam10)[1 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							func_1287((*uParam10)[0 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((((*uParam10)[1 /*118*/])->f_55.f_30[iVar0 /*4*/])->f_3, 1);
							uParam1->f_1 = Param2.f_5;
							uParam1->f_3 = 1;
							uParam1->f_4 = 0;
							uParam1->f_5 = 0;
							uParam1->f_6 = iVar0;
							return 1;
						}
					}
					else
					{
						iVar0 = func_1449(&(((*uParam10)[1 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							func_1287((*uParam10)[0 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((((*uParam10)[1 /*118*/])->f_55.f_30[iVar0 /*4*/])->f_3, 1);
							uParam1->f_1 = Param2.f_5;
							uParam1->f_3 = 1;
							uParam1->f_4 = 0;
							uParam1->f_5 = 0;
							uParam1->f_6 = iVar0;
							return 1;
						}
						iVar0 = func_1448(&(((*uParam10)[1 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							func_1287((*uParam10)[0 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((((*uParam10)[1 /*118*/])->f_55.f_5[iVar0 /*6*/])->f_5, 1);
							uParam1->f_1 = Param2.f_5;
							uParam1->f_3 = 1;
							uParam1->f_4 = 0;
							uParam1->f_5 = 1;
							uParam1->f_6 = iVar0;
							return 1;
						}
					}
					break;
			}
			break;
	}
	return 0;
}

void func_1300(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			AUDIO::PLAY_SOUND_FRONTEND("NAV_UP", "Ledger_Sounds", true, 0);
			break;
		
		case 1:
			AUDIO::PLAY_SOUND_FRONTEND("NAV_DOWN", "Ledger_Sounds", true, 0);
			break;
		
		case 2:
			AUDIO::PLAY_SOUND_FRONTEND("NAV_LEFT", "Ledger_Sounds", true, 0);
			break;
		
		case 3:
			AUDIO::PLAY_SOUND_FRONTEND("NAV_RIGHT", "Ledger_Sounds", true, 0);
			break;
	}
}

void func_1301(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	
	if (func_370(iParam2, 0) < func_1450(iParam2))
	{
		iVar0 = func_1451(iParam0, iParam2);
		if (func_154() < iVar0)
		{
			iVar1 = (iVar0 - func_154());
			if (func_1452(1) >= iVar1)
			{
				func_1453(iVar1, 0, 0, 1, 1);
				func_1454(iVar1);
			}
		}
		if (func_154() >= iVar0)
		{
			*bParam4 = 1;
			if (iParam1 == 3)
			{
				if (func_370(10, 0) == 1)
				{
					func_1040(64);
				}
			}
			func_1455(iParam1, 0, iVar0);
			iVar2 = (func_370(iParam2, 0) + iParam3);
			if (iParam2 == 10)
			{
				if (iVar2 >= 3)
				{
					iVar3 = func_847(func_146());
					if (!func_135(iVar3, 64))
					{
						func_168(iVar3, 64);
						func_168(iVar3, 262144);
					}
				}
			}
			func_1456(iParam2, iVar2);
			func_5();
			func_145(134217728);
			if (iParam1 == 5)
			{
				func_1457(&(Global_1357549->f_1492));
			}
			if (iParam1 == 2)
			{
				if (iVar2 >= 3 && !func_1231(-764310200))
				{
					func_1458(-764310200);
				}
				if (iVar2 >= 4 && !func_1231(1885857703))
				{
					func_1458(1885857703);
				}
			}
			func_210(&(iParam0->f_7), 1, 1);
			func_210(&(iParam0->f_8), 1, 1);
			func_210(&(iParam0->f_35.f_1), 1, 1);
			func_210(&(iParam0->f_10), 1, 1);
			func_210(&(iParam0->f_9), 1, 1);
			func_1012(&(iParam0->f_35), 0);
			func_180(&(iParam0->f_810), 0);
			sVar4 = func_1459(iParam2, iVar2);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar4) == 0)
			{
				func_305(sVar4, 14500, 0, 0, 0, 1);
			}
			func_1016(iParam0, 14);
			uVar5 = func_1460(func_146());
			TELEMETRY::_0x217F47761376E16E(uVar5, iParam1, iVar2, iVar0, 0);
		}
		else
		{
			func_305("CAMP_UPG_BROKE", 9000, 0, 0, 0, 1);
		}
	}
}

void func_1302(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return;
	}
	Global_40.f_4283.f_415[iParam0] = 0;
}

void func_1303(int* iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			break;
		
		default:
			return;
	}
	iVar0 = func_1461(iParam0, iParam2);
	if (func_154() < iVar0)
	{
		iVar1 = (iVar0 - func_154());
		if (func_1452(1) >= iVar1)
		{
			func_1453(iVar1, 0, 0, 1, 1);
			func_1454(iVar1);
		}
	}
	if (func_154() >= iVar0)
	{
		*bParam3 = 1;
		func_1437(iParam0->f_10, 0, 1);
		func_1302(func_1462(iParam1));
		func_1302(3);
		func_1455(iParam1, 1, iVar0);
		uVar2 = func_1460(func_146());
		TELEMETRY::_0x217F47761376E16E(uVar2, iParam1, func_370(iParam2, 0), iVar0, 1);
	}
	else
	{
		func_305("CAMP_UPG_BROKE", 9000, 0, 0, 0, 1);
	}
}

void func_1304()
{
	AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "Ledger_Sounds", true, 0);
}

void func_1305()
{
	AUDIO::PLAY_SOUND_FRONTEND("UNAFFORDABLE", "Ledger_Sounds", true, 0);
}

int func_1306()
{
	if (func_146() == 8)
	{
		return 4;
	}
	return 17;
}

int func_1307(int iParam0)
{
	func_478(iParam0, 0, 0);
	if (func_479(iParam0))
	{
		return (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 2 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 1);
	}
	return 0;
}

void func_1308(int iParam0, int iParam1)
{
	func_126(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

bool func_1309(vector3 vParam0, int iParam3)
{
	if (iParam3 == 7)
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[iParam3])))
	{
		return false;
	}
	return VOLUME::_0xF256A75210C5C0EB(&(Global_1357549->f_3[iParam3]), vParam0);
}

int func_1310(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;
	
	if (!func_1463(iParam0))
	{
		return 0;
	}
	iVar0 = func_1311(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_825(0) };
	if (!func_826(Var15, iVar0, &Var1, 0, 0))
	{
		return 0;
	}
	if (!func_827(&Var1, uParam1))
	{
		return 0;
	}
	return 1;
}

int func_1311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
		
		case 1:
			return -832337898;
		
		case 2:
			return 1271463052;
		
		case 3:
			return 1983140194;
		
		case 4:
			return 677262775;
	}
	return 0;
}

int func_1312(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> Var0;
	struct<4> Var14;
	
	if (!func_1248(bParam10))
	{
		return func_1464(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1247(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (func_1465(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return 1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, iParam8))
	{
		return 0;
	}
	if (!INVENTORY::_0xDCCAA7C3BFD88862(func_507(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return 0;
	}
	if (bParam9)
	{
		if (!func_1466(Var14, 1))
		{
		}
	}
	return 1;
}

int func_1313(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	int iVar28;
	
	if (!func_1248(bParam9))
	{
		return func_1467(Param0, Param4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	if (func_1465(&Param0, &Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_1247(Param0, &Var0, bParam9, 1) || !func_1247(Param4, &Var14, bParam9, 1))
	{
		return 0;
	}
	if (func_1465(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return 0;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, Var14.f_9) || !INVENTORY::_0x780C5B9AE2819807(Var14.f_4, Var0.f_9))
	{
		return 0;
	}
	iVar28 = func_507(0);
	if (!INVENTORY::_0xF2753D691BCDA314(iVar28, &Param0, &Param4))
	{
		return 0;
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param0, (Var14.f_10 || iParam8)))
	{
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param4, (Var0.f_10 || iParam8)))
	{
	}
	return 1;
}

int func_1314(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_1468(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseCompanion"))
	{
		return 1;
	}
	return 0;
}

int func_1315(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return 1;
	}
	return 0;
}

int func_1316(int iParam0)
{
	switch (iParam0)
	{
		case -1523757120:
		case -1516219602:
		case -1063137731:
		case 604357666:
		case 705691988:
		case 1048964673:
		case 1576849913:
			return 1;
	}
	return 0;
}

bool func_1317()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

int func_1318(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;
	
	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_758())
	{
		if (func_204())
		{
			bVar0 = false;
			if (!func_269(((*Global_1835011)[15 /*74*/])->f_1, 1) && !func_671(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_1469();
				*iParam1 = func_1470();
				*uParam2 = func_1471();
				return 1;
			}
			else
			{
				*uParam0 = func_1472();
				*iParam1 = func_1473();
				*uParam2 = func_1474();
				return 1;
			}
		}
		else if (func_147())
		{
			if (!func_269(((*Global_1835011)[60 /*74*/])->f_1, 1))
			{
				*uParam0 = func_1475();
				*iParam1 = func_1476();
				*uParam2 = func_1477();
				return 1;
			}
			else
			{
				*uParam0 = func_1478();
				*iParam1 = func_1479();
				*uParam2 = func_1480();
				return 1;
			}
		}
	}
	else if (func_204())
	{
		*uParam0 = func_1481();
		*iParam1 = func_1482();
		*uParam2 = func_1483();
		return 1;
	}
	else if (func_147())
	{
		*uParam0 = func_1484();
		*iParam1 = func_1485();
		*uParam2 = func_1486();
		return 1;
	}
	return 0;
}

int func_1319(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	
	Var0.f_9 = -1591664384;
	if (!func_1310(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_962(iParam1, Var0, 1415981582, 0) };
	return func_1466(Var29, 1);
}

int func_1320(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	
	Var0.f_9 = -1591664384;
	if (!func_1310(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_962(iParam1, Var0, -2119169513, 0) };
	return func_1466(Var29, 1);
}

void func_1321(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0 /*8*/] = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_1 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_2 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_3 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_4 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_5 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_6 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

int func_1322(int iParam0, var uParam1)
{
	struct<4> Var0;
	
	Var0.f_9 = -1591664384;
	if (!func_1310(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_1487(Var0, 1415981582, 0);
	if (!func_889(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_1323(int iParam0, var uParam1)
{
	struct<4> Var0;
	
	Var0.f_9 = -1591664384;
	if (!func_1310(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_1487(Var0, -2119169513, 0);
	if (!func_889(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_1324(int iParam0, var uParam1)
{
	struct<4> Var0;
	
	if (!func_1488(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_1489() };
	*uParam1 = func_1487(Var0, iParam0, 0);
	if (!func_889(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

void func_1325(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::_0xDF631E4BCE1B1FC4(iParam0, -1442703445, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -1505972720, 0, false);
}

void func_1326(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_1490(iParam0, *uParam1);
	func_1490(iParam0, uParam1->f_1);
}

void func_1327(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_1490(iParam0, *uParam1);
	func_1490(iParam0, uParam1->f_1);
	func_1490(iParam0, uParam1->f_2);
	func_1490(iParam0, uParam1->f_3);
	func_1490(iParam0, uParam1->f_4);
	func_1490(iParam0, uParam1->f_5);
}

int func_1328(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, iVar0))
	{
		return 0;
	}
	PED::_0x1902C4CFCC5BE57C(iParam0, iParam1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 1, 1, 1, 1, 0);
	}
	return 1;
}

bool func_1329(int iParam0, int iParam1)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (((*Global_1900383)[iParam0 /*45*/])->f_24 && iParam1) != 0;
}

void func_1330(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_1492(func_1491(255), 109029619));
	}
	else if (func_204())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_147();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

void func_1331(var uParam0, bool bParam1)
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_1492(func_1491(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_204())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_147())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_1332(int iParam0)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_37;
}

float func_1333(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_1334(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	var uVar12;
	
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_737(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_317(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_317(iParam0) + 1;
	fVar6 = func_747(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_1493(fVar3, fVar4, fVar11);
	return uVar12;
}

void func_1335(int iParam0)
{
	MAP::_0xB059D7BD3D78C16F(iParam0, -401963276);
	MAP::_0xB059D7BD3D78C16F(iParam0, 231194138);
	MAP::_0xB059D7BD3D78C16F(iParam0, -1012863186);
	MAP::_0xB059D7BD3D78C16F(iParam0, -272772079);
	MAP::_0xB059D7BD3D78C16F(iParam0, 1313031610);
	MAP::_0xB059D7BD3D78C16F(iParam0, -1814032670);
	MAP::_0xB059D7BD3D78C16F(iParam0, -1380599892);
	MAP::_0xB059D7BD3D78C16F(iParam0, 430539302);
	MAP::_0xB059D7BD3D78C16F(iParam0, -995247980);
	MAP::_0xB059D7BD3D78C16F(iParam0, -25056193);
	MAP::_0xB059D7BD3D78C16F(iParam0, -264630352);
}

void func_1336(int iParam0)
{
	MAP::_0xB059D7BD3D78C16F(iParam0, 673950256);
	MAP::_0xB059D7BD3D78C16F(iParam0, 561559387);
	MAP::_0xB059D7BD3D78C16F(iParam0, -201249929);
}

int func_1337(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
			return 0;
		
		case 822658194:
			return 1;
		
		case 1308232528:
			return 2;
		
		case 1835499550:
			return 3;
		
		case 476637847:
			return 4;
		
		case -120156735:
			return 6;
		
		case 1645618177:
			return 7;
		
		case -512529193:
			return 8;
		
		case 131399519:
			return 9;
		
		case 178647645:
			return 10;
		
		case -864275692:
			return 11;
		
		case 1684533001:
			return 12;
		
		case -2066240242:
			return 13;
		
		case -2145992129:
			return 14;
		
		case -108848014:
			return 15;
		
		case 892930832:
			return 16;
		
		default:
			break;
	}
	return -1;
}

void func_1338(int iParam0, var uParam1)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_8 = uParam1;
}

void func_1339(int iParam0, int iParam1)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_9 = iParam1;
}

void func_1340(int iParam0, var uParam1)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_10 = uParam1;
}

void func_1341(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_1342()
{
	return Global_40.f_1095.f_3135;
}

void func_1343(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

var func_1344(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;
	
	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

struct<4> func_1345(int iParam0)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, 0, 32);
	return cVar0;
}

var func_1346(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_1347(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!MISC::IS_BIT_SET(Global_1934765->f_301, 0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1934765->f_301, 1))
	{
		return 0;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		MISC::_0x243CEDE8F916B994();
		return 0;
	}
	iVar0 = func_1494(iParam0, 1);
	iVar1 = 0;
	while (iVar1 < 24)
	{
		iVar2 = func_1495(iVar1, 1);
		if (iVar2 == 0 || iVar2 == -1439599467)
		{
		}
		else if (MISC::IS_BIT_SET(&(Global_1934765->f_302[iVar0]), iVar1))
		{
			MISC::_0xD3F943B88F55376A(iVar2);
		}
		else
		{
			MISC::_0x2916B30DC6C41179(iVar2);
		}
		iVar1++;
	}
	return func_1496(iParam0, bParam1, fParam2);
}

int func_1348(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		
		case 1:
			return 5;
		
		case 2:
			return 4;
		
		case 3:
			return 3;
		
		case 4:
			return 2;
		
		case 5:
			return 1;
		
		default:
			break;
	}
	return -1;
}

bool func_1349()
{
	if (func_56() != -1)
	{
		return false;
	}
	return func_773(1) > 0;
}

void func_1350(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_1351()
{
	if ((SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[134 /*49*/])->f_42, false) && !func_128(((*Global_1347702)[134 /*49*/])->f_15)) && !func_901(((*Global_1347702)[134 /*49*/])->f_13, 4))
	{
		return 1;
	}
	if (func_128(((*Global_1347702)[134 /*49*/])->f_15))
	{
		return 1;
	}
	return 0;
}

int func_1352()
{
	return 0;
}

void func_1353(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_1115(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::SET_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::SET_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::SET_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
		MISC::SET_BIT(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_1354(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_1115(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::CLEAR_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::CLEAR_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_1355()
{
	func_1354(-939420910);
	func_1354(-1187950766);
	func_1354(356365161);
	func_1354(753127042);
	func_1354(-2038424081);
	func_1354(1884271742);
	func_1354(459290420);
}

void func_1356()
{
	func_1354(704802028);
	func_1354(588987611);
	func_1354(2008888900);
	func_1354(1649996811);
	func_1354(227918160);
	func_1354(168171957);
	func_1354(1193080109);
	func_1354(-491981251);
	func_1354(-639037538);
	func_1354(-618620429);
}

int func_1357()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (func_146() == &Global_1357549->f_12[iVar0 /*14*/])
		{
			if ((Global_1357549->f_12[iVar0 /*14*/])->f_7 != 0)
			{
				ENTITY::_0xD2B9C78537ED5759((Global_1357549->f_12[iVar0 /*14*/])->f_7);
				(Global_1357549->f_12[iVar0 /*14*/])->f_7 = 0;
				(Global_1357549->f_12[iVar0 /*14*/])->f_10 = 0;
				(Global_1357549->f_12[iVar0 /*14*/])->f_8 = 0;
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1358()
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (func_1038(64) || func_1038(128))
	{
		return 0;
	}
	switch (func_146())
	{
		case 2:
			if (CAM::IS_SPHERE_VISIBLE(654.7123f, -1252.524f, 42.8435f, 5f))
			{
				return 1;
			}
			break;
		
		case 1:
			if (CAM::IS_SPHERE_VISIBLE(-131.7905f, -31.7847f, 95.0884f, 5f))
			{
				return 1;
			}
			break;
		
		case 6:
			if (CAM::IS_SPHERE_VISIBLE(2358.853f, 1375.151f, 105.5556f, 5f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1359()
{
	if (func_232(180573150, 1) || func_232(-404697685, 1))
	{
		if ((PED::_0x34D6AC1157C8226C(func_177(0), 49488831) && TASK::IS_PED_ACTIVE_IN_SCENARIO(func_177(0), 1)) && func_456(func_177(0), &(Global_1357549->f_1663[0]), 1, 0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	switch (func_146())
	{
		case 6:
			if (CLOCK::GET_CLOCK_HOURS() < 9)
			{
				return 1;
			}
			if (CLOCK::GET_CLOCK_HOURS() == 9)
			{
				if (CLOCK::GET_CLOCK_MINUTES() < 30)
				{
					return 1;
				}
			}
			if (CLOCK::GET_CLOCK_HOURS() >= 19)
			{
				if (CLOCK::GET_CLOCK_MINUTES() > 30)
				{
					return 1;
				}
			}
			if (CLOCK::GET_CLOCK_HOURS() >= 20)
			{
				return 1;
			}
			break;
		
		default:
			if (CLOCK::GET_CLOCK_HOURS() < 6)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1360(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		return 0;
	}
	iVar1 = func_146();
	iVar0 = func_1159(iVar1, iParam0, bParam1);
	if (!func_813(iVar0))
	{
		return 1;
	}
	return 1;
}

int func_1361()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_177(1)))
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_1663[1])))
		{
			if (func_456(func_177(1), &(Global_1357549->f_1663[1]), 1, 0))
			{
				if ((PED::_0x34D6AC1157C8226C(func_177(1), 640190094) || PED::_0x34D6AC1157C8226C(func_177(1), 343112864)) || PED::_0x34D6AC1157C8226C(func_177(1), 1774730608))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1362()
{
	if (VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_1663[1])))
	{
		if (func_456(Global_35, &(Global_1357549->f_1663[1]), 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_1363(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || iParam0 == 1)
	{
		func_1497(iParam0, 0);
	}
	if (!bParam1 || iParam0 == 2)
	{
		func_1498(iParam0, 0);
	}
	if (!bParam1 || iParam0 == 3)
	{
		func_1499(iParam0, 0);
	}
	if (!bParam1 || iParam0 == 6)
	{
		func_1500(iParam0, 0);
	}
	if (bParam2)
	{
		Global_1357549->f_575++;
		if (Global_1357549->f_575 >= 18)
		{
			Global_1357549->f_575 = 0;
		}
	}
}

int func_1364()
{
	if (func_146() == 2 || func_146() == 3)
	{
		if (func_370(13, 0) > 1)
		{
			STREAMING::REQUEST_MODEL(-180755040, false);
			if (STREAMING::HAS_MODEL_LOADED(-180755040))
			{
				return 1;
			}
			return 0;
		}
	}
	return 1;
}

void func_1365()
{
	func_843(32);
}

var func_1366()
{
	return Global_1357549->f_1670;
}

void func_1367(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	float fVar1;
	
	uVar0 = func_1369(16);
	fVar1 = func_853();
	if (!bParam4 || iParam0 == 1)
	{
		func_1501(iParam0, iParam1, iParam2);
		func_1502(iParam0, fVar1, iParam2);
	}
	if (!bParam4 || iParam0 == 2)
	{
		func_1503(iParam0, iParam1, iParam2, bParam3);
		func_1504(iParam0, fVar1, iParam2, bParam3);
	}
	if (!bParam4 || iParam0 == 3)
	{
		func_1505(iParam0, iParam1, iParam2);
		func_1506(iParam0, fVar1, iParam2);
	}
	func_1507(iParam0, Global_40.f_4283.f_314);
	func_1508(iParam0, uVar0);
}

int func_1368(int iParam0, int iParam1)
{
	float fVar0;
	
	fVar0 = func_853();
	if (((iParam0 == 1 && func_1509(fVar0, iParam1)) || (iParam0 == 3 && func_1510(fVar0, iParam1))) || (iParam0 == 2 && func_1511(fVar0, iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_1369(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	if (iParam0 == 16)
	{
		iVar0 = Global_40.f_4283.f_312;
	}
	else
	{
		iVar0 = func_370(iParam0, 0);
	}
	return iVar0;
}

void func_1370(char* sParam0)
{
	if (PATHFIND::_0x5AC0944C156E5F44(sParam0))
	{
		PATHFIND::_0x527B97C203BB8606(sParam0);
	}
}

char* func_1371(int iParam0)
{
	if (iParam0 == 2)
	{
		return "dewclm";
	}
	if (iParam0 == 4)
	{
		return "gua";
	}
	return func_1512(&(((*Global_1888801)[func_397(iParam0) /*35*/])->f_22));
}

char* func_1372(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "setup";
		
		case 1:
			return "running";
		
		case 2:
			if (func_12(268435456))
			{
				if (PATHFIND::_0x5AC0944C156E5F44("bvh_nav_camp_teardown"))
				{
					PATHFIND::_0x527B97C203BB8606("bvh_nav_camp_teardown");
				}
				return "finale1";
			}
			else
			{
				if (PATHFIND::_0x5AC0944C156E5F44("bvh_nav_camp_finale1"))
				{
					PATHFIND::_0x527B97C203BB8606("bvh_nav_camp_finale1");
				}
				return "teardown";
			}
			break;
	}
	return "";
}

int func_1373(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1[3];
	int iVar5[3];
	int iVar9[3];
	int iVar13[3];
	int iVar17;
	
	iVar0 = func_1138();
	iVar1[0] = -1687561002;
	iVar1[1] = 1957225320;
	iVar1[2] = -860696938;
	iVar5[0] = -1971474291;
	iVar5[1] = -1425946870;
	iVar5[2] = -1114426126;
	iVar9[0] = -316909020;
	iVar9[1] = -1962893335;
	iVar9[2] = 1351589798;
	iVar13[0] = 300868838;
	iVar13[1] = -1788578071;
	iVar13[2] = 1157066259;
	if (((func_1513() || func_128(((*Global_1347702)[59 /*49*/])->f_15)) || func_128(((*Global_1347702)[0 /*49*/])->f_15)) || func_1038(64))
	{
		iVar13[0] = -316909020;
		iVar13[1] = -1962893335;
		iVar13[2] = 1351589798;
		if (iParam0 == 0)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(300868838))
			{
				STREAMING::_REMOVE_IMAP(300868838);
			}
			if (STREAMING::_IS_IMAP_ACTIVE(-1788578071))
			{
				STREAMING::_REMOVE_IMAP(-1788578071);
			}
			if (STREAMING::_IS_IMAP_ACTIVE(1157066259))
			{
				STREAMING::_REMOVE_IMAP(1157066259);
			}
		}
		if (func_463(((*Global_1835011)[9 /*74*/])->f_1) == 0 && func_128(((*Global_1835011)[9 /*74*/])->f_1) == 0)
		{
			if (iParam0 == 0)
			{
				if (STREAMING::_IS_IMAP_ACTIVE(1475953931))
				{
					STREAMING::_REMOVE_IMAP(1475953931);
				}
				if (STREAMING::_IS_IMAP_ACTIVE(1475953931))
				{
					STREAMING::_REMOVE_IMAP(1475953931);
				}
				if (STREAMING::_IS_IMAP_ACTIVE(1475953931))
				{
					STREAMING::_REMOVE_IMAP(1475953931);
				}
			}
		}
	}
	if (((((func_463(((*Global_1835011)[9 /*74*/])->f_1) || func_128(((*Global_1835011)[9 /*74*/])->f_1)) || func_523()) || func_32() == 2) || func_128(((*Global_1347702)[66 /*49*/])->f_15)) || ((func_128(((*Global_1835011)[10 /*74*/])->f_1) && func_148(11)) && func_1038(64) == 0))
	{
		iVar9[0] = 1475953931;
		iVar9[1] = 1475953931;
		iVar9[2] = 1475953931;
		iVar13[0] = 1475953931;
		iVar13[1] = 1475953931;
		iVar13[2] = 1475953931;
	}
	else
	{
		iVar9[0] = -316909020;
		iVar9[1] = -1962893335;
		iVar9[2] = 1351589798;
	}
	if (func_1362() || func_128(((*Global_1835011)[4 /*74*/])->f_1))
	{
		iVar5[0] = &iVar1[0];
		iVar5[1] = &iVar1[1];
		iVar5[2] = &iVar1[2];
	}
	if (func_1514(1) && iParam0 == 1)
	{
		iVar1[0] = -1971474291;
		iVar1[1] = -1425946870;
		iVar1[2] = -1114426126;
		iVar5[0] = -1687561002;
		iVar5[1] = 1957225320;
		iVar5[2] = -860696938;
		iVar17 = 0;
		while (iVar17 < 3)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar1[iVar17])))
			{
				STREAMING::_REMOVE_IMAP(&(iVar1[iVar17]));
			}
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar5[iVar17])))
			{
				STREAMING::_REMOVE_IMAP(&(iVar5[iVar17]));
			}
			iVar17++;
		}
		return func_1352();
	}
	switch (iParam0)
	{
		case 1:
			iVar0 = func_1515(&iVar1, &iVar5, bParam1);
			break;
		
		case 0:
			iVar0 = func_1515(&iVar9, &iVar13, bParam1);
			break;
	}
	return iVar0;
}

int func_1374(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1[3];
	int iVar5[3];
	int iVar9[3];
	int iVar13[3];
	
	iVar0 = func_1138();
	iVar1[0] = 1209017192;
	iVar1[1] = -2143243848;
	iVar1[2] = 510052409;
	iVar5[0] = -644575724;
	iVar5[1] = 291770965;
	iVar5[2] = 1700661865;
	iVar9[0] = 1070723367;
	iVar9[1] = 1070723367;
	iVar9[2] = 1070723367;
	if ((((((func_463(((*Global_1835011)[22 /*74*/])->f_1) || func_128(((*Global_1835011)[22 /*74*/])->f_1)) || func_463(((*Global_1835011)[26 /*74*/])->f_1)) || func_128(((*Global_1835011)[26 /*74*/])->f_1)) || ((func_128(((*Global_1835011)[20 /*74*/])->f_1) || func_148(20)) && func_148(22) == 0)) || (((func_128(((*Global_1835011)[19 /*74*/])->f_1) || (func_490(&Global_1898437) == 19 && func_1516())) || func_148(19)) && func_148(22) == 0)) && func_1038(64) == 0)
	{
		if (iParam0 == 0)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(-109425099))
			{
				STREAMING::_REMOVE_IMAP(-109425099);
			}
		}
		iVar13[0] = 1261237250;
		iVar13[1] = 1261237250;
		iVar13[2] = 1261237250;
		iVar9[0] = 1261237250;
		iVar9[1] = 1261237250;
		iVar9[2] = 1261237250;
	}
	else
	{
		if (iParam0 == 0)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(1261237250))
			{
				STREAMING::_REMOVE_IMAP(1261237250);
			}
		}
		iVar13[0] = -109425099;
		iVar13[1] = -109425099;
		iVar13[2] = -109425099;
	}
	if ((((func_463(((*Global_1835011)[23 /*74*/])->f_1) || func_128(((*Global_1835011)[23 /*74*/])->f_1)) || (((func_148(22) && func_148(23) == 0) && func_148(24)) && (func_939(20) || func_148(20)))) || (((func_148(22) && func_148(23) == 0) && func_148(20)) && (func_939(24) || func_148(24)))) || func_1038(64))
	{
		if (iParam0 == 0)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(1070723367))
			{
				STREAMING::_REMOVE_IMAP(1070723367);
			}
		}
		iVar9[0] = -109425099;
		iVar9[1] = -109425099;
		iVar9[2] = -109425099;
	}
	if (func_1362())
	{
		iVar5[0] = &iVar1[0];
		iVar5[1] = &iVar1[1];
		iVar5[2] = &iVar1[2];
	}
	switch (iParam0)
	{
		case 1:
			iVar0 = func_1515(&iVar1, &iVar5, bParam1);
			break;
		
		case 0:
			iVar0 = func_1515(&iVar13, &iVar9, bParam1);
			break;
	}
	return iVar0;
}

int func_1375(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1[3];
	int iVar5[3];
	int iVar9[3];
	int iVar13[3];
	
	iVar0 = func_1138();
	iVar1[0] = 531106429;
	iVar1[1] = 531106429;
	iVar1[2] = 531106429;
	iVar5[0] = 1069611813;
	iVar5[1] = 1069611813;
	iVar5[2] = 1069611813;
	iVar9[0] = 1102643191;
	iVar9[1] = 1102643191;
	iVar9[2] = 1102643191;
	iVar13[0] = 44502487;
	iVar13[1] = 44502487;
	iVar13[2] = 44502487;
	if ((((((func_463(((*Global_1835011)[57 /*74*/])->f_1) || func_128(((*Global_1835011)[57 /*74*/])->f_1)) || func_463(((*Global_1835011)[59 /*74*/])->f_1)) || func_128(((*Global_1835011)[59 /*74*/])->f_1)) || func_463(((*Global_1835011)[58 /*74*/])->f_1)) || func_128(((*Global_1835011)[58 /*74*/])->f_1)) || func_1517())
	{
		iVar13[0] = 1102643191;
		iVar13[1] = 1102643191;
		iVar13[2] = 1102643191;
		if (iParam0 == 0)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(44502487))
			{
				STREAMING::_REMOVE_IMAP(44502487);
			}
		}
	}
	if (func_1362())
	{
		iVar5[0] = &iVar1[0];
		iVar5[1] = &iVar1[1];
		iVar5[2] = &iVar1[2];
	}
	switch (iParam0)
	{
		case 1:
			iVar0 = func_1515(&iVar1, &iVar5, bParam1);
			break;
		
		case 0:
			iVar0 = func_1515(&iVar9, &iVar13, bParam1);
			break;
	}
	return iVar0;
}

int func_1376(int iParam0)
{
	if (!func_408(iParam0))
	{
		return 0;
	}
	if (!func_374(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_1377(int iParam0)
{
	if (!func_408(iParam0))
	{
		return 0;
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(func_783(iParam0)))
	{
		_NAMESPACE48::_0x49A8C2CD97815215(func_783(iParam0));
		if (!ENTITY::DOES_ENTITY_EXIST(_NAMESPACE48::_0x0CADC3A977997472(func_783(iParam0), 0)))
		{
			return 0;
		}
	}
	return 1;
}

char* func_1378(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "horseshoeOverlook/hso_default_horses1";
		
		case 2:
			return "clemensPoint/clm_default_horses1";
		
		case 3:
			return "shadyBelle/shb_default_horses1";
		
		case 5:
			return "lakay/lak_default_horses1";
		
		case 6:
			return "beaverHollow/bvh_default_horses1";
		
		default:
			break;
	}
	return "";
}

void func_1379(int iParam0)
{
	if (!func_330(iParam0, 0))
	{
	}
	DECORATOR::DECOR_SET_BOOL(iParam0, "CaravanCommonHorse", true);
	PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0, -1856989775);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, -1856989775);
	PED::SET_PED_CONFIG_FLAG(iParam0, 324, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 331, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 471, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 1, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 54, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 121, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 302, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 412, false);
	PED::_0xAE6004120C18DF97(iParam0, 2, 0);
	PED::_0xAE6004120C18DF97(iParam0, 3, 0);
}

void func_1380(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_1518(iParam1))
		{
			func_1519(iParam0, 41788943);
		}
		else if (bParam5)
		{
			PED::_0x283978A15512B2FE(iParam0, 1);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_1520(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_1521(iParam0, 0);
			bVar0 = true;
		}
		func_1522(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_1381(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, "ContPage");
	func_1523(uVar0, uParam1);
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, "FullPage");
	func_1524(uVar1, &(uParam1->f_55));
	uVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, "HalfPageTop");
	func_1525(uVar2, &(uParam1->f_102));
	uVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, "HalfPageBottom");
	func_1525(uVar3, &(uParam1->f_110));
}

bool func_1382()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

var func_1383()
{
	return Global_40.f_11095.f_35;
}

void func_1384(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1526(bParam1);
	}
}

void func_1385(int iParam0)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-156028329, iParam0);
}

char* func_1386(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

int func_1387(var uParam0)
{
	vector3 vVar0;
	
	if (!func_1189(23, &vVar0))
	{
		return 0;
	}
	vVar0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*uParam0 = DATAFILE::_DATAFILE_GET_NUM_NODES(&vVar0);
		return 1;
	}
	return 0;
}

int func_1388(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	var uVar5;
	
	if (!func_1189(23, &Var0))
	{
		return 0;
	}
	Var0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*uParam1 = uVar5;
			Var0.f_2 = 316053773;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*uParam2 = uVar5;
			return 1;
		}
	}
	return 0;
}

int func_1389(int iParam0)
{
	return iParam0;
}

int func_1390()
{
	int iVar0;
	
	iVar0 = func_1173();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		
		case 240:
		case 280:
		case 320:
			return -2132502231;
		
		default:
			break;
	}
	return -1130204298;
}

int func_1391(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_1392(int iParam0, var uParam1, var uParam2)
{
	if (!func_1391(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		
		case 1:
			*uParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		
		case 2:
			*uParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		
		case 3:
			*uParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		
		case 4:
			*uParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		
		case 5:
			*uParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		
		case 6:
			*uParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		
		case 7:
			*uParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		
		case 8:
			*uParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		
		case 9:
			*uParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		
		case 10:
			*uParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		
		case 11:
			*uParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		
		case 12:
			*uParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		
		case 13:
			*uParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		
		case 14:
			*uParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		
		case 15:
			*uParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		
		case 16:
			*uParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		
		default:
			return 0;
	}
	return 1;
}

void func_1393(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(1, iVar0));
}

bool func_1394(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1395(int iParam0)
{
	if (!func_373(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_3;
}

int func_1396(int iParam0)
{
	int iVar0;
	
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1897952)[iParam0 /*2*/])->f_1))
	{
		return ((*Global_1897952)[iParam0 /*2*/])->f_1;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BAYOU_NWA");
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, -2050f, 150f, 0f, 0f, 18f, 575f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2485f, -1497.5f, 150f, 0f, 0f, 20f, 725f, 1050f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2060f, -1812.5f, 150f, 0f, 0f, 20f, 315f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1975f, -1452.5f, 150f, 0f, 0f, -43f, 200f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -1277.5f, 150f, 0f, 0f, -7f, 100f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -925f, 150f, 0f, 0f, 20f, 865f, 365f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2200f, -2440f, 150f, 0f, 0f, 0f, 500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1762.5f, -737.5f, 150f, 0f, 0f, 20f, 500f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2020.944f, -580.694f, 150f, 0f, 0f, -111f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2116.078f, -612.5f, 150f, 0f, 0f, -1f, 240f, 540f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2197.5f, -693.982f, 150f, 0f, 0f, -111f, 200f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2527.5f, -785f, 150f, 0f, 0f, -80f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3550f, -1455f, 150f, 0f, 0f, 0f, 1800f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2687.5f, -757.5f, 150f, 0f, 0f, -80f, 400f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2826.796f, -755f, 150f, 0f, 0f, 0f, 282.646f, 400f, 700f);
			break;
		
		case 1:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BIG_VALLEY");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1605f, -382.5f, 150f, 0f, 0f, 25f, 1100f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2035f, -810f, 150f, 0f, 0f, -65f, 400f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1887.5f, -1050f, 150f, 0f, 0f, -45f, 210f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -625f, 150f, 0f, 0f, -65f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2827.5f, -82.5f, 150f, 0f, 0f, 167f, 1500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -930f, -730f, 150f, 0f, 0f, 0f, 600f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -825f, -780f, 150f, 0f, 0f, -45f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -632.5f, -902.5f, 150f, 0f, 0f, -20f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -820f, -170f, 150f, 0f, 0f, 37.5f, 500f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -835f, -525f, 150f, 0f, 0f, 41f, 200f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -532.5f, -32.5f, 150f, 0f, 0f, -27f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -605f, 50f, 150f, 0f, 0f, -75f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -540f, 50f, 150f, 0f, 0f, -140f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1127.5f, -90f, 150f, 0f, 0f, -32.5f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1500f, 392.5f, 150f, 0f, 0f, 160f, 700f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1477.5f, 552.5f, 150f, 0f, 0f, 143f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1656.969f, 378.098f, 150f, 0f, 0f, 122f, 795f, 1083f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2617.969f, 452.097f, 150f, 0f, 0f, 167f, 1763f, 1500f, 700f);
			break;
		
		case 2:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BLUEGILL_MARSH");
			VOLUME::_0x39816F6F94F385AD(iVar0, 3585f, -280f, 150f, 0f, 0f, 0f, 1800f, 550f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3085f, -337.5f, 150f, 0f, 0f, -80.5f, 300f, 1500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2440f, -465f, 150f, 0f, 0f, -1f, 400f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2322.5f, -537.5f, 150f, 0f, 0f, -111f, 100f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3100f, 125f, 150f, 0f, 0f, 41f, 1700f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3670f, 80f, 150f, 0f, 0f, 41f, 1400f, 475f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2332.651f, -365.338f, 150f, 0f, 0f, 86f, 150f, 140f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2124.824f, -347.118f, 150f, 0f, 0f, 86f, 140f, 291f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3726.431f, -755f, 150f, 0f, 0f, 0f, 1518.809f, 400f, 700f);
			break;
		
		case 3:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CUMBERLAND_FOREST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190.4736f, 1214.829f, 200f, 0f, 0f, 59f, 488.2586f, 443.9291f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 695f, 1075f, 200f, 0f, 0f, 35f, 250f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -11.22244f, 1259.539f, 200f, 0f, 0f, 0f, 135f, 340.8336f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 667.5f, 1675f, 200f, 0f, 0f, 15f, 150f, 325f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 627.5f, 1255f, 200f, 0f, 0f, 9.999999f, 400f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 507.5f, 1532.5f, 200f, 0f, 0f, -45f, 300f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 72.5f, 1297.5f, 200f, 0f, 0f, 50f, 400f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 615f, 1750f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 510f, 1025f, 200f, 0f, 0f, 1f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 330.2712f, 1028.66f, 200f, 0f, 0f, 82f, 300f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 224.7084f, 1010.634f, 200f, 0f, 0f, 58.85596f, 175f, 267.2676f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 153.0846f, 1314.722f, 200f, 0f, 0f, -23f, 400f, 409.2231f, 800f);
			break;
		
		case 4:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GREAT_PLAINS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1285f, -1725f, 150f, 0f, 0f, 20f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1360f, -1540f, 150f, 0f, 0f, 30f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1492.5f, -1262.5f, 150f, 0f, 0f, 15f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1410f, -1147.5f, 150f, 0f, 0f, 25f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1125f, 150f, 0f, 0f, -20f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1725f, 150f, 0f, 0f, 0f, 800f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1300f, -1917.5f, 150f, 0f, 0f, -42f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1180f, -2122.5f, 150f, 0f, 0f, 20f, 300f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -955f, -1065f, 150f, 0f, 0f, -45f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1052.5f, -990f, 150f, 0f, 0f, 1.25f, 200f, 200f, 700f);
			break;
		
		case 7:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_WEST");
			VOLUME::_0x39816F6F94F385AD(iVar0, -100f, 1557.5f, 200f, 0f, 0f, 50f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1660f, 200f, 0f, 0f, 0f, 135f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1952.5f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -752.5f, 2135f, 200f, 0f, 0f, 0f, 1050f, 1975f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2139.972f, 1966.829f, 200f, 0f, 0f, 165f, 1814.271f, 1288f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1295f, 1090f, 200f, 0f, 0f, 122f, 1200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1080f, 1132.5f, 200f, 0f, 0f, 105f, 1200f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -895f, 1150f, 200f, 0f, 0f, 45f, 800f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -845f, 720f, 200f, 0f, 0f, 0f, 200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1015f, 560f, 200f, 0f, 0f, 143f, 75f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1940f, 3145f, 200f, 0f, 0f, 0f, 1400f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -757.5f, 3625f, 200f, 0f, 0f, 0f, 975f, 1050f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -187.5f, 3210f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2315.88f, 1498.498f, 150f, 0f, 0f, 167f, 1655f, 587f, 700f);
			break;
		
		case 6:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_EAST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190f, 1630f, 200f, 0f, 0f, -23f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 715f, 3145f, 200f, 0f, 0f, 0f, 1200f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1210f, 1212.5f, 200f, 0f, 0f, -14f, 585f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1510f, 1445f, 200f, 0f, 0f, 16f, 450f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1935f, 1040f, 200f, 0f, 0f, 12f, 200f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 1030f, 200f, 0f, 0f, -14f, 100f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1495f, 1425f, 200f, 0f, 0f, -9f, 1200f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1050f, 1430f, 200f, 0f, 0f, 10f, 500f, 700f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, 1630f, 200f, 0f, 0f, 118f, 200f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1400f, 2500f, 200f, 0f, 0f, -47f, 2000f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 2707.5f, 200f, 0f, 0f, -19f, 1500f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2175f, 3557.5f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1040f, 2120f, 200f, 0f, 0f, 15f, 800f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 410f, 2112.5f, 200f, 0f, 0f, -93f, 500f, 600f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 307.5f, 1722.5f, 200f, 0f, 0f, -45f, 250f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 472.5f, 1880f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 135f, 2000f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 217.5f, 3245f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			break;
		
		case 5:
			if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1897952)[6 /*2*/])->f_1) && VOLUME::_0x92A78D0BEDB332A3(((*Global_1897952)[7 /*2*/])->f_1))
			{
				iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES");
				VOLUME::_0x6E0D3C3F828DA773(iVar0, ((*Global_1897952)[6 /*2*/])->f_1);
				VOLUME::_0x6E0D3C3F828DA773(iVar0, ((*Global_1897952)[7 /*2*/])->f_1);
			}
			else
			{
				return 0;
			}
			break;
		
		case 8:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			break;
		
		case 9:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HEARTLAND");
			VOLUME::_0x39816F6F94F385AD(iVar0, -357.5f, -120f, 200f, 0f, 0f, -27f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -385f, 180f, 200f, 0f, 0f, -140f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -600f, 280f, 200f, 0f, 0f, -75f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 165f, 165f, 200f, 0f, 0f, 0f, 1100f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -465f, -340f, 200f, 0f, 0f, 37.5f, 500f, 275f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -37.5f, -525f, 200f, 0f, 0f, 0f, 1125f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 670f, -315f, 200f, 0f, 0f, -42f, 365f, 817f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 860f, 487.5f, 200f, 0f, 0f, 35f, 650f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 512.5f, 800f, 200f, 0f, 0f, 1f, 300f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1230f, 695f, 200f, 0f, 0f, -14f, 875f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1560f, 835f, 200f, 0f, 0f, 16f, 450f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1727.5f, 702.5f, 200f, 0f, 0f, -14f, 100f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 964.14f, 59.521f, 200f, 0f, 0f, -71.00001f, 415f, 725f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1485f, 322.5f, 200f, 0f, 0f, -84f, 650f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1630f, 100f, 200f, 0f, 0f, -111f, 435f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1752.5f, 302.5f, 200f, 0f, 0f, -47f, 275f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 103.6867f, 807.6879f, 200f, 0f, 0f, 58.7951f, 295.0871f, 709.0376f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 302.139f, 780.344f, 200f, 0f, 0f, 82f, 200f, 157.492f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -847.5f, 240f, 200f, 0f, 0f, 33f, 797f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -975f, 280f, 200f, 0f, 0f, 142f, 329f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -245.4394f, 1000f, 200f, 0f, 0f, 0f, 333.3127f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -760f, 440f, 200f, 0f, 0f, 105f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -520f, 507.5f, 200f, 0f, 0f, 0f, 450f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -495f, 822.5f, 200f, 0f, 0f, 45f, 500f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -140f, 705f, 200f, 0f, 0f, 59f, 250f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -327.5f, 1080f, 200f, 0f, 0f, 45f, 100f, 100f, 800f);
			break;
		
		case 10:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_ROANOKE_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1838.526f, 72.693f, 200f, 0f, 0f, -111f, 525f, 311f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2827.5f, 1215f, 200f, 0f, 0f, -9f, 1500f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1920f, 655f, 200f, 0f, 0f, -14f, 300f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2181.992f, -132.078f, 200f, 0f, 0f, 86f, 315f, 322f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2130f, 825f, 200f, 0f, 0f, 12f, 500f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2345f, 1795f, 200f, 0f, 0f, 118f, 200f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2775f, 725f, 200f, 0f, 0f, 41f, 2000f, 985f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2565f, 1537.5f, 200f, 0f, 0f, -47f, 1000f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3025f, 1632.5f, 200f, 0f, 0f, -19f, 1500f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3730f, 2300f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			break;
		
		case 11:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_SCARLETT_MEADOWS");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1025f, -642.5f, 150f, 0f, 0f, -42f, 600f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1335f, -407.5f, 150f, 0f, 0f, -71f, 717f, 325f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1585f, -330f, 150f, 0f, 0f, -111f, 400f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1250f, -1702.5f, 150f, 0f, 0f, 0f, 594f, 2000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 612.5f, -1337.5f, 150f, 0f, 0f, 0f, 850f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 677.5f, -2270f, 150f, 0f, 0f, 45f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1408.3f, -1687.9f, 150f, 0f, 0f, 5f, 450f, 1300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1600f, -545f, 100f, 0f, 0f, 20f, 325f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1807.467f, -1544.09f, 150f, 0f, 0f, -72f, 309f, 562f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1705.656f, -1257.077f, 150f, 0f, 0f, 20f, 400f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1946.824f, -1264.023f, 150f, 0f, 0f, 21f, 100f, 176f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1735.228f, -1334.945f, 150f, 0f, 0f, 20f, 295f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1902.5f, -432.5f, 150f, 0f, 0f, -111f, 365f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1827.5f, -580f, 150f, 0f, 0f, 20f, 75f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1571.834f, -1097.489f, 150f, 0f, 0f, 20f, 85f, 371f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1661.989f, -1972.796f, 150f, 0f, 0f, 18f, 85f, 371f, 700f);
			break;
		
		case 12:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_TALL_TREES");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1762.5f, -2030f, 150f, 0f, 0f, 16f, 275f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1445f, -1987.5f, 150f, 0f, 0f, -42f, 125f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1600f, -1882.5f, 150f, 0f, 0f, 20f, 200f, 335f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1927.5f, -1750f, 150f, 0f, 0f, 30f, 690f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2052.5f, -1517.5f, 150f, 0f, 0f, 15f, 715f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2162.5f, -1237.5f, 150f, 0f, 0f, -45f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2272.5f, -1057.5f, 150f, 0f, 0f, -65f, 519f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2865f, -1112.5f, 150f, 0f, 0f, 167f, 1250f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1972.5f, -2022.5f, 150f, 0f, 0f, 44f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1875f, -2087.5f, 150f, 0f, 0f, 70f, 300f, 180f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2140f, -1950f, 150f, 0f, 0f, 70f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -1890f, 150f, 0f, 0f, 24f, 200f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1397.5f, -2027.5f, 150f, 0f, 0f, 20f, 45f, 25f, 700f);
			break;
		
		case 15:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CHOLLA_SPRINGS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3305f, -3380f, 150f, 0f, 0f, 123f, 300f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3335f, -3582.5f, 150f, 0f, 0f, 170f, 225f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3200f, -3515f, 150f, 0f, 0f, -154f, 235f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3515f, -3190f, 150f, 0f, 0f, 139f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3930f, -2912.5f, 150f, 0f, 0f, 154f, 700f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4537.5f, -2665f, 150f, 0f, 0f, -178f, 1000f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4967.5f, -2390f, 150f, 0f, 0f, -148f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4617.5f, -2080f, 150f, 0f, 0f, 175f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3747.5f, -2030f, 150f, 0f, 0f, 99f, 700f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3282.5f, -3050f, 150f, 0f, 0f, 107f, 750f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3370f, -2690f, 150f, 0f, 0f, 124f, 100f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3355f, -2345f, 150f, 0f, 0f, 69f, 200f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3657.5f, -2610f, 150f, 0f, 0f, 98f, 500f, 850f, 700f);
			break;
		
		case 13:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			break;
		
		case 16:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HENNIGAS_STEAD");
			VOLUME::_0x39816F6F94F385AD(iVar0, -2510f, -2542.5f, 150f, 0f, 0f, 44f, 1200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1632.5f, -2480f, 150f, 0f, 0f, 16f, 275f, 535f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1990f, -2525f, 150f, 0f, 0f, 70f, 600f, 850f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1452.5f, -2342.5f, 150f, 0f, 0f, 16f, 150f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1480f, -2177.5f, 150f, 0f, 0f, 20f, 165f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1487.5f, -2087.5f, 150f, 0f, 0f, -42f, 60f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1350f, -2330f, 150f, 0f, 0f, 20f, 165f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1562.5f, -2652.5f, 150f, 0f, 0f, 28f, 500f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2445f, -2795f, 150f, 0f, 0f, 107f, 750f, 1350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2675f, -2177.5f, 150f, 0f, 0f, 70f, 600f, 900f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2947.5f, -2465f, 150f, 0f, 0f, 98f, 150f, 600f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3097.5f, -1977.5f, 150f, 0f, 0f, 99f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2467.5f, -3145f, 150f, 0f, 0f, 123f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2577.5f, -3182.5f, 150f, 0f, 0f, 85f, 150f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2985f, -2502.5f, 150f, 0f, 0f, 124f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2942.5f, -2457.5f, 150f, 0f, 0f, 69f, 175f, 600f, 700f);
			break;
		
		case 14:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_RIO_BRAVO");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3540f, -3635f, 150f, 0f, 0f, 123f, 125f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3880f, -3687.5f, 150f, 0f, 0f, 105f, 225f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4495f, -3610f, 150f, 0f, 0f, 96f, 600f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4922.5f, -3742.5f, 150f, 0f, 0f, 131f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5135f, -3900f, 150f, 0f, 0f, 22f, 200f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5205f, -3887.5f, 150f, 0f, 0f, -16f, 300f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5350f, -3835f, 150f, 0f, 0f, -32f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5125f, -3500f, 150f, 0f, 0f, 175f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4975f, -3360f, 150f, 0f, 0f, 137f, 450f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4645f, -3220f, 150f, 0f, 0f, -178f, 735f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4205f, -3420f, 150f, 0f, 0f, 154f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3795f, -3510f, 150f, 0f, 0f, 139f, 450f, 275f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3992.5f, -3567.5f, 150f, 0f, 0f, 0f, 200f, 200f, 700f);
			break;
	}
	((*Global_1897952)[iParam0 /*2*/])->f_1 = iVar0;
	return iVar0;
}

int func_1397(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 443958153;
		
		case 8:
			return 1035357148;
		
		case 9:
			return -990591911;
		
		case 17:
			return 1434435999;
		
		case 13:
			return 914613127;
		
		case 14:
			return 277114628;
		
		case 15:
			return -441298053;
		
		case 108:
			return 1671261677;
		
		case 12:
			return -2008988392;
		
		case 16:
			return -1779570775;
		
		case 106:
			return 1866591384;
		
		case 107:
			return -810797676;
		
		case 6:
			return 1591504033;
		
		case 10:
			return -1481022983;
		
		case 11:
			return -200160067;
		
		case 19:
			return 213861089;
		
		case 20:
			return 187124199;
		
		case 21:
			return -1639286351;
		
		case 18:
			return 1244472740;
		
		case 105:
			return -1711647719;
		
		case 22:
			return -184950877;
		
		case 118:
			return 354888782;
		
		case 39:
			return -922179383;
		
		case 42:
			return 877339314;
		
		case 41:
			return 327042733;
		
		case 43:
			return -1159824322;
		
		case 36:
			return 187784199;
		
		case 37:
			return 156869848;
		
		case 38:
			return 959980967;
		
		case 40:
			return 268171375;
		
		case 44:
			return -605457855;
		
		case 45:
			return -967272484;
		
		case 46:
			return 253446434;
		
		case 47:
			return -24930371;
		
		case 55:
			return -491616406;
		
		case 111:
			return 806137889;
		
		case 48:
			return 683812333;
		
		case 49:
			return 1055138492;
		
		case 50:
			return -1673339528;
		
		case 53:
			return 1428271505;
		
		case 54:
			return -2132681852;
		
		case 51:
			return 641024601;
		
		case 109:
			return 1479356600;
		
		case 110:
			return -1608228131;
		
		case 52:
			return 1700741106;
		
		case 23:
			return -768596287;
		
		case 24:
			return -1789795772;
		
		case 28:
			return 986912071;
		
		case 27:
			return 312948291;
		
		case 29:
			return 770563571;
		
		case 30:
			return 288839560;
		
		case 26:
			return 399352507;
		
		case 31:
			return -1241147617;
		
		case 113:
			return 399096998;
		
		case 32:
			return -483073269;
		
		case 112:
			return 1576805996;
		
		case 25:
			return -1427623397;
		
		case 33:
			return 305555540;
		
		case 60:
			return 2080716288;
		
		case 61:
			return 922959422;
		
		case 62:
			return 1948709075;
		
		case 63:
			return 599204508;
		
		case 65:
			return -362796541;
		
		case 115:
			return -1178912317;
		
		case 64:
			return -1575046645;
		
		case 114:
			return -176953214;
		
		case 66:
			return -1992095599;
		
		case 73:
			return 646741747;
		
		case 74:
			return -773037432;
		
		case 75:
			return 1444751354;
		
		case 69:
			return 709943351;
		
		case 77:
			return 731746260;
		
		case 76:
			return 405856312;
		
		case 72:
			return -1749578899;
		
		case 78:
			return 1581089825;
		
		case 104:
			return -883880335;
		
		case 71:
			return 1124822890;
		
		case 81:
			return 1618521465;
		
		case 80:
			return -1675300716;
		
		case 79:
			return -442258411;
		
		case 102:
			return 1665083003;
		
		case 103:
			return 810431028;
		
		case 68:
			return 1161446575;
		
		case 70:
			return -406930559;
		
		case 35:
			return 1523596125;
		
		case 86:
			return -372049939;
		
		case 85:
			return 226213668;
		
		case 82:
			return 1437804895;
		
		case 117:
			return 430529746;
		
		case 84:
			return -1254552445;
		
		case 83:
			return 1526480524;
		
		case 116:
			return 644508980;
		
		case 1:
			return 1628277480;
		
		case 120:
			return -1985767496;
		
		case 0:
			return 1117878254;
		
		case 2:
			return 622553269;
		
		case 3:
			return -1934358691;
		
		case 121:
			return 962619556;
		
		case 89:
			return 94750187;
		
		case 87:
			return 545745902;
		
		case 88:
			return 1875117241;
		
		case 101:
			return -1861588330;
		
		case 126:
			return -1079912632;
		
		case 127:
			return -1624899219;
		
		case 124:
			return 646944986;
		
		case 149:
			return 1712034773;
		
		case 150:
			return 1084233913;
		
		case 151:
			return -1628307596;
		
		case 152:
			return 1244193358;
		
		case 128:
			return -268420964;
		
		case 129:
			return -283845926;
		
		case 130:
			return 76731659;
		
		case 131:
			return 2141489518;
		
		case 59:
			return 1529797091;
		
		case 132:
			return 1120323763;
		
		case 133:
			return -1951530479;
		
		case 134:
			return 2034257465;
		
		case 135:
			return 278587369;
		
		case 57:
			return 1388932648;
		
		case 137:
			return 1467401843;
		
		case 138:
			return -1049737591;
		
		case 139:
			return 1175719437;
		
		case 140:
			return 2115547696;
		
		case 56:
			return 878376253;
		
		case 141:
			return -508879537;
		
		case 142:
			return -654369397;
		
		case 143:
			return 1573058547;
		
		case 144:
			return 1753151614;
		
		case 145:
			return -2113647360;
		
		case 146:
			return 1337275619;
		
		case 147:
			return -237650722;
		
		case 148:
			return 283754781;
		
		case 58:
			return -2076086367;
		
		case 136:
			return -487054121;
		
		case 119:
			return 551011289;
		
		case 122:
			return -647250101;
		
		case 95:
			return -1769964380;
		
		case 97:
			return -1464928880;
		
		case 96:
			return 1315212395;
		
		case 90:
			return -1495157302;
		
		case 93:
			return -2140031237;
		
		case 91:
			return -1829807698;
		
		case 92:
			return 186603357;
		
		case 94:
			return -1575817877;
		
		case 98:
			return 1087483310;
		
		case 125:
			return -552506176;
		
		case 123:
			return -614248279;
		
		case 99:
			return 441769767;
		
		case 100:
			return 1318049946;
		
		case 4:
			return 548657065;
		
		case 5:
			return 243086140;
		
		case 34:
			return -305029900;
		
		case 67:
			return 1008537949;
		
		default:
			break;
	}
	return 0;
}

int func_1398(var uParam0)
{
	struct<4> Var0;
	int iVar5;
	var uVar6;
	
	if (!func_1189(15, &Var0))
	{
		return -1;
	}
	Var0.f_3 = uParam0;
	Var0.f_2 = -125049320;
	if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
	{
		uVar6 = func_1527(iVar5);
		return uVar6;
	}
	return -1;
}

int func_1399(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = (BUILTIN::SHIFT_LEFT(iParam1, 11) || uParam0);
	iVar0 = 0;
	while (iVar0 < Global_40.f_9.f_16)
	{
		if (&Global_40.f_9.f_16[iVar0] == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1400(int iParam0)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_1528(iParam0) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_1401(var uParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	var uVar6;
	struct<4> Var7;
	
	func_1189(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = uParam0;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	DATAFILE::_DATAFILE_GET_HASH(&uVar6, &Var0);
	func_1189(15, &Var7);
	Var7.f_2 = -1222062814;
	Var7.f_3 = uVar6;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var7.f_1), &Var7))
	{
		Var7.f_2 = -1148228754;
		DATAFILE::_DATAFILE_GET_BOOL(&uVar5, &Var7);
	}
	return uVar5;
}

int func_1402(vector3 vParam0, bool bParam3)
{
	int iVar0;
	
	iVar0 = func_133();
	if (func_373(iVar0))
	{
		if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_1529(vParam0, bParam3);
}

int func_1403(int iParam0)
{
	if (!func_373(iParam0))
	{
		return 0;
	}
	return func_646(iParam0, 33554432);
}

int func_1404(int iParam0, bool bParam1)
{
	if (!func_364(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_644(iParam0, 8))
		{
			return 0;
		}
	}
	if (func_644(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_1405(var uParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	var uVar6;
	int iVar7;
	struct<4> Var8;
	
	func_1189(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = uParam0;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	func_1189(15, &Var8);
	Var8.f_2 = -1222062814;
	Var8.f_3 = uVar5;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var8.f_1), &Var8))
	{
		Var8.f_2 = 939842437;
		if (DATAFILE::_DATAFILE_GET_HASH(&uVar6, &Var8))
		{
			iVar7 = uVar6;
			return func_890(iVar7, 1, 0);
		}
	}
	return 1;
}

bool func_1406()
{
	var uVar0;
	
	if (func_758())
	{
		if (!func_148(4))
		{
			return true;
		}
	}
	return (PED::_0xFB4891BD7578CDC1(Global_35, -1725579161) || func_502(-2061583405, &uVar0));
}

int func_1407(var uParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	var uVar6;
	struct<4> Var7;
	
	func_1189(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = uParam0;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	func_1189(15, &Var7);
	Var7.f_2 = -1222062814;
	Var7.f_3 = uVar5;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var7.f_1), &Var7))
	{
		Var7.f_2 = 1689379704;
		if (DATAFILE::_DATAFILE_GET_BOOL(&uVar6, &Var7))
		{
			return uVar6;
		}
	}
	return 0;
}

bool func_1408(int iParam0)
{
	if (!func_364(Global_1310720->f_22))
	{
		return true;
	}
	if (func_1404(Global_1310720->f_22, 1))
	{
		return true;
	}
	if ((0 == iParam0 && 2 == Global_1310720->f_22) || (2 == iParam0 && 0 == Global_1310720->f_22))
	{
		return true;
	}
	return Global_1310720->f_22 == iParam0;
}

int func_1409(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	
	func_1189(15, &Var0);
	Var0.f_2 = -1999103282;
	Var0.f_3 = uParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1563492982;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
		{
			iVar6 = func_1530(iVar5);
			if (func_148(iVar6))
			{
				return 0;
			}
		}
		Var0.f_2 = 1975530226;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
		{
			iVar6 = func_1530(iVar5);
			if (!func_148(iVar6))
			{
				return 0;
			}
		}
		Var0.f_2 = 108838230;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
		{
			iVar7 = func_1531(iVar5);
			if (func_852(iVar7))
			{
				return 0;
			}
		}
		Var0.f_2 = 181294442;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
		{
			iVar7 = func_1531(iVar5);
			if (!func_852(iVar7))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_1410(int iParam0)
{
	if (!func_1532(iParam0))
	{
		return -1;
	}
	return &(Global_40.f_9096[iParam0 /*12*/]);
}

bool func_1411(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1 /*10*/] && iParam0) != 0;
}

int func_1412(vector3 vParam0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < &Global_1898329)
	{
		if (!func_493(Global_1898330[iVar0]))
		{
		}
		else
		{
			switch (((*Global_1898346)[iVar0 /*6*/])->f_3)
			{
				case 1:
					iVar1 = ((*Global_1898346)[iVar0 /*6*/])->f_4;
					if (BUILTIN::VDIST(func_1533(iVar1), vParam0) < func_476(func_1534(iVar1) == 0f, uParam3, func_1534(iVar1)))
					{
						return 1;
					}
					break;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1413(vector3 vParam0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 201)
	{
		if (func_1162(iVar0, 0))
		{
			if (BUILTIN::VDIST(func_1535(iVar0), vParam0) < fParam3)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_1414(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");
		}
	}
}

void func_1415(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = PED::_0x88EFFED5FE8B0B4A(iParam0);
	*uParam2 = FLOCK::_0xF8B48A361DC388AE(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_0x7BCC6087D130312A(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			
			case 1:
				*uParam1 = 1;
				break;
			
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_1416(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = uParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = PED::_0x9E7738B291706746(uParam0, iParam1, iParam2);
	return uVar2;
}

int func_1417(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::_0x9A100F1CF4546629(iParam0) && !ENTITY::_0xC346A546612C49A9(iParam0))
	{
		return 0;
	}
	func_1415(iParam0, &uVar1, &uVar2, &iVar0, &uVar3);
	func_1416(&iVar4, iParam0, iVar0, uVar1);
	if (iVar4 != 0)
	{
		return iVar4;
	}
	switch (iVar0)
	{
		case 2:
			return -776155824;
		
		case 1:
			return 1715058708;
		
		case 0:
			return -45650221;
		
		default:
			break;
	}
	return -45650221;
}

void func_1418(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	struct<2> Var21[15];
	
	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		Var21[iVar0 /*2*/] = uParam2[iVar0 /*2*/];
		(Var21[iVar0 /*2*/])->f_1 = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (&Var21[iVar0 /*2*/] == Var19)
							{
								(Var21[iVar0 /*2*/])->f_1 = ((Var21[iVar0 /*2*/])->f_1 - Var19.f_1);
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if ((Var21[iVar0 /*2*/])->f_1 != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = BUILTIN::FLOOR((IntToFloat(((*uParam2)[iVar0 /*2*/])->f_1) * ((Var21[iVar0 /*2*/])->f_1 / 1f)));
		}
		iVar0++;
	}
}

int func_1419(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		
		case 1:
			return -1130352927;
		
		case 2:
			return 389988485;
		
		case 3:
			return 1780904876;
		
		case 4:
			return 1367443060;
		
		case 5:
			return -1506259487;
		
		case 6:
			return -676503695;
		
		case 7:
			return 383349088;
		
		case 8:
			return -1292426046;
		
		case 9:
			return 1422688607;
		
		case 10:
			return 1108822547;
		
		case 11:
			return -338487716;
		
		case 12:
			return 1742327865;
		
		case 13:
			return 1600962399;
		
		case 14:
			return 1849504272;
		
		case 15:
			return 1672288269;
		
		case 16:
			return 1250092473;
		
		case 17:
			return -893163968;
		
		case 18:
			return -450913544;
		
		case 19:
			return -1364808185;
		
		case 20:
			return -1197751823;
		
		case 21:
			return 304805134;
		
		case 22:
			return -1505978566;
		
		case 23:
			return 1145151482;
		
		case 24:
			return -1176744536;
		
		case 25:
			return 673166414;
		
		case 26:
			return -207860920;
		
		case 27:
			return 99217379;
		
		case 28:
			return -735900586;
		
		case 29:
			return -426430150;
		
		case 30:
			return 1788623170;
		
		case 31:
			return -1130865351;
		
		case 32:
			return -1884748965;
		
		case 33:
			return -1586649372;
		
		case 34:
			return 788010710;
		
		case 35:
			return 1958421083;
		
		case 36:
			return -1944638739;
		
		case 37:
			return 1900541263;
		
		case 38:
			return -1489346253;
		
		case 39:
			return -358215195;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

int func_1420(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_507(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

bool func_1421(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

int func_1422(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2051275045:
			return 14;
		
		case -2040275819:
			return 46;
		
		case -1874208704:
			return 5;
		
		case -1862464078:
			return 44;
		
		case -1692022104:
			return 63;
		
		case -1684458716:
			return 31;
		
		case -1678882891:
			return 36;
		
		case -1668922931:
			return 20;
		
		case -1648322231:
			return 72;
		
		case -1642335258:
			return 66;
		
		case -1632589543:
			return 43;
		
		case -1587546924:
			return 54;
		
		case -1559986688:
			return 7;
		
		case -1532979576:
			return 65;
		
		case -1414977761:
			return 48;
		
		case -1394723994:
			return 59;
		
		case -1341683964:
			return 21;
		
		case -1335291723:
			return 60;
		
		case -1268239471:
			return 68;
		
		case -1256711921:
			return 35;
		
		case -1248623443:
			return 26;
		
		case -1205468859:
			return 76;
		
		case -1155031950:
			return 25;
		
		case -1114682645:
			return 47;
		
		case -1092189504:
			return 69;
		
		case -1065026089:
			return 73;
		
		case -973332710:
			return 32;
		
		case -946772361:
			return 62;
		
		case -922193456:
			return 39;
		
		case -695701225:
			return 3;
		
		case -571427255:
			return 57;
		
		case -481967001:
			return 28;
		
		case -445211559:
			return 61;
		
		case -433615745:
			return 18;
		
		case -426171916:
			return 80;
		
		case -310473775:
			return 42;
		
		case -301101630:
			return 24;
		
		case -268604689:
			return 37;
		
		case -193269670:
			return 30;
		
		case -23947011:
			return 50;
		
		case 0:
			return 0;
		
		case 6418928:
			return 71;
		
		case 80515440:
			return 70;
		
		case 178615350:
			return 1;
		
		case 283037683:
			return 13;
		
		case 296923297:
			return 45;
		
		case 350498312:
			return 27;
		
		case 404503428:
			return 4;
		
		case 431390894:
			return 23;
		
		case 513932985:
			return 29;
		
		case 707545953:
			return 64;
		
		case 713940276:
			return 11;
		
		case 777603945:
			return 19;
		
		case 837028314:
			return 58;
		
		case 867156718:
			return 79;
		
		case 876535472:
			return 75;
		
		case 876797088:
			return 53;
		
		case 928493661:
			return 22;
		
		case 961676983:
			return 55;
		
		case 977450639:
			return 9;
		
		case 1018353621:
			return 17;
		
		case 1046468203:
			return 16;
		
		case 1071744295:
			return 8;
		
		case 1199580439:
			return 41;
		
		case 1200878026:
			return 52;
		
		case 1205492208:
			return 40;
		
		case 1237718549:
			return 49;
		
		case 1254970547:
			return 78;
		
		case 1295334688:
			return 51;
		
		case 1300659195:
			return 56;
		
		case 1484386316:
			return 77;
		
		case 1495063555:
			return 15;
		
		case 1593315648:
			return 6;
		
		case 1658153743:
			return 33;
		
		case 1744281750:
			return 12;
		
		case 1818898449:
			return 38;
		
		case 1842975347:
			return 34;
		
		case 1901494236:
			return 10;
		
		case 1950972546:
			return 67;
		
		case 2062813606:
			return 74;
		
		case 2094043703:
			return 2;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

struct<5> func_1423(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;
	
	Var0 = { func_825(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_997(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_962(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		
		case -427144552:
			Var0 = { func_1251(bParam1) };
			if (iParam2 && func_1254(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1252(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1252(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1253(iParam0, &Var5, 1728382685))
				{
					Var0.f_4 = 1728382685;
				}
				else
				{
					Var0.f_4 = -649335959;
				}
			}
			else
			{
				Var0.f_4 = 1728382685;
			}
			break;
		
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_1536(bParam1) };
			switch (func_508(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		
		case -2130996531:
			if (func_1537(iParam0, -1823706425))
			{
				Var0 = { func_962(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_1537(iParam0, -1483207246))
			{
				Var0 = { func_962(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		
		default:
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_1247(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_1424(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		
		case 1:
			return 1704602624;
		
		case 2:
			return 1214181762;
		
		case 3:
			return -430578371;
		
		case 4:
			return -730381952;
		
		case 5:
			return -253503777;
		
		case 6:
			return 1352275534;
		
		case 7:
			return 1666399168;
		
		case 8:
			return -1911121386;
		
		case 9:
			return 1756656691;
		
		case 10:
			return -1774867076;
		
		case 11:
			return -421952220;
		
		case 12:
			return -1087003323;
		
		case 13:
			return 1231618917;
		
		case 14:
			return -1183777174;
		
		case 15:
			return -841767082;
		
		case 16:
			return 1043717005;
		
		case 17:
			return 142663787;
		
		case 18:
			return 1718143051;
		
		case 19:
			return -6605744;
		
		case 20:
			return 953047564;
		
		case 21:
			return 769706682;
		
		case 22:
			return 1635590003;
		
		case 23:
			return -2047978619;
		
		case 24:
			return -586319254;
		
		case 25:
			return 249896112;
		
		case 26:
			return -1060513333;
		
		case 27:
			return 1317351007;
		
		case 28:
			return -500478573;
		
		case 29:
			return -806573802;
		
		case 30:
			return -1109949204;
		
		case 31:
			return -740156546;
		
		case 32:
			return -684532710;
		
		case 33:
			return 1158805436;
		
		case 34:
			return -559473670;
		
		case 35:
			return -797147251;
		
		case 36:
			return -382216265;
		
		case 37:
			return 1419177114;
		
		case 38:
			return 1704297235;
		
		case 39:
			return -1139016418;
		
		case 40:
			return 897705377;
		
		case 41:
			return 17961769;
		
		case 42:
			return 205582207;
		
		case 43:
			return 900740963;
		
		case 44:
			return -1369589344;
		
		case 45:
			return -1695823795;
		
		case 46:
			return -41453074;
		
		case 47:
			return 539767227;
		
		case 48:
			return 1210490314;
		
		case 49:
			return -399684751;
		
		case 50:
			return 2138893455;
		
		case 51:
			return -1617010487;
		
		case 52:
			return -832377028;
		
		case 53:
			return -428040245;
		
		case 54:
			return 1279288897;
		
		case 55:
			return -594897905;
		
		case 56:
			return -1360459240;
		
		case 57:
			return 1838428396;
		
		case 58:
			return -1467846997;
		
		case 59:
			return -490610263;
		
		case 60:
			return -1885413079;
		
		case 61:
			return 708884155;
		
		case 62:
			return -134459952;
		
		case 63:
			return -1912136700;
		
		case 64:
			return -1268031552;
		
		case 65:
			return 1177953227;
		
		case 66:
			return 2130805296;
		
		case 67:
			return 38093490;
		
		case 68:
			return -269153218;
		
		case 69:
			return -1995068011;
		
		case 70:
			return -164284834;
		
		case 71:
			return 1446463345;
		
		case 72:
			return 1501315823;
		
		case 73:
			return -750379482;
		
		case 74:
			return -929560937;
		
		case 75:
			return 608323241;
		
		case 76:
			return 1030796013;
		
		case 77:
			return 1915057434;
		
		case 78:
			return -1582276476;
		
		case 79:
			return 692059311;
		
		case 80:
			return 2062839241;
		
		case 81:
			return -1884531872;
		
		case 82:
			return -866434534;
		
		case 83:
			return -1252192421;
		
		case 84:
			return 1243288963;
		
		case 85:
			return -1953772189;
		
		case 86:
			return 754411745;
		
		case 87:
			return 545309006;
		
		case 88:
			return -1089810811;
		
		case 89:
			return 1957869400;
		
		case 90:
			return -241412332;
		
		case 91:
			return -1548010959;
		
		case 92:
			return 550150488;
		
		case 93:
			return 946565453;
		
		case 94:
			return 434443248;
		
		case 95:
			return -1709914938;
		
		case 96:
			return 366686112;
		
		case 97:
			return -1370063350;
		
		case 98:
			return 2126829550;
		
		case 99:
			return 226552910;
		
		case 100:
			return 721193431;
		
		case 101:
			return -315672460;
		
		case 102:
			return 623544501;
		
		case 103:
			return 259556714;
		
		case 104:
			return -2125361825;
		
		case 105:
			return 1078230356;
		
		case 106:
			return 1885364811;
		
		case 107:
			return 1630382737;
		
		case 108:
			return 1738245512;
		
		case 109:
			return 1540262216;
		
		case 110:
			return 1016871472;
		
		case 111:
			return 13829069;
		
		case 112:
			return 737051352;
		
		case 113:
			return 1734614610;
		
		case 114:
			return -208715295;
		
		case 115:
			return 1435062936;
		
		case 116:
			return 1483055553;
		
		case 117:
			return 380335002;
		
		case 118:
			return -1079385677;
		
		case 119:
			return 676610411;
		
		case 120:
			return 2145419552;
		
		case 121:
			return 657238733;
		
		case 122:
			return 1850579281;
		
		case 123:
			return -1923957384;
		
		case 124:
			return -1142828108;
		
		case 125:
			return -1400618531;
		
		case 126:
			return -1433857135;
		
		case 127:
			return 209987206;
		
		case 128:
			return 1686943047;
		
		case 129:
			return -59178517;
		
		case 130:
			return 2134884601;
		
		case 131:
			return 651707517;
		
		case 132:
			return -633788535;
		
		case 133:
			return 116394463;
		
		case 134:
			return -1196973875;
		
		case 135:
			return 801752086;
		
		case 136:
			return 184475332;
		
		case 137:
			return -1880922659;
		
		case 138:
			return -898138634;
		
		case 139:
			return -2107418444;
		
		case 140:
			return -679970099;
		
		case 141:
			return -1531392549;
		
		case 142:
			return 1612483376;
		
		case 143:
			return 463930900;
		
		case 144:
			return -632148238;
		
		case 145:
			return 55303249;
		
		case 146:
			return 2108322089;
		
		case 147:
			return -1358896714;
		
		case 148:
			return 74475632;
		
		case 149:
			return -28710953;
		
		case 150:
			return -1791599168;
		
		case 151:
			return 1605938169;
		
		case 152:
			return 1255242276;
		
		case 153:
			return 636467727;
		
		case 154:
			return -1567688525;
		
		case 155:
			return -77886679;
		
		case 156:
			return -1057900679;
		
		case 157:
			return -1960888134;
		
		case 158:
			return -1719717295;
		
		case 159:
			return -1779244911;
		
		case 160:
			return -670540863;
		
		case 161:
			return 223362311;
		
		case 162:
			return 1150824567;
		
		case 163:
			return 974471191;
		
		case 164:
			return 1989683968;
		
		case 165:
			return 254804477;
		
		case 166:
			return 192057609;
		
		case 167:
			return 1553957817;
		
		case 168:
			return 2099829015;
		
		case 169:
			return -840300007;
		
		case 170:
			return -1948423372;
		
		case 171:
			return 981083654;
		
		case 172:
			return 1283289876;
		
		case 173:
			return -606884489;
		
		case 174:
			return -100418572;
		
		case 175:
			return 663645231;
		
		case 176:
			return 1442217033;
		
		case 177:
			return 1410986244;
		
		case 178:
			return 847409839;
		
		case 179:
			return 923926911;
		
		case 180:
			return 109995826;
		
		case 181:
			return -747412737;
		
		case 182:
			return 1114341727;
		
		case 183:
			return -539456939;
		
		case 184:
			return 45887121;
		
		case 185:
			return 913271624;
		
		case 186:
			return -1652812715;
		
		case 187:
			return -1791365775;
		
		case 188:
			return -979299941;
		
		case 189:
			return 713062001;
		
		case 190:
			return -575045963;
		
		case 191:
			return 1852965262;
		
		case 192:
			return -1398836354;
		
		case 193:
			return -1829885298;
		
		case 194:
			return -1773850357;
		
		case 195:
			return -564258009;
		
		case 196:
			return 2016532685;
		
		case 197:
			return -1070563798;
		
		case 198:
			return -1619221343;
		
		case 199:
			return -345571691;
		
		case 200:
			return 544288390;
		
		case 201:
			return 159578294;
		
		case 202:
			return -76852849;
		
		case 203:
			return 1110295244;
		
		case 204:
			return 2104563477;
		
		case 205:
			return 1947827651;
		
		case 206:
			return -933072766;
		
		case 207:
			return 2104388648;
		
		case 208:
			return -1677140601;
		
		case 209:
			return -2133097881;
		
		case 210:
			return -826678792;
		
		case 211:
			return -513522325;
		
		case 212:
			return 1970588249;
		
		case 213:
			return -2080032591;
		
		case 214:
			return 1758847745;
		
		case 215:
			return 895010282;
		
		case 216:
			return 1786352060;
		
		case 217:
			return -833319691;
		
		case 218:
			return 1591329969;
		
		case 219:
			return 2123222014;
		
		case 220:
			return -1578397674;
		
		case 221:
			return 1473261684;
		
		case 222:
			return -241855024;
		
		case 223:
			return 12999093;
		
		case 224:
			return -6796437;
		
		case 225:
			return -268116367;
		
		case 226:
			return -636470867;
		
		case 227:
			return 1737668280;
		
		case 228:
			return 892807236;
		
		case 229:
			return -733247890;
		
		case 230:
			return 24047176;
		
		case 231:
			return -1561999014;
		
		case 232:
			return -2052774042;
		
		case 233:
			return -997150586;
		
		case 234:
			return -1189569496;
		
		case 235:
			return 46488141;
		
		case 236:
			return 1046566686;
		
		case 237:
			return 325139909;
		
		case 238:
			return -1585141069;
		
		case 239:
			return 802754820;
		
		case 240:
			return 1415981582;
		
		case 241:
			return -1886147520;
		
		case 242:
			return 654877947;
		
		case 243:
			return -415648720;
		
		case 244:
			return 1221327846;
		
		case 245:
			return 923162715;
		
		case 246:
			return 625423581;
		
		case 247:
			return 326668608;
		
		case 248:
			return 669530755;
		
		case 249:
			return 429759982;
		
		case 250:
			return -2111934838;
		
		case 251:
			return 1886178087;
		
		case 252:
			return 1587783573;
		
		case 253:
			return -279722001;
		
		case 254:
			return 1310070322;
		
		case 255:
			return 724026534;
		
		case 256:
			return 137387616;
		
		case 257:
			return -653439684;
		
		case 258:
			return 1376835592;
		
		case 259:
			return -1824203570;
		
		case 260:
			return -1654197998;
		
		case 261:
			return 798987653;
		
		case 262:
			return 976923323;
		
		case 263:
			return 1167442289;
		
		case 264:
			return 986998820;
		
		case 265:
			return -2119169513;
		
		case 266:
			return -2015960939;
		
		case 267:
			return -1287636759;
		
		case 268:
			return -706917073;
		
		case 269:
			return -2166805;
		
		case 270:
			return -1391602433;
		
		case 271:
			return 1782075221;
		
		case 272:
			return 1282544585;
		
		case 273:
			return 1732594027;
		
		case 274:
			return -1058817012;
		
		case 275:
			return 1090546265;
		
		case 276:
			return -1783120823;
		
		case 277:
			return -1535745896;
		
		case 278:
			return -2086922122;
		
		case 279:
			return -1675198649;
		
		case 280:
			return 1189497682;
		
		case 281:
			return -1565675519;
		
		case 282:
			return -268973591;
		
		case 283:
			return 1039159916;
		
		case 284:
			return 1111816631;
		
		case 285:
			return 405591388;
		
		case 286:
			return 897456793;
		
		case 287:
			return 104187473;
		
		case 288:
			return 773808542;
		
		case 289:
			return -1120669954;
		
		case 290:
			return -1389278274;
		
		case 291:
			return 552979403;
		
		case 292:
			return -1571578784;
		
		case 293:
			return -708312114;
		
		case 294:
			return 688823508;
		
		case 295:
			return -1622147240;
		
		case 296:
			return 830292162;
		
		case 297:
			return 226276782;
		
		case 298:
			return -678416628;
		
		case 299:
			return -1098528034;
		
		case 300:
			return 316207340;
		
		case 301:
			return -1909200748;
		
		case 302:
			return -939652363;
		
		case 303:
			return -1990194462;
		
		case 304:
			return -375447933;
		
		case 305:
			return 537014919;
		
		case 306:
			return 1784584921;
		
		case 307:
			return 1084182731;
		
		case 308:
			return -1045471300;
		
		case 309:
			return 1617414719;
		
		case 310:
			return -787761753;
		
		case 311:
			return -490616606;
		
		case 312:
			return 1491346514;
		
		case 313:
			return -1311702610;
		
		case 314:
			return -904250715;
		
		case 315:
			return 1034665895;
		
		case 316:
			return -101524555;
		
		case 317:
			return 1419152594;
		
		case 318:
			return -451359317;
		
		case 319:
			return -1915385310;
		
		case 320:
			return 1315162488;
		
		case 321:
			return -361152079;
		
		case 322:
			return -2041626192;
		
		case 323:
			return -2077812539;
		
		case 324:
			return -1371514637;
		
		case 325:
			return 1730017037;
		
		case 326:
			return 892816668;
		
		case 327:
			return -1994943603;
		
		case 328:
			return 603133554;
		
		case 329:
			return -30160144;
		
		case 330:
			return -1248299493;
		
		case 331:
			return 727393558;
		
		case 332:
			return 755611221;
		
		case 333:
			return -170255458;
		
		case 334:
			return 1011151573;
		
		case 335:
			return 1122339631;
		
		case 336:
			return 454815308;
		
		case 337:
			return 990701735;
		
		case 338:
			return -246340825;
		
		case 339:
			return -1410671073;
		
		case 340:
			return 1547608292;
		
		case 341:
			return -714132970;
		
		case 342:
			return 732290690;
		
		case 343:
			return 971340545;
		
		case 344:
			return -234132662;
		
		case 345:
			return -2143057988;
		
		case 346:
			return -993947465;
		
		case 347:
			return -486552269;
		
		case 348:
			return -1156317860;
		
		case 349:
			return 1229625803;
		
		case 350:
			return -388596167;
		
		case 351:
			return -1204639465;
		
		case 352:
			return -1384685096;
		
		case 353:
			return -2026728113;
		
		case 354:
			return -1228057307;
		
		case 355:
			return 1835126290;
		
		case 356:
			return 1890833594;
		
		case 357:
			return -751549960;
		
		case 358:
			return -1682270750;
		
		case 359:
			return -1839865333;
		
		case 360:
			return -1990383629;
		
		case 361:
			return 1712094016;
		
		case 362:
			return 1532953697;
		
		case 363:
			return 1620318083;
		
		case 364:
			return -307230331;
		
		case 365:
			return -1034549620;
		
		case 366:
			return -1293064293;
		
		case 367:
			return -1540142553;
		
		case 368:
			return -1769886012;
		
		case 369:
			return -1983081126;
		
		case 370:
			return -1106117124;
		
		case 371:
			return -1873108338;
		
		case 372:
			return -2097543219;
		
		case 373:
			return 155413195;
		
		case 374:
			return -1162387149;
		
		case 375:
			return 1728382685;
		
		case 376:
			return -649335959;
		
		case 377:
			return -1876502240;
		
		case 378:
			return -2107032155;
		
		case 379:
			return 619103418;
		
		case 380:
			return 1355448197;
		
		case 381:
			return 1681762005;
		
		case 382:
			return 1026887814;
		
		case 383:
			return 354352628;
		
		case 384:
			return 1519366642;
		
		case 385:
			return -82757515;
		
		case 386:
			return 386306655;
		
		case 387:
			return 1243962119;
		
		case 388:
			return 756214903;
		
		case 389:
			return -718417579;
		
		case 390:
			return -1445516411;
		
		case 391:
			return -672392892;
		
		case 392:
			return 1465341584;
		
		case 393:
			return -427758369;
		
		case 394:
			return -735647142;
		
		case 395:
			return 1535838048;
		
		case 396:
			return -602272282;
		
		case 397:
			return 2051264661;
		
		case 398:
			return 487172188;
		
		case 399:
			return 282270687;
		
		case 400:
			return 1607708943;
		
		case 401:
			return 1686264939;
		
		case 402:
			return 314786149;
		
		case 403:
			return 1402841185;
		
		case 404:
			return 1099170772;
		
		case 405:
			return 2125676786;
		
		case 406:
			return -363896735;
		
		case 407:
			return -468790222;
		
		case 408:
			return -1779133048;
		
		case 409:
			return 1732537631;
		
		case 410:
			return 1755095401;
		
		case 411:
			return 835771095;
		
		case 412:
			return 1963317232;
		
		case 413:
			return 259627919;
		
		case 414:
			return 1299075397;
		
		case 415:
			return -1509094230;
		
		case 416:
			return 61132362;
		
		case 417:
			return 1549741908;
		
		case 418:
			return 288484254;
		
		case 419:
			return -1877032947;
		
		case 420:
			return -1395676456;
		
		case 421:
			return 1136146715;
		
		case 422:
			return 468034421;
		
		case 423:
			return 1079459546;
		
		case 424:
			return -140369351;
		
		case 425:
			return 1822341990;
		
		case 426:
			return 1219701681;
		
		case 427:
			return 1601295268;
		
		case 428:
			return -1692460667;
		
		case 429:
			return 1471419228;
		
		case 430:
			return 907446160;
		
		case 431:
			return -1126482585;
		
		case 432:
			return 1911050315;
		
		case 433:
			return -1343525599;
		
		case 434:
			return 1261891225;
		
		case 435:
			return 763162704;
		
		case 436:
			return 1335861197;
		
		case 437:
			return 526744654;
		
		case 438:
			return -1177461517;
		
		case 439:
			return -241638635;
		
		case 440:
			return 1024262875;
		
		case 441:
			return 853355463;
		
		case 442:
			return -337288221;
		
		case 443:
			return 361381308;
		
		case 444:
			return -1264898804;
		
		case 445:
			return -585289073;
		
		case 446:
			return 1423542233;
		
		case 447:
			return -948489286;
		
		case 448:
			return 2063859257;
		
		case 449:
			return -1652627327;
		
		case 450:
			return -1959697839;
		
		case 451:
			return -1532267859;
		
		case 452:
			return -1410062763;
		
		case 453:
			return -901428716;
		
		case 454:
			return -1628873469;
		
		case 455:
			return 144855571;
		
		case 456:
			return -617589883;
		
		case 457:
			return -1306457086;
		
		case 458:
			return 1713542477;
		
		case 459:
			return -305542365;
		
		case 460:
			return 1985390213;
		
		case 461:
			return -2145069367;
		
		case 462:
			return -1674390752;
		
		case 463:
			return -2117214398;
		
		case 464:
			return 1880805647;
		
		case 465:
			return -62390436;
		
		case 466:
			return 1815288415;
		
		case 467:
			return 196214097;
		
		case 468:
			return -201958220;
		
		case 469:
			return 1400281261;
		
		case 470:
			return 1601515402;
		
		case 471:
			return -940704970;
		
		case 472:
			return -548371721;
		
		case 473:
			return -1022384613;
		
		case 474:
			return -357406394;
		
		case 475:
			return 1077068189;
		
		case 476:
			return -782241404;
		
		case 477:
			return 1669853467;
		
		case 478:
			return 1592019450;
		
		case 479:
			return 635273153;
		
		case 480:
			return -1559225678;
		
		case 481:
			return -266425508;
		
		case 482:
			return 1117400455;
		
		case 483:
			return 454332195;
		
		case 484:
			return -1328061889;
		
		case 485:
			return 561650932;
		
		case 486:
			return 256105670;
		
		case 487:
			return 1976779618;
		
		case 488:
			return -269095126;
		
		case 489:
			return 2145617267;
		
		case 490:
			return 1150213537;
		
		case 491:
			return 1598825281;
		
		case 492:
			return -712527121;
		
		case 493:
			return 1308553072;
		
		case 494:
			return 852866398;
		
		case 495:
			return -1794417972;
		
		case 496:
			return 293062146;
		
		case 497:
			return 95360094;
		
		case 498:
			return 807631773;
		
		case 499:
			return 1603958275;
		
		case 500:
			return 860052020;
		
		case 501:
			return -1885979781;
		
		case 502:
			return 746147970;
		
		case 503:
			return 666663006;
		
		case 504:
			return -2096186453;
		
		case 505:
			return 859409444;
		
		case 506:
			return -671427187;
		
		case 507:
			return 100192478;
		
		case 508:
			return 307812616;
		
		case 509:
			return 1670843243;
		
		case 510:
			return 899615863;
		
		case 511:
			return -298901850;
		
		case 512:
			return 1379186917;
		
		case 513:
			return -817206030;
		
		case 514:
			return -1150323212;
		
		case 515:
			return -247466821;
		
		case 516:
			return 427124242;
		
		case 517:
			return 855418120;
		
		case 518:
			return -777015093;
		
		case 519:
			return -722462870;
		
		case 520:
			return -937454324;
		
		case 521:
			return -339438116;
		
		case 522:
			return 2135639035;
		
		case 523:
			return 1254273765;
		
		case 524:
			return -792172668;
		
		case 525:
			return 1905987493;
		
		case 526:
			return 495693044;
		
		case 527:
			return -1693422950;
		
		case 528:
			return -205873076;
		
		case 529:
			return -2143114654;
		
		case 530:
			return -1420574021;
		
		case 531:
			return -1959250381;
		
		case 532:
			return -1088328663;
		
		case 533:
			return 513602003;
		
		case 534:
			return 359221401;
		
		case 535:
			return 1005272;
		
		case 536:
			return 1583044470;
		
		case 537:
			return 348853959;
		
		case 538:
			return 1045621973;
		
		case 539:
			return 1084576580;
		
		case 540:
			return 1651573695;
		
		case 541:
			return 1463321587;
		
		case 542:
			return -997505963;
		
		case 543:
			return -1649851713;
		
		case 544:
			return -386012962;
		
		case 545:
			return 1386101789;
		
		case 546:
			return 1227915917;
		
		case 547:
			return -218846335;
		
		case 548:
			return -352578118;
		
		case 549:
			return 1426626782;
		
		case 550:
			return -714081520;
		
		case 551:
			return 74547781;
		
		case 552:
			return 1271463052;
		
		case 553:
			return 1983140194;
		
		case 554:
			return 677262775;
		
		case 555:
			return -832337898;
		
		case 556:
			return -319249747;
		
		case 557:
			return -16955722;
		
		case 558:
			return -1360128126;
		
		case 559:
			return -1535425646;
		
		case 560:
			return -1063641743;
		
		case 561:
			return -1041133401;
		
		case 562:
			return 1380479304;
		
		case 563:
			return 600890828;
		
		case 564:
			return 733333190;
		
		case 565:
			return 1843035435;
		
		case 566:
			return -304127320;
		
		case 567:
			return 122470371;
		
		case 568:
			return 0;
		
		case 569:
			return -1591664384;
		
		case 570:
			return -673000374;
		
		case 571:
			return -1150938404;
		
		case 572:
			return -1756997214;
		
		case 573:
			return -813824107;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

int func_1425(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_1538(iParam0))
	{
		return 0;
	}
	if (!func_1248(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_1426(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_1539(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

int func_1427(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_507(0);
	*uParam1 = { func_962(iParam0, func_1251(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_1428(int iParam0, bool bParam1)
{
	if (func_1538(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_507(bParam1), iParam0, 0);
}

int func_1429(int iParam0)
{
	int iVar0;
	
	iVar0 = func_1204(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1540(iVar0);
}

int func_1430(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;
	
	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			func_1541(iVar2);
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_1431()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

Vector3 func_1432(vector3 vParam0, vector3 vParam3)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = BUILTIN::COS(vParam3.x);
	fVar1 = BUILTIN::SIN(vParam3.x);
	vVar2.x = vParam0.x;
	vVar2.f_1 = ((fVar0 * vParam0.y) - (fVar1 * vParam0.z));
	vVar2.f_2 = ((fVar1 * vParam0.y) + (fVar0 * vParam0.z));
	vParam0 = { vVar2 };
	fVar0 = BUILTIN::COS(vParam3.y);
	fVar1 = BUILTIN::SIN(vParam3.y);
	vVar2.x = ((fVar0 * vParam0.x) + (fVar1 * vParam0.z));
	vVar2.f_1 = vParam0.y;
	vVar2.f_2 = ((fVar0 * vParam0.z) - (fVar1 * vParam0.x));
	vParam0 = { vVar2 };
	fVar0 = BUILTIN::COS(vParam3.z);
	fVar1 = BUILTIN::SIN(vParam3.z);
	vVar2.x = ((fVar0 * vParam0.x) - (fVar1 * vParam0.y));
	vVar2.f_1 = ((fVar1 * vParam0.x) + (fVar0 * vParam0.y));
	vVar2.f_2 = vParam0.z;
	vParam0 = { vVar2 };
	return vParam0;
}

void func_1433(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
		
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
		
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
		
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
		
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
		
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
		
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
		
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
		
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
		
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
		
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
		
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
		
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
		
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
		
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
		
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
		
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
		
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
		
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
		
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
		
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
		
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
		
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
		
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
		
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
		
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
		
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
		
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
		
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
		
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
		
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			break;
		
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
		
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
		
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
		
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
		
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
		
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
		
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
		
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
		
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}
}

bool func_1434(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;
	
	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * BUILTIN::COS(fParam8)) + (vVar0.y * BUILTIN::SIN(fParam8)));
	Var3.f_1 = ((vVar0.x * BUILTIN::SIN(fParam8)) - (vVar0.y * BUILTIN::COS(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

float func_1435(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 && !func_209(iParam0))
	{
		return 0f;
	}
	iVar0 = func_574(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_0x81801291806DBC50(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_1436(int iParam0, int iParam1)
{
	if (iParam1 && !func_209(iParam0))
	{
		return false;
	}
	return !func_576(iParam0, 4);
}

void func_1437(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 && !func_209(iParam0))
	{
		return;
	}
	iVar0 = func_574(iParam0);
	if (bParam1)
	{
		func_1542(iParam0, 4);
		func_957(iVar0, 1);
		func_958(iVar0, 1);
	}
	else
	{
		func_959(iParam0, 4);
		func_958(iVar0, 0);
	}
}

void func_1438(var uParam0)
{
	struct<8> Var0;
	
	if (!func_209(uParam0->f_1))
	{
		StringCopy(&Var0, "JOURNAL_INFO_SHOW", 64);
		if (uParam0->f_772)
		{
			StringCopy(&Var0, "JOURNAL_INFO_HIDE", 64);
		}
		uParam0->f_1 = func_582(&Var0, -711536720, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		func_215(uParam0->f_1, -2019190071, 0, 1);
		func_1437(uParam0->f_1, uParam0->f_773, 1);
	}
}

bool func_1439(int iParam0, var uParam1, float fParam2)
{
	return func_244((*uParam1)[iParam0 /*257*/]) >= fParam2;
}

bool func_1440(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
	}
	return PED::_0xFB4891BD7578CDC1(iParam0, iParam1);
}

int func_1441(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (Global_1946804->f_2535.f_1 >= 5)
	{
		return 0;
	}
	if (!func_1543(uParam0))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_1544(uParam0);
	return func_1545(iParam1, iVar0, bParam2, 1);
}

int func_1442(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (!func_1546(iParam1))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_1544(iParam1);
	return func_1547(iParam0, iVar0, bParam2, bParam2);
}

void func_1443(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (((Global_40.f_4283.f_440[iParam0 /*63*/])->f_1[iParam1 /*5*/])->f_4 == 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam2, 0);
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam2, 1);
	if (MISC::IS_BIT_SET(&((Global_40.f_4283.f_440[iParam0 /*63*/])->f_1[iParam1 /*5*/]), 0))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam2->f_1, 0);
	}
	else if (((Global_40.f_4283.f_440[iParam0 /*63*/])->f_1[iParam1 /*5*/])->f_1 == -1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam2->f_1, -799346912);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam2->f_1, func_1548(((Global_40.f_4283.f_440[iParam0 /*63*/])->f_1[iParam1 /*5*/])->f_1, 1));
	}
	if (MISC::IS_BIT_SET(&((Global_40.f_4283.f_440[iParam0 /*63*/])->f_1[iParam1 /*5*/]), 0))
	{
		if (MISC::IS_BIT_SET(&((Global_40.f_4283.f_440[iParam0 /*63*/])->f_1[iParam1 /*5*/]), 1))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam2->f_2, func_1549(((Global_40.f_4283.f_440[iParam0 /*63*/])->f_1[iParam1 /*5*/])->f_3, 1));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam2->f_2, func_1549(((Global_40.f_4283.f_440[iParam0 /*63*/])->f_1[iParam1 /*5*/])->f_3, 0));
		}
	}
	else if (((Global_40.f_4283.f_440[iParam0 /*63*/])->f_1[iParam1 /*5*/])->f_2 == 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam2->f_2, -1328473345);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam2->f_2, ((Global_40.f_4283.f_440[iParam0 /*63*/])->f_1[iParam1 /*5*/])->f_2);
	}
	iVar0 = ((Global_40.f_4283.f_440[iParam0 /*63*/])->f_1[iParam1 /*5*/])->f_4;
	if (MISC::IS_BIT_SET(&((Global_40.f_4283.f_440[iParam0 /*63*/])->f_1[iParam1 /*5*/]), 0))
	{
		if (iVar0 >= 0)
		{
		}
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam2->f_3, MISC::_CREATE_VAR_STRING(2, "CASH_STRING_NEG", -iVar0));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam2->f_3, MISC::_CREATE_VAR_STRING(2, "CASH_STRING", iVar0));
	}
}

int func_1444(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = *uParam0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_62)
	{
		iVar0 = (iVar0 + (uParam0->f_1[iVar1 /*5*/])->f_4);
		iVar1++;
	}
	return iVar0;
}

int func_1445(var uParam0, var uParam1)
{
	int iVar0;
	
	if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(*uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_1550(uParam0->f_5[iVar0 /*6*/]))
		{
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam0->f_5[iVar0 /*6*/])->f_5, 1);
			uParam1->f_5 = 1;
			uParam1->f_6 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_1551(uParam0->f_30[iVar0 /*4*/]))
		{
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam0->f_30[iVar0 /*4*/])->f_3, 1);
			uParam1->f_5 = 0;
			uParam1->f_6 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1446(var uParam0, var uParam1)
{
	if (!func_1447(uParam0))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_7, 1);
	uParam1->f_5 = 1;
	uParam1->f_6 = -1;
	return 1;
}

int func_1447(var uParam0)
{
	if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(*uParam0))
	{
		return 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(uParam0->f_5))
	{
		return 0;
	}
	return 1;
}

int func_1448(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_1550(uParam0->f_5[iVar0 /*6*/]))
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1449(var uParam0)
{
	int iVar0;
	
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(uParam0->f_4))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!func_1551(uParam0->f_30[iVar0 /*4*/]))
			{
			}
			else
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_1450(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 12:
		case 13:
		case 14:
			return 2;
	}
	return 4;
}

int func_1451(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_370(iParam1, 0);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 3:
			iVar1 = ((uParam0->f_35.f_531[0 /*30*/])->f_2[iVar0 /*4*/])->f_3;
			break;
		
		case 4:
			iVar1 = ((uParam0->f_35.f_531[1 /*30*/])->f_2[iVar0 /*4*/])->f_3;
			break;
		
		case 5:
			iVar1 = ((uParam0->f_35.f_531[2 /*30*/])->f_2[iVar0 /*4*/])->f_3;
			break;
		
		case 10:
			iVar1 = ((uParam0->f_35.f_531[3 /*30*/])->f_2[iVar0 /*4*/])->f_3;
			break;
		
		case 12:
			iVar1 = ((uParam0->f_35.f_531[6 /*30*/])->f_2[1 /*4*/])->f_3;
			break;
		
		case 13:
			iVar1 = ((uParam0->f_35.f_531[4 /*30*/])->f_2[1 /*4*/])->f_3;
			break;
		
		case 14:
			iVar1 = ((uParam0->f_35.f_531[7 /*30*/])->f_2[1 /*4*/])->f_3;
			break;
		
		case 0:
			iVar1 = ((uParam0->f_35.f_531[5 /*30*/])->f_2[1 /*4*/])->f_3;
			break;
		
		default:
			return 0;
	}
	return iVar1 * 100;
}

int func_1452(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_1453(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1552(iParam0);
	if (bParam3)
	{
		func_1553(iParam0, sParam1, iParam2);
	}
}

void func_1454(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1554(-1, 0, iParam0, Global_40.f_4283.f_440[0 /*63*/], 1, 1))
	{
		return;
	}
	if (func_1554(-1, 0, iParam0, Global_40.f_4283.f_440[1 /*63*/], 1, 1))
	{
		if (&Global_40.f_4283.f_440[1 /*63*/] == 0)
		{
			Global_40.f_4283.f_440[1 /*63*/] = func_1444(Global_40.f_4283.f_440[0 /*63*/]);
		}
		return;
	}
	func_1555(&(Global_40.f_4283.f_440));
	func_1554(-1, 0, iParam0, Global_40.f_4283.f_440[1 /*63*/], 1, 1);
}

void func_1455(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if ((iParam0 != 2 && iParam0 != 0) && iParam0 != 1)
		{
			return;
		}
	}
	if (func_1556(iParam0, bParam1, iParam2, Global_40.f_4283.f_440[0 /*63*/]))
	{
		return;
	}
	if (func_1556(iParam0, bParam1, iParam2, Global_40.f_4283.f_440[1 /*63*/]))
	{
		if (&Global_40.f_4283.f_440[1 /*63*/] == 0)
		{
			Global_40.f_4283.f_440[1 /*63*/] = func_1444(Global_40.f_4283.f_440[0 /*63*/]);
		}
		return;
	}
	func_1555(&(Global_40.f_4283.f_440));
	func_1556(iParam0, bParam1, iParam2, Global_40.f_4283.f_440[1 /*63*/]);
}

void func_1456(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_40.f_4283.f_313 = iParam1;
			break;
		
		case 1:
			Global_40.f_4283.f_316 = iParam1;
			break;
		
		case 2:
			Global_40.f_4283.f_317 = iParam1;
			break;
		
		case 3:
			Global_40.f_4283.f_318 = iParam1;
			break;
		
		case 4:
			Global_40.f_4283.f_319 = iParam1;
			break;
		
		case 5:
			Global_40.f_4283.f_320 = iParam1;
			break;
		
		case 10:
			Global_40.f_4283.f_321 = iParam1;
			break;
		
		case 12:
			Global_40.f_4283.f_315 = iParam1;
			break;
		
		case 13:
			Global_40.f_4283.f_314 = iParam1;
			break;
		
		case 14:
			Global_40.f_4283.f_322 = iParam1;
			break;
	}
}

void func_1457(var uParam0)
{
	if (Global_40.f_4283.f_313 > 1)
	{
		switch (*uParam0)
		{
			case 878851736:
				*uParam0 = 1762298001;
				break;
			
			case 1869130580:
				*uParam0 = 1336518004;
				break;
			
			case 116793994:
				*uParam0 = 515084529;
				break;
			
			case -1760041550:
				*uParam0 = -1977068039;
				break;
			
			case -1708424762:
				*uParam0 = -399865011;
				break;
		}
	}
}

void func_1458(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_1230(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

char* func_1459(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "CAMP_UPG_COOP";
		
		case 3:
			return "CAMP_UPG_PROV";
		
		case 4:
			return "CAMP_UPG_MED";
		
		case 5:
			return "CAMP_UPG_ARMO";
		
		case 12:
			return "CAMP_UPG_TOOLS";
		
		case 13:
			return "CAMP_UPG_VEH";
		
		case 14:
			return "CAMP_UPG_HITCH";
		
		case 10:
			switch (iParam1)
			{
				case 2:
					return "CAMP_UPG_TENT_D";
				
				case 3:
					return "CAMP_UPG_TENT_A";
				
				case 4:
					return "CAMP_UPG_TENT_C";
				
				default:
					break;
			}
			break;
	}
	return "";
}

int func_1460(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 695356898;
		
		case 1:
			return -432333475;
		
		case 2:
			return 2093317438;
		
		case 3:
			return -1327067584;
		
		case 4:
			return -145951480;
		
		case 5:
			return -2045110373;
		
		case 6:
			return 2092390181;
		
		case 7:
			return -1192044061;
		
		case 8:
			return 1206762561;
		
		default:
			break;
	}
	return 991030100;
}

int func_1461(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (func_370(iParam1, 0) - 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 3:
			iVar1 = &(uParam0->f_35.f_531[0 /*30*/])->f_24[iVar0];
			break;
		
		case 4:
			iVar1 = &(uParam0->f_35.f_531[1 /*30*/])->f_24[iVar0];
			break;
		
		case 5:
			iVar1 = &(uParam0->f_35.f_531[2 /*30*/])->f_24[iVar0];
			break;
		
		default:
			return 0;
	}
	return iVar1 * 100;
}

int func_1462(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		case 1:
			return 0;
		
		case 0:
			return 1;
		
		case 3:
			return 3;
		
		default:
			break;
	}
	return -1;
}

int func_1463(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = func_1311(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_825(0) };
	if (func_1557(&Var1, iVar0, 0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_1464(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, var uParam10, bool bParam11)
{
	struct<12> Var0;
	int iVar14;
	int iVar15;
	struct<16> Var16;
	int iVar32;
	
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_1247(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_1465(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_1257(Var0.f_4, Param4, iParam8, 0);
	iVar15 = INVENTORY::_0xE80E50BEE276A54A(Var0.f_4, iParam8);
	if (iVar15 >= 0)
	{
		if (iVar14 >= iVar15)
		{
			return -1;
		}
		else if ((iVar14 + Var0.f_11) > iVar15)
		{
			if (bParam11)
			{
				return -1;
			}
			Var0.f_11 = (iVar15 - iVar14);
		}
	}
	Var16 = { func_1558(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = uParam10;
	iVar32 = func_1559(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

int func_1465(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return 1;
	}
	return 0;
}

int func_1466(struct<4> Param0, int iParam4)
{
	struct<11> Var0;
	
	if (!func_1248(0))
	{
		return func_1560(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1247(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_507(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1467(struct<4> Param0, struct<4> Param4, var uParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	struct<16> Var28;
	struct<16> Var44;
	int iVar60;
	
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return -1;
	}
	if (func_1465(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_1247(Param0, &Var0, 1, 0) || !func_1247(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_1465(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, Var14.f_9) || !INVENTORY::_0x780C5B9AE2819807(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_1558(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || uParam8);
	Var44 = { func_1558(&Var14) };
	Var44.f_4 = { Var0.f_5 };
	Var44.f_11 = Var0.f_9;
	Var44.f_10 = (Var0.f_10 || uParam8);
	iVar60 = -1;
	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar60, 712853601, 1168099063))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar60, &Var28, 16) && NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar60, &Var44, 16))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar60))
				{
					func_1561(iVar60, 1);
				}
				else
				{
					NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar60);
					return -1;
				}
			}
			else
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar60);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		iVar60 = func_1559(1168099063, &Var28, 0);
		iVar60 = func_1559(1168099063, &Var44, 0);
	}
	return iVar60;
}

int func_1468(int iParam0)
{
	switch (iParam0)
	{
		case -1760684159:
		case -1718100160:
		case -1642485146:
		case -1486704931:
		case -1391147923:
		case -1356425746:
		case -1181161469:
		case -1084397164:
		case -1053639984:
		case -941733863:
		case -646460384:
		case -575759638:
		case -548014618:
		case 291878635:
		case 979093383:
		case 1139858530:
		case 1760888205:
		case 1800725969:
			return 1;
	}
	return 0;
}

int func_1469()
{
	return 1342496140;
}

int func_1470()
{
	return 446670976;
}

int func_1471()
{
	return 1;
}

int func_1472()
{
	return -868094182;
}

int func_1473()
{
	return 1074477367;
}

int func_1474()
{
	return 1;
}

int func_1475()
{
	return -997197050;
}

int func_1476()
{
	return -2063289686;
}

int func_1477()
{
	return 2;
}

int func_1478()
{
	return -868094182;
}

int func_1479()
{
	return 1074477367;
}

int func_1480()
{
	return 1;
}

int func_1481()
{
	return 1235275977;
}

int func_1482()
{
	return 2030804811;
}

int func_1483()
{
	return 1;
}

int func_1484()
{
	return 1974379573;
}

int func_1485()
{
	return 2024948086;
}

int func_1486()
{
	return 1;
}

int func_1487(struct<4> Param0, int iParam4, bool bParam5)
{
	struct<10> Var0;
	
	Var0.f_9 = -1591664384;
	if (func_1562(Param0, iParam4, &Var0, bParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_1488(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam0 != 0)
	{
		iVar5 = func_508(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1563(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &uVar1))
				{
					iVar4 = uVar1;
					if (iVar4 == iParam1)
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

struct<4> func_1489()
{
	struct<4> Var0;
	
	Var0 = { func_825(0) };
	return func_962(856287005, Var0, -218846335, 0);
}

void func_1490(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == -377364164 || iParam1 == 357708345)
	{
		return;
	}
	iVar0 = iParam1;
	PED::_SET_PED_COMPONENT_ENABLED(iParam0, iVar0, false, false, false);
}

char* func_1491(int iParam0)
{
	char* sVar0;
	
	if (iParam0 == 255)
	{
		if (func_1564(37, iParam0))
		{
			return HUD::_0xD8402B858F4DDD88(&(Global_1109400->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109400->f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!&Global_1225638->f_21[iParam0])
	{
		return sVar0;
	}
	if (func_1564(37, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(((*Global_1108178)[iParam0 /*37*/])->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1108178)[iParam0 /*37*/])->f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(&(Global_1225638->f_120[iParam0]));
}

char* func_1492(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_944(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1493(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_1494(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1368127279:
			return 3;
		
		case -1324765740:
			return 4;
		
		case -1119640448:
			return 6;
		
		case -1015925347:
			return 8;
		
		case -857562377:
			return 7;
		
		case -579939614:
			return 10;
		
		case -193557170:
			return 9;
		
		case 0:
			return 13;
		
		case 15:
			return 14;
		
		case 54488187:
			return 2;
		
		case 100010212:
			return 11;
		
		case 679418883:
			return 0;
		
		case 880414984:
			return 12;
		
		case 1077154516:
			return 1;
		
		case 1620037762:
			return 5;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_1495(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 669657108;
		
		case 1:
			return 821931868;
		
		case 2:
			return -1721991356;
		
		case 3:
			return -702816767;
		
		case 4:
			return 2137137442;
		
		case 5:
			return 1974067816;
		
		case 6:
			return -173507739;
		
		case 7:
			return 839715153;
		
		case 8:
			return 1500834021;
		
		case 9:
			return -1148613331;
		
		case 10:
			return 433385945;
		
		case 11:
			return 1420204096;
		
		case 12:
			return -1317052143;
		
		case 13:
			return -416908843;
		
		case 14:
			return 212278652;
		
		case 15:
			return -273223690;
		
		case 16:
			return 1679686673;
		
		case 17:
			return 603685163;
		
		case 18:
			return 1632247697;
		
		case 19:
			return -1233681761;
		
		case 20:
			return 2082228755;
		
		case 21:
			return 725623432;
		
		case 22:
			return 0;
		
		case 23:
			return -1439599467;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

int func_1496(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!MISC::IS_BIT_SET(Global_1934765->f_301, 0))
	{
		return 0;
	}
	iVar0 = func_1494(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return 0;
	}
	iVar1 = MISC::_0x4BEB42AEBCA732E9();
	iVar2 = func_1565(iVar1, 1);
	if (iVar2 < 0 || iVar2 > 31)
	{
		return 0;
	}
	iVar3 = MISC::_0x51021D36F62AAA83();
	iVar4 = func_1565(iVar3, 1);
	if (iVar4 < 0 || iVar4 > 31)
	{
		return 0;
	}
	MISC::_0xDD560ABEF5D3784C(&iVar5, &iVar6);
	iVar7 = func_1565(iVar5, 1);
	if (iVar6 != 0 && !bParam1)
	{
		return 0;
	}
	if (iVar5 != 0)
	{
		if (MISC::IS_BIT_SET(&(Global_1934765->f_302[iVar0]), iVar7))
		{
			return 1;
		}
	}
	else if (MISC::IS_BIT_SET(&(Global_1934765->f_302[iVar0]), iVar2) && MISC::IS_BIT_SET(&(Global_1934765->f_302[iVar0]), iVar4))
	{
		return 1;
	}
	iVar8 = 0;
	while (iVar8 < 20)
	{
		iVar8++;
		iVar9 = MISC::_0x7F4CE164D9A11DFE();
		if (!MISC::IS_BIT_SET(&(Global_1934765->f_302[iVar0]), iVar9))
		{
		}
		else
		{
			iVar10 = func_1495(iVar9, 1);
			if (iVar10 == 0 || iVar10 == -1439599467)
			{
			}
			else
			{
				if (bParam1)
				{
					MISC::_0x59174F1AFE095B5A(iVar10, true, false, false, 0f, false);
				}
				else
				{
					MISC::_0x59174F1AFE095B5A(iVar10, true, false, true, fParam2, false);
				}
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 679418883:
			iVar11 = 1500834021;
			break;
		
		case 1077154516:
			iVar11 = 1420204096;
			break;
		
		case 54488187:
			iVar11 = -702816767;
			break;
		
		case -1368127279:
			iVar11 = -173507739;
			break;
		
		case -1324765740:
			iVar11 = 1632247697;
			break;
		
		case 1620037762:
			iVar11 = 821931868;
			break;
		
		case -1119640448:
			iVar11 = 1632247697;
			break;
		
		case -857562377:
			iVar11 = 1632247697;
			break;
		
		case -1015925347:
			iVar11 = -173507739;
			break;
		
		case -193557170:
			iVar11 = 821931868;
			break;
		
		case -579939614:
			iVar11 = -1148613331;
			break;
		
		case 100010212:
			iVar11 = 821931868;
			break;
		
		case 880414984:
			iVar11 = 2082228755;
			break;
		
		default:
			iVar11 = -1148613331;
			break;
	}
	if (bParam1)
	{
		MISC::_0x59174F1AFE095B5A(iVar11, true, false, false, 0f, false);
	}
	else
	{
		MISC::_0x59174F1AFE095B5A(iVar11, false, false, true, fParam2, false);
	}
	return 1;
}

void func_1497(int iParam0, int iParam1)
{
	int iVar0[18];
	int iVar19[18];
	int iVar38[18];
	int iVar57;
	var uVar58;
	bool bVar59;
	
	iVar0[0] = -224845272;
	iVar19[0] = -268335331;
	iVar38[0] = func_1352();
	iVar0[1] = -147867326;
	iVar19[1] = 1546110128;
	iVar38[1] = -855912354;
	iVar0[2] = -1262979941;
	iVar19[2] = 324486076;
	iVar38[2] = func_1352();
	iVar0[3] = -2119627968;
	iVar19[3] = -2052582076;
	iVar38[3] = -402976431;
	iVar0[4] = -837651311;
	iVar19[4] = 1029525997;
	iVar38[4] = func_1352();
	iVar0[5] = -2089261255;
	iVar19[5] = -1472352094;
	iVar38[5] = func_1352();
	iVar0[6] = -1145367359;
	iVar19[6] = -745860880;
	iVar38[6] = func_1352();
	iVar0[7] = -1145367359;
	iVar19[7] = 1219276914;
	iVar38[7] = func_1352();
	iVar0[8] = -1608451354;
	iVar19[8] = -2104773585;
	iVar38[8] = func_1352();
	iVar0[9] = 2137149309;
	iVar19[9] = -302735166;
	iVar38[9] = func_1352();
	iVar0[10] = -1329287819;
	iVar19[10] = -2077690059;
	iVar38[10] = func_1352();
	iVar0[11] = -848232571;
	iVar19[11] = 1548546221;
	iVar38[11] = func_1352();
	iVar0[12] = -804860583;
	iVar19[12] = 2101101756;
	iVar38[12] = func_1352();
	iVar0[13] = -7810518;
	iVar19[13] = 1560807181;
	iVar38[13] = func_1352();
	iVar0[14] = 1510372288;
	iVar19[14] = 106249677;
	iVar38[14] = func_1352();
	iVar0[15] = 858182906;
	iVar19[15] = -723982773;
	iVar38[15] = func_1352();
	iVar0[16] = 708084994;
	iVar19[16] = 327932996;
	iVar38[16] = func_1352();
	iVar0[17] = 765991018;
	iVar19[17] = -15722296;
	iVar38[17] = func_1352();
	bVar59 = false;
	if (iParam0 == 1)
	{
		iVar57 = func_1269(&(iVar0[Global_1357549->f_575]), 3);
		uVar58 = func_1566(&(iVar0[Global_1357549->f_575]));
		bVar59 = (iVar57 > 0 || uVar58);
		if (bVar59 || iParam1)
		{
			if (func_813(&(iVar19[Global_1357549->f_575])))
			{
				if (!STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
				{
					func_1158(&(iVar19[Global_1357549->f_575]), 1);
					func_1567(&(iVar19[Global_1357549->f_575]));
				}
				if (func_813(&(iVar38[Global_1357549->f_575])))
				{
					if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])))
					{
						STREAMING::_REMOVE_IMAP(&(iVar38[Global_1357549->f_575]));
					}
				}
			}
		}
		else
		{
			if (func_813(&(iVar19[Global_1357549->f_575])))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
				{
					func_1158(&(iVar19[Global_1357549->f_575]), 0);
					STREAMING::_REMOVE_IMAP(&(iVar19[Global_1357549->f_575]));
				}
			}
			if (func_813(&(iVar38[Global_1357549->f_575])))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])) == 0)
				{
					STREAMING::_REQUEST_IMAP(&(iVar38[Global_1357549->f_575]));
				}
			}
		}
	}
	if (iParam0 != 1 || func_32() == 2)
	{
		if (func_813(&(iVar38[Global_1357549->f_575])))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])))
			{
				STREAMING::_REMOVE_IMAP(&(iVar38[Global_1357549->f_575]));
			}
		}
		if (func_813(&(iVar19[Global_1357549->f_575])))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
			{
				func_1158(&(iVar19[Global_1357549->f_575]), 0);
				STREAMING::_REMOVE_IMAP(&(iVar19[Global_1357549->f_575]));
			}
		}
	}
}

void func_1498(int iParam0, int iParam1)
{
	int iVar0[18];
	int iVar19[18];
	int iVar38[18];
	
	iVar0[0] = 2137149309;
	iVar19[0] = -1999825729;
	iVar38[0] = func_1352();
	iVar0[1] = -147867326;
	iVar19[1] = -1774140220;
	iVar38[1] = -262271608;
	iVar0[2] = -1262979941;
	iVar19[2] = 1601820048;
	iVar38[2] = func_1352();
	iVar0[3] = -2119627968;
	iVar19[3] = 2025485344;
	iVar38[3] = 901520480;
	iVar0[4] = -837651311;
	iVar19[4] = -1999465365;
	iVar38[4] = func_1352();
	iVar0[5] = -2089261255;
	iVar19[5] = 853723410;
	iVar38[5] = func_1352();
	iVar0[6] = -1145367359;
	iVar19[6] = 1169958167;
	iVar38[6] = func_1352();
	iVar0[7] = -1145367359;
	iVar19[7] = -792944828;
	iVar38[7] = func_1352();
	iVar0[8] = -1608451354;
	iVar19[8] = -2001921071;
	iVar38[8] = func_1352();
	iVar0[9] = -7810518;
	iVar19[9] = 157361403;
	iVar38[9] = func_1352();
	iVar0[10] = -1329287819;
	iVar19[10] = -492479795;
	iVar38[10] = func_1352();
	iVar0[11] = -848232571;
	iVar19[11] = -1284301817;
	iVar38[11] = func_1352();
	iVar0[12] = -804860583;
	iVar19[12] = -1045282549;
	iVar38[12] = func_1352();
	iVar0[13] = 1510372288;
	iVar19[13] = -989202374;
	iVar38[13] = func_1352();
	iVar0[14] = -224845272;
	iVar19[14] = 1538837441;
	iVar38[14] = func_1352();
	iVar0[15] = 858182906;
	iVar19[15] = 530288130;
	iVar38[15] = func_1352();
	iVar0[16] = 708084994;
	iVar19[16] = -1887167048;
	iVar38[16] = func_1352();
	iVar0[17] = 765991018;
	iVar19[17] = -347518940;
	iVar38[17] = func_1352();
	if (iParam0 == 2)
	{
		if ((func_1269(&(iVar0[Global_1357549->f_575]), 3) > 0 || func_1566(&(iVar0[Global_1357549->f_575]))) || iParam1)
		{
			if (func_813(&(iVar19[Global_1357549->f_575])))
			{
				if (!STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
				{
					func_1158(&(iVar19[Global_1357549->f_575]), 1);
					func_1567(&(iVar19[Global_1357549->f_575]));
				}
			}
			if (func_813(&(iVar38[Global_1357549->f_575])))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])))
				{
					STREAMING::_REMOVE_IMAP(&(iVar38[Global_1357549->f_575]));
				}
			}
		}
		else
		{
			if (func_813(&(iVar19[Global_1357549->f_575])))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
				{
					func_1158(&(iVar19[Global_1357549->f_575]), 0);
					STREAMING::_REMOVE_IMAP(&(iVar19[Global_1357549->f_575]));
				}
			}
			if (func_813(&(iVar38[Global_1357549->f_575])))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])) == 0)
				{
					STREAMING::_REQUEST_IMAP(&(iVar38[Global_1357549->f_575]));
				}
			}
		}
	}
	if (iParam0 != 2 || func_32() != 1)
	{
		if (func_813(&(iVar38[Global_1357549->f_575])))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])))
			{
				STREAMING::_REMOVE_IMAP(&(iVar38[Global_1357549->f_575]));
			}
		}
		if (func_813(&(iVar19[Global_1357549->f_575])))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
			{
				func_1158(&(iVar19[Global_1357549->f_575]), 0);
				STREAMING::_REMOVE_IMAP(&(iVar19[Global_1357549->f_575]));
			}
		}
	}
}

void func_1499(int iParam0, int iParam1)
{
	int iVar0[18];
	int iVar19[18];
	int iVar38[6];
	int iVar45[6];
	int iVar52;
	int iVar53;
	var uVar54;
	bool bVar55;
	
	iVar0[0] = 2137149309;
	iVar19[0] = -134624703;
	iVar0[1] = -147867326;
	iVar19[1] = func_1138();
	iVar0[2] = -1262979941;
	iVar19[2] = func_1138();
	iVar0[3] = -2119627968;
	iVar19[3] = func_1138();
	iVar0[4] = -837651311;
	iVar19[4] = func_1138();
	iVar0[5] = -2089261255;
	iVar19[5] = func_1138();
	iVar0[6] = -1145367359;
	iVar19[6] = -1535722316;
	iVar0[7] = -1145367359;
	iVar19[7] = 1547994518;
	iVar0[8] = -1608451354;
	iVar19[8] = func_1138();
	iVar0[9] = -1329287819;
	iVar19[9] = -910918420;
	iVar0[10] = -848232571;
	iVar19[10] = 495480888;
	iVar0[11] = -804860583;
	iVar19[11] = 2004706822;
	iVar0[12] = 1510372288;
	iVar19[12] = 884576413;
	iVar0[13] = -7810518;
	iVar19[13] = 778703691;
	iVar0[14] = -224845272;
	iVar19[14] = -421730990;
	iVar0[15] = 858182906;
	iVar19[15] = 514406510;
	iVar0[16] = 765991018;
	iVar19[16] = -327708229;
	iVar0[17] = 708084994;
	iVar19[17] = 1048845581;
	if (iParam0 == 3 && ((func_890(&(iVar0[Global_1357549->f_575]), 1, 0) || func_1566(&(iVar0[Global_1357549->f_575]))) || iParam1))
	{
		if (func_813(&(iVar19[Global_1357549->f_575])))
		{
			if (!STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
			{
				func_1158(&(iVar19[Global_1357549->f_575]), 1);
				func_1567(&(iVar19[Global_1357549->f_575]));
			}
		}
	}
	else if (func_813(&(iVar19[Global_1357549->f_575])))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
		{
			func_1158(&(iVar19[Global_1357549->f_575]), 0);
			STREAMING::_REMOVE_IMAP(&(iVar19[Global_1357549->f_575]));
		}
	}
	iVar38[0] = -1608451354;
	iVar45[0] = 11;
	iVar38[1] = -147867326;
	iVar45[1] = 12;
	iVar38[2] = -1262979941;
	iVar45[2] = 13;
	iVar38[3] = -837651311;
	iVar45[3] = 14;
	iVar38[4] = -2119627968;
	iVar45[4] = 16;
	iVar38[5] = -2089261255;
	iVar45[5] = 15;
	bVar55 = false;
	iVar52 = 0;
	while (iVar52 < 6)
	{
		if (iParam0 == 3)
		{
			iVar53 = func_1269(&(iVar38[iVar52]), 3);
			uVar54 = func_1566(&(iVar38[iVar52]));
			bVar55 = (iVar53 > 0 || uVar54);
		}
		if (bVar55 || iParam1)
		{
			if (func_1568(&(iVar45[iVar52])) == 0)
			{
				func_1150(&(iVar45[iVar52]));
			}
		}
		else if (func_1568(&(iVar45[iVar52])))
		{
			func_1149(&(iVar45[iVar52]));
		}
		iVar52++;
	}
}

void func_1500(int iParam0, int iParam1)
{
	int iVar0[18];
	int iVar19[18];
	int iVar38[18];
	int iVar57;
	var uVar58;
	bool bVar59;
	
	iVar0[0] = 2137149309;
	iVar19[0] = 1104800593;
	iVar38[0] = func_1352();
	iVar0[1] = -1145367359;
	iVar19[1] = 968084866;
	iVar38[1] = func_1352();
	iVar0[2] = -1145367359;
	iVar19[2] = -696422730;
	iVar38[2] = func_1352();
	iVar0[3] = -1329287819;
	iVar19[3] = 1423158124;
	iVar38[3] = func_1352();
	iVar0[4] = -1608451354;
	iVar19[4] = -1063259251;
	iVar38[4] = func_1352();
	iVar0[5] = -147867326;
	iVar19[5] = -317096325;
	iVar38[5] = 1025787994;
	iVar0[6] = -1262979941;
	iVar19[6] = -1255331540;
	iVar38[6] = func_1352();
	iVar0[7] = -2119627968;
	iVar19[7] = -1063926197;
	iVar38[7] = 629519239;
	iVar0[8] = -837651311;
	iVar19[8] = 360408116;
	iVar38[8] = func_1352();
	iVar0[9] = -2089261255;
	iVar19[9] = -408234235;
	iVar38[9] = func_1352();
	iVar0[10] = -848232571;
	iVar19[10] = -1016007592;
	iVar38[10] = func_1352();
	iVar0[11] = -804860583;
	iVar19[11] = -763678874;
	iVar38[11] = func_1352();
	iVar0[12] = 1510372288;
	iVar19[12] = -1361342903;
	iVar38[12] = func_1352();
	iVar0[13] = -7810518;
	iVar19[13] = -483001024;
	iVar38[13] = func_1352();
	iVar0[14] = -224845272;
	iVar19[14] = 255767990;
	iVar38[14] = func_1352();
	iVar0[15] = 858182906;
	iVar19[15] = -2048221620;
	iVar38[15] = func_1352();
	iVar0[16] = 765991018;
	iVar19[16] = 339295570;
	iVar38[16] = func_1352();
	iVar0[17] = 708084994;
	iVar19[17] = 668976634;
	iVar38[17] = func_1352();
	bVar59 = false;
	if (iParam0 == 6)
	{
		iVar57 = func_1269(&(iVar0[Global_1357549->f_575]), 3);
		uVar58 = func_1566(&(iVar0[Global_1357549->f_575]));
		bVar59 = (iVar57 > 0 || uVar58);
		if (bVar59 || iParam1)
		{
			if (func_813(&(iVar19[Global_1357549->f_575])))
			{
				if (!STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
				{
					func_1158(&(iVar19[Global_1357549->f_575]), 1);
					func_1567(&(iVar19[Global_1357549->f_575]));
				}
			}
			if (func_813(&(iVar38[Global_1357549->f_575])))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])))
				{
					STREAMING::_REMOVE_IMAP(&(iVar38[Global_1357549->f_575]));
				}
			}
		}
		else
		{
			if (func_813(&(iVar19[Global_1357549->f_575])))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
				{
					func_1158(&(iVar19[Global_1357549->f_575]), 0);
					STREAMING::_REMOVE_IMAP(&(iVar19[Global_1357549->f_575]));
				}
			}
			if (func_813(&(iVar38[Global_1357549->f_575])))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])) == 0)
				{
					STREAMING::_REQUEST_IMAP(&(iVar38[Global_1357549->f_575]));
				}
			}
		}
	}
	if (iParam0 != 6 || func_32() != 1)
	{
		if (func_813(&(iVar38[Global_1357549->f_575])))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])))
			{
				STREAMING::_REMOVE_IMAP(&(iVar38[Global_1357549->f_575]));
			}
		}
		if (func_813(&(iVar19[Global_1357549->f_575])))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
			{
				func_1158(&(iVar19[Global_1357549->f_575]), 0);
				STREAMING::_REMOVE_IMAP(&(iVar19[Global_1357549->f_575]));
			}
		}
	}
}

void func_1501(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar86;
	int iVar87;
	
	Var0 = 17;
	Var0.f_1 = 4;
	Var0.f_1.f_5 = 4;
	Var0.f_1.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	(*Var0[15 /*5*/])[0] = func_1352();
	(*Var0[15 /*5*/])[1] = func_1352();
	(*Var0[15 /*5*/])[2] = 1079303588;
	(*Var0[15 /*5*/])[3] = 1079303588;
	(*Var0[10 /*5*/])[0] = -937893311;
	(*Var0[10 /*5*/])[1] = -937893311;
	(*Var0[10 /*5*/])[2] = -937893311;
	(*Var0[10 /*5*/])[3] = 394987827;
	(*Var0[11 /*5*/])[0] = func_1352();
	(*Var0[11 /*5*/])[1] = func_1352();
	(*Var0[11 /*5*/])[2] = func_1352();
	(*Var0[11 /*5*/])[3] = func_1352();
	(*Var0[12 /*5*/])[0] = func_1352();
	(*Var0[12 /*5*/])[1] = func_1352();
	(*Var0[12 /*5*/])[2] = func_1352();
	(*Var0[12 /*5*/])[3] = func_1352();
	(*Var0[13 /*5*/])[0] = func_1352();
	(*Var0[13 /*5*/])[1] = func_1352();
	(*Var0[13 /*5*/])[2] = func_1352();
	(*Var0[13 /*5*/])[3] = func_1352();
	(*Var0[9 /*5*/])[0] = -1365193577;
	(*Var0[9 /*5*/])[1] = -1166561064;
	(*Var0[9 /*5*/])[2] = -1166561064;
	(*Var0[9 /*5*/])[3] = -1166561064;
	(*Var0[8 /*5*/])[0] = -1620486708;
	(*Var0[8 /*5*/])[1] = -1620486708;
	(*Var0[8 /*5*/])[2] = -1620486708;
	(*Var0[8 /*5*/])[3] = 163126540;
	(*Var0[7 /*5*/])[0] = 1808508475;
	(*Var0[7 /*5*/])[1] = 1808508475;
	(*Var0[7 /*5*/])[2] = 1808508475;
	(*Var0[7 /*5*/])[3] = 2015311123;
	(*Var0[6 /*5*/])[0] = -1576393943;
	(*Var0[6 /*5*/])[1] = -1576393943;
	(*Var0[6 /*5*/])[2] = -1576393943;
	(*Var0[6 /*5*/])[3] = -1920340119;
	(*Var0[5 /*5*/])[0] = -1563072795;
	(*Var0[5 /*5*/])[1] = -1563072795;
	(*Var0[5 /*5*/])[2] = 607574432;
	(*Var0[5 /*5*/])[3] = 607574432;
	(*Var0[4 /*5*/])[0] = -1987982797;
	(*Var0[4 /*5*/])[1] = -1987982797;
	(*Var0[4 /*5*/])[2] = -1987982797;
	(*Var0[4 /*5*/])[3] = -1933895237;
	(*Var0[3 /*5*/])[0] = -182995231;
	(*Var0[3 /*5*/])[1] = -182995231;
	(*Var0[3 /*5*/])[2] = 1267297807;
	(*Var0[3 /*5*/])[3] = 1267297807;
	(*Var0[0 /*5*/])[0] = func_1352();
	(*Var0[0 /*5*/])[1] = -1150137955;
	(*Var0[0 /*5*/])[2] = -1150137955;
	(*Var0[0 /*5*/])[3] = -1150137955;
	(*Var0[1 /*5*/])[0] = func_1352();
	(*Var0[1 /*5*/])[1] = func_1352();
	(*Var0[1 /*5*/])[2] = func_1352();
	(*Var0[1 /*5*/])[3] = func_1352();
	(*Var0[2 /*5*/])[0] = func_1352();
	(*Var0[2 /*5*/])[1] = func_1352();
	(*Var0[2 /*5*/])[2] = func_1352();
	(*Var0[2 /*5*/])[3] = func_1352();
	iVar87 = 0;
	while (iVar87 < 17)
	{
		iVar86 = 0;
		while (iVar86 < 4)
		{
			if (Var0[iVar87 /*5*/][iVar86] != func_1352())
			{
				if ((iVar86 + 1 == func_370(iVar87, 1) && iParam0 == 1) && iParam2)
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REQUEST_IMAP(Var0[iVar87 /*5*/][iVar86]);
						func_1569(Var0[iVar87 /*5*/][iVar86], 1, iParam1);
					}
				}
				else if ((Var0[iVar87 /*5*/][(func_370(iVar87, 1) - 1)] != Var0[iVar87 /*5*/][iVar86] || iParam0 != 1) || iParam2 == 0)
				{
					if (STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REMOVE_IMAP(Var0[iVar87 /*5*/][iVar86]);
						func_1569(Var0[iVar87 /*5*/][iVar86], 0, iParam1);
					}
				}
			}
			iVar86++;
		}
		iVar87++;
	}
}

void func_1502(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	struct<16> Var1;
	int iVar50;
	int iVar51;
	int iVar52;
	
	if (fParam1 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam1 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	(*(*Var1[0 /*16*/])[0 /*5*/])[0] = func_1352();
	(*(*Var1[1 /*16*/])[0 /*5*/])[0] = func_1352();
	(*(*Var1[2 /*16*/])[0 /*5*/])[0] = func_1352();
	(*(*Var1[0 /*16*/])[0 /*5*/])[1] = -710911638;
	(*(*Var1[1 /*16*/])[0 /*5*/])[1] = -710911638;
	(*(*Var1[2 /*16*/])[0 /*5*/])[1] = -710911638;
	(*(*Var1[0 /*16*/])[0 /*5*/])[2] = -942555699;
	(*(*Var1[1 /*16*/])[0 /*5*/])[2] = -942555699;
	(*(*Var1[2 /*16*/])[0 /*5*/])[2] = -942555699;
	(*(*Var1[0 /*16*/])[0 /*5*/])[3] = -760097927;
	(*(*Var1[1 /*16*/])[0 /*5*/])[3] = -760097927;
	(*(*Var1[2 /*16*/])[0 /*5*/])[3] = -760097927;
	(*(*Var1[0 /*16*/])[1 /*5*/])[0] = func_1352();
	(*(*Var1[1 /*16*/])[1 /*5*/])[0] = func_1352();
	(*(*Var1[2 /*16*/])[1 /*5*/])[0] = func_1352();
	(*(*Var1[0 /*16*/])[1 /*5*/])[1] = 2047954825;
	(*(*Var1[1 /*16*/])[1 /*5*/])[1] = 2047954825;
	(*(*Var1[2 /*16*/])[1 /*5*/])[1] = 2047954825;
	(*(*Var1[0 /*16*/])[1 /*5*/])[2] = -2085723453;
	(*(*Var1[1 /*16*/])[1 /*5*/])[2] = -2085723453;
	(*(*Var1[2 /*16*/])[1 /*5*/])[2] = -2085723453;
	(*(*Var1[0 /*16*/])[1 /*5*/])[3] = 1434945142;
	(*(*Var1[1 /*16*/])[1 /*5*/])[3] = 1434945142;
	(*(*Var1[2 /*16*/])[1 /*5*/])[3] = 1434945142;
	(*(*Var1[0 /*16*/])[2 /*5*/])[0] = 1924209179;
	(*(*Var1[1 /*16*/])[2 /*5*/])[0] = 1924209179;
	(*(*Var1[2 /*16*/])[2 /*5*/])[0] = 1924209179;
	(*(*Var1[0 /*16*/])[2 /*5*/])[1] = -2084193212;
	(*(*Var1[1 /*16*/])[2 /*5*/])[1] = -2084193212;
	(*(*Var1[2 /*16*/])[2 /*5*/])[1] = -2084193212;
	(*(*Var1[0 /*16*/])[2 /*5*/])[2] = -838184752;
	(*(*Var1[1 /*16*/])[2 /*5*/])[2] = -838184752;
	(*(*Var1[2 /*16*/])[2 /*5*/])[2] = -838184752;
	(*(*Var1[0 /*16*/])[2 /*5*/])[3] = -1433138716;
	(*(*Var1[1 /*16*/])[2 /*5*/])[3] = -1433138716;
	(*(*Var1[2 /*16*/])[2 /*5*/])[3] = -1433138716;
	iVar52 = 0;
	while (iVar52 < 3)
	{
		iVar51 = 0;
		while (iVar51 < 3)
		{
			iVar50 = 0;
			while (iVar50 < 4)
			{
				if (*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50] != func_1352()
				{
					if (((iVar52 == iVar0 && iVar50 + 1 == func_1570(iVar51)) && iParam0 == 1) && iParam2)
					{
						if (!STREAMING::_IS_IMAP_ACTIVE((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]))
						{
							STREAMING::_REQUEST_IMAP((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]);
						}
					}
					else if (((*Var1[iVar0 /*16*/])[iVar51 /*5*/][(func_1570(iVar51) - 1)] != (*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50] || iParam0 != 1) || iParam2 == 0)
					{
						if (STREAMING::_IS_IMAP_ACTIVE((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]))
						{
							STREAMING::_REMOVE_IMAP((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]);
						}
					}
				}
				iVar50++;
			}
			iVar51++;
		}
		iVar52++;
	}
}

void func_1503(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<5> Var0;
	int iVar86;
	int iVar87;
	
	Var0 = 17;
	Var0.f_1 = 4;
	Var0.f_1.f_5 = 4;
	Var0.f_1.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	(*Var0[15 /*5*/])[0] = func_1352();
	(*Var0[15 /*5*/])[1] = func_1352();
	(*Var0[15 /*5*/])[2] = -1147256587;
	(*Var0[15 /*5*/])[3] = -1147256587;
	(*Var0[10 /*5*/])[0] = -1247551347;
	(*Var0[10 /*5*/])[1] = -1247551347;
	(*Var0[10 /*5*/])[2] = -1247551347;
	(*Var0[10 /*5*/])[3] = -1010466481;
	(*Var0[11 /*5*/])[0] = func_1352();
	(*Var0[11 /*5*/])[1] = func_1352();
	(*Var0[11 /*5*/])[2] = func_1352();
	(*Var0[11 /*5*/])[3] = func_1352();
	(*Var0[12 /*5*/])[0] = func_1352();
	(*Var0[12 /*5*/])[1] = func_1352();
	(*Var0[12 /*5*/])[2] = func_1352();
	(*Var0[12 /*5*/])[3] = func_1352();
	(*Var0[13 /*5*/])[0] = func_1352();
	(*Var0[13 /*5*/])[1] = func_1352();
	(*Var0[13 /*5*/])[2] = func_1352();
	(*Var0[13 /*5*/])[3] = func_1352();
	(*Var0[9 /*5*/])[0] = -160392273;
	(*Var0[9 /*5*/])[1] = 1049842342;
	(*Var0[9 /*5*/])[2] = 1049842342;
	(*Var0[9 /*5*/])[3] = 1049842342;
	(*Var0[8 /*5*/])[0] = 1674800958;
	(*Var0[8 /*5*/])[1] = 1674800958;
	(*Var0[8 /*5*/])[2] = 1674800958;
	(*Var0[8 /*5*/])[3] = 2728487;
	(*Var0[7 /*5*/])[0] = 1636281938;
	(*Var0[7 /*5*/])[1] = 1636281938;
	(*Var0[7 /*5*/])[2] = 1636281938;
	(*Var0[7 /*5*/])[3] = 1084869405;
	(*Var0[6 /*5*/])[0] = -1451784475;
	(*Var0[6 /*5*/])[1] = -1451784475;
	(*Var0[6 /*5*/])[2] = -1451784475;
	(*Var0[6 /*5*/])[3] = 1128417383;
	(*Var0[5 /*5*/])[0] = -2016771661;
	(*Var0[5 /*5*/])[1] = -2016771661;
	(*Var0[5 /*5*/])[2] = 202127432;
	(*Var0[5 /*5*/])[3] = 202127432;
	(*Var0[4 /*5*/])[0] = -546137515;
	(*Var0[4 /*5*/])[1] = -546137515;
	(*Var0[4 /*5*/])[2] = -546137515;
	(*Var0[4 /*5*/])[3] = 1679038623;
	if (bParam3)
	{
		func_1571(1);
	}
	else
	{
		func_1571(0);
	}
	(*Var0[3 /*5*/])[0] = 1742990618;
	(*Var0[3 /*5*/])[1] = 1742990618;
	(*Var0[3 /*5*/])[2] = -751959361;
	(*Var0[3 /*5*/])[3] = -751959361;
	(*Var0[0 /*5*/])[0] = func_1352();
	(*Var0[0 /*5*/])[1] = func_1352();
	(*Var0[0 /*5*/])[2] = -2000080725;
	(*Var0[0 /*5*/])[3] = -2000080725;
	(*Var0[1 /*5*/])[0] = 2123887232;
	(*Var0[1 /*5*/])[1] = 2123887232;
	(*Var0[1 /*5*/])[2] = 2123887232;
	(*Var0[1 /*5*/])[3] = 2123887232;
	(*Var0[2 /*5*/])[0] = 102652153;
	(*Var0[2 /*5*/])[1] = 102652153;
	(*Var0[2 /*5*/])[2] = 102652153;
	(*Var0[2 /*5*/])[3] = 102652153;
	iVar87 = 0;
	while (iVar87 < 17)
	{
		iVar86 = 0;
		while (iVar86 < 4)
		{
			if (Var0[iVar87 /*5*/][iVar86] != func_1352())
			{
				if ((iVar86 + 1 == func_370(iVar87, 1) && iParam0 == 2) && iParam2)
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REQUEST_IMAP(Var0[iVar87 /*5*/][iVar86]);
						func_1569(Var0[iVar87 /*5*/][iVar86], 1, iParam1);
					}
				}
				else if ((Var0[iVar87 /*5*/][(func_370(iVar87, 1) - 1)] != Var0[iVar87 /*5*/][iVar86] || iParam0 != 2) || iParam2 == 0)
				{
					if (STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REMOVE_IMAP(Var0[iVar87 /*5*/][iVar86]);
						func_1569(Var0[iVar87 /*5*/][iVar86], 0, iParam1);
					}
				}
			}
			iVar86++;
		}
		iVar87++;
	}
}

void func_1504(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	int iVar0;
	struct<16> Var1;
	int iVar50;
	int iVar51;
	int iVar52;
	
	if (fParam1 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam1 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	(*(*Var1[0 /*16*/])[0 /*5*/])[0] = func_1352();
	(*(*Var1[1 /*16*/])[0 /*5*/])[0] = func_1352();
	(*(*Var1[2 /*16*/])[0 /*5*/])[0] = func_1352();
	(*(*Var1[0 /*16*/])[0 /*5*/])[1] = 626928579;
	(*(*Var1[1 /*16*/])[0 /*5*/])[1] = 626928579;
	(*(*Var1[2 /*16*/])[0 /*5*/])[1] = 626928579;
	(*(*Var1[0 /*16*/])[0 /*5*/])[2] = 313722477;
	(*(*Var1[1 /*16*/])[0 /*5*/])[2] = 313722477;
	(*(*Var1[2 /*16*/])[0 /*5*/])[2] = 313722477;
	(*(*Var1[0 /*16*/])[0 /*5*/])[3] = 976082270;
	(*(*Var1[1 /*16*/])[0 /*5*/])[3] = 976082270;
	(*(*Var1[2 /*16*/])[0 /*5*/])[3] = 976082270;
	if (bParam3)
	{
		(*(*Var1[0 /*16*/])[1 /*5*/])[0] = func_1352();
		(*(*Var1[1 /*16*/])[1 /*5*/])[0] = func_1352();
		(*(*Var1[2 /*16*/])[1 /*5*/])[0] = func_1352();
		(*(*Var1[0 /*16*/])[1 /*5*/])[1] = -1370620659;
		(*(*Var1[1 /*16*/])[1 /*5*/])[1] = -1370620659;
		(*(*Var1[2 /*16*/])[1 /*5*/])[1] = -1370620659;
		(*(*Var1[0 /*16*/])[1 /*5*/])[2] = -624219879;
		(*(*Var1[1 /*16*/])[1 /*5*/])[2] = -624219879;
		(*(*Var1[2 /*16*/])[1 /*5*/])[2] = -624219879;
		(*(*Var1[0 /*16*/])[1 /*5*/])[3] = 715730031;
		(*(*Var1[1 /*16*/])[1 /*5*/])[3] = 715730031;
		(*(*Var1[2 /*16*/])[1 /*5*/])[3] = 715730031;
		func_1572(1);
	}
	else
	{
		(*(*Var1[0 /*16*/])[1 /*5*/])[0] = func_1352();
		(*(*Var1[1 /*16*/])[1 /*5*/])[0] = func_1352();
		(*(*Var1[2 /*16*/])[1 /*5*/])[0] = func_1352();
		(*(*Var1[0 /*16*/])[1 /*5*/])[1] = 5585502;
		(*(*Var1[1 /*16*/])[1 /*5*/])[1] = 5585502;
		(*(*Var1[2 /*16*/])[1 /*5*/])[1] = 5585502;
		(*(*Var1[0 /*16*/])[1 /*5*/])[2] = -1362716862;
		(*(*Var1[1 /*16*/])[1 /*5*/])[2] = -1362716862;
		(*(*Var1[2 /*16*/])[1 /*5*/])[2] = -1362716862;
		(*(*Var1[0 /*16*/])[1 /*5*/])[3] = 482931525;
		(*(*Var1[1 /*16*/])[1 /*5*/])[3] = 482931525;
		(*(*Var1[2 /*16*/])[1 /*5*/])[3] = 482931525;
		func_1572(0);
	}
	(*(*Var1[0 /*16*/])[2 /*5*/])[0] = -462274808;
	(*(*Var1[1 /*16*/])[2 /*5*/])[0] = -462274808;
	(*(*Var1[2 /*16*/])[2 /*5*/])[0] = -462274808;
	(*(*Var1[0 /*16*/])[2 /*5*/])[1] = -1906732332;
	(*(*Var1[1 /*16*/])[2 /*5*/])[1] = -1906732332;
	(*(*Var1[2 /*16*/])[2 /*5*/])[1] = -1906732332;
	(*(*Var1[0 /*16*/])[2 /*5*/])[2] = -526829;
	(*(*Var1[1 /*16*/])[2 /*5*/])[2] = -526829;
	(*(*Var1[2 /*16*/])[2 /*5*/])[2] = -526829;
	(*(*Var1[0 /*16*/])[2 /*5*/])[3] = -1754422016;
	(*(*Var1[1 /*16*/])[2 /*5*/])[3] = -1754422016;
	(*(*Var1[2 /*16*/])[2 /*5*/])[3] = -1754422016;
	iVar52 = 0;
	while (iVar52 < 3)
	{
		iVar51 = 0;
		while (iVar51 < 3)
		{
			iVar50 = 0;
			while (iVar50 < 4)
			{
				if (*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50] != func_1352()
				{
					if (((iVar52 == iVar0 && iVar50 + 1 == func_1570(iVar51)) && iParam0 == 2) && iParam2)
					{
						if (!STREAMING::_IS_IMAP_ACTIVE((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]))
						{
							STREAMING::_REQUEST_IMAP((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]);
						}
					}
					else if (((*Var1[iVar0 /*16*/])[iVar51 /*5*/][(func_1570(iVar51) - 1)] != (*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50] || iParam0 != 2) || iParam2 == 0)
					{
						if (STREAMING::_IS_IMAP_ACTIVE((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]))
						{
							STREAMING::_REMOVE_IMAP((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]);
						}
					}
				}
				iVar50++;
			}
			iVar51++;
		}
		iVar52++;
	}
}

void func_1505(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar86;
	int iVar87;
	
	Var0 = 17;
	Var0.f_1 = 4;
	Var0.f_1.f_5 = 4;
	Var0.f_1.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	(*Var0[10 /*5*/])[0] = 2036492390;
	(*Var0[10 /*5*/])[1] = 2036492390;
	(*Var0[10 /*5*/])[2] = 2036492390;
	(*Var0[10 /*5*/])[3] = 1865439665;
	(*Var0[11 /*5*/])[0] = func_1352();
	(*Var0[11 /*5*/])[1] = func_1352();
	(*Var0[11 /*5*/])[2] = func_1352();
	(*Var0[11 /*5*/])[3] = func_1352();
	(*Var0[12 /*5*/])[0] = func_1352();
	(*Var0[12 /*5*/])[1] = func_1352();
	(*Var0[12 /*5*/])[2] = func_1352();
	(*Var0[12 /*5*/])[3] = func_1352();
	(*Var0[13 /*5*/])[0] = func_1352();
	(*Var0[13 /*5*/])[1] = func_1352();
	(*Var0[13 /*5*/])[2] = func_1352();
	(*Var0[13 /*5*/])[3] = func_1352();
	(*Var0[9 /*5*/])[0] = func_1352();
	(*Var0[9 /*5*/])[1] = func_1352();
	(*Var0[9 /*5*/])[2] = func_1352();
	(*Var0[9 /*5*/])[3] = func_1352();
	(*Var0[8 /*5*/])[0] = func_1352();
	(*Var0[8 /*5*/])[1] = func_1352();
	(*Var0[8 /*5*/])[2] = func_1352();
	(*Var0[8 /*5*/])[3] = func_1352();
	(*Var0[7 /*5*/])[0] = -621187540;
	(*Var0[7 /*5*/])[1] = -621187540;
	(*Var0[7 /*5*/])[2] = -621187540;
	(*Var0[7 /*5*/])[3] = 1079213989;
	(*Var0[6 /*5*/])[0] = -882188392;
	(*Var0[6 /*5*/])[1] = -882188392;
	(*Var0[6 /*5*/])[2] = -882188392;
	(*Var0[6 /*5*/])[3] = 964593693;
	(*Var0[5 /*5*/])[0] = func_1352();
	(*Var0[5 /*5*/])[1] = func_1352();
	(*Var0[5 /*5*/])[2] = func_1352();
	(*Var0[5 /*5*/])[3] = func_1352();
	(*Var0[4 /*5*/])[0] = -997495998;
	(*Var0[4 /*5*/])[1] = -997495998;
	(*Var0[4 /*5*/])[2] = -997495998;
	(*Var0[4 /*5*/])[3] = -2147051362;
	(*Var0[3 /*5*/])[0] = -1115840558;
	(*Var0[3 /*5*/])[1] = -1115840558;
	(*Var0[3 /*5*/])[2] = 1674493966;
	(*Var0[3 /*5*/])[3] = 1674493966;
	(*Var0[0 /*5*/])[0] = func_1352();
	(*Var0[0 /*5*/])[1] = -1618574684;
	(*Var0[0 /*5*/])[2] = -1618574684;
	(*Var0[0 /*5*/])[3] = -1618574684;
	(*Var0[1 /*5*/])[0] = func_1352();
	(*Var0[1 /*5*/])[1] = func_1352();
	(*Var0[1 /*5*/])[2] = func_1352();
	(*Var0[1 /*5*/])[3] = func_1352();
	(*Var0[2 /*5*/])[0] = func_1352();
	(*Var0[2 /*5*/])[1] = func_1352();
	(*Var0[2 /*5*/])[2] = func_1352();
	(*Var0[2 /*5*/])[3] = func_1352();
	iVar87 = 0;
	while (iVar87 < 17)
	{
		iVar86 = 0;
		while (iVar86 < 4)
		{
			if (Var0[iVar87 /*5*/][iVar86] != func_1352())
			{
				if ((iVar86 + 1 == func_370(iVar87, 1) && iParam0 == 3) && iParam2)
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REQUEST_IMAP(Var0[iVar87 /*5*/][iVar86]);
						func_1569(Var0[iVar87 /*5*/][iVar86], 1, iParam1);
					}
				}
				else if ((Var0[iVar87 /*5*/][(func_370(iVar87, 1) - 1)] != Var0[iVar87 /*5*/][iVar86] || iParam0 != 3) || iParam2 == 0)
				{
					if (STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REMOVE_IMAP(Var0[iVar87 /*5*/][iVar86]);
						func_1569(Var0[iVar87 /*5*/][iVar86], 0, iParam1);
					}
				}
			}
			iVar86++;
		}
		iVar87++;
	}
}

void func_1506(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	struct<16> Var1;
	int iVar50;
	int iVar51;
	int iVar52;
	char* sVar53[4];
	int iVar58;
	
	if (fParam1 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam1 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	(*(*Var1[0 /*16*/])[0 /*5*/])[0] = func_1352();
	(*(*Var1[1 /*16*/])[0 /*5*/])[0] = func_1352();
	(*(*Var1[2 /*16*/])[0 /*5*/])[0] = func_1352();
	(*(*Var1[0 /*16*/])[0 /*5*/])[1] = func_1352();
	(*(*Var1[1 /*16*/])[0 /*5*/])[1] = func_1352();
	(*(*Var1[2 /*16*/])[0 /*5*/])[1] = func_1352();
	(*(*Var1[0 /*16*/])[0 /*5*/])[2] = func_1352();
	(*(*Var1[1 /*16*/])[0 /*5*/])[2] = func_1352();
	(*(*Var1[2 /*16*/])[0 /*5*/])[2] = func_1352();
	(*(*Var1[0 /*16*/])[0 /*5*/])[3] = func_1352();
	(*(*Var1[1 /*16*/])[0 /*5*/])[3] = func_1352();
	(*(*Var1[2 /*16*/])[0 /*5*/])[3] = func_1352();
	(*(*Var1[0 /*16*/])[1 /*5*/])[0] = func_1352();
	(*(*Var1[1 /*16*/])[1 /*5*/])[0] = func_1352();
	(*(*Var1[2 /*16*/])[1 /*5*/])[0] = func_1352();
	(*(*Var1[0 /*16*/])[1 /*5*/])[1] = 1155877447;
	(*(*Var1[1 /*16*/])[1 /*5*/])[1] = 1155877447;
	(*(*Var1[2 /*16*/])[1 /*5*/])[1] = 1155877447;
	(*(*Var1[0 /*16*/])[1 /*5*/])[2] = 928165666;
	(*(*Var1[1 /*16*/])[1 /*5*/])[2] = 928165666;
	(*(*Var1[2 /*16*/])[1 /*5*/])[2] = 928165666;
	(*(*Var1[0 /*16*/])[1 /*5*/])[3] = 2048341166;
	(*(*Var1[1 /*16*/])[1 /*5*/])[3] = 2048341166;
	(*(*Var1[2 /*16*/])[1 /*5*/])[3] = 2048341166;
	(*(*Var1[0 /*16*/])[2 /*5*/])[0] = -414377604;
	(*(*Var1[1 /*16*/])[2 /*5*/])[0] = -414377604;
	(*(*Var1[2 /*16*/])[2 /*5*/])[0] = -414377604;
	(*(*Var1[0 /*16*/])[2 /*5*/])[1] = -109593135;
	(*(*Var1[1 /*16*/])[2 /*5*/])[1] = -109593135;
	(*(*Var1[2 /*16*/])[2 /*5*/])[1] = -109593135;
	(*(*Var1[0 /*16*/])[2 /*5*/])[2] = 990134505;
	(*(*Var1[1 /*16*/])[2 /*5*/])[2] = 990134505;
	(*(*Var1[2 /*16*/])[2 /*5*/])[2] = 990134505;
	(*(*Var1[0 /*16*/])[2 /*5*/])[3] = 1279910772;
	(*(*Var1[1 /*16*/])[2 /*5*/])[3] = 1279910772;
	(*(*Var1[2 /*16*/])[2 /*5*/])[3] = 1279910772;
	iVar52 = 0;
	while (iVar52 < 3)
	{
		iVar51 = 0;
		while (iVar51 < 3)
		{
			iVar50 = 0;
			while (iVar50 < 4)
			{
				if (*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50] != func_1352()
				{
					if (((iVar52 == iVar0 && iVar50 + 1 == func_1570(iVar51)) && iParam0 == 3) && iParam2)
					{
						if (!STREAMING::_IS_IMAP_ACTIVE((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]))
						{
							STREAMING::_REQUEST_IMAP((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]);
						}
					}
					else if (((*Var1[iVar0 /*16*/])[iVar51 /*5*/][(func_1570(iVar51) - 1)] != (*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50] || iParam0 != 3) || iParam2 == 0)
					{
						if (STREAMING::_IS_IMAP_ACTIVE((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]))
						{
							STREAMING::_REMOVE_IMAP((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]);
						}
					}
				}
				iVar50++;
			}
			iVar51++;
		}
		iVar52++;
	}
	sVar53[0] = "";
	sVar53[1] = "shb_p_ammo01";
	sVar53[2] = "shb_p_ammo02";
	sVar53[3] = "shb_p_ammo03";
	iVar58 = INTERIOR::GET_INTERIOR_AT_COORDS(1906.472f, -1862.567f, 46.362f);
	iVar50 = 0;
	while (iVar50 < 4)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(sVar53[iVar50])) == 0)
		{
			if (((iVar50 + 1 == func_1570(0) && iParam0 == 3) && iParam2) && Global_1357549->f_1495 & 8 != 0 == 0)
			{
				if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar58, &(sVar53[iVar50])) == 0)
				{
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar58, &(sVar53[iVar50]), 0);
				}
			}
			else if (((iParam0 != 3 || iVar50 + 1 != func_1570(0)) || iParam2 == 0) || Global_1357549->f_1495 & 8 != 0)
			{
				if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar58, &(sVar53[iVar50])))
				{
					INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar58, &(sVar53[iVar50]), 1);
				}
			}
		}
		iVar50++;
	}
}

void func_1507(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	float fVar8;
	
	fVar8 = 25f;
	switch (iParam0)
	{
		case 2:
			iVar0 = -180755040;
			iVar1 = 4;
			vVar3 = { 623.54f, -1251.056f, 40.2502f };
			fVar6 = 137.4389f;
			iVar2 = 8194;
			break;
		
		case 3:
			iVar0 = -180755040;
			iVar1 = 4;
			vVar3 = { 1908.325f, -1816.88f, 40.456f };
			fVar6 = 251.3719f;
			iVar2 = 8194;
			break;
		
		default:
			iVar0 = 0;
			iVar1 = 100;
			vVar3 = { 0f, 0f, 0f };
			fVar6 = 0f;
			iVar2 = 0;
			break;
	}
	iVar7 = VEHICLE::GET_CLOSEST_VEHICLE(vVar3, fVar8, iVar0, iVar2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar7))
	{
		Global_1357549->f_1674 = iVar7;
		ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iVar7, fVar6);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1357549->f_1674, true, true);
	}
	if (iParam1 >= iVar1 && iVar0 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1674) == 0 && ENTITY::DOES_ENTITY_EXIST(iVar7) == 0)
		{
			STREAMING::REQUEST_MODEL(iVar0, false);
			if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				Global_1357549->f_1674 = VEHICLE::CREATE_VEHICLE(iVar0, vVar3, fVar6, true, true, false, false);
			}
		}
		else
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
	}
	else
	{
		func_1573();
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1674))
	{
		if (iParam0 == 3 || iParam0 == 2)
		{
			VEHICLE::SET_BOAT_ANCHOR(Global_1357549->f_1674, true);
			VEHICLE::_0x6B53F4B811E583D2(Global_1357549->f_1674, 1);
		}
		if (ENTITY::GET_ENTITY_MODEL(Global_1357549->f_1674) != iVar0)
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_1357549->f_1674));
		}
	}
}

void func_1508(int iParam0, int iParam1)
{
	func_1574(iParam0);
}

int func_1509(float fParam0, var uParam1)
{
	int iVar0;
	struct<16> Var1;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	
	if (fParam0 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam0 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	(*(*Var1[0 /*16*/])[0 /*5*/])[0] = func_1352();
	(*(*Var1[1 /*16*/])[0 /*5*/])[0] = func_1352();
	(*(*Var1[2 /*16*/])[0 /*5*/])[0] = func_1352();
	(*(*Var1[0 /*16*/])[0 /*5*/])[1] = -710911638;
	(*(*Var1[1 /*16*/])[0 /*5*/])[1] = -710911638;
	(*(*Var1[2 /*16*/])[0 /*5*/])[1] = -710911638;
	(*(*Var1[0 /*16*/])[0 /*5*/])[2] = -942555699;
	(*(*Var1[1 /*16*/])[0 /*5*/])[2] = -942555699;
	(*(*Var1[2 /*16*/])[0 /*5*/])[2] = -942555699;
	(*(*Var1[0 /*16*/])[0 /*5*/])[3] = -760097927;
	(*(*Var1[1 /*16*/])[0 /*5*/])[3] = -760097927;
	(*(*Var1[2 /*16*/])[0 /*5*/])[3] = -760097927;
	(*(*Var1[0 /*16*/])[1 /*5*/])[0] = func_1352();
	(*(*Var1[1 /*16*/])[1 /*5*/])[0] = func_1352();
	(*(*Var1[2 /*16*/])[1 /*5*/])[0] = func_1352();
	(*(*Var1[0 /*16*/])[1 /*5*/])[1] = 2047954825;
	(*(*Var1[1 /*16*/])[1 /*5*/])[1] = 2047954825;
	(*(*Var1[2 /*16*/])[1 /*5*/])[1] = 2047954825;
	(*(*Var1[0 /*16*/])[1 /*5*/])[2] = -2085723453;
	(*(*Var1[1 /*16*/])[1 /*5*/])[2] = -2085723453;
	(*(*Var1[2 /*16*/])[1 /*5*/])[2] = -2085723453;
	(*(*Var1[0 /*16*/])[1 /*5*/])[3] = 1434945142;
	(*(*Var1[1 /*16*/])[1 /*5*/])[3] = 1434945142;
	(*(*Var1[2 /*16*/])[1 /*5*/])[3] = 1434945142;
	(*(*Var1[0 /*16*/])[2 /*5*/])[0] = 1924209179;
	(*(*Var1[1 /*16*/])[2 /*5*/])[0] = 1924209179;
	(*(*Var1[2 /*16*/])[2 /*5*/])[0] = 1924209179;
	(*(*Var1[0 /*16*/])[2 /*5*/])[1] = -2084193212;
	(*(*Var1[1 /*16*/])[2 /*5*/])[1] = -2084193212;
	(*(*Var1[2 /*16*/])[2 /*5*/])[1] = -2084193212;
	(*(*Var1[0 /*16*/])[2 /*5*/])[2] = -838184752;
	(*(*Var1[1 /*16*/])[2 /*5*/])[2] = -838184752;
	(*(*Var1[2 /*16*/])[2 /*5*/])[2] = -838184752;
	(*(*Var1[0 /*16*/])[2 /*5*/])[3] = -1433138716;
	(*(*Var1[1 /*16*/])[2 /*5*/])[3] = -1433138716;
	(*(*Var1[2 /*16*/])[2 /*5*/])[3] = -1433138716;
	iVar50 = 0;
	iVar53 = 0;
	while (iVar53 < 3)
	{
		iVar52 = 0;
		while (iVar52 < 3)
		{
			iVar51 = 0;
			while (iVar51 < 4)
			{
				if (*Var1[iVar53 /*16*/])[iVar52 /*5*/][iVar51] != func_1352()
				{
					if ((iVar53 == iVar0 && iVar51 + 1 == func_1570(iVar52)) && uParam1)
					{
						if (STREAMING::_IS_IMAP_ACTIVE((*Var1[iVar53 /*16*/])[iVar52 /*5*/][iVar51]))
						{
							iVar50++;
						}
					}
				}
				iVar51++;
			}
			iVar52++;
		}
		iVar53++;
	}
	if (iVar50 == 3)
	{
		return 1;
	}
	return 0;
}

int func_1510(float fParam0, var uParam1)
{
	int iVar0;
	struct<16> Var1;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	
	if (fParam0 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam0 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	(*(*Var1[0 /*16*/])[0 /*5*/])[0] = func_1352();
	(*(*Var1[1 /*16*/])[0 /*5*/])[0] = func_1352();
	(*(*Var1[2 /*16*/])[0 /*5*/])[0] = func_1352();
	(*(*Var1[0 /*16*/])[0 /*5*/])[1] = func_1352();
	(*(*Var1[1 /*16*/])[0 /*5*/])[1] = func_1352();
	(*(*Var1[2 /*16*/])[0 /*5*/])[1] = func_1352();
	(*(*Var1[0 /*16*/])[0 /*5*/])[2] = func_1352();
	(*(*Var1[1 /*16*/])[0 /*5*/])[2] = func_1352();
	(*(*Var1[2 /*16*/])[0 /*5*/])[2] = func_1352();
	(*(*Var1[0 /*16*/])[0 /*5*/])[3] = func_1352();
	(*(*Var1[1 /*16*/])[0 /*5*/])[3] = func_1352();
	(*(*Var1[2 /*16*/])[0 /*5*/])[3] = func_1352();
	(*(*Var1[0 /*16*/])[1 /*5*/])[0] = func_1352();
	(*(*Var1[1 /*16*/])[1 /*5*/])[0] = func_1352();
	(*(*Var1[2 /*16*/])[1 /*5*/])[0] = func_1352();
	(*(*Var1[0 /*16*/])[1 /*5*/])[1] = 1155877447;
	(*(*Var1[1 /*16*/])[1 /*5*/])[1] = 1155877447;
	(*(*Var1[2 /*16*/])[1 /*5*/])[1] = 1155877447;
	(*(*Var1[0 /*16*/])[1 /*5*/])[2] = 928165666;
	(*(*Var1[1 /*16*/])[1 /*5*/])[2] = 928165666;
	(*(*Var1[2 /*16*/])[1 /*5*/])[2] = 928165666;
	(*(*Var1[0 /*16*/])[1 /*5*/])[3] = 2048341166;
	(*(*Var1[1 /*16*/])[1 /*5*/])[3] = 2048341166;
	(*(*Var1[2 /*16*/])[1 /*5*/])[3] = 2048341166;
	(*(*Var1[0 /*16*/])[2 /*5*/])[0] = -414377604;
	(*(*Var1[1 /*16*/])[2 /*5*/])[0] = -414377604;
	(*(*Var1[2 /*16*/])[2 /*5*/])[0] = -414377604;
	(*(*Var1[0 /*16*/])[2 /*5*/])[1] = -109593135;
	(*(*Var1[1 /*16*/])[2 /*5*/])[1] = -109593135;
	(*(*Var1[2 /*16*/])[2 /*5*/])[1] = -109593135;
	(*(*Var1[0 /*16*/])[2 /*5*/])[2] = 990134505;
	(*(*Var1[1 /*16*/])[2 /*5*/])[2] = 990134505;
	(*(*Var1[2 /*16*/])[2 /*5*/])[2] = 990134505;
	(*(*Var1[0 /*16*/])[2 /*5*/])[3] = 1279910772;
	(*(*Var1[1 /*16*/])[2 /*5*/])[3] = 1279910772;
	(*(*Var1[2 /*16*/])[2 /*5*/])[3] = 1279910772;
	iVar50 = 0;
	iVar53 = 0;
	while (iVar53 < 3)
	{
		iVar52 = 0;
		while (iVar52 < 3)
		{
			iVar51 = 0;
			while (iVar51 < 4)
			{
				if (*Var1[iVar53 /*16*/])[iVar52 /*5*/][iVar51] != func_1352()
				{
					if ((iVar53 == iVar0 && iVar51 + 1 == func_1570(iVar52)) && uParam1)
					{
						if (STREAMING::_IS_IMAP_ACTIVE((*Var1[iVar53 /*16*/])[iVar52 /*5*/][iVar51]))
						{
							iVar50++;
						}
					}
				}
				iVar51++;
			}
			iVar52++;
		}
		iVar53++;
	}
	if (iVar50 == 2)
	{
		return 1;
	}
	return 0;
}

int func_1511(float fParam0, var uParam1)
{
	int iVar0;
	struct<16> Var1;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	
	if (fParam0 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam0 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	(*(*Var1[0 /*16*/])[0 /*5*/])[0] = func_1352();
	(*(*Var1[1 /*16*/])[0 /*5*/])[0] = func_1352();
	(*(*Var1[2 /*16*/])[0 /*5*/])[0] = func_1352();
	(*(*Var1[0 /*16*/])[0 /*5*/])[1] = 626928579;
	(*(*Var1[1 /*16*/])[0 /*5*/])[1] = 626928579;
	(*(*Var1[2 /*16*/])[0 /*5*/])[1] = 626928579;
	(*(*Var1[0 /*16*/])[0 /*5*/])[2] = 313722477;
	(*(*Var1[1 /*16*/])[0 /*5*/])[2] = 313722477;
	(*(*Var1[2 /*16*/])[0 /*5*/])[2] = 313722477;
	(*(*Var1[0 /*16*/])[0 /*5*/])[3] = 976082270;
	(*(*Var1[1 /*16*/])[0 /*5*/])[3] = 976082270;
	(*(*Var1[2 /*16*/])[0 /*5*/])[3] = 976082270;
	(*(*Var1[0 /*16*/])[1 /*5*/])[0] = func_1352();
	(*(*Var1[1 /*16*/])[1 /*5*/])[0] = func_1352();
	(*(*Var1[2 /*16*/])[1 /*5*/])[0] = func_1352();
	(*(*Var1[0 /*16*/])[1 /*5*/])[1] = 5585502;
	(*(*Var1[1 /*16*/])[1 /*5*/])[1] = 5585502;
	(*(*Var1[2 /*16*/])[1 /*5*/])[1] = 5585502;
	(*(*Var1[0 /*16*/])[1 /*5*/])[2] = -1362716862;
	(*(*Var1[1 /*16*/])[1 /*5*/])[2] = -1362716862;
	(*(*Var1[2 /*16*/])[1 /*5*/])[2] = -1362716862;
	(*(*Var1[0 /*16*/])[1 /*5*/])[3] = 482931525;
	(*(*Var1[1 /*16*/])[1 /*5*/])[3] = 482931525;
	(*(*Var1[2 /*16*/])[1 /*5*/])[3] = 482931525;
	(*(*Var1[0 /*16*/])[2 /*5*/])[0] = -462274808;
	(*(*Var1[1 /*16*/])[2 /*5*/])[0] = -462274808;
	(*(*Var1[2 /*16*/])[2 /*5*/])[0] = -462274808;
	(*(*Var1[0 /*16*/])[2 /*5*/])[1] = -1906732332;
	(*(*Var1[1 /*16*/])[2 /*5*/])[1] = -1906732332;
	(*(*Var1[2 /*16*/])[2 /*5*/])[1] = -1906732332;
	(*(*Var1[0 /*16*/])[2 /*5*/])[2] = -526829;
	(*(*Var1[1 /*16*/])[2 /*5*/])[2] = -526829;
	(*(*Var1[2 /*16*/])[2 /*5*/])[2] = -526829;
	(*(*Var1[0 /*16*/])[2 /*5*/])[3] = -1754422016;
	(*(*Var1[1 /*16*/])[2 /*5*/])[3] = -1754422016;
	(*(*Var1[2 /*16*/])[2 /*5*/])[3] = -1754422016;
	iVar50 = 0;
	iVar53 = 0;
	while (iVar53 < 3)
	{
		iVar52 = 0;
		while (iVar52 < 3)
		{
			iVar51 = 0;
			while (iVar51 < 4)
			{
				if (*Var1[iVar53 /*16*/])[iVar52 /*5*/][iVar51] != func_1352()
				{
					if ((iVar53 == iVar0 && iVar51 + 1 == func_1570(iVar52)) && uParam1)
					{
						if (STREAMING::_IS_IMAP_ACTIVE((*Var1[iVar53 /*16*/])[iVar52 /*5*/][iVar51]))
						{
							iVar50++;
						}
					}
				}
				iVar51++;
			}
			iVar52++;
		}
		iVar53++;
	}
	if (iVar50 == 3)
	{
		return 1;
	}
	return 0;
}

var func_1512(var uParam0)
{
	return uParam0;
}

int func_1513()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[59 /*49*/])->f_42, false) && !func_901(((*Global_1347702)[59 /*49*/])->f_13, 4))
	{
		return 1;
	}
	return 0;
}

int func_1514(int iParam0)
{
	if (Global_1327590->f_10 == 14)
	{
		return 1;
	}
	return 0;
}

int func_1515(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	fVar3 = func_853();
	if (fVar3 < 30f)
	{
		iVar1 = 0;
	}
	else if (fVar3 < 75f)
	{
		iVar1 = 1;
	}
	else
	{
		iVar1 = 2;
	}
	if (bParam2)
	{
		iVar0 = iParam1[iVar1];
	}
	else
	{
		iVar0 = iParam0[iVar1];
	}
	if (STREAMING::_IS_IMAP_ACTIVE(iVar0) == 0)
	{
		STREAMING::_REQUEST_IMAP(iVar0);
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar0 != iParam1[iVar2])
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iParam1[iVar2]))
				{
					STREAMING::_REMOVE_IMAP(iParam1[iVar2]);
				}
			}
			if (iVar0 != iParam0[iVar2])
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iParam0[iVar2]))
				{
					STREAMING::_REMOVE_IMAP(iParam0[iVar2]);
				}
			}
			func_1575(iVar0);
			iVar2++;
		}
	}
	return iVar0;
}

int func_1516()
{
	int iVar0;
	
	if (func_493(&Global_1898437) && func_885(&Global_1898437) == 1)
	{
		iVar0 = func_490(&Global_1898437);
		if ((func_662(iVar0) && SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1835011)[iVar0 /*74*/])->f_22))) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(((*Global_1835011)[iVar0 /*74*/])->f_22))) > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1517()
{
	int iVar0;
	
	if (func_146() == 6)
	{
		return 0;
	}
	if (func_128(((*Global_1347702)[68 /*49*/])->f_15))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == 68)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1518(int iParam0)
{
	switch (iParam0)
	{
		case -2086875988:
		case -2081966149:
		case -2075588078:
		case -2046943672:
		case -2045269112:
		case -2019245895:
		case -2014377075:
		case -2012656841:
		case -2007761031:
		case -2006398858:
		case -1980150291:
		case -1977628089:
		case -1966295439:
		case -1925758912:
		case -1922688829:
		case -1901892087:
		case -1835251821:
		case -1769295812:
		case -1765531164:
		case -1745321414:
		case -1714108174:
		case -1688959031:
		case -1676898583:
		case -1646049752:
		case -1632694866:
		case -1629501717:
		case -1614719852:
		case -1607722277:
		case -1603909164:
		case -1579174863:
		case -1533320518:
		case -1520417507:
		case -1483559144:
		case -1464743433:
		case -1458432563:
		case -1448924971:
		case -1423504183:
		case -1418951751:
		case -1329383517:
		case -1270572406:
		case -1263119823:
		case -1258801034:
		case -1161832176:
		case -1154137714:
		case -1135378761:
		case -1116138991:
		case -1112260815:
		case -1101883765:
		case -1070459848:
		case -1067338663:
		case -1049237750:
		case -1047115350:
		case -1002525623:
		case -944019243:
		case -937140420:
		case -920985758:
		case -823649241:
		case -820854800:
		case -814357706:
		case -792643455:
		case -781994133:
		case -779472377:
		case -756996682:
		case -747792496:
		case -695175124:
		case -670436990:
		case -639059862:
		case joaat("cs_clay"):
		case -572941403:
		case -558131359:
		case -550289621:
		case -538512200:
		case -464684897:
		case -446093729:
		case -373817191:
		case -350169314:
		case -343178443:
		case -272492171:
		case -265719023:
		case -253049070:
		case -229065721:
		case -216561112:
		case -205121720:
		case -167880668:
		case -161553439:
		case -98087368:
		case -77509825:
		case -71527226:
		case -55633154:
		case -46607261:
		case -46389610:
		case -17071680:
		case 4991732:
		case 20251888:
		case 65010948:
		case 68512371:
		case 93760123:
		case 122377164:
		case 184120185:
		case 224310170:
		case 230517792:
		case 236407543:
		case 254009656:
		case 300505615:
		case 316325071:
		case 323324563:
		case 351634388:
		case 382040614:
		case 401817002:
		case 426274298:
		case 430764551:
		case 434730246:
		case 477547053:
		case 482703333:
		case 513427234:
		case 594026681:
		case 624882545:
		case 686051865:
		case 716675958:
		case 755774783:
		case 774211111:
		case 794654164:
		case 823321772:
		case 836525272:
		case 848012614:
		case 852072701:
		case 888681950:
		case 907019741:
		case 972892334:
		case 988668512:
		case 993577366:
		case 1006076574:
		case 1010320580:
		case 1020041649:
		case 1051047356:
		case 1092921608:
		case 1143979484:
		case 1149349599:
		case 1231309423:
		case 1234550949:
		case 1245530084:
		case 1253299569:
		case 1266159496:
		case 1266592839:
		case 1270841555:
		case 1276534479:
		case 1281122482:
		case 1294255258:
		case 1304311224:
		case 1320786287:
		case 1347320453:
		case 1367851675:
		case 1372065533:
		case 1407740785:
		case 1419055257:
		case 1436424114:
		case 1439158431:
		case 1446935015:
		case 1479772615:
		case 1483156731:
		case 1485366395:
		case 1599685341:
		case 1604947233:
		case 1643370744:
		case 1701730764:
		case 1705504999:
		case 1726560673:
		case 1785923813:
		case 1815090590:
		case 1841492722:
		case 1966444740:
		case 1998496121:
		case 1999476738:
		case 2000903921:
		case 2001384088:
		case 2029634351:
		case 2041494024:
		case 2042088799:
		case 2100656433:
		case 2115504616:
		case 2141515026:
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_1519(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_915(iParam0, iParam1))
		{
			if (func_916(iParam0, iParam1))
			{
				if (func_917(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_918(iParam0);
				}
			}
			else
			{
				PED::_0x1902C4CFCC5BE57C(iParam0, iParam1);
				PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
			}
			PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, 1, 1);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

void func_1520(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_0xD710A5007C2AC539(iParam0, -1725579161, 1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_1521(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_0x1902C4CFCC5BE57C(iParam0, 1268180497);
	if (bParam1)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_1522(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 0f);
	}
	else
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 1f);
	}
}

void func_1523(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	vector3 vVar2[24];
	int iVar5;
	var uVar6;
	
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, "Visible", 0);
	uParam1->f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, "Title", 0);
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, "Carried");
	func_1576(uVar0, &(uParam1->f_2));
	iVar5 = 0;
	while (iVar5 < 12)
	{
		StringCopy(&cVar2, "Contribution", 24);
		StringIntConCat(&cVar2, iVar5, 24);
		uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, &cVar2);
		func_1577(uVar1, uParam1->f_4[iVar5 /*4*/]);
		iVar5++;
	}
	uVar6 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, "Total");
	func_1578(uVar6, &(uParam1->f_53));
}

void func_1524(var uParam0, var uParam1)
{
	var uVar0;
	vector3 vVar1[24];
	int iVar4;
	
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, "Visible", 1);
	uParam1->f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, "Title", 0);
	uParam1->f_2 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, "SubTitle", 0);
	uParam1->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, "SketchTexture", 0);
	uParam1->f_4 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, "ShowRestock", 0);
	iVar4 = 0;
	while (iVar4 < 4)
	{
		StringCopy(&cVar1, "Upgrade", 24);
		StringIntConCat(&cVar1, iVar4, 24);
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, &cVar1);
		func_1579(uVar0, uParam1->f_5[iVar4 /*6*/]);
		StringCopy(&cVar1, "Restock", 24);
		StringIntConCat(&cVar1, iVar4, 24);
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, &cVar1);
		func_1580(uVar0, uParam1->f_30[iVar4 /*4*/]);
		iVar4++;
	}
}

void func_1525(var uParam0, var uParam1)
{
	var uVar0;
	
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, "Visible", 0);
	uParam1->f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, "Title", 0);
	uParam1->f_2 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, "Notes", 0);
	uParam1->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, "SketchTexture", 0);
	uParam1->f_5 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, "CrossedOut", 0);
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, "Price");
	uParam1->f_4 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar0, "Price", "");
	uParam1->f_6 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, "CrossedOut", 0);
	uParam1->f_7 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, "Highlighted", 0);
}

void func_1526(bool bParam0)
{
	func_1581(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_0x4CC5F2FC1332577F(121713391);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(121713391);
	}
}

int func_1527(int iParam0)
{
	switch (iParam0)
	{
		case -2045110373:
			return 5;
		
		case 2092390181:
			return 6;
		
		case 695356898:
			return 0;
		
		case 2093317438:
			return 2;
		
		case -145951480:
			return 4;
		
		case -432333475:
			return 1;
		
		case -1327067584:
			return 3;
		
		case -1192044061:
			return 7;
		
		case 1206762561:
			return 8;
		
		default:
			break;
	}
	return -1;
}

int func_1528(int iParam0)
{
	iParam0 = func_736(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_11;
}

int func_1529(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	iVar0 = func_1582(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1894065)[iVar0 /*51*/][iVar2];
			if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iVar4 /*35*/])->f_3))
			{
				if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar4 /*35*/])->f_3, vParam0))
				{
					switch (((*Global_1888801)[iVar4 /*35*/])->f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

int func_1530(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < &Global_1835011)
	{
		if (MISC::GET_HASH_KEY(&(((*Global_1835011)[iVar0 /*74*/])->f_8)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1531(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (MISC::GET_HASH_KEY(&(((*Global_1347702)[iVar0 /*49*/])->f_3)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1532(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return 0;
	}
	return 1;
}

Vector3 func_1533(int iParam0)
{
	return func_1583(iParam0);
}

float func_1534(int iParam0)
{
	switch (iParam0)
	{
		case 17:
			return 50f;
	}
	return 0f;
}

Vector3 func_1535(int iParam0)
{
	vector3 vVar0;
	
	if (!func_491(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_1584(iParam0, &vVar0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_24 = { vVar0 };
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

struct<4> func_1536(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_507(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_962(271701509, func_825(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_962(271701509, func_825(bParam0), 12999093, 0);
}

int func_1537(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_508(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_1538(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_1539(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_1540(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_1541(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 /*2*/]) };
		}
		iVar0 = (iVar0 - 1);
	}
	*(Global_1058888->f_40501.f_1[iParam0 /*2*/]) = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

void func_1542(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

int func_1543(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var3;
	
	Var3 = -961687407;
	if (func_56() == -1)
	{
		Var3 = 1444744190;
	}
	Var3.f_1 = uParam0;
	Var3.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var3);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var3))
	{
		return 0;
	}
	if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var3, -2008906477))
	{
		return 0;
	}
	uVar2 = func_1585(uParam0);
	if (func_1586(iVar0, &iVar1))
	{
		func_1587(iVar1, uVar2);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var3))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var3, -2008906477))
		{
		}
		else if (!func_1586(iVar0, &iVar1))
		{
		}
		else
		{
			func_1587(iVar1, uVar2);
		}
	}
	return 1;
}

int func_1544(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	
	Var1 = -961687407;
	if (func_56() == -1)
	{
		Var1 = 1444744190;
	}
	Var1.f_1 = iParam0;
	Var1.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var1);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		return 0;
	}
	if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var1, -624749060))
	{
		return 0;
	}
	return func_1588(iVar0);
}

int func_1545(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			func_1589(13, iParam1, 0, 0, 0);
		}
		else
		{
			func_1589(13, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_1590(0))
	{
	}
	func_1591(&(Global_1946804->f_1497), iParam0, 1, iParam1, 1, iParam3, 1);
	return 1;
}

int func_1546(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	if (Global_1946804->f_2535.f_1 <= 0)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		Global_1946804->f_2535.f_2 = 0;
		Global_1946804->f_2535.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			*(Global_1946804->f_2535.f_43[iVar0 /*2*/]) = { Var2 };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1946804->f_2535.f_3[iVar1] = 0;
			iVar1++;
		}
		return 1;
	}
	iVar0 = func_1284(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	Global_1946804->f_2535.f_2 = (Global_1946804->f_2535.f_2 - (Global_1946804->f_2535.f_2 && (Global_1946804->f_2535.f_43[iVar0 /*2*/])->f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_1592(iVar1, (Global_1946804->f_2535.f_43[iVar0 /*2*/])->f_1))
		{
			func_1593(iVar1, (Global_1946804->f_2535.f_43[iVar0 /*2*/])->f_1);
		}
		iVar1++;
	}
	Global_1946804->f_2535.f_1 = (Global_1946804->f_2535.f_1 - 1);
	*(Global_1946804->f_2535.f_43[iVar0 /*2*/]) = { *(Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1 /*2*/]) };
	(Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1 /*2*/])->f_1 = 0;
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1 /*2*/] = 0;
	return 1;
}

int func_1547(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			func_1589(14, iParam1, 0, 0, 0);
		}
		else
		{
			func_1589(14, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_1594(0))
	{
	}
	func_1591(&(Global_1946804->f_1497), iParam0, 1, iParam1, 1, iParam3, 1);
	return 1;
}

int func_1548(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1287024003;
		
		case 1:
			return 1062310057;
		
		case 2:
			return 793334521;
		
		case 3:
			return -1434694737;
		
		case 4:
			return 749790628;
		
		case 5:
			return 1878409227;
		
		case 6:
			return -864297994;
		
		case 7:
			return -1542683454;
		
		case 8:
			return -361558012;
		
		case 9:
			return -1113328569;
		
		case 10:
			return 1147740076;
		
		case 23:
			return 1069443176;
		
		case 17:
			return 863139058;
		
		case 18:
			return -1225165750;
		
		case 13:
			return -757131476;
		
		case 14:
			return 969930481;
		
		case 16:
			return -1786335099;
		
		case 19:
			return -63427201;
		
		case 15:
			return -1862061946;
		
		case 20:
			return 644763533;
		
		case 22:
			return 2069410535;
		
		case 11:
			return -1112144297;
		
		case 24:
			return -1319809587;
		
		case 25:
			return 775505860;
		
		case 26:
			return -1600350223;
		
		case 12:
			if ((func_269(((*Global_1835011)[59 /*74*/])->f_1, 1) || func_269(((*Global_1347702)[1 /*49*/])->f_15, 1)) || func_128(((*Global_1347702)[1 /*49*/])->f_15))
			{
				return 481972149;
			}
			else if (func_232(403634348, 1))
			{
				return 826139819;
			}
			return -1667100926;
		
		case 21:
			if (bParam1)
			{
				return -75169463;
			}
			else
			{
				return 261441658;
			}
			break;
	}
	return 0;
}

int func_1549(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 2:
				return 491176353;
			
			case 0:
				return -616621656;
			
			case 1:
				return -1828628461;
			
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 2:
				return 2128795131;
			
			case 0:
				return -974808650;
			
			case 1:
				return 7599255;
			
			case 3:
				return -2032628373;
			
			case 4:
				return -1202199859;
			
			case 5:
				return 119245970;
			
			case 6:
				return -195936553;
			
			case 7:
				return 674858266;
			
			default:
				break;
		}
	}
	return 0;
}

int func_1550(var uParam0)
{
	if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(*uParam0))
	{
		return 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(uParam0->f_4))
	{
		return 0;
	}
	return 1;
}

int func_1551(var uParam0)
{
	if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(*uParam0))
	{
		return 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(uParam0->f_2))
	{
		return 0;
	}
	return 1;
}

void func_1552(int iParam0)
{
	struct<2> Var0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1452(1) < iParam0)
	{
		iParam0 = func_1452(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_1181(1644987397) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_1553(int iParam0, char* sParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_1101(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

int func_1554(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (uParam3->f_62 >= 12)
	{
		return 0;
	}
	if (iParam2 <= 0)
	{
		return 0;
	}
	iVar0 = func_154();
	func_1595(iParam2, bParam4);
	if (iVar0 != func_154())
	{
		uParam3->f_1[uParam3->f_62 /*5*/] = 0;
		(uParam3->f_1[uParam3->f_62 /*5*/])->f_3 = -1;
		(uParam3->f_1[uParam3->f_62 /*5*/])->f_1 = iParam0;
		(uParam3->f_1[uParam3->f_62 /*5*/])->f_2 = iParam1;
		(uParam3->f_1[uParam3->f_62 /*5*/])->f_4 = iParam2;
		uParam3->f_62++;
		if (bParam4)
		{
			if (iParam1 == 0)
			{
				func_1596(iParam2);
			}
			else if (bParam5)
			{
				func_1597(1);
			}
		}
	}
	return 1;
}

void func_1555(var uParam0)
{
	struct<2> Var0;
	
	Var0.f_1 = 12;
	Var0.f_1.f_1.f_1 = -1;
	Var0.f_1.f_1.f_3 = -1;
	Var0.f_1.f_1.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	MISC::_COPY_MEMORY((*uParam0)[0 /*63*/], (*uParam0)[1 /*63*/], 63);
	MISC::_COPY_MEMORY((*uParam0)[1 /*63*/], &Var0, 63);
	(*uParam0)[1 /*63*/] = func_1444((*uParam0)[0 /*63*/]);
}

int func_1556(int iParam0, bool bParam1, int iParam2, var uParam3)
{
	if (uParam3->f_62 >= 12)
	{
		return 0;
	}
	if (iParam2 <= 0)
	{
		return 0;
	}
	uParam3->f_1[uParam3->f_62 /*5*/] = 0;
	MISC::SET_BIT(uParam3->f_1[uParam3->f_62 /*5*/], 0);
	if (bParam1)
	{
		MISC::SET_BIT(uParam3->f_1[uParam3->f_62 /*5*/], 1);
	}
	(uParam3->f_1[uParam3->f_62 /*5*/])->f_3 = iParam0;
	(uParam3->f_1[uParam3->f_62 /*5*/])->f_1 = -1;
	(uParam3->f_1[uParam3->f_62 /*5*/])->f_2 = 0;
	(uParam3->f_1[uParam3->f_62 /*5*/])->f_4 = -iParam2;
	uParam3->f_62++;
	func_1598(iParam2);
	return 1;
}

int func_1557(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::_0x033EE4B89F3AC545(func_507(bParam2), uParam0, iParam1);
}

struct<16> func_1558(var uParam0)
{
	struct<16> Var0;
	
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	return Var0;
}

int func_1559(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1561(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1561(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16))
	{
		func_1561(iVar0, 1);
		return iVar0;
	}
	return -1;
}

int func_1560(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<28> Var16;
	struct<17> Var44;
	struct<16> Var61;
	
	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_1247(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_997(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1599(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1600(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1601(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1602(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1558(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1559(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

void func_1561(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1224226)
	{
		if (&Global_1224226->f_1[iVar0 /*9*/] == iParam0)
		{
			if ((Global_1224226->f_1[iVar0 /*9*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1224226->f_1[iVar0 /*9*/])->f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_1603(iParam0, iParam1);
}

int func_1562(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;
	
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_507(bParam6), &uParam0, uParam4, &Var0))
	{
		return 0;
	}
	if (!func_1247(Var0, uParam5, bParam6, 0))
	{
		return 0;
	}
	return 1;
}

int func_1563(int iParam0)
{
	int iVar0;
	
	if (!func_889(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_508(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

int func_1564(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1604(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1605())
	{
		return func_1604(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1225638->f_21[iParam1])
	{
		return func_1604(&(((*Global_1108178)[iParam1 /*37*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_1565(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1721991356:
			return 2;
		
		case -1439599467:
			return 23;
		
		case -1317052143:
			return 12;
		
		case -1233681761:
			return 19;
		
		case -1148613331:
			return 9;
		
		case -702816767:
			return 3;
		
		case -416908843:
			return 13;
		
		case -273223690:
			return 15;
		
		case -173507739:
			return 6;
		
		case 0:
			return 22;
		
		case 212278652:
			return 14;
		
		case 433385945:
			return 10;
		
		case 603685163:
			return 17;
		
		case 669657108:
			return 0;
		
		case 725623432:
			return 21;
		
		case 821931868:
			return 1;
		
		case 839715153:
			return 7;
		
		case 1420204096:
			return 11;
		
		case 1500834021:
			return 8;
		
		case 1632247697:
			return 18;
		
		case 1679686673:
			return 16;
		
		case 1974067816:
			return 5;
		
		case 2082228755:
			return 20;
		
		case 2137137442:
			return 4;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_1566(int iParam0)
{
	return (Global_1357549->f_1885 == iParam0 && !func_1606(&(Global_1357549->f_1901)));
}

void func_1567(int iParam0)
{
	STREAMING::_REQUEST_IMAP(iParam0);
}

bool func_1568(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_1934765->f_21[iVar1]), iVar2);
}

void func_1569(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case -2000080725:
			if (bParam1)
			{
				*iParam2 = GRAPHICS::_0xFA50F79257745E74(701.0167f, -1247.185f, 43.9899f, 3f, 2, -1, 0);
			}
			else
			{
				GRAPHICS::_0x9CF1836C03FB67A2(iParam2, 0);
			}
			break;
	}
	switch (iParam0)
	{
		case -1563072795:
		case 607574432:
		case 825179479:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-125.9479f, -39.4579f, 94.6035f, 4f);
			break;
		
		case -2016771661:
		case 202127432:
		case 2072112547:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(653.7093f, -1244.043f, 42.6971f, 4f);
			break;
		
		case -782359587:
		case 2728487:
		case 1674800958:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(660.9469f, -1255.986f, 42.7088f, 4f);
			break;
		
		case -1642249622:
		case 1084869405:
		case 1636281938:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(674.1929f, -1266.091f, 42.984f, 4f);
			break;
		
		case -1451784475:
		case 1028224932:
		case 1128417383:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(673.2328f, -1239.627f, 43.1471f, 4f);
			break;
		
		case -1123811713:
		case -546137515:
		case 1679038623:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(658.2036f, -1233.099f, 43.2507f, 4f);
			break;
		
		case -1279618207:
		case -751959361:
		case 1742990618:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(678.267f, -1251.873f, 43.0153f, 4f);
			break;
		
		case -1620486708:
		case -223906810:
		case 163126540:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-118.3392f, -35.8852f, 94.7422f, 4f);
			break;
		
		case -379409079:
		case 1808508475: