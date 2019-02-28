//
//  EntryViewController.h
//  resturentMenu
//
//  Created by digicon on 9/9/18.
//  Copyright © 2018 digicon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MenuListViewController.h"

@interface EntryViewController : UIViewController{
    NSMutableArray *menuArry;
}

    
    NSMutableDictionary * dic = [[NSMutableDictionary]]
}
@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UITextField *descTextField;
@property (weak, nonatomic) IBOutlet UITextField *imageTextField;
@property (weak, nonatomic) IBOutlet UIButton *ShowButtonAction;

@end
