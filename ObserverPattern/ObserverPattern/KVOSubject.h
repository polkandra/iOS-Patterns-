//
//  KVOSubject.h
//  ObserverPattern
//
//  Created by Dima Maleev on 2/17/13.
//  Copyright (c) 2013 mDev. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KVOSubject : NSObject

@property (nonatomic, strong) NSString *changeableProperty;

@end
