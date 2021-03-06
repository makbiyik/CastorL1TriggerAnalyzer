using namespace std;

class DatabaseRecordValues
{
private:
  double RecordVal[16][14];
  inline void InitDatabaseRecordValues();
public:
  DatabaseRecordValues() { InitDatabaseRecordValues(); }
  inline double getVal(const int iMod, const int iSec) { return RecordVal[iSec][iMod]; }
};

inline void DatabaseRecordValues::InitDatabaseRecordValues()
{
  //       [Sec][Mod]
  RecordVal[1-1][1-1] = 0.1368;
  RecordVal[1-1][2-1] = 0.1556;
  RecordVal[1-1][3-1] = 0.1270;
  RecordVal[1-1][4-1] = 0.1353;
  RecordVal[1-1][5-1] = 0.1339;
  RecordVal[1-1][6-1] = 0.1483;
  RecordVal[1-1][7-1] = 0.1595;
  RecordVal[1-1][8-1] = 0.1125;
  RecordVal[1-1][9-1] = 0.1363;
  RecordVal[1-1][10-1] = 0.1028;
  RecordVal[1-1][11-1] = 0.1244;
  RecordVal[1-1][12-1] = 0.1249;
  RecordVal[1-1][13-1] = 0.1309;
  RecordVal[1-1][14-1] = 0.1484;
  RecordVal[2-1][1-1] = 0.1376;
  RecordVal[2-1][2-1] = 0.1354;
  RecordVal[2-1][3-1] = 0.1329;
  RecordVal[2-1][4-1] = 0.1360;
  RecordVal[2-1][5-1] = 0.1302;
  RecordVal[2-1][6-1] = 0.1595;
  RecordVal[2-1][7-1] = 0.1595;
  RecordVal[2-1][8-1] = 0.1125;
  RecordVal[2-1][9-1] = 0.1156;
  RecordVal[2-1][10-1] = 0.1028;
  RecordVal[2-1][11-1] = 0.1244;
  RecordVal[2-1][12-1] = 0.1150;
  RecordVal[2-1][13-1] = 0.1309;
  RecordVal[2-1][14-1] = 0.1484;
  RecordVal[3-1][1-1] = 0.1324;
  RecordVal[3-1][2-1] = 0.1314;
  RecordVal[3-1][3-1] = 0.1587;
  RecordVal[3-1][4-1] = 0.1403;
  RecordVal[3-1][5-1] = 0.1067;
  RecordVal[3-1][6-1] = 0.1837;
  RecordVal[3-1][7-1] = 0.1595;
  RecordVal[3-1][8-1] = 0.1125;
  RecordVal[3-1][9-1] = 0.1125;
  RecordVal[3-1][10-1] = 0.1028;
  RecordVal[3-1][11-1] = 0.1244;
  RecordVal[3-1][12-1] = 0.1150;
  RecordVal[3-1][13-1] = 0.1309;
  RecordVal[3-1][14-1] = 0.1484;
  RecordVal[4-1][1-1] = 0.1191;
  RecordVal[4-1][2-1] = 0.1118;
  RecordVal[4-1][3-1] = 0.1192;
  RecordVal[4-1][4-1] = 0.1375;
  RecordVal[4-1][5-1] = 0.1428;
  RecordVal[4-1][6-1] = 0.1757;
  RecordVal[4-1][7-1] = 0.1595;
  RecordVal[4-1][8-1] = 0.1125;
  RecordVal[4-1][9-1] = 0.1125;
  RecordVal[4-1][10-1] = 0.1028;
  RecordVal[4-1][11-1] = 0.1244;
  RecordVal[4-1][12-1] = 0.1150;
  RecordVal[4-1][13-1] = 0.1309;
  RecordVal[4-1][14-1] = 0.1484;
  RecordVal[5-1][1-1] = 0.1326;
  RecordVal[5-1][2-1] = 0.1366;
  RecordVal[5-1][3-1] = 0.1139;
  RecordVal[5-1][4-1] = 0.1295;
  RecordVal[5-1][5-1] = 0.1169;
  RecordVal[5-1][6-1] = 0.1595;
  RecordVal[5-1][7-1] = 0.1595;
  RecordVal[5-1][8-1] = 0.1125;
  RecordVal[5-1][9-1] = 0.1125;
  RecordVal[5-1][10-1] = 0.1028;
  RecordVal[5-1][11-1] = 0.1244;
  RecordVal[5-1][12-1] = 0.1150;
  RecordVal[5-1][13-1] = 0.1309;
  RecordVal[5-1][14-1] = 0.1484;
  RecordVal[6-1][1-1] = 0.1326;
  RecordVal[6-1][2-1] = 0.1306;
  RecordVal[6-1][3-1] = 0.1152;
  RecordVal[6-1][4-1] = 0.1106;
  RecordVal[6-1][5-1] = 0.1057;
  RecordVal[6-1][6-1] = 0.1595;
  RecordVal[6-1][7-1] = 0.1595;
  RecordVal[6-1][8-1] = 0.1125;
  RecordVal[6-1][9-1] = 0.1125;
  RecordVal[6-1][10-1] = 0.1028;
  RecordVal[6-1][11-1] = 0.1244;
  RecordVal[6-1][12-1] = 0.1150;
  RecordVal[6-1][13-1] = 0.1309;
  RecordVal[6-1][14-1] = 0.1484;
  RecordVal[7-1][1-1] = 0.1529;
  RecordVal[7-1][2-1] = 0.1321;
  RecordVal[7-1][3-1] = 0.1285;
  RecordVal[7-1][4-1] = 0.1326;
  RecordVal[7-1][5-1] = 0.1329;
  RecordVal[7-1][6-1] = 0.1595;
  RecordVal[7-1][7-1] = 0.1595;
  RecordVal[7-1][8-1] = 0.1125;
  RecordVal[7-1][9-1] = 0.1125;
  RecordVal[7-1][10-1] = 0.1028;
  RecordVal[7-1][11-1] = 0.1244;
  RecordVal[7-1][12-1] = 0.1150;
  RecordVal[7-1][13-1] = 0.1309;
  RecordVal[7-1][14-1] = 0.1484;
  RecordVal[8-1][1-1] = 0.1298;
  RecordVal[8-1][2-1] = 0.1133;
  RecordVal[8-1][3-1] = 0.1230;
  RecordVal[8-1][4-1] = 0.1299;
  RecordVal[8-1][5-1] = 0.1169;
  RecordVal[8-1][6-1] = 0.1595;
  RecordVal[8-1][7-1] = 0.1595;
  RecordVal[8-1][8-1] = 0.1125;
  RecordVal[8-1][9-1] = 0.1125;
  RecordVal[8-1][10-1] = 0.1028;
  RecordVal[8-1][11-1] = 0.1244;
  RecordVal[8-1][12-1] = 0.1150;
  RecordVal[8-1][13-1] = 0.1309;
  RecordVal[8-1][14-1] = 0.1596; 
  RecordVal[9-1][1-1] = 0.0774;
  RecordVal[9-1][2-1] = 0.0690;
  RecordVal[9-1][3-1] = 0.1019;
  RecordVal[9-1][4-1] = 0.1036;
  RecordVal[9-1][5-1] = 0.1152;
  RecordVal[9-1][6-1] = 0.1595;
  RecordVal[9-1][7-1] = 0.1595;
  RecordVal[9-1][8-1] = 0.1125;
  RecordVal[9-1][9-1] = 0.0995;
  RecordVal[9-1][10-1] = 0.1003;
  RecordVal[9-1][11-1] = 0.1297;
  RecordVal[9-1][12-1] = 0.1185;
  RecordVal[9-1][13-1] = 0.1414;
  RecordVal[9-1][14-1] = 0.1484;
  RecordVal[10-1][1-1] = 0.1928;
  RecordVal[10-1][2-1] = 0.0652;
  RecordVal[10-1][3-1] = 0.0991;
  RecordVal[10-1][4-1] = 0.1077;
  RecordVal[10-1][5-1] = 0.1207;
  RecordVal[10-1][6-1] = 0.1595;
  RecordVal[10-1][7-1] = 0.1595;
  RecordVal[10-1][8-1] = 0.1125;
  RecordVal[10-1][9-1] = 0.1125;
  RecordVal[10-1][10-1] = 0.1028;
  RecordVal[10-1][11-1] = 0.1268;
  RecordVal[10-1][12-1] = 0.1156;
  RecordVal[10-1][13-1] = 0.1309;
  RecordVal[10-1][14-1] = 0.1852;
  RecordVal[11-1][1-1] = 0.1259;
  RecordVal[11-1][2-1] = 0.1100;
  RecordVal[11-1][3-1] = 0.1133;
  RecordVal[11-1][4-1] = 0.1106;
  RecordVal[11-1][5-1] = 0.1161;
  RecordVal[11-1][6-1] = 0.1595;
  RecordVal[11-1][7-1] = 0.1595;
  RecordVal[11-1][8-1] = 0.1125;
  RecordVal[11-1][9-1] = 0.1125;
  RecordVal[11-1][10-1] = 0.1018;
  RecordVal[11-1][11-1] = 0.1191;
  RecordVal[11-1][12-1] = 0.1107;
  RecordVal[11-1][13-1] = 0.1256;
  RecordVal[11-1][14-1] = 0.1468;
  RecordVal[12-1][1-1] = 0.1246;
  RecordVal[12-1][2-1] = 0.0948;
  RecordVal[12-1][3-1] = 0.1076;
  RecordVal[12-1][4-1] = 0.1110;
  RecordVal[12-1][5-1] = 0.1136;
  RecordVal[12-1][6-1] = 0.1595;
  RecordVal[12-1][7-1] = 0.1595;
  RecordVal[12-1][8-1] = 0.1125;
  RecordVal[12-1][9-1] = 0.1101;
  RecordVal[12-1][10-1] = 0.0995;
  RecordVal[12-1][11-1] = 0.1244;
  RecordVal[12-1][12-1] = 0.1150;
  RecordVal[12-1][13-1] = 0.1257;
  RecordVal[12-1][14-1] = 0.1246;
  RecordVal[13-1][1-1] = 0.1211;
  RecordVal[13-1][2-1] = 0.0983;
  RecordVal[13-1][3-1] = 0.1014;
  RecordVal[13-1][4-1] = 0.1030;
  RecordVal[13-1][5-1] = 0.1025;
  RecordVal[13-1][6-1] = 0.1595;
  RecordVal[13-1][7-1] = 0.1595;
  RecordVal[13-1][8-1] = 0.1125;
  RecordVal[13-1][9-1] = 0.1125;
  RecordVal[13-1][10-1] = 0.1028;
  RecordVal[13-1][11-1] = 0.1244;
  RecordVal[13-1][12-1] = 0.1101;
  RecordVal[13-1][13-1] = 0.1309;
  RecordVal[13-1][14-1] = 0.1414;
  RecordVal[14-1][1-1] = 0.1306;
  RecordVal[14-1][2-1] = 0.0928;
  RecordVal[14-1][3-1] = 0.1046;
  RecordVal[14-1][4-1] = 0.1025;
  RecordVal[14-1][5-1] = 0.1023;
  RecordVal[14-1][6-1] = 0.1595;
  RecordVal[14-1][7-1] = 0.1595;
  RecordVal[14-1][8-1] = 0.1125;
  RecordVal[14-1][9-1] = 0.1125;
  RecordVal[14-1][10-1] = 0.1172;
  RecordVal[14-1][11-1] = 0.1244;
  RecordVal[14-1][12-1] = 0.1102;
  RecordVal[14-1][13-1] = 0.1309;
  RecordVal[14-1][14-1] = 0.1330;
  RecordVal[15-1][1-1] = 0.1439;
  RecordVal[15-1][2-1] = 0.1102;
  RecordVal[15-1][3-1] = 0.1178;
  RecordVal[15-1][4-1] = 0.0961;
  RecordVal[15-1][5-1] = 0.1063;
  RecordVal[15-1][6-1] = 0.1304;
  RecordVal[15-1][7-1] = 0.1595;
  RecordVal[15-1][8-1] = 0.1125;
  RecordVal[15-1][9-1] = 0.1125;
  RecordVal[15-1][10-1] = 0.0951;
  RecordVal[15-1][11-1] = 0.1244;
  RecordVal[15-1][12-1] = 0.1150;
  RecordVal[15-1][13-1] = 0.1309;
  RecordVal[15-1][14-1] = 0.1484;
  RecordVal[16-1][1-1] = 0.1318;
  RecordVal[16-1][2-1] = 0.1127;
  RecordVal[16-1][3-1] = 0.1162;
  RecordVal[16-1][4-1] = 0.1057;
  RecordVal[16-1][5-1] = 0.1083;
  RecordVal[16-1][6-1] = 0.1595;
  RecordVal[16-1][7-1] = 0.1595;
  RecordVal[16-1][8-1] = 0.1125;
  RecordVal[16-1][9-1] = 0.1008;
  RecordVal[16-1][10-1] = 0.1028;
  RecordVal[16-1][11-1] = 0.1218;
  RecordVal[16-1][12-1] = 0.1150;
  RecordVal[16-1][13-1] = 0.1309;
  RecordVal[16-1][14-1] = 0.1484;
}
