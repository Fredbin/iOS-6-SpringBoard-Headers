/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "NSObject.h"


@protocol VSSpeechSynthesizerDelegate <NSObject>
@optional
-(void)speechSynthesizer:(id)synthesizer willSpeakRangeOfSpeechString:(NSRange)speechString;
-(void)speechSynthesizerDidContinueSpeaking:(id)speechSynthesizer;
-(void)speechSynthesizerDidPauseSpeaking:(id)speechSynthesizer;
-(void)speechSynthesizer:(id)synthesizer didFinishSpeaking:(BOOL)speaking phonemesSpoken:(id)spoken withError:(id)error;
-(void)speechSynthesizer:(id)synthesizer didFinishSpeaking:(BOOL)speaking withError:(id)error;
-(void)speechSynthesizerDidStartSpeaking:(id)speechSynthesizer;
@end

