//
//  XJUser.h
//  XJNewPostDemo
//
//  Created by 江鑫 on 2018/2/27.
//  Copyright © 2018年 XJ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XJUser : NSObject

@property (nonatomic, copy) NSString *userId;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, copy) NSString *picURL;

@property (nonatomic, assign) BOOL isSelected;

@end
