
#include <linux/mfd/pm8xxx/batterydata-lib.h>

static struct single_row_lut fcc_temp = {
	.x		= {-20, 0, 25, 40, 60},
	.y		= {2033, 2028, 2029, 2026, 2016},
	.cols		= 5
};

static struct single_row_lut fcc_sf = {
	.x		= {0},
	.y		= {100},
	.cols		= 1
};

static struct sf_lut rbatt_sf = {
	.rows		= 30,
	.cols			= 5,
	.row_entries	= {-20, 0, 25, 40, 60},
	.percent		= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1},
	.sf			= {
					{1173, 271, 100, 79, 71},
					{1169, 271, 100, 80, 71},
					{1086, 276, 102, 82, 73},
					{1015, 279, 105, 84, 74},
					{994, 279, 110, 87, 76},
					{935, 284, 116, 89, 78},
					{905, 253, 119, 92, 81},
					{907, 248, 128, 98, 84},
					{908, 249, 120, 100, 86},
					{921, 243, 102, 87, 79},
					{949, 243, 98, 80, 74},
					{985, 245, 98, 82, 75},
					{1026, 247, 101, 85, 78},
					{1071, 255, 104, 87, 82},
					{1122, 270, 107, 87, 79},
					{1180, 287, 108, 85, 74},
					{1241, 296, 107, 84, 75},
					{1270, 308, 103, 83, 75},
					{1175, 300, 97, 79, 71},
					{1233, 314, 98, 81, 74},
					{1266, 324, 101, 83, 76},
					{1300, 337, 103, 85, 78},
					{1340, 352, 107, 88, 79},
					{1382, 367, 112, 92, 83},
					{1440, 384, 117, 94, 84},
					{1537, 398, 117, 91, 80},
					{1762, 412, 111, 88, 78},
					{2238, 442, 114, 92, 83},
					{4283, 498, 129, 105, 97},
					{64005, 3011, 1720, 176, 214},
				  }
};

static struct pc_temp_ocv_lut pc_temp_ocv = {
	.rows		= 31,
	.cols			= 5,
	.temp		= {-20, 0, 25, 40, 60},
	.percent		= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
	.ocv			= {
					{4340, 4338, 4335, 4330, 4323},
					{4238, 4262, 4267, 4264, 4260},
					{4170, 4205, 4209, 4207, 4203},
					{4105, 4152, 4154, 4152, 4148},
					{4059, 4100, 4102, 4099, 4096},
					{3983, 4050, 4055, 4049, 4047},
					{3921, 3967, 3996, 3999, 4002},
					{3883, 3922, 3958, 3963, 3961},
					{3847, 3893, 3917, 3921, 3920},
					{3820, 3861, 3869, 3873, 3873},
					{3802, 3833, 3838, 3838, 3839},
					{3788, 3809, 3815, 3815, 3815},
					{3774, 3790, 3796, 3796, 3796},
					{3761, 3777, 3782, 3781, 3780},
					{3747, 3766, 3771, 3766, 3761},
					{3733, 3752, 3759, 3751, 3739},
					{3716, 3730, 3741, 3733, 3719},
					{3699, 3712, 3713, 3705, 3693},
					{3684, 3702, 3691, 3682, 3670},
					{3669, 3697, 3687, 3680, 3669},
					{3660, 3694, 3687, 3680, 3668},
					{3650, 3691, 3686, 3679, 3668},
					{3638, 3688, 3684, 3678, 3666},
					{3621, 3684, 3683, 3676, 3664},
					{3602, 3676, 3678, 3670, 3657},
					{3576, 3659, 3662, 3649, 3633},
					{3541, 3627, 3621, 3605, 3586},
					{3492, 3576, 3558, 3542, 3523},
					{3416, 3499, 3473, 3458, 3439},
					{3280, 3373, 3344, 3330, 3299},
					{3000, 3000, 3000, 3000, 3000}
				  }
};

struct bms_battery_data Huawei_HB5V1HV_SDI_data = {
	.fcc					= 1950,
	.fcc_temp_lut			= &fcc_temp,
	.fcc_sf_lut			= &fcc_sf,
	.pc_temp_ocv_lut		= &pc_temp_ocv,
	.rbatt_sf_lut			= &rbatt_sf,
	.default_rbatt_mohm	= 178
};
