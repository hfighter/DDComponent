//
//  DDTableViewRootComponent.h
//  DDTableViewComponent
//
//  Created by daniel on 2018/11/16.
//  Copyright © 2018 daniel. All rights reserved.
//

#import "DDTableViewSectionGroupComponent.h"

NS_ASSUME_NONNULL_BEGIN

@interface DDTableViewRootComponent : DDTableViewSectionGroupComponent

@property (nonatomic, strong, readonly) UITableView *tableView;
@property (nonatomic, weak) id<UIScrollViewDelegate> scrollViewDelegate;
@property (nonatomic, assign, getter=isEstimatedHeightEnabled) BOOL estimatedHeightEnabled;

- (instancetype)init;
- (instancetype)initWithTableView:(UITableView *)tableView;

- (void)reloadData;

@end

NS_ASSUME_NONNULL_END
