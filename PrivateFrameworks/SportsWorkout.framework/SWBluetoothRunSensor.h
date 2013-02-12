/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSMutableArray, NSMutableData, SWBluetoothMessageHandler, SWPacketUnscrambler;

@interface SWBluetoothRunSensor : SWRunSensor {
    NSMutableData *_bluetoothInputData;
    double _connectionTime;
    double _disconnectionTime;
    SWBluetoothMessageHandler *_messageHandler;
    unsigned int _packetCount;
    NSMutableArray *_packetRecord;
    SWPacketUnscrambler *_packetUnscrambler;
    unsigned int _remainingBatteryLifetimeInHours;
}

@property(readonly) unsigned int packetCount;
@property(readonly) double secondsConnected;

+ (void)__writePacketRecord:(id)arg1;

- (void)_connectToDeviceWithAddress:(struct { unsigned char x1[6]; })arg1;
- (struct { unsigned char x1[6]; })_deviceAddressForSerialNumber:(id)arg1;
- (void)_discoverDevice;
- (BOOL)_isValidPacketForPaceModel:(id)arg1 timestamp:(unsigned int)arg2;
- (void)_receivedActivationNotification:(id)arg1;
- (void)_receivedConnectionFailureNotification:(id)arg1;
- (void)_receivedConnectionNotification:(id)arg1;
- (void)_receivedDiscoveryNotification:(id)arg1;
- (void)_receivedInputReadNotification:(id)arg1;
- (void)_registerToReadInput;
- (unsigned int)_remainingBatteryLifetimeInHoursForPacket:(id)arg1 timestamp:(unsigned int)arg2;
- (id)_serialNumberForPacket:(id)arg1 timestamp:(unsigned int)arg2 radioId:(unsigned int*)arg3;
- (void)beginLinking;
- (void)beginSearching;
- (void)cancelLinking;
- (void)cancelSearching;
- (void)deactivate;
- (void)dealloc;
- (id)init;
- (unsigned int)packetCount;
- (unsigned int)remainingBatteryLifetimeInHours;
- (double)secondsConnected;
- (void)unlink;

@end