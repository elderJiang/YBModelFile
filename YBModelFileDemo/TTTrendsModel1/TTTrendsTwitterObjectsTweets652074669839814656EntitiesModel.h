//
//  TTTrendsTwitterObjectsTweets652074669839814656EntitiesModel.h
//  YBModelFileDemo
//
//  Created by indulgeIn on 2019/03/21.
//  Copyright © 2019 indulgeIn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TTTrendsTwitterObjectsTweets652074669839814656EntitiesUrlsEleModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface TTTrendsTwitterObjectsTweets652074669839814656EntitiesModel : NSObject <NSCopying, NSCoding>

@property (nonatomic, copy) NSArray *symbols;

@property (nonatomic, copy) NSArray *user_mentions;

@property (nonatomic, copy) NSArray<TTTrendsTwitterObjectsTweets652074669839814656EntitiesUrlsEleModel *> *urls;

@property (nonatomic, copy) NSArray *hashtags;

@end

NS_ASSUME_NONNULL_END