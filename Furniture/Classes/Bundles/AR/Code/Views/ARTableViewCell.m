//
//  ARTableViewCell.m
//  Unity-iPhone
//
//  Created by 王小娜 on 2017/2/21.
//
//

#import "ARTableViewCell.h"

@implementation ARTableViewCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
    self.progressView.trackTintColor = [UIColor whiteColor];
    self.progressView.progressTintColor = COLOR_MAIN;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
