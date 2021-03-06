//
//  User.h
//  twitter
//
//  Created by Riley Schnee on 7/2/18.
//  Copyright © 2018 Emerson Malca. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface User : NSObject

@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *screenName;
@property (strong, nonatomic) NSString *profilePicURLString;
@property (strong, nonatomic) NSURL *profilePicURL;
@property (strong, nonatomic) NSURL *headerPicURL;
@property (strong, nonatomic) NSString *bio;
@property (strong, nonatomic) NSString *idStr;
@property (nonatomic) int followers;
@property (nonatomic) int following;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end
