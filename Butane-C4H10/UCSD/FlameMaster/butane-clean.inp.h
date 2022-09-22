#ifndef __MAGICFILE__
#define __MAGICFILE__
#define MECHANISM "butane-clean.inp"

typedef enum SpeciesLabel {

	/* Computed species s.. */
	/* Steady-state species ss.. */
	sN2 = 0,
	sAR = 1,
	sHE = 2,
	sH = 3,
	sO2 = 4,
	sOH = 5,
	sO = 6,
	sH2 = 7,
	sH2O = 8,
	sHO2 = 9,
	sH2O2 = 10,
	sCO = 11,
	sCO2 = 12,
	sHCO = 13,
	sCH3 = 14,
	sCH4 = 15,
	sCH2O = 16,
	sTXCH2 = 17,
	sSXCH2 = 18,
	sC2H4 = 19,
	sCH3O = 20,
	sC2H5 = 21,
	sC2H6 = 22,
	sCH = 23,
	sC2H2 = 24,
	sC2H4OOH = 25,
	sOC2H3OOH = 26,
	sC2H3 = 27,
	sCH2CHO = 28,
	sC2H4O = 29,
	sHCCO = 30,
	sCH2CO = 31,
	sC2H = 32,
	sCH2OH = 33,
	sCH3OH = 34,
	sCH3CHO = 35,
	sCH3CO = 36,
	sC2H5OH = 37,
	sCH2CH2OH = 38,
	sCH3CHOH = 39,
	sCH3CH2O = 40,
	sC3H4 = 41,
	sC3H3 = 42,
	sC3H5 = 43,
	sC3H6 = 44,
	sC3H8 = 45,
	sIXC3H7 = 46,
	sNXC3H7 = 47,
	sC3H6OOH = 48,
	sOC3H5OOH = 49,
	sC4H10 = 50,
	sPC4H9 = 51,
	sSC4H9 = 52,
	sC4H8 = 53,
	sSC4H9O2 = 54,
	sC4H8OOH1X3 = 55,
	sNC4KET13 = 56,
	sCHCHO = 57,
	sEnd
} SpeciesLabel;


typedef enum ReactionLabel {
	/* Reactions */
	r1f = 0,
	r1b = 1,
	r2f = 2,
	r2b = 3,
	r3f = 4,
	r3b = 5,
	r4f = 6,
	r4b = 7,
	r5f = 8,
	r5b = 9,
	r6f = 10,
	r6b = 11,
	r7f = 12,
	r7b = 13,
	r8f = 14,
	r8b = 15,
	r9f = 16,
	r9b = 17,
	r10f = 18,
	r10b = 19,
	r11f = 20,
	r11b = 21,
	r12f = 22,
	r12b = 23,
	r13f = 24,
	r13b = 25,
	r14f = 26,
	r14b = 27,
	r15f = 28,
	r15b = 29,
	r16f = 30,
	r16b = 31,
	r17f = 32,
	r17b = 33,
	r18f = 34,
	r18b = 35,
	r19f = 36,
	r19b = 37,
	r20f = 38,
	r20b = 39,
	r21f = 40,
	r21b = 41,
	r22f = 42,
	r22b = 43,
	r23f = 44,
	r23b = 45,
	r24f = 46,
	r24b = 47,
	r25f = 48,
	r25b = 49,
	r26f = 50,
	r26b = 51,
	r27f = 52,
	r27b = 53,
	r28f = 54,
	r28b = 55,
	r29f = 56,
	r29b = 57,
	r30f = 58,
	r30b = 59,
	r31f = 60,
	r31b = 61,
	r32f = 62,
	r32b = 63,
	r33f = 64,
	r33b = 65,
	r34f = 66,
	r34b = 67,
	r35f = 68,
	r35b = 69,
	r36f = 70,
	r36b = 71,
	r37f = 72,
	r37b = 73,
	r38f = 74,
	r38b = 75,
	r39f = 76,
	r39b = 77,
	r40f = 78,
	r40b = 79,
	r41f = 80,
	r41b = 81,
	r42f = 82,
	r42b = 83,
	r43f = 84,
	r43b = 85,
	r44f = 86,
	r44b = 87,
	r45f = 88,
	r45b = 89,
	r46f = 90,
	r46b = 91,
	r47f = 92,
	r47b = 93,
	r48f = 94,
	r48b = 95,
	r49f = 96,
	r49b = 97,
	r50f = 98,
	r50b = 99,
	r51f = 100,
	r51b = 101,
	r52f = 102,
	r52b = 103,
	r53f = 104,
	r53b = 105,
	r54f = 106,
	r54b = 107,
	r55f = 108,
	r55b = 109,
	r56f = 110,
	r56b = 111,
	r57f = 112,
	r57b = 113,
	r58f = 114,
	r58b = 115,
	r59f = 116,
	r59b = 117,
	r60f = 118,
	r60b = 119,
	r61f = 120,
	r61b = 121,
	r62f = 122,
	r62b = 123,
	r63f = 124,
	r63b = 125,
	r64f = 126,
	r64b = 127,
	r65f = 128,
	r65b = 129,
	r66f = 130,
	r66b = 131,
	r67f = 132,
	r67b = 133,
	r68f = 134,
	r68b = 135,
	r69f = 136,
	r69b = 137,
	r70f = 138,
	r70b = 139,
	r71f = 140,
	r71b = 141,
	r72f = 142,
	r72b = 143,
	r73f = 144,
	r73b = 145,
	r74f = 146,
	r74b = 147,
	r75f = 148,
	r75b = 149,
	r76f = 150,
	r76b = 151,
	r77f = 152,
	r77b = 153,
	r78f = 154,
	r78b = 155,
	r79f = 156,
	r79b = 157,
	r80f = 158,
	r80b = 159,
	r81f = 160,
	r81b = 161,
	r82f = 162,
	r82b = 163,
	r83f = 164,
	r83b = 165,
	r84f = 166,
	r84b = 167,
	r85f = 168,
	r85b = 169,
	r86f = 170,
	r86b = 171,
	r87f = 172,
	r87b = 173,
	r88f = 174,
	r88b = 175,
	r89f = 176,
	r89b = 177,
	r90f = 178,
	r90b = 179,
	r91f = 180,
	r91b = 181,
	r92f = 182,
	r92b = 183,
	r93f = 184,
	r93b = 185,
	r94f = 186,
	r94b = 187,
	r95f = 188,
	r95b = 189,
	r96f = 190,
	r96b = 191,
	r97f = 192,
	r97b = 193,
	r98f = 194,
	r98b = 195,
	r99f = 196,
	r99b = 197,
	r100f = 198,
	r100b = 199,
	r101f = 200,
	r101b = 201,
	r102f = 202,
	r102b = 203,
	r103f = 204,
	r103b = 205,
	r104f = 206,
	r104b = 207,
	r105f = 208,
	r105b = 209,
	r106f = 210,
	r106b = 211,
	r107f = 212,
	r107b = 213,
	r108f = 214,
	r108b = 215,
	r109f = 216,
	r109b = 217,
	r110f = 218,
	r110b = 219,
	r111f = 220,
	r111b = 221,
	r112f = 222,
	r112b = 223,
	r113f = 224,
	r113b = 225,
	r114f = 226,
	r114b = 227,
	r115f = 228,
	r115b = 229,
	r116f = 230,
	r116b = 231,
	r117f = 232,
	r117b = 233,
	r118f = 234,
	r118b = 235,
	r119f = 236,
	r119b = 237,
	r120f = 238,
	r120b = 239,
	r121f = 240,
	r121b = 241,
	r122f = 242,
	r122b = 243,
	r123f = 244,
	r123b = 245,
	r124f = 246,
	r124b = 247,
	r125f = 248,
	r125b = 249,
	r126f = 250,
	r126b = 251,
	r127f = 252,
	r127b = 253,
	r128f = 254,
	r128b = 255,
	r129f = 256,
	r129b = 257,
	r130f = 258,
	r130b = 259,
	r131f = 260,
	r131b = 261,
	r132f = 262,
	r132b = 263,
	r133f = 264,
	r133b = 265,
	r134f = 266,
	r134b = 267,
	r135f = 268,
	r135b = 269,
	r136f = 270,
	r136b = 271,
	r137f = 272,
	r137b = 273,
	r138f = 274,
	r138b = 275,
	r139f = 276,
	r139b = 277,
	r140f = 278,
	r140b = 279,
	r141f = 280,
	r141b = 281,
	r142f = 282,
	r142b = 283,
	r143f = 284,
	r143b = 285,
	r144f = 286,
	r144b = 287,
	r145f = 288,
	r145b = 289,
	r146f = 290,
	r146b = 291,
	r147f = 292,
	r147b = 293,
	r148f = 294,
	r148b = 295,
	r149f = 296,
	r149b = 297,
	r150f = 298,
	r150b = 299,
	r151f = 300,
	r151b = 301,
	r152f = 302,
	r152b = 303,
	r153f = 304,
	r153b = 305,
	r154f = 306,
	r154b = 307,
	r155f = 308,
	r155b = 309,
	r156f = 310,
	r156b = 311,
	r157f = 312,
	r157b = 313,
	r158f = 314,
	r158b = 315,
	r159f = 316,
	r159b = 317,
	r160f = 318,
	r160b = 319,
	r161f = 320,
	r161b = 321,
	r162f = 322,
	r162b = 323,
	r163f = 324,
	r163b = 325,
	r164f = 326,
	r164b = 327,
	r165f = 328,
	r165b = 329,
	r166f = 330,
	r166b = 331,
	r167f = 332,
	r167b = 333,
	r168f = 334,
	r168b = 335,
	r169f = 336,
	r169b = 337,
	r170f = 338,
	r170b = 339,
	r171f = 340,
	r171b = 341,
	r172f = 342,
	r172b = 343,
	r173f = 344,
	r173b = 345,
	r174f = 346,
	r174b = 347,
	r175f = 348,
	r175b = 349,
	r176f = 350,
	r176b = 351,
	r177f = 352,
	r177b = 353,
	r178f = 354,
	r178b = 355,
	r179f = 356,
	r179b = 357,
	r180f = 358,
	r180b = 359,
	r181f = 360,
	r181b = 361,
	r182f = 362,
	r182b = 363,
	r183f = 364,
	r183b = 365,
	r184f = 366,
	r184b = 367,
	r185f = 368,
	r185b = 369,
	r186f = 370,
	r186b = 371,
	r187f = 372,
	r187b = 373,
	r188f = 374,
	r188b = 375,
	r189f = 376,
	r189b = 377,
	r190f = 378,
	r190b = 379,
	r191f = 380,
	r191b = 381,
	r192f = 382,
	r192b = 383,
	r193f = 384,
	r193b = 385,
	r194f = 386,
	r194b = 387,
	r195f = 388,
	r195b = 389,
	r196f = 390,
	r196b = 391,
	r197f = 392,
	r197b = 393,
	r198f = 394,
	r198b = 395,
	r199f = 396,
	r199b = 397,
	r200f = 398,
	r200b = 399,
	r201f = 400,
	r201b = 401,
	r202f = 402,
	r202b = 403,
	r203f = 404,
	r203b = 405,
	r204f = 406,
	r204b = 407,
	r205f = 408,
	r205b = 409,
	r206f = 410,
	r206b = 411,
	r207f = 412,
	r207b = 413,
	r208f = 414,
	r208b = 415,
	r209f = 416,
	r209b = 417,
	r210f = 418,
	r210b = 419,
	r211f = 420,
	r211b = 421,
	r212f = 422,
	r212b = 423,
	r213f = 424,
	r213b = 425,
	r214f = 426,
	r214b = 427,
	r215f = 428,
	r215b = 429,
	r216f = 430,
	r216b = 431,
	r217f = 432,
	r217b = 433,
	r218f = 434,
	r218b = 435,
	r219f = 436,
	r219b = 437,
	r220f = 438,
	r220b = 439,
	r221f = 440,
	r221b = 441,
	r222f = 442,
	r222b = 443,
	r223f = 444,
	r223b = 445,
	r224f = 446,
	r224b = 447,
	r225f = 448,
	r225b = 449,
	r226f = 450,
	r226b = 451,
	r227f = 452,
	r227b = 453,
	r228f = 454,
	r228b = 455,
	r229f = 456,
	r229b = 457,
	r230f = 458,
	r230b = 459,
	r231f = 460,
	r231b = 461,
	r232f = 462,
	r232b = 463,
	r233f = 464,
	r233b = 465,
	r234f = 466,
	r234b = 467,
	r235f = 468,
	r235b = 469,
	r236f = 470,
	r236b = 471,
	r237f = 472,
	r237b = 473,
	r238f = 474,
	r238b = 475,
	r239f = 476,
	r239b = 477,
	r240f = 478,
	r240b = 479,
	r241f = 480,
	r241b = 481,
	r242f = 482,
	r242b = 483,
	r243f = 484,
	r243b = 485,
	r244f = 486,
	r244b = 487,
	r245f = 488,
	r245b = 489,
	r246f = 490,
	r246b = 491,
	r247f = 492,
	r247b = 493,
	r248f = 494,
	r248b = 495,
	r249f = 496,
	r249b = 497,
	r250f = 498,
	r250b = 499,
	r251f = 500,
	r251b = 501,
	r252f = 502,
	r252b = 503,
	r253f = 504,
	r253b = 505,
	r254f = 506,
	r254b = 507,
	r255f = 508,
	r255b = 509,
	r256f = 510,
	r256b = 511,
	r257f = 512,
	r257b = 513,
	r258f = 514,
	r258b = 515,
	r259f = 516,
	r259b = 517,
	r260f = 518,
	r260b = 519,
	r261f = 520,
	r261b = 521,
	r262f = 522,
	r262b = 523,
	r263f = 524,
	r263b = 525,
	r264f = 526,
	r264b = 527,
	r265f = 528,
	r265b = 529,
	r266f = 530,
	r266b = 531,
	r267f = 532,
	r267b = 533,
	r268f = 534,
	r268b = 535,
	r269f = 536,
	r269b = 537,
	r270f = 538,
	r270b = 539,
	/* PAHReactions */
	/* SootReactions */
	rEnd
} ReactionLabel;


typedef enum TirdBodyLabel {

	mM1 = 0,
	mM2 = 1,
	mM3 = 2,
	mM4 = 3,
	mM5 = 4,
	mM6 = 5,
	mM7 = 6,
	mM8 = 7,
	mM9 = 8,
	mM10 = 9,
	mM11 = 10,
	mM12 = 11,
	mM13 = 12,
	mM14 = 13,
	mM15 = 14,
	mM16 = 15,
	mM17 = 16,
	mM18 = 17,
	mM19 = 18,
	mM20 = 19,
	mM21 = 20,
	mM22 = 21,
	mM23 = 22,
	mM24 = 23,
	mM25 = 24,
	mM26 = 25,
	mM27 = 26,
	mM28 = 27,
	mM29 = 28,
	mM30 = 29,
	mM31 = 30,
	mM32 = 31,
	mM33 = 32,
	mM34 = 33,
	mM35 = 34,
	mM36 = 35,
	mM37 = 36,
	mEnd
} TirdBodyLabel;

#endif
