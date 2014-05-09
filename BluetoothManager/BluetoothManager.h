#import "BluetoothDevice.h"

struct BTLocalDeviceImpl { };
struct BTSessionImpl { };
struct BTDiscoveryAgentImpl { };
struct BTPairingAgentImpl { };
struct BTAccessoryManagerImpl { };

@interface BluetoothManager : NSObject  {
    BTLocalDeviceImpl *_localDevice;
    BTSessionImpl *_session;
    int _available;
    BOOL _audioConnected;
    BOOL _scanningEnabled;
    BOOL _scanningInProgress;
    unsigned int _scanningServiceMask;
    BTDiscoveryAgentImpl *_discoveryAgent;
    BTPairingAgentImpl *_pairingAgent;
    BTAccessoryManagerImpl *_accessoryManager;
    NSMutableDictionary *_btAddrDict;
    NSMutableDictionary *_btDeviceDict;
}

+ (int)lastInitError;
+ (BluetoothManager *)sharedInstance;

- (void)scanForConnectableDevices:(unsigned int)arg1;
- (BOOL)isServiceSupported:(unsigned int)arg1;
- (id)pairedDevices;
- (void)showPowerPrompt;
- (void)resetDeviceScanning;
- (void)enableTestMode;
- (BOOL)audioConnected;
- (id)connectedDevices;
- (id)connectingDevices;
- (void)setConnectable:(BOOL)arg1;
- (BOOL)connectable;
- (void)setDiscoverable:(BOOL)arg1;
- (BOOL)isDiscoverable;
- (BOOL)deviceScanningInProgress;
- (BOOL)deviceScanningEnabled;
- (BOOL)wasDeviceDiscovered:(id)arg1;
- (BOOL)isAnyoneAdvertising;
- (BOOL)isAnyoneScanning;
- (void)setAudioConnected:(BOOL)arg1;
- (void)_advertisingChanged;
- (void)_discoveryStateChanged;
- (void)_connectabilityChanged;
- (void)_connectedStatusChanged;
- (void)_powerChanged;
- (BOOL)_onlySensorsConnected;
- (void)postNotificationName:(id)arg1 object:(id)arg2 error:(id)arg3;
- (void)cancelPairing;
- (BOOL)devicePairingEnabled;
- (void)setDevicePairingEnabled:(BOOL)arg1;
- (void)_removeDevice:(id)arg1;
- (id)addDeviceIfNeeded:(BTDeviceImpl *)arg1;
- (void)_restartScan;
- (void)_setScanState:(int)arg1;
- (void)scanForServices:(unsigned int)arg1;
- (void)_scanForServices:(unsigned int)arg1 withMode:(int)arg2;
- (BOOL)setPowered:(BOOL)arg1;
- (void)setDeviceScanningEnabled:(BOOL)arg1;
- (BOOL)powered;
- (int)powerState;
- (void)_postNotificationWithArray:(id)arg1;
- (void)_postNotification:(id)arg1;
- (void)_cleanup:(BOOL)arg1;
- (BOOL)_setup:(BTSessionImpl *)arg1;
- (BOOL)_attach:(id)arg1;
- (BOOL)connected;
- (void)endVoiceCommand:(id)arg1;
- (void)startVoiceCommand:(id)arg1;
- (void)unpairDevice:(BluetoothDevice *)arg1;
- (void)acceptSSP:(int)arg1 forDevice:(id)arg2;
- (void)setPincode:(id)arg1 forDevice:(id)arg2;
- (void)connectDevice:(BluetoothDevice *)arg1 withServices:(unsigned int)arg2;
- (void)connectDevice:(BluetoothDevice *)arg1;
- (BTAccessoryManagerImpl *)_accessoryManager;
- (BOOL)available;
- (BOOL)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (id)init;
- (void)dealloc;
- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (void)postNotification:(id)arg1;

@end