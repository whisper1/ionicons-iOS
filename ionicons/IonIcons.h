//
//  IonIcons.h
//  ionicons-iOS is Copyright 2013 TapTemplate and released under the MIT license.
//  http://www.taptemplate.com
//  ==========================
//

#import <UIKit/UIKit.h>

#import "ionicons-codes.h"

@interface IonIcons : NSObject

//================================
// Font and Label Methods
//================================

/*  Convenience method to get the ionicons font.
 */
+ (UIFont*)fontWithSize:(CGFloat)size;

/*  Convenience method to make a sized-to-fit UILabel containing an icon in the given font size and color.
 */
+ (UILabel*)labelWithIcon:(NSString*)icon_name
                     size:(CGFloat)size
                    color:(UIColor*)color;


//================================
// Image Methods
//================================

/* Make the image and icon the same size:
 */
+ (UIImage*)imageWithIcon:(NSString*)icon_name
                     size:(CGFloat)size
                    color:(UIColor*)color;

/* The image and the icon inside it can be configured to different sizes:
 */
+ (UIImage*)imageWithIcon:(NSString*)icon_name
                     size:(CGFloat)size
                    color:(UIColor *)color
                imageSize:(CGSize)imageSize;

@end
