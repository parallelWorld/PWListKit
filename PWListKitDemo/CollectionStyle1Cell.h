//
//  CollectionStyle1Cell.h
//  Demo
//
//  Created by Huang Wei on 2017/2/28.
//  Copyright © 2017年 Parallel World. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PWListKit.h"


@interface CollectionStyle1Cell : UICollectionViewCell <PWCollectionCellConfigurationProtocol>

@property (nonatomic) UILabel *titleLabel;

@end