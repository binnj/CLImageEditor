//
//  _CLImageEditorViewController.h
//
//  Created by sho yakushiji on 2013/11/05.
//  Copyright (c) 2013年 CALACULU. All rights reserved.
//

#import "../CLImageEditor.h"

@interface _CLImageEditorViewController : CLImageEditor
<UIScrollViewDelegate, UIBarPositioningDelegate>
{
    IBOutlet __weak UINavigationBar *_navigationBar;
    IBOutlet __weak UIScrollView *_scrollView;
}
@property (nonatomic, strong) UIImageView  *imageView;
@property (nonatomic, weak) IBOutlet UIScrollView *menuView;
@property (nonatomic, readonly) UIScrollView *scrollView;

- (IBAction)pushedCloseBtn:(id)sender;
- (IBAction)pushedFinishBtn:(id)sender;


- (id)initWithImage:(UIImage*)image;


- (void)fixZoomScaleWithAnimated:(BOOL)animated;
- (void)resetZoomScaleWithAnimated:(BOOL)animated;

/**
 *  Installs constraints on the parent and child, and returns the constraints if you need to remove them later
 */
+(NSArray <NSLayoutConstraint *>*)setConstraintsLeading:(NSNumber *)leading
                                               trailing:(NSNumber *)trailing
                                                    top:(NSNumber *)top
                                                 bottom:(NSNumber *)bottom
                                                 height:(NSNumber *)height
                                                 parent:(UIView *)parent
                                                  child:(UIView *)child;
@end
