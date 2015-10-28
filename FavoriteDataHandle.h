//
//  FavoriteDataHandle.h
//  Douban
//
//  Created by y_小易 on 14-8-31.
//  Copyright (c) 2014年 lanou3g.com 蓝鸥科技. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Activity;

@interface FavoriteDataHandle : NSObject

+ (FavoriteDataHandle *)shareInstance;

#pragma mark ------Activity活动 数据源-------
//从数据库读取“活动”的数据源
- (void)setupActivityDataSource;
//获取活动的个数
- (NSInteger)countOfActivity;
//获取某个活动对象
- (Activity *)activityForRow:(NSInteger)row;
//删除某个活动对象
- (void)deleteActivityForRow:(NSInteger)row;



@end
