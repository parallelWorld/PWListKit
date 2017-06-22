//
//  PWTableRow.m
//  PWListKitDemo
//
//  Created by Huang Wei on 2017/3/20.
//  Copyright © 2017年 Parallel World. All rights reserved.
//

#import "PWTableRow.h"
#import "PWListNodeInternal.h"
#import <objc/runtime.h>


@implementation PWTableRow

- (void)setCellClass:(Class<PWTableCellConfigureProtocol>)cellClass {
    _cellClass = cellClass;
    NSAssert(class_conformsToProtocol(cellClass, @protocol(PWTableCellConfigureProtocol)),
             @"Cell class 需满足`PWTableCellConfigureProtocol`协议");
}

- (NSString *)reuseIdentifier {
    NSAssert(self.cellClass, @"cellClass不能为空");
    return NSStringFromClass(self.cellClass);
}

- (NSIndexPath *)indexPath {
    if (!self.parent) return nil;
    return [NSIndexPath indexPathForRow:self.index inSection:self.parent.index];
}

#pragma mark - IGListDiffable

- (id<NSObject>)diffIdentifier {
    return self;
}

- (BOOL)isEqualToDiffableObject:(PWTableRow *)object {
    return [self.data isEqual:object.data];
}

#pragma mark - Life

- (id)copyWithZone:(NSZone *)zone {
    PWTableRow *copy = [[PWTableRow allocWithZone:zone] init];
    if (copy != nil) {
        copy.innerChildren = [self.innerChildren mutableCopy];
    }
    return copy;
}

@end
