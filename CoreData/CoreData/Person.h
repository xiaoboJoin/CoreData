//
//  Person.h
//  CoreData
//
//  Created by iXiaobo on 14-11-21.
//  Copyright (c) 2014年 iXiaobo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Person : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * age;

@end
