//
//  FilterViewController.h
//  Yelp
//
//  Created by Jackal Wang on 2015/6/25.
//  Copyright (c) 2015年 codepath. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FilterViewController;

@protocol FiltersViewControllerDelegate <NSObject>

- (void)filtersViewController:(FilterViewController *) filtersViewController didChangeFilters:(NSDictionary *)filters;

@end

@interface FilterViewController : UIViewController

@property(nonatomic, weak) id<FiltersViewControllerDelegate> delegate;

@end

