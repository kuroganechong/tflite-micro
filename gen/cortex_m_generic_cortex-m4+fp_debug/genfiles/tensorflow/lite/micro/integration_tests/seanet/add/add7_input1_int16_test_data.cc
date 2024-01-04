#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/add/add7_input1_int16_test_data.h"

const unsigned int g_add7_input1_int16_test_data_size = 4032;
alignas(16) const int16_t g_add7_input1_int16_test_data[] = {-1417,-1835,24246,-30459,32647,-2886,-18399,6595,-8218,-4578,13140,-18232,1076,4139,14113,26965,-22265,24695,5155,20770,12960,-7014,22354,28136,13056,-1369,1903,21179,19237,7402,7821,32572,-30837,21880,20072,-8418,1928,-24879,-25353,18139,-24675,6772,-4152,-29364,31264,-23763,15280,-4954,-26327,29679,-27493,27478,26212,11697,3030,6015,5963,750,-11445,8605,4807,-2820,-18322,-15399,18465,25832,-1110,-18278,-355,-24602,32063,-12471,-31845,-10373,-22156,7168,-11835,7067,11624,-14761,-25024,15789,-20112,648,-32021,32669,26328,-22921,-17284,18627,14447,14005,1690,-11272,29932,-23756,24464,25470,-15110,-28852,16358,-30780,-23870,-30824,26033,13690,-15316,11191,8834,-29390,12845,880,10920,19143,-8829,4816,30375,-32676,-27880,-17137,19522,27483,-19363,13309,32615,12418,31622,-4270,23360,-16064,-10430,-2232,-18416,32395,29709,-2843,-21138,13130,-1577,7034,13737,23413,26957,-25844,12430,-30709,-8855,-22258,-13248,-10574,-4557,12786,-27034,1893,28345,16628,-29265,30782,-2201,-30421,-14673,-23212,-4610,26111,-22577,-19821,-9334,25697,24502,-1288,-21959,-16970,-23805,8580,1445,73,-15283,12366,-27790,-14765,-16436,4862,-27739,18882,-11715,16363,-21831,2307,-17777,27845,10530,-27916,-18146,-17162,-21336,17992,-6632,-21109,-17239,15650,10656,-28729,-15572,13718,32520,-16176,11957,28160,22595,108,-4993,2024,3960,3672,-7344,3974,-31757,27718,-6962,30161,-27091,15062,19208,-19063,-4766,24066,27254,-29851,-24332,-13632,-27193,16783,29172,-17839,-7459,7381,-1316,-23147,-25962,7904,-26580,-11576,-11057,-1553,31457,21059,18747,20933,4017,26149,3494,-396,-23102,-6668,4239,-24958,-19448,-30019,25902,6481,21404,-28812,-3633,11835,-13250,-29922,25628,28544,22034,16951,-12344,14533,-4875,-12119,-26839,20046,-18157,-2660,-4172,-20477,-2724,-7433,-2754,-18493,25129,4463,15189,-13028,-25387,24854,8884,21336,-26981,19252,-28021,-27354,19472,-4360,16059,-5405,12635,24806,32012,-26189,6784,-8115,-19733,154,20244,30805,6422,-3488,-16563,30934,12082,-1467,-20277,-32728,-7169,10472,2920,2066,-2127,-19091,14904,30823,1941,-17736,22486,25208,856,-22674,-30587,-8877,-17979,10433,585,5151,-12705,20845,-7072,-21401,1011,24101,12968,9004,-7918,10283,-2268,1985,-5763,11671,31553,-2613,24786,-3218,16679,29931,23893,18872,803,14237,-3733,22859,-15936,28311,3958,1864,-4641,23938,-29292,5176,-7492,-29253,-32291,-15436,21397,31429,2050,-1778,-5714,-1095,-9660,18315,-17954,22568,-22106,19561,-2320,15190,-16039,-31280,-8452,-19427,5300,24997,-28939,-30661,-27187,-25544,14042,29660,-31789,14429,3757,22539,-5953,-11631,-26694,-27733,5790,27342,18685,28192,9305,-22201,-12810,-12221,-29168,-19701,3026,29809,17096,-9843,13000,31141,-28467,-31008,2884,8415,-18461,13836,1092,5455,23556,11234,5893,21993,27885,-1088,-21013,-19092,23068,20630,14862,26376,-2182,-27579,1744,-32138,-21093,-21818,-9900,-1204,32507,25723,29097,7748,-26993,8159,31956,-11399,-28920,32220,-7872,-19391,3107,-12199,-22953,-7108,16708,16376,-6052,16839,20682,-32370,19226,6133,25649,16820,-839,-25832,-10286,32530,-9608,22381,7270,29466,18919,-31548,24124,-32672,-24509,-1352,-1059,-12217,-12166,-21487,-7082,12667,3487,-1765,-27358,-31749,-14537,-3182,1334,12414,-27288,-8077,-25992,-5736,11476,18107,13082,22752,-30133,26381,10302,-7615,-15661,2770,-15862,4176,32250,-7708,-9154,-744,-1020,-12413,15361,32068,18435,-13397,-25259,-29586,23497,17233,8319,13519,-26009,17514,-32747,-2479,12223,-26329,-26661,24406,21556,27704,-3457,27302,-676,17355,10744,5936,-3001,-12018,-24176,-11185,-24191,-3387,24932,510,3279,-8578,-25509,-9819,-27447,24034,17766,17301,-25173,1960,-30757,11818,4146,29771,23912,-29336,17556,27025,-12747,-21708,7789,25847,22677,15111,12353,-21646,17991,-11330,-28361,6250,6087,13735,6853,-30623,5121,14982,21955,32406,11586,-15239,14889,-19585,24076,23276,31340,-28947,32730,-27930,21359,-26070,-8202,-9576,-16764,-20450,-25407,8115,-2977,9309,-23200,19191,145,-15784,-20610,-28497,7074,-16421,-5050,-25113,-12751,-28193,-24795,-26284,-26640,4802,5366,23266,24290,18319,-29602,13729,19109,-20732,6100,-10003,2637,-28741,4780,17181,-24243,-465,30676,8030,920,1595,-16096,4189,7047,-18332,-22186,22972,27656,-8789,28898,-19370,-29146,5627,-6185,8769,31723,-15011,-14572,27003,7908,21999,352,-15061,-2964,-24835,15931,-15473,-25843,3778,5712,3190,18409,13965,21448,-6275,-18754,-19331,23113,19308,31279,-32018,22746,-9802,-12331,-5627,1084,-28432,-22540,27050,1846,20654,16521,15175,3170,29091,-29585,-3593,7072,2917,6494,30653,-18820,13708,30572,4901,7544,26279,22689,12645,31674,-20300,26389,8288,-31743,27829,9485,-8501,-17325,3085,29092,28149,2000,29239,-15429,-22195,-27249,24829,-18276,8019,-8482,5052,-2463,9620,30767,9504,414,10343,-21275,-24274,6289,62,-30710,25387,-14484,-12550,-18199,1475,11472,-15393,8921,17081,-9936,-16602,-8825,12076,-19781,-3828,25917,-11775,25760,4363,1894,-11307,-14033,297,-13097,-27340,14224,-22041,30686,-16233,15900,-23936,-30410,-5536,-27163,941,-4024,31524,-12226,32040,18131,27253,32142,16539,-4226,22024,-8254,-25631,-28551,24631,14202,31830,-19176,16406,10445,-22667,-25059,16705,-27144,-30889,-14838,22912,-8637,-13847,12714,10063,708,-22679,32345,15493,7764,-4098,20158,5948,-3377,6085,18188,-8350,-16848,-13331,-23609,-12600,18600,2132,-26875,-13092,-19143,-2061,-8420,4945,-29517,-28817,-2722,-3897,-20023,15002,-3161,29778,-19294,-23169,-28326,29089,6553,-2234,19649,14839,-7761,-14876,-27265,-3692,-25940,-24819,7408,16098,-16954,-17871,-31017,19895,18910,-31308,-31222,1192,-7167,27156,24323,24436,22988,18796,30418,-26206,-13802,10338,-23179,12170,-28021,9139,8066,8889,-32751,7630,-32479,9673,19022,7749,9777,30763,-5727,-31948,17697,2450,32177,-3035,-1912,4431,-2096,6588,14991,-19795,32032,17737,8861,4438,-5610,-2001,-28811,-12156,-24689,-13442,-7564,-27407,-4259,24432,-22608,-3829,-13705,2282,-15948,21851,30809,-16601,-18514,6346,-19568,22029,-21646,20555,-25279,22961,18495,11850,-21280,-2418,20237,16404,-3704,-11071,9153,28244,27452,-27427,19848,-1867,6706,-6317,-9937,9351,-7796,9394,26756,2267,-6227,30856,22346,-32364,-19154,-5653,-1681,2694,-2984,-5821,-1990,-13201,14017,-31693,-7818,10169,713,-3009,-1093,54,-8941,22790,13922,14088,1966,-22842,-4486,28266,17086,-26375,-29493,-22610,18575,8185,-20035,-19129,11744,-13694,-6124,-5844,-26025,-8453,-25401,3632,-7706,-1539,16461,9516,-13302,-14162,9738,3476,9858,-9729,9759,21136,15960,26599,-13953,31448,2846,18368,2611,9393,21505,-17101,-21938,1343,-27912,-31035,-18960,32509,-10192,-25976,27069,13629,26341,16952,-30430,-21951,32513,-6807,4939,5663,17318,-9992,-21857,-49,3767,30962,-20007,-21339,-4933,22337,20439,-20820,-28616,15302,10394,23489,-10935,27454,-24278,-29911,14444,14697,-30740,27305,18896,20376,-24574,32210,-28222,11103,-17471,-28454,-29266,20311,-8385,-20492,5237,7833,3152,9258,5895,-16009,-23355,-3052,-6548,-16483,-31417,-9961,6972,22718,-13135,14804,-22068,-6607,-27150,-31300,7582,-8278,-16394,28147,-8287,-30409,-31770,-14939,17062,-32234,-22681,-23584,-21598,15015,19050,-28114,29871,12241,-29181,30611,10572,20379,9986,-8507,-4484,30895,-8637,-2655,15311,-14014,32368,22003,-1094,-5969,-32159,5328,30713,-29424,-2619,11935,-11299,-11966,6662,20548,21047,-17401,28251,-2688,-13080,-3315,26865,24387,3109,14616,-4120,-22964,-1357,-19335,-29049,-30064,-9682,-21377,-5194,12064,-19709,-14473,13236,-6729,6670,-8367,-31581,22711,10562,27801,29355,173,-24803,20294,-28999,-23737,14433,-16415,19090,19234,-16586,11583,-11280,-15394,3563,-1321,-28700,29218,9820,-14695,11238,11569,17624,-960,-30439,14913,27512,20262,-21231,21502,1232,19669,29953,26854,30542,11656,-20677,11961,-10813,3828,-13856,-12844,7810,-12264,20047,-22276,-26816,-1241,-3053,-30999,-4966,-9197,-18343,-28309,9684,27976,-28134,-22667,-11597,19198,-23586,-23386,-14472,5565,-3356,16392,-5206,-28826,-27175,-28955,776,-14947,-18511,21635,-3442,15623,673,-26607,6624,10426,8358,17974,3291,20968,3819,-4381,-8264,-16505,-11978,-17639,23007,85,18372,-18964,1972,-79,-12762,-3729,-27977,20038,15927,3884,30605,15700,-27773,-7947,17015,186,31350,23587,-13060,8727,-30271,-27561,-26184,-4940,-12053,-20594,-6475,32195,-28047,27524,-16175,-24187,21891,4453,-32143,10015,-20565,-18321,7179,32474,22515,22566,-28902,-29120,17924,-19776,30056,19460,-28720,-11617,-10521,6726,-21668,29736,11934,18448,22535,-5650,-2336,-30289,19485,-27906,1678,-31263,-4121,-31698,13294,-11246,-9052,31540,-2230,18468,9545,17073,23777,19836,-4801,24488,-1865,2615,-25579,-26734,-22006,18688,-6604,18806,-6627,-27350,3235,27919,18225,1054,9040,12948,16979,-26690,-27131,-8842,-24179,-9580,-13445,-1095,20081,-31599,-22442,-936,28285,17084,-21241,-7840,10711,-23901,-22268,-23830,-4544,-19562,27798,22564,-8916,16021,-10598,-27137,-16679,17787,-30011,2809,-4081,-23900,1845,-13378,23026,407,27626,-31334,31742,-3188,-26449,-4282,-11690,-12055,-6453,-15488,-20270,-25127,18929,-23387,5865,-10203,-12164,8560,-14899,10308,8915,9949,18104,-18859,506,-31931,-21023,-20777,-4583,21036,-13580,-14964,8434,-19564,-17028,4956,-10812,-30838,24156,-11983,6525,3340,-5170,25899,31541,-27474,26032,-14324,8547,6393,-5618,17792,-26332,-3222,-14957,-4269,27134,-10563,-23465,-18399,10097,22455,-29929,-6512,-16061,-21939,-8921,6013,-10092,21513,380,30065,-26898,23549,12185,-30062,-8003,16190,24808,-11390,-18844,-4417,-15764,-11784,-29873,-10019,10289,-20115,99,-22602,13875,-9101,27421,15269,18999,31342,-13537,32606,19951,-12964,14818,20586,13658,-2728,-789,2132,-27564,29034,455,14479,17042,31853,-5647,12154,15409,-3558,-11005,22269,-30153,274,-6356,-344,-11611,23860,19543,-3516,479,-4699,22443,-16641,8047,6529,-19536,-22144,21226,8192,10031,-9556,-14861,-13917,10386,20454,-10815,-3104,-10927,12392,-25830,-16133,-27076,4028,-14100,-23107,11941,-9151,-9705,-20663,179,-29794,-7803,-15692,12625,20746,-4216,14062,-24042,-22123,-20238,23746,-30521,10657,2740,-30893,-20538,11478,-28988,29505,-28592,-23691,-19669,32360,-15485,-19067,5027,-10025,26821,21166,23858,3055,21027,14178,1658,-28529,-23520,-17135,28010,24597,-8631,-8433,9973,-12546,-27104,13778,-23729,-351,24682,20685,-12574,27491,-12967,-5199,-13379,-3026,-582,-4897,-1112,19534,16746,16166,26487,-23424,23506,-13645,-12946,28561,27822,-12678,-6253,43,-8010,2854,23175,-31420,30654,14652,-16500,15885,24206,7053,22446,22870,9145,-17539,-16263,18260,16161,12934,2154,1836,-3550,-7744,-19095,-142,-17791,17386,23645,13120,16533,-8069,-3254,-22512,-3985,13748,-21199,-32144,26628,15815,-14952,21468,20572,-21137,4989,-22969,-18915,-22710,6318,-5504,21725,18094,-19090,-3548,-14944,-30311,-388,-7026,-4871,-8382,117,-5857,-22603,22396,10703,-19054,27936,25077,-32495,12339,29981,15599,-23215,2833,-12420,9819,-17952,-1480,30441,-23495,10067,-8299,-25114,17205,-32261,-1773,27193,-30177,24168,11452,1889,26158,-20445,-15370,20304,22934,-23372,-21723,-4778,-22403,21725,12005,8121,26868,18535,20007,-20086,26804,-30229,-14358,25521,4730,-1541,-15868,24722,-6882,27837,-481,3952,1556,16048,-20332,3938,-19339,-21602,-26107,-29972,-27487,-31750,13794,-19788,22078,16738,-15338,13330,-1678,-25779,-6716,26013,-18051,10972,-2224,-21886,2150,25077,27022,-15636,-13410,-27900,-4140,22109,-17152,-6446,19490,29144,25490,-27235,-12548,-24348,-18011,14676,-12837,-16377,-23833,-7264,-16248,-10320,-23627,-18672,29337,28964,15970,-27485,-30984,15094,18771,-24482,30601,-22586,6289,-24986,-9347,24828,-21016,-23292,9109,30944,17112,9370,-23521,-13278,-11207,-15250,6844,24068,10578,14470,6296,8770,32729,21875,-20378,4414,-8310,3178,13472,26344,21767,19473,-6686,1123,32673,6322,24053,24605,11706,432,-6676,20024,7441,-4458,32216,17518,-10355,-7218,6320,25249,8723,-11080,-4265,16902,29291,21673,3076,4669,11221,-16132,29889,-15034,-4988,-24021,-30619,12925,25594,-1278,-18221,29153,10872,28352,21617,-1266,13099,-27243,-31422,3448,29618,8103,-8007,-1686,-4801,25380,-29388,-14844,-25636,-350,-10013,-5308,-16675,21293,1867,7609,-4389,-21066,-19507,21990,-19349,28877,-11983,-32102,9776,-28382,24478,15265,4392,31339,-27583,-22131,-17641,-9139,976,3030,-23128,14729,19248,-2848,20960,2030,-23472,13075,-1865,-32728,-20609,735,-967,-14482,-2440,-22403,-22634,9023,-21040,22326,-20321,12345,-13746,-7010,32122,-21351,16761,31988,23121,-17019,-14376,-24674,-24453,15958,-14225,4295,-8452,24401,7281,-7562,-11894,-21566,-2611,12004,6625,-4136,-26544,-22719,-3373,-13639,23157,-8931,14486,-4433,-18637,-29458,7469,-5014,-6089,10736,29904,-11374,12008,15524,16062,28687,-25048,-893,-5982,-26724,31824,-12368,-17850,-2546,-28990,24270,-2725,-13646,32031,-17666,-22496,-24940,-5158,-21609,31082,30499,-22029,-13802,9278,11256,20479,-14240,14950,6772,18457,-7913,27916,-27320,5911,-4988,3132,-2342,-25692,20837,-4779,-15369,1109,-32674,-18902,478,10305,8419,18307,-3049,-19660,21067,-26633,5,29370,-32619,27587,-17424,-24345,-11563,3872,23445,20545,-12916,16161,-9517,14098,-3323,-17582,25548,-7418,29622,-25353,-14458,-16394,1237,-4717,20153,26965,-26898,30470,-15283,23351,21318,-26627,20763,-29527,16286,8678,26364,-31074,16617,-2144,15221,15751,17262,19717,17416,-1781,-22080,-9954,14731,147,-7887,32534,28246,15401,24245,-15304,28669,-16710,15420,11968,725,-28502,12033,-2996,15281,7559,-30368,7856,15969,-24138,-27547,19693,6017,-23815,-31969,-27755,-18197,29237,5369,4680,-1321,-27900,12261,32355,2305,-10349,-6382,-7939,-7070,12045,5454,32422,10475,-9536,-14915,3575,-21198,-485,13727,25134,26795,30700,20842,8502,-18672,26215,-29627,21858,26960,-4193,-19913,14732,-22220,12042,-17882,-1862,-13722,11190,-5274,-22606,14577,-20444,26669,22506,5249,-8182,27221,-15472,7859,31215,-3043,25642,22953,-24600,23882,-28618,-10938,-21675,24340,16279,-15438,25051,-5097,-23635,-30098,-31835,4972,-1504,-13086,31579,-31485,-30484,22621,30871,3267,10218,-32489,13269,23414,12608,9081,-29157,25045,-15988,-26446,-9385,-24163,11756,-19007,-18201,-32080,4094,-25293,-18019,8988,22338,22055,-26614,-23914,16748,21215,5082,13127,-26113,24844,-30369,-29412,17096,7986,-8300,-473,-4278,-29944,-4766,16214,-28898,22954,5534,32468,-3551,4175,-20977,24896,5256,-10525,19450,17012,23454,-17829,-31896,10070,-18188,6407,-15,18513,-2738,5905,6944,24541,17712,-8414,24361,-17735,340,32113,-13643,-17750,2448,2786,5092,-3994,3449,-5185,-3053,-23697,32051,-21304,-11381,16516,31374,-27705,-30369,-4548,-23070,25922,-6813,23600,-17844,93,-19257,-21522,-20413,-18460,-23469,-18936,4658,524,-25952,8354,-31099,23324,-26045,-25035,-21302,-165,23933,-7947,16549,2312,7918,-9606,-15631,-22156,21393,-31708,-3029,28017,15696,31466,-1470,4853,16733,17701,-2835,-18892,27042,-25917,-8758,23076,-13712,-25074,-2511,30758,26338,-13143,-5775,-7969,17626,-317,8586,25492,31618,15459,-5478,953,8820,20549,-30315,-6890,5663,19396,11771,-3722,-5586,-13849,22958,-23874,-26158,16398,23285,-7859,17624,-10678,14669,-144,-26201,-18709,7306,-25058,11826,5129,5464,23158,29751,9437,30407,7592,-1263,18024,-27075,-15041,-6417,1402,-5570,-27643,-2315,17370,29332,27434,-16316,-23785,-17435,-14521,-28516,-29423,-13737,-15740,30813,21491,-25555,2886,-15799,-687,20520,8778,27341,10405,25019,-31431,-2799,12141,5117,12178,-26386,-22681,-4150,-9094,-8377,10108,21643,11379,16939,-23002,9017,-5696,32494,13714,-6640,-4122,-31905,15265,11188,-12546,11417,-31305,25684,-18710,-216,-30590,-12676,23660,-17264,14255,-23247,-25837,29754,-12407,-11049,-8967,273,4110,13431,27300,16324,22535,-7539,5604,-27469,-6638,22062,-31368,27815,-5404,6035,27842,-23737,-10270,28751,-8739,-13125,16883,-18674,21265,2257,-22226,-24135,-1041,-12569,11822,-26294,4113,18085,23335,-30403,16907,-12301,-3889,32056,-11493,-88,-20780,-8656,-25779,-31483,-3123,-13480,-4139,-12506,-25916,-19761,27108,-2107,29184,24494,286,8480,4409,-5119,14406,16942,15907,-15112,-450,21362,-24107,558,-9465,-8903,9706,-24406,-9189,-337,-9616,5718,-9418,-6201,-11042,-21804,12992,-9369,-15211,15277,30235,-10190,-24439,4833,14086,9596,4347,-14829,-12191,-22763,1500,-7708,28366,-23588,-28000,14715,21504,12236,-3428,-5538,-20628,21046,-12080,14802,-4293,1991,-5637,29680,19910,26872,-3172,22643,13770,-16867,-30703,-7092,16898,22029,21505,596,5702,25113,-21235,26458,-22875,-322,-24179,-24652,22080,17367,20658,1440,15317,-750,-18556,23950,3523,23802,8939,-8738,-32389,-137,-28826,-11134,-30060,-1214,-5934,-13763,15114,-24678,-27479,16330,-21681,5567,6183,-20531,-7553,17210,-32125,-3508,13153,-1952,-14697,10209,-3230,15682,17991,-6848,-24027,23673,-32254,16512,26328,21657,6532,-3848,12894,-28197,-20740,-23194,7403,-15081,-8644,-2135,17447,-2953,5686,5847,1121,12793,11188,-499,-3110,-23207,19394,24998,-4478,638,-13833,-24226,7203,32014,-477,-2705,-6947,-3979,-12237,17581,18052,-21509,24358,-10190,-21721,-21193,-31889,29704,358,3816,-2332,17816,13557,27177,10981,-27316,-18460,10789,7411,13102,-20983,-5704,-17157,-23110,-18429,14583,-6994,17326,6274,-25086,23717,-12121,-2209,-15529,28268,8876,-11189,32703,-11348,-32096,-1846,27359,804,-7316,23739,-21828,25106,15628,-29595,-13250,-28563,-31377,30382,1249,-3342,-499,-21505,22219,8519,-4422,26939,2811,-2794,-19338,26902,-18021,-13538,-26131,6888,8941,-1454,25074,23904,16556,31752,-8864,2520,28802,26414,-27870,20727,7244,-17030,-23289,-3121,-1525,-4769,-31771,-30803,-715,-27052,-27753,-3814,32433,9787,15044,25079,19736,-3263,15115,30002,-21391,-26811,-25142,-2256,21637,-13283,-20391,1324,-31376,29919,-1009,27556,-14219,-32317,29552,5468,-11642,32716,-13009,17849,1034,-12337,26819,-357,-10297,10691,13984,7062,1953,3993,17911,10202,-15076,-6181,7403,-31499,27763,-13482,13186,4928,-17113,6524,26545,-5611,-4908,-1825,32548,-20523,-28212,-2694,1168,-28747,-22501,-1096,6251,31636,11729,-29513,-25794,3218,-26829,3502,5681,-6465,-4032,13817,-4347,-21123,25694,2484,-31997,-847,669,16795,26961,-31352,25101,5818,17048,23230,-25613,17812,-1496,-21973,-1799,-21308,9832,19021,-14798,6056,20829,384,-2229,19861,-27923,7085,-19862,16544,28215,-1340,-19882,18416,-20356,23984,17844,11131,10559,5704,-32748,-24870,-8600,17350,30650,21360,-31724,-18658,-22086,5668,8015,-6954,-31271,9176,-30931,-811,-24157,-25854,-30383,18296,31409,22308,-25152,11716,26537,6746,-7405,-4553,12661,21386,28985,-7473,-6295,-6042,-19705,-13097,-2621,-1822,-14366,-25157,18026,-17735,-14209,23007,17465,-4056,-14404,22989,-24355,12126,-22296,-17192,-18292,-6679,-22380,775,-31680,7838,15600,-32195,-20197,20462,32521,7176,19832,-25294,16048,-2859,13441,17510,-31483,10219,12889,-26164,-16735,9997,-30993,21538,30595,125,-26668,1204,30859,12674,12290,1478,28560,8844,-12170,4620,-4320,-4900,-7487,12846,14039,-15028,20024,1918,-12582,-4591,-23829,-14807,15935,8619,-2362,16966,11810,9241,-8096,16726,5262,-8124,-18505,-30973,7607,21220,1795,-22107,21198,-24087,15933,-28480,20407,-10565,11420,25984,-23322,-28469,-14218,919,26259,24270,-1220,-28710,-29287,6564,-25291,26497,-1118,30481,20102,19164,-32078,-22968,24482,-31857,13440,-26708,-30704,-10880,1026,-22167,25497,20171,17413,-21911,-29244,8591,-8739,-24984,-29195,4569,4060,17312,-7075,-17744,-29834,11300,-1338,-10107,1557,-7024,25477,-21403,-5567,-11472,28939,31406,-20148,9657,9123,-14270,20259,-14541,-27687,-5336,20585,-25926,-19611,6645,-217,-13083,-1811,-8743,-28091,-6100,-24993,29153,-5761,-4116,16753,-3621,-19676,-14716,3018,-3424,-31953,-630,25836,32415,-6832,-26224,31799,15859,-20501,11500,11125,6345,-25010,-26445,-13148,-12050,-16434,13315,-1052,22315,3653,18249,-16859,-23783,-23147,-3661,11897,26257,7889,9231,10228,11827,-25679,-14737,10306,9829,-7968,-7675,26818,24988,23847,21079,-18885,-13809,3798,-9373,575,8510,1731,4641,-15788,25466,649,1702,6895,25896,22714,-1402,2293,7514,10980,-10878,13363,3767,-26926,1629,28579,19974,-11774,3062,25130,-8816,-20560,-27252,17968,11796,4424,-5742,31365,9192,-12713,-18732,8612,16768,-10534,-23938,13645,-12315,-25873,27785,30828,17223,6967,21554,-32429,-29387,7784,11262,-10898,-8521,28186,-24440,-9387,-24709,195,-26084,-7584,-9990,14944,32557,-3558,-11313,-17247,-8326,30601,27504,7541,-3611,-5462,-10973,30099,31182,17173,12022,28718,2748,-19608,-22588,-19410,30546,15450,-2668,3125,9637,-13164,8435,16461,-9640,20339,-3014,-5395,29004,1796,31080,-20052,-32460,21134,11495,21182,32524,-3027,10957,-27848,-2369,17161,1553,20448,-23666,19479,18426,-6385,-1360,21354,11445,6986,32699,19459,21480,31525,-18273,-28962,-2130,6694,6231,8209,20449,32705,24409,22529,20422,-18522,-29190,14269,-16135,-23217,3948,18492,-31654,18481,3224,22166,9209,32049,19976,1944,-24572,17872,26888,-22110,-32717,-32143,26606,28827,-27350,-1364,26392,20643,-32081,-1886,-32544,-16579,30767,8085,14107,30652,-25740,27209,-16833,-15726,-5776,-28992,-2218,-20055,1629,25898,-917,-12681,29697,19482,4841,-1175,-2274,7137,13490,11573,-16141,-11575,6371,-409,-32540,27378,19962,20737,30618,-21157,-534,28306,-14813,-30424,-27868,-11630,-21739,-5924,18419,-15264,-26294,-19622,-30766,30140,-27121,4036,15595,-19959,24755,1666,27617,-19572,-1391,-13417,16638,27057,18079,-20423,-19091,31950,4296,9000,21302,-5550,-28841,14611,-11989,7083,-17372,-5545,-8164,3275,11166,-4047,-4645,5667,-16945,27507,11381,25392,31105,10240,1467,3330,-19381,29095,27088,-101,-29629,17345,-26582,11171,-2715,-6092,-23578,-27610,-8834,-6363,-31875,4800,20341,-14832,-11313,27068,-4874,-13245,32186,5879,-15546,-20216,23507,86,10160,-13577,-5871,-9171,-28781,1171,15077,32690,-30958,2350,-19633,-1175,13091,7342,20627,-20211,25711,-4043,5795,-990,7533,-15553,9478,8800,6132,18711,4904,838,20248,2894,24358,-28027,-27652,-1000,4077,21850,-18713,11260,-17047,-1393,-21872,-198,21515,-15887,11830,-1964,-22441,-27662,-9976,16785,-7637,18057,27183,-1426,-11530,31927,-1796,27390,5353,-8294,-13564,-4419,-28109,-11086,-11123,-9753,-7447,-16820,15059,10331,27644,30090,8013,-22397,-13607,-16510,26146,-26258,-18901,-16821,14711,-1994,-4482,25081,-10783,20161,-7026,6474,8564,-27970,-29046,-23538,-13643,-20717,24636,16342,-1076,-1752,-21100,4228,1586,-24769,31429,7226,25000,14439,2006,26479,10435,28984,5052,8604,16743,21750,-9407,19314,17358,-4190,-10016,-10692,-30380,-8991,-16671,-11136,4744,-5927,18294,-29736,6294,6827,-14465,-11855,12118,-9737,-519,5695,28959,-31619,-4721,-16519,16095,-21126,-24371,-5277,24257,15057,1223,-4871,-9888,21128,-4220,-18563,-26044,-4160,5784,-10147,-14088,16138,1789,31216,-18147,-2877,-29439,-23902,4523,16700,-18861,-23514,-31744,-2310,-32057,1941,21916,19862,6217,13116,13889,18152,13325,-11621,-17527,31141,17317,20175,9037,-3052,22411,2344,-11564,23330,-5159,-30936,-24325,25880,-20075,24379,-21492,2589,-19959,27340,-23249,3881,12010,-26127,-6491,5549,21666,10088,17231,-27399,9695,9527,7458,25663,-12804,10038,2983,-29692,-6335,-8713,-10194,-11270,11671,31791,18085,2093,13447,-9963,-31445,-17522,-20851,-12570,29310,21435,-3133,32382,7114,-30908,-10491,16806,23655,-28199,26214,9720,-24209,7694,-28326,9665,-31000,-131,-13292,-26317,-30745,17407,-14583,-6375,17083,-26193,-3700,28799,-12378,-12083,-6858,9701,-12820,3191,18727,-7349,19295,-20289,-490,-18596,-25910,1840,15293,26957,32726,-17966,-10138,-10249,29796,28416,-28613,-7850,-28042,28007,19283,-25014,7152,23157,22900,-26607,13796,-989,6910,-7297,-28092,31257,-10237,-11010,16045,3919,8455,29290,-1920,27332,32062,-18590,32160,-21006,3045,12254,17745,-9464,14048,32671,-22952,-17697,-4370,19437,-10294,-6596,-72,8154,6633,-13197,-16256,1866,3698,22304,15919,-25187,-21516,-8490,4648,-13013,-10646,-32725,3672,-26755,-1670,-2265,11681,27379,23748,13397,-7292,19911,8302,-17215,-7538,21268,27654,-29060,-17487,-4922,-6046,13221,-30393,-18885,-28941,-25181,-4126,-2802,14827,6147,-1872,4458,11315,16780,-25463,3044,9829,-9827,-31022,32054,12476,24313,4628,-19016,-2797,-18569,-4762,-15567,20458,16917,-31325,24381,25671,-21045,7858,9311,20534,-12236,6913,19429,-5428,-15713,-30095,-28692,-4380,6232,28005,-1903,26004,12074,23475,24962,15040,1438,3858,21422,18969,19165,17375,11294,4924,28733,30620,28077,-28871,-13518,24967,25818,3664,-28701,23085,-21332,14041,-9314,-26311,28903,-11608,337,-5451,26702,-7925,20985,13137,30768,27515,-29833,-13665,-4095,-23828,12522,30011,23527,2771,-24011,29074,-30221,30593,9599,10098,-6689,6656,-4420,-26780,2999,3617,9925,29508,-23426,29386,25609,10672,12454,8130,-30573,28152,28445,14986,22000,-32171,-32590,-16633,-2248,15775,-7119,-31674,-8565,9437,-27270,29733,-21359,-19883,-3852,19430,24906,-24336,-18441,21989,1184,-13565,23093,31600,23262,7788,-9496,-10915,893,10772,24531,12118,-26230,-26004,-8686,32343,-4892,-15987,5857,24861,-26125,21122,-12154,18198,27609,3078,1921,15135,1613,31617,32096,-16576,-624,27609,1275,-31739,-13397,-30533,7079,30974,-5057,-6329,-27154,6761,-846,-32575,-12082,7555,-29130,17702,-24065,11532,23532,-12874,-3102,16046,-587,-16244,24456,4666,-6194,13337,5850,-6141,28175,-18416,30055,24481,-22002,-24980,-5520,-29817,-11398,-31950,31632,32615,25867,28655,30152,5515,21558,22245,21854,-29621,1980,8513,-24225,-30575,31378,-11809,19300,-13628,-4970,29808,15167,14844,6577,27462,-14989,20567,-26151,-21412,-3307,5273,4444,-2330,23678,31097,-29087,-3182,5216,3713,-5834,-22253,-18960,30573,8076,20198,9318,-31346,23035,16147,-4285,10838,-626,-20367,32332,-24674,30184,-23940,-7135,-212,2636,26792,28829,-6542,32517
};
