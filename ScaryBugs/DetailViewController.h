//
//  DetailViewController.h
//  ScaryBugs
//
//  Created by Evangelos Giataganas on 23/03/2016.
//  Copyright © 2016 Mydrive Solutions. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

