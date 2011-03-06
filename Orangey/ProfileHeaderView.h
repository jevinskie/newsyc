//
//  ProfileHeaderView.h
//  Orangey
//
//  Created by Grant Paul on 3/5/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

@class HNUser;
@interface ProfileHeaderView : UIView {
    HNUser *user;
    UILabel *titleLabel;
    UILabel *subtitleLabel;
}

@property (nonatomic, retain) HNUser *user;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;

@end
