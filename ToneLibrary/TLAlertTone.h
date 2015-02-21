#import <Foundation/Foundation.h>

@class TLSound;

@interface TLAlertTone : NSObject  {
    NSString *_filePath;
    TLSound *_actualSound;
    TLSound *_previewSound;
}

@property(copy) NSString * filePath;
@property(retain) TLSound * actualSound;
@property(retain) TLSound * previewSound;

- (void)_setPreviewSound:(id)arg1;
- (void)_setActualSound:(id)arg1;
- (void)_setFilePath:(id)arg1;
- (id)previewSound;
- (id)actualSound;
- (id)initWithFilePath:(id)arg1 actualSoundID:(unsigned int)arg2 previewSoundID:(unsigned int)arg3;
- (id)filePath;
- (void)dealloc;

@end