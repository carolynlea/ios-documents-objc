//
//  NSString+WordCount.h
//  Documents
//
//  Created by Carolyn Lea on 10/3/18.
//  Copyright © 2018 Carolyn Lea. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (WordCount)

-(NSUInteger)wordCount:(NSString *)string;

@end

NS_ASSUME_NONNULL_END
