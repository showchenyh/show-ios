//
//  SLPrivateChatViewController+Gesture.h
//  ShowLive
//
//  Created by Mac on 2018/4/11.
//  Copyright © 2018年 VNing. All rights reserved.
//

#import "SLPrivateChatViewController.h"
@interface SLPrivateChatViewController()
@property (nonatomic, strong)NSIndexPath *curMenuIndex;
@end

@interface SLPrivateChatViewController (Gesture)
- (void)setupGestures;
- (void)setupMenuItems;

@end