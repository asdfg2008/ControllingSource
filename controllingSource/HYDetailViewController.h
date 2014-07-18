//
//  HYDetailViewController.h
//  controllingSource
//
//  Created by crg on 14-7-18.
//  Copyright (c) 2014年 crg. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HYDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
