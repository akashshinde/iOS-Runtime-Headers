/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLUtilities : NSObject {
}

+ (int)MavRev;
+ (id)MavRevStringQuery;
+ (void)_deallocatePortArray:(unsigned int*)arg1 withCount:(unsigned int)arg2;
+ (id)allSubClassesForClass:(Class)arg1;
+ (bool)alsCurveHigherThanDefault;
+ (short)canLogMode:(id)arg1 fullMode:(bool)arg2;
+ (id)dateFromTimeval:(struct timeval { long long x1; int x2; })arg1;
+ (double)defaultBatteryEnergyCapacity;
+ (id)deviceBootTime;
+ (unsigned long long)dispatchTimeInSeconds:(double)arg1;
+ (id)displayTypeStringQuery;
+ (id)extractDateStringAndUUIDStringFromFilePath:(id)arg1;
+ (bool)gasGaugeEnabled;
+ (int)getDisplayTypeOfDevice;
+ (int)getProcessorRevOfDevice;
+ (int)getTorchTypeOfDevice;
+ (void)handleSQLResult:(int)arg1;
+ (bool)hasBaseband;
+ (id)hashString:(id)arg1;
+ (bool)internalBuild;
+ (bool)isICE;
+ (bool)isIPod;
+ (bool)isMav10;
+ (bool)isMav1;
+ (bool)isMav2;
+ (bool)isMav4;
+ (bool)isMav5;
+ (bool)isMav7;
+ (bool)isPingPongChargingWith:(bool)arg1 andBatteryLevelPercent:(double)arg2;
+ (bool)isValidString:(id)arg1;
+ (bool)isWiFiChipset4324;
+ (bool)isWiFiChipset43291;
+ (bool)isWiFiChipset4330;
+ (bool)isWiFiChipset43342;
+ (bool)isWiFiChipset4334;
+ (bool)isWiFiChipset4345;
+ (bool)isWiFiChipset4350;
+ (short)logModeForEntryKey:(id)arg1 withKey:(id)arg2 andValue:(id)arg3;
+ (id)modeForEntryKey:(id)arg1 withKeyName:(id)arg2;
+ (bool)nonUIBuild;
+ (unsigned long long)pidForName:(id)arg1;
+ (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
+ (id)processNameForPid:(int)arg1;
+ (bool)runningAsMobileUser;
+ (id)runningAsUser;
+ (double)scaledPowerBasedOnPoint:(double)arg1 withPowerModel:(id)arg2;
+ (double)secondsFromMachTime:(unsigned long long)arg1;
+ (void)setMobileOwnerForFile:(id)arg1;
+ (id)shortUUIDString;
+ (id)torchTypeStringQuery;
+ (id)workQueue;
+ (id)workQueueForClass:(Class)arg1;
+ (id)workQueueForKey:(id)arg1;

@end