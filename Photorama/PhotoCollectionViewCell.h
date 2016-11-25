//
//  PhotoCollectionViewCell.h
//  Photorama
//
//  Created by Ye Tian on 27/10/2016.
//  Copyright © 2016 Ye Tian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PhotoCollectionViewCell : UICollectionViewCell

@property (nonatomic) IBOutlet UIImageView *imageView;
@property (nonatomic) IBOutlet UIActivityIndicatorView *spinner;

-(void) updateWithImage: (UIImage *) image;

@end
