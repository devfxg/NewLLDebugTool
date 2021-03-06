//
//  UITextViewActions.h
//  LLDebugToolDemo
//
//  Created by haleli on 2019/6/28.
//  Copyright © 2019 li. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KIF.h"

NS_ASSUME_NONNULL_BEGIN

@interface UITextViewActions : NSObject
+(void)clearTextFromAndThenEnterTextWithAccessibilityIdentifier:(NSString *)identifier;
@end

NS_ASSUME_NONNULL_END
