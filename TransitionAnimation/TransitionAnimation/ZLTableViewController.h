//
//  ZLTableViewController.h
//  TransitionAnimation
//
//  Created by FaceBook on 2018/11/1.
//  Copyright © 2018年 FaceBook. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZLTableViewController : UIViewController

@property(nonatomic,strong)UICollectionView *collectionView;
@property(nonatomic,strong)NSIndexPath *currentIndexPath;

@end

NS_ASSUME_NONNULL_END
