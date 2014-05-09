struct BTDeviceImpl { };
struct SyncSettingsStruct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; };

@interface BluetoothDevice : NSObject  {
    NSString *_name;
    NSString *_address;
    BTDeviceImpl *_device;
}


- (BOOL)isServiceSupported:(unsigned int)arg1;
- (void)setSyncGroup:(int)arg1 enabled:(BOOL)arg2;
- (id)syncGroups;
- (void)setSyncSettings:(SyncSettingsStruct)arg1;
- (SyncSettingsStruct)syncSettings;
- (void)endVoiceCommand;
- (void)startVoiceCommand;
- (void)unpair;
- (void)acceptSSP:(int)arg1;
- (void)setPIN:(id)arg1;
- (void)connectWithServices:(unsigned int)arg1;
- (void)setServiceSetting:(unsigned int)arg1 key:(id)arg2 value:(id)arg3;
- (id)getServiceSetting:(unsigned int)arg1 key:(id)arg2;
- (BOOL)supportsBatteryLevel;
- (unsigned int)connectedServicesCount;
- (unsigned int)connectedServices;
- (BOOL)connected;
- (BOOL)paired;
- (id)scoUID;
- (unsigned int)minorClass;
- (unsigned int)majorClass;
- (BOOL)_isNameCached;
- (void)_clearName;
- (id)initWithDevice:(BTDeviceImpl *)arg1 address:(id)arg2;
- (BOOL)isAccessory;
- (void)setDevice:(BTDeviceImpl *)arg1;
- (void)disconnect;
- (void)connect;
- (int)compare:(id)arg1;
- (NSString *)name;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(_NSZone *)arg1;
- (BTDeviceImpl *)device;
- (int)batteryLevel;
- (int)type;
- (NSString *)address;

@end