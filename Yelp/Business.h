//
//  Business.h
//  Yelp
//
//  Created by Jackal Wang on 2015/6/25.
//  Copyright (c) 2015年 codepath. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Business : NSObject

@property (nonatomic, strong) NSString *imageUrl;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *ratingImageUrl;
@property (nonatomic, assign) NSInteger numReviews;
@property (nonatomic, strong) NSString *address;
@property (nonatomic, strong) NSString *categories;
@property (nonatomic, assign) CGFloat distance;

+ (NSArray *) businessesWithDictionaries:(NSArray *)dictionaries;

@end
