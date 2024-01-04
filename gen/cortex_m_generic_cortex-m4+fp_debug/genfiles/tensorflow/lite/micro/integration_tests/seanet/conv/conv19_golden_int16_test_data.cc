#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/conv/conv19_golden_int16_test_data.h"

const unsigned int g_conv19_golden_int16_test_data_size = 2560;
alignas(16) const int16_t g_conv19_golden_int16_test_data[] = {11490,32767,20659,4612,6077,21710,5902,32767,2181,32767,-14389,1332,32767,32767,-6976,8293,11288,-32768,19511,-2310,-32768,-5501,20781,-18138,32767,32767,32767,-32155,-32480,32767,3995,32767,14851,-32768,3320,406,19499,-6671,23481,2826,12755,15209,32767,-27375,-29086,-19778,-22326,32767,-25630,-23690,-26772,9331,-32768,20609,-11001,-32768,-3645,-32768,-32768,-29844,-23081,-32768,-32768,-32768,-32768,614,-13565,-32768,-16499,11439,14961,-32768,-22770,4722,-3250,-32768,32767,-32768,-32768,-32768,10994,32767,32767,7804,32767,20058,21121,31380,11311,-30300,16394,-18810,-32768,32767,14934,32767,968,32767,12854,29563,32767,32767,-15722,32767,-9486,25786,-7545,-28537,32767,30998,-3057,23378,32767,19826,26590,2291,32767,32767,23582,32767,20992,-16170,32767,-17832,-20018,-134,27649,1250,12373,-27137,-4000,10934,-32768,-30900,7709,-24677,4018,-32768,-32768,32767,-31543,-16424,3105,-19978,-17345,-32768,-27494,890,14702,-32768,3546,-32768,7099,7419,-32768,-15572,-32768,-338,-23936,-32768,-25520,29219,-32768,689,32767,-6866,-32768,-32768,27371,-32768,-32768,-32768,13570,-28821,-30378,29458,28080,-32768,30128,-11892,-32768,32767,32767,32767,-13197,-2840,6652,32767,-20456,9003,-6408,32767,17593,20566,9678,10655,-2782,-3237,3254,27279,32767,32767,32767,-5302,28608,32767,32767,32767,-1374,-32768,24937,32767,-8408,13007,-22124,32767,10302,32767,26106,6769,-32768,32767,-32768,27371,12562,32744,-6841,32767,11163,32767,-11035,32767,9956,32767,32767,-32768,-32768,-17915,3408,32767,31701,-2692,-5486,12617,-1237,-4251,32767,32767,8668,-14508,20885,19781,32767,-32768,19325,-32768,-2978,32767,-1678,22929,32767,-11365,-22002,-32768,18119,-32768,-32768,-28095,18198,-32768,374,5828,-26047,-32768,4192,9547,5834,-31023,1070,-32768,11578,-17119,32767,4507,5918,-5671,12831,-32698,18754,32767,389,27978,32767,-398,-15789,15079,23007,32767,31096,32767,15600,-6335,5389,-15186,9441,-18205,-14164,-32768,10139,31912,-20111,32767,19510,-8312,18773,8140,-32768,20912,7728,29797,-5945,32767,-8500,32767,15932,32767,-32768,32767,3898,-18761,3325,3393,32767,22684,-18629,-16955,-31,4041,32767,-32768,-32768,-32768,-18390,-32768,-18471,-32768,-32768,30128,-28404,8697,-2584,-25312,-29086,-10194,-19108,-32768,-32768,-22428,-19269,-11006,10231,2865,29218,-17530,-32768,-10225,-5247,-16992,32767,-32768,20445,2857,-27073,-32768,-18761,32767,22469,-32768,-28111,-12014,-32768,-8759,32767,32767,-31483,-136,27061,-32768,31518,-32768,769,-1736,18060,-6529,32767,-28780,-3133,-24337,-5338,32767,-32768,-32768,-32768,-11998,-32768,-3757,10296,-32768,-20988,-32768,-23438,6082,2981,8731,-279,-12469,27716,-32768,-6460,-32768,-25535,-32768,-11905,11470,16184,32767,31860,28146,5204,32767,32767,32767,-2501,-8797,32767,7662,-32768,-32768,-29725,32767,13870,-32768,-19207,19691,5551,20376,25615,32767,1664,-133,-7145,11257,32767,8099,8811,9172,-1951,32483,32767,-7711,32767,32767,32767,-6608,32767,32767,22002,12671,-32768,20340,-17929,32767,24293,32767,1349,24761,-25713,32767,19401,-11785,-15917,-32768,28437,18608,32767,-7152,1916,-11759,-15947,-32768,-15809,-32768,23239,-32768,-32768,-2450,26926,28758,4785,12841,-32232,29489,17497,2616,-413,-12359,-9985,32767,16804,16107,30870,4234,32767,32767,9471,10653,380,-16004,-6430,16613,32767,-19165,8448,4263,7489,26938,7007,-22520,3837,-17587,-4374,34,-8044,32767,-7812,32767,-15882,413,14576,4406,-15470,17454,7637,-32768,-1833,32767,-697,-32768,-24699,24670,29283,-32768,9020,-29263,-27748,-32768,22921,-26865,-32768,32767,14447,-32768,32767,9518,-16951,-12845,32767,12315,10708,-32768,-29336,12946,-32768,-32768,9793,-31715,6222,-31527,-28728,-32768,-32768,-27995,-4323,-11782,-1211,-32768,-28139,-26105,-22086,30284,32767,32767,-16198,-32768,26839,-32768,-32768,-16411,8973,31884,-32401,-32768,-11506,-19133,-32768,-32768,4006,-32768,-7400,-4058,32767,-19019,-20647,-32768,-32768,-32768,-32768,-4204,-30258,-32768,-27667,-9623,-8126,-32768,-17601,18110,5718,-13310,-27816,-32768,-17619,1918,-12795,-32768,-2161,-32768,-32768,-32768,-28750,-32768,-30868,9780,-18889,32767,-32768,31347,2,-32768,-19163,7296,-32768,-18934,3239,-32768,6066,-32768,14240,32767,21732,32767,32767,32767,-4076,-21751,-11354,-19677,32767,3519,32767,-32768,8140,-32768,18032,32767,7485,-9233,14915,26198,-28883,-60,-26054,-32768,-21244,24508,-4336,-32768,-32768,-20022,7964,32767,25965,23047,-28092,-14025,32767,21232,2561,-2993,32767,-24209,32767,20403,32767,32767,-283,-32768,13150,3566,10727,-30576,-32768,-20096,24015,32767,19769,-7523,-1891,6133,30410,32767,30995,32767,12627,139,-32768,25340,2037,32767,7267,-32768,-24246,21022,-28611,13811,32767,32767,-27000,32767,12415,22122,899,21181,32767,32767,-12614,32767,32767,32767,-21207,8028,4694,5514,-27809,32767,-31401,24004,32767,-23566,8002,-32768,10261,10105,32767,-32768,-7282,13588,18750,12989,-26915,-32768,-23647,-32768,-32768,21873,-25487,32767,-9415,-32768,-25103,32767,-32768,-28330,-21831,-9964,13877,-32768,-32768,-21207,-25834,-10981,13708,16670,-32768,-20429,-30398,-18582,-25368,-12868,-15647,-32768,-863,-32768,-31940,2873,-32768,-7400,12033,-32768,12984,16206,-32768,18385,32767,6181,17309,-14267,8716,32767,32767,16700,14348,12011,32767,-18280,16729,32767,-3190,-21769,11857,32767,-8478,32767,7083,32767,-8650,28978,16444,32767,-27409,8882,3062,-20177,-696,-20320,-53,3561,-28410,-21731,-12770,23616,22125,5929,10834,11337,32767,-23412,2089,32767,-29541,-8692,13971,-32768,-9158,-32768,13949,32767,-32768,32767,-11942,32767,9809,32767,4113,10147,-20641,-17508,32767,32767,-12266,32767,8795,-6786,7065,-32768,-32768,32767,-17247,32767,-32768,-32768,9105,-32768,-24831,2293,32767,-32768,-7543,-32768,-509,-32768,-32768,-32768,-5241,-16082,-2479,-32768,15436,-2467,-31677,11805,5687,-32768,521,-32768,1947,3161,-15672,-8348,17975,-32768,-10527,32767,-22827,-28229,-32768,-32768,-32768,-28265,17011,22611,32767,18233,3078,32767,22585,32767,-32768,-3454,7195,-32768,-13576,4466,-25728,3620,-5490,32767,32767,-20187,-1790,-32768,-32768,-12739,-6693,-32768,-32768,-25215,-32768,-7413,-16789,7538,-18994,-32768,-15863,7023,32767,13789,16245,-32768,12085,4178,24503,-32768,7818,5472,-32223,-32768,9162,31715,-32739,21264,32767,32767,3746,32767,-6764,20965,23614,-505,32767,-12562,12449,-2580,9385,32767,29343,12091,-11409,32767,20759,-8828,19555,-32768,670,2647,32767,-32768,-19575,-32768,-1381,25926,-29942,-3918,-17930,-32768,-6591,-32768,-25242,-9693,-12890,-3711,23252,-10859,-5779,-32768,-11772,-32768,11170,17820,32767,6774,32767,-32768,-2159,-32768,-32768,4067,-32290,3939,-6642,-32768,-12492,32767,-8186,-32768,26457,10910,-24002,-32768,8080,-17476,-9164,28710,32767,-24677,25704,-32768,9737,32767,31981,32767,-2112,-22138,16950,-32768,-7800,32376,11735,32767,32767,32767,-5155,32767,4894,11342,15643,12612,27587,1600,3657,32767,-8151,-32768,8414,6843,19941,10198,32767,32767,11228,-29095,2267,6465,-32768,-32768,32767,32767,-17250,-8478,7628,-9923,9783,32767,31592,10758,-21585,-32768,18539,-32768,7865,6764,10936,32767,2699,-32768,32767,24918,11492,32767,15385,32767,-163,32767,32767,32767,-18599,-27464,-18519,-32768,-10826,32767,-23507,25097,32767,6855,-32768,-4502,-14161,-30733,-25626,-18235,10933,-32768,15411,32767,6303,-4381,-25752,-2370,-22360,14321,9553,-12820,18593,-32768,31795,18437,-32768,-5963,9422,-32768,27562,15984,-32768,15366,-14411,-32768,-13179,-27546,9836,-22364,-32768,9451,22383,-32768,32767,-32768,-16418,-13617,-29880,31698,14349,-32768,4466,-32768,-17380,-32768,-32768,20735,26709,-4679,-21791,-32768,-29972,32767,20094,12652,17866,-32768,-32768,-32768,-8090,1675,-9329,-32768,-13932,-32768,-29061,-32768,15383,-32768,16333,-24882,-32768,8446,-25320,32767,13975,-32768,-9730,17234,-32768,-15854,-19971,32767,24542,32351,-21381,23319,-32011,-32768,-8359,32767,-23561,32767,-13938,29022,-32768,3826,-32768,14357,-18699,-30772,-3438,7360,32767,-32768,14838,-12083,-8907,42,-8010,-9894,-5315,-32768,-16752,-26398,13984,7132,-22227,32767,8161,-2942,17548,-10607,-5522,-32768,18338,-6098,10032,24736,2906,-32768,3609,-32768,-5120,-24902,-26367,-26814,-12267,-32768,11638,32767,32767,32767,-20155,32767,32767,-15991,24998,-32768,-4803,20089,-22944,-31643,-3377,15586,-9178,32767,-28740,30764,-23812,18137,-8288,32767,-22375,-20591,-32768,19198,19896,-1788,6442,29734,4438,32767,27691,-209,1281,9175,32767,32767,11441,-32768,23567,18670,32767,25294,1894,-32768,-4898,-7885,-687,-31099,32767,-20124,-27769,-32768,2072,-32768,-1853,-32768,-16715,-22650,3391,-13283,4205,-32768,-3267,514,-32768,4529,-12477,-32768,-18427,-32768,2870,-32768,-32768,-807,2378,32767,4937,-32768,9568,5652,23642,21019,28618,32767,32767,32767,25054,32767,-19816,14297,32767,32767,-32768,32767,-15587,3300,32767,32767,23429,-32768,1892,16219,32767,-4755,29746,10387,-32768,-32768,14616,13726,32767,-136,27700,21282,-20495,-11159,6222,18846,-17921,-32768,-18179,27110,-32768,32767,-17854,-32768,32767,-30256,-32768,-32768,-30422,-8313,-4777,32767,21396,-6582,32767,-32768,-11792,26333,9033,28941,5174,17554,-32768,129,-15803,-3726,-32768,32767,-32768,5742,18473,13800,-32768,-19886,9642,32767,18989,-11292,32767,-13943,-21792,32767,17635,-30079,11935,-3041,32767,-24860,22422,-32768,2483,32767,28399,-20478,7294,32767,-28416,29222,1586,32767,30462,32392,32767,32767,-32768,32767,10809,32767,32767,-580,32767,20024,-13955,32767,18878,32767,9401,-21001,3108,-1182,-8651,277,32099,32767,-3245,23204,-32768,-32768,32767,31389,-5106,32767,-20538,18206,32767,32767,13088,-27890,26896,32767,32767,32767,32767,-32768,32767,-867,25771,32767,6153,-4087,32767,32767,10417,19607,11203,32767,-13903,9580,-32768,17557,-24940,11654,-25293,-32768,-5511,-8064,-152,-29683,3388,-32768,9191,30811,793,32767,-6370,32767,12428,-32768,-6274,-32768,-32768,-15837,19933,-8833,-14317,25305,-32768,-32768,-32768,-25902,32767,18121,-20811,-22961,6483,-32768,-32768,-193,-15556,-32768,32767,6957,7376,32767,14759,27807,32767,32767,32767,32767,-21392,32206,32767,28898,32767,31548,23293,-32768,32767,32767,-32768,32767,32767,-3918,-11629,343,-32768,32767,-8598,5277,5851,18675,-8633,-32768,12617,32767,32767,-2868,32767,23440,-23177,32767,32767,32767,6446,-1084,32767,7286,15811,-6245,12007,-28199,-2287,-390,-11208,-32768,-12385,14179,-26427,-32768,-32768,17442,1925,529,-2513,-32768,-16877,-32768,1754,-27131,32767,-32768,32767,-32768,-4266,-7377,-32768,-32768,32767,-32768,-1349,-32768,14119,32767,20275,32303,32767,32767,32767,-30568,2842,32767,26699,20337,2008,-16220,25868,-18494,15378,28140,18320,2600,32767,-32768,-9761,-24459,32767,32767,-1900,-6499,-32768,-30339,20557,-32768,-19062,-32768,-32768,-10954,-16295,-11277,-32768,-32768,32767,-17978,-32768,12944,-32768,-8583,-21111,32767,-32768,-6776,-32768,-32768,6239,2763,-19446,32767,-487,7044,32767,15212,-32768,-25551,-30520,32767,-32768,15310,13598,-89,32767,-32768,-32768,-32768,-4657,32767,-32768,28944,32767,-32768,-32768,-3051,-2053,32767,-11547,-32768,-7828,32767,-26320,30598,2886,-32768,32767,32767,-32768,-27620,-2020,32767,-20436,32767,-15767,-5752,32767,32767,32767,-3913,-4054,-28256,-1554,5821,27509,-31964,5373,-32768,1960,-32768,32767,-32768,-20700,8183,32767,2629,-29287,-32768,-32768,-32768,11199,3091,-32768,-32768,-16862,-32768,-4395,-14808,-1067,-32768,-24548,-32768,32767,32767,4727,-2583,-29557,-32768,10088,6665,-11190,32767,-17178,32307,18125,32767,-14068,32767,-11706,-12958,26973,5070,-6323,-17977,26429,32767,18448,-32768,-32768,11094,859,-32768,31768,32767,32767,-22657,29430,23534,17520,32767,32767,-24423,6163,-32768,4264,19511,-6396,-2369,16867,-32768,-5929,25141,7584,-12474,32767,-6950,-23525,-32768,32767,-32768,20591,-13141,-32768,-27709,21125,4768,-24543,32767,-13416,32767,32767,9708,-26256,-32768,352,32767,21697,32485,25514,-32768,-22817,-32768,13903,26902,-32768,-19794,-2949,-32768,4661,-8444,32767,-32768,-6015,-8504,-32768,-32768,30506,6429,-10045,30798,23723,4599,-19081,-2206,-4804,32767,-22651,-32768,-17578,16805,-32768,-32768,-17517,-32768,-3586,32767,3807,-12215,-32382,321,-32768,7946,18117,-32768,-2189,-22723,32767,-14447,-95,1518,5341,-32768,25552,-32768,-32768,-15521,28682,32767,15468,6451,-26892,10613,8823,-20774,-18656,-8868,15558,5004,32767,32767,26101,32767,-32768,32767,9923,-17005,25823,-18351,21934,32767,15857,32767,6298,5969,-32768,-5026,11521,28686,-3483,32767,4243,-4461,-8949,32767,-13606,22406,32767,32767,-9727,-32768,32767,-29830,16821,-30395,32767,25187,-30483,21882,15309,32767,10050,32767,-645,7361,5369,32767,-5753,10819,24031,32767,-6441,32767,544,-14845,32767,18646,-14922,-1601,32767,32767,2472,-16813,-14298,-769,-25287,32767,32767,32767,-16890,-32768,31643,4854,-28241,-32768,13143,-32768,18051,32767,3469,11823,11520,4627,-2217,32767,32767,16,4654,32767,12606,32767,16163,32767,25921,32767,32767,17562,32767,32767,32767,32767,32767,20310,32767,32767,17885,19003,32767,32767,15758,-30090,15384,32767,-2071,-22592,32767,-32768,2431,-32768,-26016,-32768,-21723,-32768,-32768,-32768,-23993,10208,5908,-32768,-32768,-7242,1905,-32768,2602,32767,8957,32767,4932,6594,-25392,32767,2419,32767,32767,21018,-8751,-8485,13164,5852,15536,-32768,-9093,11936,32767,-12700,-8959,32767,-8018,12603,3726,-32768,32767,526,-3619,32767,-9271,-6498,-8866,32767,32767,-32768,32767,-32768,22848,32767,-5442,-5630,32767,-15656,32399,-32768,16304,161,22130,18272,26366,-32768,32767,-32768,10868,32767,-32768,32767,32767,3717,-6736,-32768,7806,-32768,-32768,32767,-20193,8759,12496,32767,-24359,32767,-12576,-21963,32767,5102,-8219,-32768,12747,32767,32767,32767,32767,-30475,-27899,-32179,28630,-24239,32767,-4069,-15162,-25238,4297,22341,916,32767,-32768,-20373,-32768,-28462,-25758,-32768,3777,-32768,-7101,2850,-32768,-25230,-24862,-32768,-29430,-25842,-32768,-21651,-32768,-32768,-32768,-32768,-4406,14847,-19563,-32768,-7280,-23784,-21477,13651,15911,9541,2331,32767,-19640,-32768,25417,-4831,-32768,32767,29922,26106,23360,-32768,1294,-32768,11909,25090,-28499,8662,-32768,-26184,8756,-13038,-6113,32767,2371,32767,-12939,-17657,-32768,-6916,-20972,-22183,-7682,-32768,-32768,-895,-11420,-30886,-24081,-32768,-32768,-32768,-3021,-32768,-32768,-32768,-17957,-32768,10469,-17365,-10863,-32768,-32768,-32768,-15886,-32768,-17224,-32768,-3716,-11302,1396,-32768,-1743,32141,-32768,-32768,-32768,-25923,-32768,32767,-8142,-32768,203,-9077,-15720,32767,-3492,-270,13275,-32768,6063,-30780,-32768,-32768,3904,9781,-27188,14433,-20478,-32768,-21003,-32768,1924,-19956,19715,-32768,-26784,32767,-32768,12410,-13792,13283,11568,-32768,-21824,-14517,32767,-6505,1899,14859,-1786,-32768,9879,-32768,-32768,-32768,32767,-32768,-18182,-32768,-32768,-7691,-11616,32767,32767,-32768,20750,-18006,-16479,-32768,1553,32767,-14000,21483,21261,-32768,-2439,-26198,-17053,32767,19192,32767,-32768,31651,16208,17256,-17294,-16005,19287,-32768,-13419,-14041,-4585,-2984,32767,-32768,-31453,-32768,-32768,-32768,-13730,-13868,14491,32767,8535,15713,-19802,-32768,-19780,-24287,-32768,-24176,-5005,32767,-6398,32767,19629,23376,18599,32767,6254,32767,8378,32767,32767,-8844,-26104,-32768,-32768,-18538,5607,-8675,1120,-22013,-32768,-23944,-17302,-22902,-10337,32767,-32768,-30173,-13246,12435,-979,-13273,-32768,32767,-22912,958,-13176,-3581,799,-32768,12518,32767,10970,18988,16733,26044,-23239,-10584,-948,32767,18877,20008,22660,32767,-32768,32767,-5378,25955,11532,-11953,-22545,5364,-24017,29426,-28755,20327,-32768,-27866,19173,6273,-32768,32767,9074,-28057,-11417,8149,14312,31438,9551,32767,23011,7923,-31912,10054,12196,10305,13768,32767,3358,-32768,11718,-13938,31856,-26099,8921,-32768,-500,-32768,-1445,-32768,-8896,32767,-32768,32767,-4126,-32768,4633,32767,-32768,452,9037,-10828,-15977,-29497,11899,-13738,31592,31779,-8978,-2800,-20807,-32768,-247,-32768,-32768,-32768,-32768,-32768,-27996,14595,-27737,-32768,3567,15178,2079,29540,-19164,-26023,11683,-5482,-15524,-19535,-7789,-11437,7931,11623,-10808,-32768,-5128,-635,-24572,-32768,8309,-24167,-30799,15859,-32768,-3602,-20679,-4658,-8242,-32768,-7554,-10084,-5954,21901,-13171,32767,-10786,7583,17321,-12347,-7864,1287,18653,32767,20157,-6798,15707,7538,-32768,-9956,8908,32767,-5187,-21522,-29800,32767,32767,-23073,-20419,32767
};
