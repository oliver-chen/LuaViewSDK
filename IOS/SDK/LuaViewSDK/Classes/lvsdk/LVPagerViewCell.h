//
//  LVPageViewCell.h
//  LuaViewSDK
//
//  Created by dongxicheng on 9/21/15.
//  Copyright © 2015 dongxicheng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LuaViewCore.h"

@interface LVPagerViewCell : UIView

@property (nonatomic, assign) NSInteger index;
@property (nonatomic, assign) BOOL isInited;

-(void) pushTableToStack;

-(void) doInitWithLView:(LuaViewCore*) lview;
    
-(UIView*) contentView;
    
@end