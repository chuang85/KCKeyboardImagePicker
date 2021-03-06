//
//  DemoImagePickerOptions.h
//  KCKeyboardImagePicker
//
//  Created by Kevin Yufei Chen on 9/14/15.
//  Copyright (c) 2015 Kev1nChen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DemoImagePickerOptions : NSObject

@property (nonatomic, strong) UIColor *backgroundColor;

@property (nonatomic, assign) BOOL isImagePickerControllerButtonVisible;
@property (nonatomic, assign) CGFloat imagePickerControllerButtonAlpha;
@property (nonatomic, assign) CGFloat imagePickerControllerButtonSize;
@property (nonatomic, strong) UIColor *imagePickerControllerButtonColor;

@property (nonatomic, assign) NSInteger numberOfOptionButtons;
@property (nonatomic, assign) CGFloat optionButtonsAlpha;
@property (nonatomic, strong) NSArray *optionButtonTitles;
@property (nonatomic, strong) NSArray *optionButtonColors;
@property (nonatomic, strong) NSArray *optionButtonTitleColors;

@end

