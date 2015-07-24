/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@class NSString;

@interface CTPhoneNumber : NSObject <NSCopying> {/*, CTMessageAddress> {*/
    NSString *_countryCode;
    NSString *_digits;
    BOOL _isShortCode;
}

@property(readonly) NSString * countryCode;
@property(readonly) NSString * digits;
@property(readwrite) BOOL isShortCode;

+ (bool)isValidPhoneNumber:(id)arg1;
+ (bool)isValidPhoneNumberChar:(unsigned short)arg1;
+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;

- (id)canonicalFormat;
- (id)copyWithZone:(id)arg1;
- (void)dealloc;
- (id)encodedString;
- (id)formatForCallingCountry:(id)arg1;
- (id)initWithDigits:(id)arg1 countryCode:(id)arg2;
- (int)numberOfDigitsForShortCodeNumber;

@end
