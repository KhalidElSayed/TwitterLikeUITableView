//
//  RootViewController.h
//  Test
//
//  Created by gimenete on 12/11/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController<UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate> {
	
	IBOutlet UITableView* _tableView;
	IBOutlet UILabel* loadLabel;
	IBOutlet UIActivityIndicatorView* loadIndicator;
	IBOutlet UISearchBar* searchBar;
	
}

- (void) hideHeaderView:(id)userInfo;
- (void)showSearchBar;

@end
