//
//  PWTableRow.h
//  PWListKitDemo
//
//  Created by Huang Wei on 2017/3/20.
//  Copyright © 2017年 Parallel World. All rights reserved.
//

#import "PWListNode.h"
#import "PWListMacros.h"
#import "IGListDiffKit.h"
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class PWTableRow;

/// Table cell配置协议
@protocol PWTableCellConfigureProtocol <NSObject>

@required
- (void)updateWithRow:(PWTableRow *)row;

@end

/// cell的位置
typedef NS_ENUM(NSUInteger, PWTableRowPosition) {
    PWTableRowPositionDefault,
    PWTableRowPositionTop,
    PWTableRowPositionMiddle,
    PWTableRowPositionBottom,
    PWTableRowPositionSingle,
};

PWLK_SUBCLASSING_RESTRICTED
@interface PWTableRow : PWListNode <IGListDiffable>

- (instancetype)initWithCellClass:(Class)cellClass NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;


/// row关联的cell class
@property (nonatomic) Class<PWTableCellConfigureProtocol> cellClass;

/// cell在section中的位置
@property (nonatomic) PWTableRowPosition position;

/// 如果height<=0，则使用autolayout计算高度，否则直接使用height。默认是0。
@property (nonatomic) CGFloat height;

@property (nonatomic, readonly) NSString *reuseIdentifier;

@property (nonatomic, readonly) NSIndexPath *indexPath;

@end

NS_ASSUME_NONNULL_END
