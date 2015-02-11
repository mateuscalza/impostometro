
// LED Display
#define LED_NO_OF_PANELS	24
#define LED_PANEL_WIDTH         32
#define LED_PANEL_HEIGHT        8
#define LED_DISPLAY_WIDTH	384
#define LED_DISPLAY_HEIGHT	32


//
// This table is for the P10 Board arranged like this.  The first 4 are the correct way up, the bottom 4 are upside down.
//
//       .........  .........  .........  .........     I/O Board    Raspberry Pi
//       .       .  .       .  .       .  .       .
//       .   4   .  .   3   .  .   2   .  .   1   .
//       .........  .........  .........  ......... 
//    
//       .........  .........  .........  .........  
//       .   5   .  .   6   .  .   7   .  .   8   .
//       .       .  .       .  .       .  .       .     These 4 boards are upside down
//       .........  .........  .........  ......... 
//


// Defines 128  x  "8 pixel" chunks (buffer offsets) for each of 4 possible sets of led lines (1024 pixels per line)
// 16 chunks (8 pixels) per panel, 8 panels
// Enter numbers from paper lowest value first for each row, IE 67,68,69,70 etc
unsigned int indexes[4][384]={


{
7672,9208,10744,12280,7664,9200,10736,12272,7656,9192,10728,12264,7648,9184,10720,12256,
7640,9176,10712,12248,7632,9168,10704,12240,7624,9160,10696,12232,7616,9152,10688,12224,
7608,9144,10680,12216,7600,9136,10672,12208,7592,9128,10664,12200,7584,9120,10656,12192,
7576,9112,10648,12184,7568,9104,10640,12176,7560,9096,10632,12168,7552,9088,10624,12160,
7544,9080,10616,12152,7536,9072,10608,12144,7528,9064,10600,12136,7520,9056,10592,12128,
7512,9048,10584,12120,7504,9040,10576,12112,7496,9032,10568,12104,7488,9024,10560,12096,
7480,9016,10552,12088,7472,9008,10544,12080,7464,9000,10536,12072,7456,8992,10528,12064,
7448,8984,10520,12056,7440,8976,10512,12048,7432,8968,10504,12040,7424,8960,10496,12032,
7416,8952,10488,12024,7408,8944,10480,12016,7400,8936,10472,12008,7392,8928,10464,12000,
7384,8920,10456,11992,7376,8912,10448,11984,7368,8904,10440,11976,7360,8896,10432,11968,
7352,8888,10424,11960,7344,8880,10416,11952,7336,8872,10408,11944,7328,8864,10400,11936,
7320,8856,10392,11928,7312,8848,10384,11920,7304,8840,10376,11912,7296,8832,10368,11904,
4608,3072,1536,0,4616,3080,1544,8,4624,3088,1552,16,4632,3096,1560,24,
4640,3104,1568,32,4648,3112,1576,40,4656,3120,1584,48,4664,3128,1592,56,
4672,3136,1600,64,4680,3144,1608,72,4688,3152,1616,80,4696,3160,1624,88,
4704,3168,1632,96,4712,3176,1640,104,4720,3184,1648,112,4728,3192,1656,120,
4736,3200,1664,128,4744,3208,1672,136,4752,3216,1680,144,4760,3224,1688,152,
4768,3232,1696,160,4776,3240,1704,168,4784,3248,1712,176,4792,3256,1720,184,
4800,3264,1728,192,4808,3272,1736,200,4816,3280,1744,208,4824,3288,1752,216,
4832,3296,1760,224,4840,3304,1768,232,4848,3312,1776,240,4856,3320,1784,248,
4864,3328,1792,256,4872,3336,1800,264,4880,3344,1808,272,4888,3352,1816,280,
4896,3360,1824,288,4904,3368,1832,296,4912,3376,1840,304,4920,3384,1848,312,
4928,3392,1856,320,4936,3400,1864,328,4944,3408,1872,336,4952,3416,1880,344,
4960,3424,1888,352,4968,3432,1896,360,4976,3440,1904,368,4984,3448,1912,376},
{
7288,8824,10360,11896,7280,8816,10352,11888,7272,8808,10344,11880,7264,8800,10336,11872,
7256,8792,10328,11864,7248,8784,10320,11856,7240,8776,10312,11848,7232,8768,10304,11840,
7224,8760,10296,11832,7216,8752,10288,11824,7208,8744,10280,11816,7200,8736,10272,11808,
7192,8728,10264,11800,7184,8720,10256,11792,7176,8712,10248,11784,7168,8704,10240,11776,
7160,8696,10232,11768,7152,8688,10224,11760,7144,8680,10216,11752,7136,8672,10208,11744,
7128,8664,10200,11736,7120,8656,10192,11728,7112,8648,10184,11720,7104,8640,10176,11712,
7096,8632,10168,11704,7088,8624,10160,11696,7080,8616,10152,11688,7072,8608,10144,11680,
7064,8600,10136,11672,7056,8592,10128,11664,7048,8584,10120,11656,7040,8576,10112,11648,
7032,8568,10104,11640,7024,8560,10096,11632,7016,8552,10088,11624,7008,8544,10080,11616,
7000,8536,10072,11608,6992,8528,10064,11600,6984,8520,10056,11592,6976,8512,10048,11584,
6968,8504,10040,11576,6960,8496,10032,11568,6952,8488,10024,11560,6944,8480,10016,11552,
6936,8472,10008,11544,6928,8464,10000,11536,6920,8456,9992,11528,6912,8448,9984,11520,
4992,3456,1920,384,5000,3464,1928,392,5008,3472,1936,400,5016,3480,1944,408,
5024,3488,1952,416,5032,3496,1960,424,5040,3504,1968,432,5048,3512,1976,440,
5056,3520,1984,448,5064,3528,1992,456,5072,3536,2000,464,5080,3544,2008,472,
5088,3552,2016,480,5096,3560,2024,488,5104,3568,2032,496,5112,3576,2040,504,
5120,3584,2048,512,5128,3592,2056,520,5136,3600,2064,528,5144,3608,2072,536,
5152,3616,2080,544,5160,3624,2088,552,5168,3632,2096,560,5176,3640,2104,568,
5184,3648,2112,576,5192,3656,2120,584,5200,3664,2128,592,5208,3672,2136,600,
5216,3680,2144,608,5224,3688,2152,616,5232,3696,2160,624,5240,3704,2168,632,
5248,3712,2176,640,5256,3720,2184,648,5264,3728,2192,656,5272,3736,2200,664,
5280,3744,2208,672,5288,3752,2216,680,5296,3760,2224,688,5304,3768,2232,696,
5312,3776,2240,704,5320,3784,2248,712,5328,3792,2256,720,5336,3800,2264,728,
5344,3808,2272,736,5352,3816,2280,744,5360,3824,2288,752,5368,3832,2296,760},
{
6904,8440,9976,11512,6896,8432,9968,11504,6888,8424,9960,11496,6880,8416,9952,11488,
6872,8408,9944,11480,6864,8400,9936,11472,6856,8392,9928,11464,6848,8384,9920,11456,
6840,8376,9912,11448,6832,8368,9904,11440,6824,8360,9896,11432,6816,8352,9888,11424,
6808,8344,9880,11416,6800,8336,9872,11408,6792,8328,9864,11400,6784,8320,9856,11392,
6776,8312,9848,11384,6768,8304,9840,11376,6760,8296,9832,11368,6752,8288,9824,11360,
6744,8280,9816,11352,6736,8272,9808,11344,6728,8264,9800,11336,6720,8256,9792,11328,
6712,8248,9784,11320,6704,8240,9776,11312,6696,8232,9768,11304,6688,8224,9760,11296,
6680,8216,9752,11288,6672,8208,9744,11280,6664,8200,9736,11272,6656,8192,9728,11264,
6648,8184,9720,11256,6640,8176,9712,11248,6632,8168,9704,11240,6624,8160,9696,11232,
6616,8152,9688,11224,6608,8144,9680,11216,6600,8136,9672,11208,6592,8128,9664,11200,
6584,8120,9656,11192,6576,8112,9648,11184,6568,8104,9640,11176,6560,8096,9632,11168,
6552,8088,9624,11160,6544,8080,9616,11152,6536,8072,9608,11144,6528,8064,9600,11136,
5376,3840,2304,768,5384,3848,2312,776,5392,3856,2320,784,5400,3864,2328,792,
5408,3872,2336,800,5416,3880,2344,808,5424,3888,2352,816,5432,3896,2360,824,
5440,3904,2368,832,5448,3912,2376,840,5456,3920,2384,848,5464,3928,2392,856,
5472,3936,2400,864,5480,3944,2408,872,5488,3952,2416,880,5496,3960,2424,888,
5504,3968,2432,896,5512,3976,2440,904,5520,3984,2448,912,5528,3992,2456,920,
5536,4000,2464,928,5544,4008,2472,936,5552,4016,2480,944,5560,4024,2488,952,
5568,4032,2496,960,5576,4040,2504,968,5584,4048,2512,976,5592,4056,2520,984,
5600,4064,2528,992,5608,4072,2536,1000,5616,4080,2544,1008,5624,4088,2552,1016,
5632,4096,2560,1024,5640,4104,2568,1032,5648,4112,2576,1040,5656,4120,2584,1048,
5664,4128,2592,1056,5672,4136,2600,1064,5680,4144,2608,1072,5688,4152,2616,1080,
5696,4160,2624,1088,5704,4168,2632,1096,5712,4176,2640,1104,5720,4184,2648,1112,
5728,4192,2656,1120,5736,4200,2664,1128,5744,4208,2672,1136,5752,4216,2680,1144},
{
6520,8056,9592,11128,6512,8048,9584,11120,6504,8040,9576,11112,6496,8032,9568,11104,
6488,8024,9560,11096,6480,8016,9552,11088,6472,8008,9544,11080,6464,8000,9536,11072,
6456,7992,9528,11064,6448,7984,9520,11056,6440,7976,9512,11048,6432,7968,9504,11040,
6424,7960,9496,11032,6416,7952,9488,11024,6408,7944,9480,11016,6400,7936,9472,11008,
6392,7928,9464,11000,6384,7920,9456,10992,6376,7912,9448,10984,6368,7904,9440,10976,
6360,7896,9432,10968,6352,7888,9424,10960,6344,7880,9416,10952,6336,7872,9408,10944,
6328,7864,9400,10936,6320,7856,9392,10928,6312,7848,9384,10920,6304,7840,9376,10912,
6296,7832,9368,10904,6288,7824,9360,10896,6280,7816,9352,10888,6272,7808,9344,10880,
6264,7800,9336,10872,6256,7792,9328,10864,6248,7784,9320,10856,6240,7776,9312,10848,
6232,7768,9304,10840,6224,7760,9296,10832,6216,7752,9288,10824,6208,7744,9280,10816,
6200,7736,9272,10808,6192,7728,9264,10800,6184,7720,9256,10792,6176,7712,9248,10784,
6168,7704,9240,10776,6160,7696,9232,10768,6152,7688,9224,10760,6144,7680,9216,10752,
5760,4224,2688,1152,5768,4232,2696,1160,5776,4240,2704,1168,5784,4248,2712,1176,
5792,4256,2720,1184,5800,4264,2728,1192,5808,4272,2736,1200,5816,4280,2744,1208,
5824,4288,2752,1216,5832,4296,2760,1224,5840,4304,2768,1232,5848,4312,2776,1240,
5856,4320,2784,1248,5864,4328,2792,1256,5872,4336,2800,1264,5880,4344,2808,1272,
5888,4352,2816,1280,5896,4360,2824,1288,5904,4368,2832,1296,5912,4376,2840,1304,
5920,4384,2848,1312,5928,4392,2856,1320,5936,4400,2864,1328,5944,4408,2872,1336,
5952,4416,2880,1344,5960,4424,2888,1352,5968,4432,2896,1360,5976,4440,2904,1368,
5984,4448,2912,1376,5992,4456,2920,1384,6000,4464,2928,1392,6008,4472,2936,1400,
6016,4480,2944,1408,6024,4488,2952,1416,6032,4496,2960,1424,6040,4504,2968,1432,
6048,4512,2976,1440,6056,4520,2984,1448,6064,4528,2992,1456,6072,4536,3000,1464,
6080,4544,3008,1472,6088,4552,3016,1480,6096,4560,3024,1488,6104,4568,3032,1496,
6112,4576,3040,1504,6120,4584,3048,1512,6128,4592,3056,1520,6136,4600,3064,1528}

};